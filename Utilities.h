#ifndef HZZLOOPER_UTILITIES_H
#define HZZLOOPER_UTILITIES_H

#include "TMath.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TGraph.h"
#include "TCanvas.h"
#include "TFile.h"

#include <map>
#include <string>

namespace {

// Histogram manipulation
inline void moveOverFlowToLastBin1D(TH1* hist) {
  int nbin = hist->GetNbinsX();
  if (hist->GetBinLowEdge(nbin+1) < 1499.9) return;  // only when the last bin is the infinity bin
  if (hist->GetBinContent(nbin+1) > 0) {
    // cout << "Moving the overflow for hist: " << hist->GetTitle() << " to its last bin!" << endl;
    double err = 0;
    hist->SetBinContent(nbin, hist->IntegralAndError(nbin, -1, err));
    hist->SetBinError(nbin, err);
    hist->SetBinContent(nbin+1, 0);
    hist->SetBinError(nbin+1, 0);
  }
}

inline void moveXOverFlowToLastBin3D(TH3* hist) {
  int nbinx = hist->GetNbinsX();
  if (hist->GetXaxis()->GetBinLowEdge(nbinx+1) < 1499.9) return; // only when the last bin is infinity
  for (int ibiny = 0; ibiny < hist->GetNbinsY(); ++ibiny) {
    for (int ibinz = 0; ibinz < hist->GetNbinsZ(); ++ibinz) {
      if (hist->GetBinContent(nbinx+1, ibiny, ibinz) <= 0) continue;
      double err = 0;
      double yield = hist->IntegralAndError(nbinx, -1, ibiny, ibiny, ibinz, ibinz, err);
      hist->SetBinContent(nbinx, ibiny, ibinz, yield);
      hist->SetBinError(nbinx, ibiny, ibinz, err);
      hist->SetBinContent(nbinx+1, ibiny, ibinz, 0);
      hist->SetBinError(nbinx+1, ibiny, ibinz, 0);
    }
  }
}

inline void zeroOutNegativeYields(TH1* hist) {
  int nbin = hist->GetNbinsX();
  for (int ibin = 1; ibin <= nbin; ++ibin) {
    if (hist->GetBinContent(ibin) < 0) {
      if (string(hist->GetName()).find("h_metbins_") == string::npos)  // only print out for central hist
        cout << "Reverting negative yield " << hist->GetBinContent(ibin) << " in: " << hist->GetTitle() << " bin " << ibin << " to 0!" << endl;
      hist->SetBinContent(ibin, 0);
      // hist->SetBinError(ibin, 0); // should we set the error to 0 also?
    }
  }
}

inline void conditionalizeHist(TH2* h2d, bool invert = false) {
  int nbinsX = h2d->GetNbinsX();
  int nbinsY = h2d->GetNbinsY();
  for (int ybin = 1; ybin <= nbinsY; ++ybin) {
    double xint = h2d->Integral(1,nbinsX, ybin, ybin);
    for (int xbin = 1; xbin <= nbinsX; ++xbin) {
      double bcorg = h2d->GetBinContent(xbin,ybin);
      h2d->SetBinContent(xbin, ybin, bcorg / xint);
    }
  }
}

// Quick helper functions
inline float deltaPhi(float phi1, float phi2) {
  float dphi = fabs(phi1 - phi2);
  if (dphi > TMath::Pi()) dphi = TMath::TwoPi() - dphi;
  return dphi;
}

inline float min2deltaPhi(float phi0, float phi1, float phi2) {
  return std::min(deltaPhi(phi0, phi1), deltaPhi(phi0, phi2));
}

inline float calculateMT(double Et1, double phi1, double Et2, double phi2) {
  return sqrt(2*Et1*Et2*(1.0 - cos(phi1-phi2)));
}

inline bool isCloseObject(const float eta1, const float phi1, const float eta2, const float phi2, const float conesize = 0.4, float* deltaR = nullptr) {
  const float PI = TMath::Pi();
  float deltaEta = fabs(eta1 - eta2);
  if (deltaEta > conesize) return false;
  float deltaPhi = fabs(phi1 - phi2);
  if (deltaPhi > PI) deltaPhi = 2*PI - deltaPhi;
  if (deltaPhi > conesize) return false;
  float deltaR2 = deltaEta*deltaEta + deltaPhi*deltaPhi;
  if (deltaR2 > conesize*conesize) return false;
  if (deltaR) *deltaR = sqrt(deltaR2);

  return true;
}

// Old functions that enforce float for ranges to be consistent with xval for floating point errors
void plot1D(string name, float xval, double weight, std::map<string, TH1*> &allhistos, string title, int numbinsx, float xmin, float xmax)
{
  if (title=="") title=name;
  std::map<string, TH1*>::iterator iter= allhistos.find(name);
  if (iter == allhistos.end()) { //no histo for this yet, so make a new one
    TH1D* currentHisto= new TH1D(name.c_str(), title.c_str(), numbinsx, xmin, xmax);
    currentHisto->SetDirectory(0);
    currentHisto->Sumw2();
    currentHisto->Fill(xval, weight);
    allhistos.insert(std::pair<string, TH1*>(name, currentHisto) );
  } else {
    iter->second->Fill(xval, weight);
  }
}

void linkHist(string hnew, string hexist, std::map<std::string, TH1*> &allhistos)
{
  // Could be useful when mutiple ratio hists sharing a common denominator
  if (allhistos.count(hnew)) return;
  auto iter = allhistos.find(hexist);
  if (iter == allhistos.end()) throw std::logic_error("linkHist(): Histogram "+hexist+" need to be plotted first");
  allhistos.insert( std::pair<std::string, TH1*>(hnew, iter->second) );
}


// Templated function
template<class LorentzVectorType>
inline float calculateMt(const LorentzVectorType& l1p4, const LorentzVectorType& l2p4, double met, double met_phi){
  LorentzVectorType zp4 = l1p4 + l2p4;
  float phi1 = zp4.Phi();
  float phi2 = met_phi;
  float Et1  = zp4.Et();
  float Et2  = met;

  return sqrt(2*Et1*Et2*(1.0 - cos(phi1-phi2)));
}

template<class LorentzVectorType>
bool isCloseObject(const LorentzVectorType& p1, const LorentzVectorType& p2, const float conesize = 0.4, float* deltaR = nullptr)
{
  const float PI = TMath::Pi();
  float deltaEta = fabs(p1.Eta() - p2.Eta());
  if (deltaEta > conesize) return false;
  float deltaPhi = fabs(p1.Phi() - p2.Phi());
  if (deltaPhi > PI) deltaPhi = 2*PI - deltaPhi;
  if (deltaPhi > conesize) return false;
  float deltaR2 = deltaEta*deltaEta + deltaPhi*deltaPhi;
  if (deltaR2 > conesize*conesize) return false;
  if (deltaR) *deltaR = sqrt(deltaR2);

  return true;
}

template<typename... TArgs>
void plot1d(std::string name, double xval, double weight, std::map<std::string, TH1*> &allhistos, TArgs... args)
{
  auto iter = allhistos.find(name);
  if (iter == allhistos.end()) {
    TH1D* currentHisto= new TH1D(name.c_str(), args...);
    currentHisto->SetDirectory(0);
    currentHisto->Sumw2();
    currentHisto->Fill(xval, weight);
    allhistos.insert( std::pair<std::string, TH1*>(name, currentHisto) );
  } else {
    iter->second->Fill(xval, weight);
  }
}

template<typename... TArgs>
void plot2d(std::string name, double xval, double yval, double weight, std::map<std::string, TH1*> &allhistos, TArgs... args)
{
  auto iter = allhistos.find(name);
  if (iter == allhistos.end()) {
    TH2D* currentHisto= new TH2D(name.c_str(), args...);
    currentHisto->SetDirectory(0);
    currentHisto->Sumw2();
    currentHisto->Fill(xval, yval, weight);
    allhistos.insert( std::pair<std::string, TH1*>(name, currentHisto) );
  } else {
    ((TH2D*) iter->second)->Fill(xval, yval, weight);
  }
}

template<typename... TArgs>
void plot3d(std::string name, double xval, double yval, double zval, double weight, std::map<std::string, TH1*> &allhistos, TArgs... args)
{
  auto iter = allhistos.find(name);
  if (iter == allhistos.end()) {
    TH3D* currentHisto= new TH3D(name.c_str(), args...);
    currentHisto->SetDirectory(0);
    currentHisto->Sumw2();
    currentHisto->Fill(xval, yval, zval, weight);
    allhistos.insert( std::pair<std::string, TH1*>(name, currentHisto) );
  } else {
    ((TH3D*) iter->second)->Fill(xval, yval, zval, weight);
  }
}

// Constants 

const vector<float> ptRanges = {
  55, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290,
  300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 7000
};
const vector<float> ptScales_geq1j = {
  0.2624, 0.4459, 1.0055, 1.5919, 2.0895, 2.5699, 3.0485, 3.5010, 3.8843, 4.2915, 4.6683, 5.1468, 5.4683, 5.7617, 5.9639,
  6.2891, 6.4758, 6.8194, 7.1370, 7.5179, 7.8242, 7.8640, 8.1332, 8.7345, 8.5413, 8.9472, 9.5241, 9.6099, 9.5511, 9.9231,
  9.8243, 10.152, 10.586, 10.708, 9.7402, 9.3267, 10.357, 10.338, 11.061, 12.649
}; // Zpeak scales

// const vector<float> ZptScales_metlt125_geq1j = {
//   0.3227,0.5098,1.0280,1.5541,2.0717,2.5576,2.8921,3.3705,3.8081,4.0251,4.4906,5.0358,5.3964,5.8257,5.8401,6.3287,6.3288,7.0088,7.3222,7.6697,8.4301,8.8464,
//   8.3650,9.6479,9.3350,10.303,10.806,12.325,13.306,11.829,11.806,11.935,13.628,15.315,11.767,12.058,14.328,14.386,14.599,19.509
// };

/// fullsamp scales
// const vector<float> ZptScales_metlt125_eq0j = {0.755,0.938,1.323,2.690,4.791,6.554,10.525,19.128,15.975,1.000,1.000,157.308,1.000,1.000,145.539,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,};
// const vector<float> ZptScales_metlt125_eq1j = {0.683,0.792,1.000,1.237,1.681,2.071,2.179,2.584,2.959,2.957,3.302,3.600,4.311,4.490,3.722,4.957,4.700,4.824,4.933,4.939,6.534,7.019,6.451,4.088,5.707,8.859,8.477,5.268,11.534,6.012,6.007,9.217,7.903,6.495,8.667,8.677,9.076,7.843,3.427,8.896,};
// const vector<float> ZptScales_metlt125_eq2j = {0.630,0.768,0.948,1.158,1.474,1.750,2.036,2.493,2.608,2.975,2.952,3.135,3.407,4.303,4.322,3.381,4.062,3.938,5.560,4.965,3.630,7.440,6.120,5.032,3.987,7.927,5.675,7.764,8.741,6.401,7.099,4.256,7.670,9.550,12.421,3.403,8.186,7.033,5.029,9.712,};

/// skimsamp scales, fullmet actually
const vector<float> ZptScales_metlt125_eq0j = {0.717,0.959,1.474,3.129,7.650,12.077,35.084,62.856,160.048,1373.239,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,};
const vector<float> ZptScales_metlt125_eq1j = {0.479,0.700,1.175,1.752,2.515,3.413,4.585,5.098,6.189,7.097,8.625,9.214,11.428,13.168,11.387,14.264,15.944,18.178,19.042,18.164,19.997,23.049,16.616,23.070,19.136,26.893,31.720,22.725,30.973,29.915,24.799,36.056,43.815,27.045,66.203,54.270,47.085,34.893,21.091,40.895,};
const vector<float> ZptScales_metlt125_eq2j = {0.366,0.546,0.925,1.556,2.111,3.083,4.144,5.174,6.572,8.376,7.734,9.185,10.637,10.846,13.472,14.207,16.185,12.686,16.524,14.926,16.779,22.755,19.378,22.965,20.331,40.350,43.122,32.798,28.144,48.941,24.071,22.578,43.461,76.056,29.320,36.531,33.709,32.009,52.374,50.776,};

// const vector<float> ZptScales_metlt125_eq0j = {
//   0.303,0.711,2.370,6.244,15.782,32.676,52.824,69.472,321.420,216.019,2456.583,511.858,1215.240,1.000,2277.293,995.006,2054.229,1.000,
//   1460.955,1.000,1.000,1.000,650.888,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,
// };
// const vector<float> ZptScales_metlt125_geq1j = {
//   0.318,0.504,1.026,1.560,2.079,2.574,2.907,3.396,3.835,4.063,4.533,5.093,5.450,5.874,5.915,6.391,6.402,7.112,7.361,7.781,8.520,8.946,
//   8.470,9.700,9.463,10.408,11.027,12.357,13.415,11.981,11.824,12.100,13.823,15.594,11.959,12.248,14.183,14.637,14.830,19.800,
// };
// const vector<float> ZptScales_metlt125_vbf = {
//   0.257,0.426,1.055,1.697,2.378,2.992,3.869,5.294,4.734,5.063,5.471,7.652,5.668,9.924,13.728,12.142,9.233,9.569,9.737,14.474,17.528,
//   11.259,21.261,19.767,12.918,13.140,34.143,27.674,18.033,16.624,77.219,63.308,36.678,31.504,22.478,8.929,29.569,43.050,6.380,27.167,
// };

/// skimsamp scales
// const vector<float> ZptScales_metlt125_eq0j = {
//   0.240,0.605,1.935,6.026,19.342,16.151,39.965,112.539,129.201,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,
// };
const vector<float> ZptScales_metlt125_geq1j = {
  0.182,0.358,1.033,1.834,2.700,3.877,4.914,5.907,7.181,7.338,9.153,10.203,11.964,13.281,13.917,15.404,17.929,17.710,18.524,17.713,20.240,22.879,21.061,24.833,24.868,37.319,36.675,38.879,33.582,31.623,46.451,33.645,38.222,47.081,53.334,63.255,55.250,37.297,78.996,86.991,
};
const vector<float> ZptScales_metlt125_vbf = {
  0.126,0.320,1.034,2.070,2.536,4.489,6.494,9.851,19.694,7.757,14.279,9.704,43.227,36.540,51.145,224.283,25.663,15.819,32.099,38.174,39.869,19.558,12.735,33.645,1.000,17.165,60.173,293.238,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,251.445,1.000,
};



const vector<float> ZptScales_ge1j = {  // fullMET scales
  0.2479, 0.4396, 1.0611, 1.7171, 2.2895, 2.8840, 3.4497, 4.0145, 4.6117, 5.0669, 5.5740, 6.2028, 6.8047, 7.2358, 7.4380, 8.1463, 8.2290, 8.8619, 9.4767,
  9.7790, 10.871, 11.240, 11.033, 12.498, 11.880, 12.928, 14.301, 14.254, 13.718, 14.464, 14.106, 14.605, 15.548, 16.674, 13.901, 14.642, 15.766, 17.703, 16.980, 19.460
};

// const vector<float> ZptScales_metlt125_geq1j = {  // metlt125 scales, after nvtx reweighting
//   0.175, 0.363, 1.115, 2.087, 3.015, 4.464, 5.777, 7.042, 8.598, 10.254, 11.583, 12.635, 15.375, 17.863, 18.317, 23.622, 22.272, 27.349, 32.082, 31.239, 34.215,
//   38.672, 34.973, 44.256, 35.599, 43.363, 63.229, 70.996, 52.576, 94.293, 52.712, 67.331, 89.351, 76.671, 91.038, 101.63, 124.63, 83.547, 109.45, 116.65
// };

const vector<float> nvtxScales_geq1j = {
  1.0,0.4220,0.9470,0.8765,0.9212,0.8663,0.9956,0.9998,1.0256,1.0485,1.0751,1.1243,1.1327,1.1130,1.1054,1.1134,1.1450,1.1251,1.1030,1.1148,1.0978,1.0895,1.0856,1.0617,
  1.0456,1.0315,1.0315,1.0130,1.0000,0.9844,0.9878,0.9541,0.9292,0.9208,0.9131,0.9201,0.8841,0.8773,0.8570,0.8318,0.8476,0.8178,0.8149,0.8081,0.7753,0.7842,0.7684,
  0.7497,0.7061,0.7086,0.6883,0.6896,0.6986,0.6432,0.7483,0.6626,0.7026,0.7309,0.6057,0.5898,0.7814,0.5291,0.5032,0.6520,0.7479,0.4508,0.6558,0.6411,0.3271,0.8142,
  0.5261,1.0970,0.5000,0.7565,0.4186,0.4921,0.6415,0.1793,2.7859,0.5545};

// const vector<float> nvtxScales_metlt125_geq1j = {
//   1.0,1.0,1.0,18.6572,1.3998,5.4080,2.7796,1.5091,2.0915,1.8487,1.9690,1.5181,1.5919,1.5332,1.5151,1.4429,1.4847,1.3056,1.2793,1.3042,1.2634,1.1890,1.1548,1.1393,1.1217,1.1124,1.1199,1.0824,1.0419,1.0068,0.9891,0.9718,0.9739,0.9094,0.9403,0.9124,0.8714,0.8521,0.8563,0.8261,0.8147,0.7727,0.7631,0.7548,0.7305,0.7223,0.7133,0.6881,0.7691,0.6349,0.6462,0.6298,0.6487,0.5268,0.6609,0.7326,0.7731,0.5102,0.6261,0.6299,0.6485,0.5021,0.8824,0.7793,0.6905,0.5245,0.4707,0.4986,0.1615,0.4255,0.6184,0.4398,0.5,0.6113,0.5,0.0582,0.2885,0.0812,1.0,0.0987
// };

const vector<float> nvtxScales_metlt125_geq1j_skim2l = {
  1.0,1.0,11.474,2.093,1.683,2.393,2.490,2.240,2.013,2.070,1.860,1.960,2.027,1.759,1.680,1.604,1.652,1.576,1.424,1.420,1.342,1.263,1.193,1.168,1.101,1.046,0.977,0.955,0.927,0.883,0.836,0.821,0.779,0.709,0.700,0.706,0.674,0.652,0.620,0.538,0.542,0.552,0.519,0.527,0.500,0.474,0.468,0.467,0.430,0.407,0.385,0.360,0.393,0.286,0.339,0.511,0.355,0.320,0.238,0.481,0.377,0.144,0.451,0.273,0.290,0.145,0.142,0.458,0.264,0.165,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.176,
};


/// fullsamp scales
// const vector<float> nvtxScales_metlt125_eq0j = {
//   1.000,1.000,1.000,1.000,1.000,0.810,1.000,1.000,2.126,3.495,4.828,4.219,2.222,1.946,1.650,1.366,1.810,1.684,1.596,1.442,1.138,1.200,1.166,0.939,1.149,0.898,0.947,0.844,0.852,0.836,0.888,0.758,0.764,0.757,0.780,0.684,0.793,0.786,0.503,0.444,0.715,0.558,0.601,0.489,0.694,1.165,0.564,1.479,0.196,0.690,1.743,0.996,0.084,0.213,1.000,1.000,0.426,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,
// };
// const vector<float> nvtxScales_metlt125_geq1j = {
//   1.000,1.000,1.000,18.661,1.400,5.411,2.780,1.509,2.092,1.846,1.971,1.522,1.591,1.534,1.519,1.443,1.485,1.305,1.280,1.304,1.264,1.189,1.156,1.140,1.122,1.113,1.119,1.082,1.041,1.007,0.988,0.972,0.974,0.909,0.941,0.912,0.872,0.853,0.857,0.826,0.814,0.773,0.762,0.754,0.729,0.719,0.715,0.688,0.771,0.634,0.648,0.630,0.649,0.526,0.660,0.736,0.773,0.506,0.626,0.664,0.649,0.502,0.883,0.779,0.738,0.525,0.471,0.499,0.162,0.426,0.619,0.440,1.774,0.611,1.205,0.058,0.289,0.081,1.000,0.099,
// };
// const vector<float> nvtxScales_metlt125_vbf = {
//   1.000,1.000,1.000,1.000,1.000,1.000,6.004,0.022,0.361,3.600,2.115,9.090,2.797,6.227,2.438,2.177,3.615,2.142,1.750,1.600,1.616,1.746,2.198,1.763,1.464,1.196,1.173,1.384,1.232,1.150,1.038,0.893,1.107,0.977,0.942,0.929,0.863,0.913,0.906,0.930,0.741,0.755,0.797,0.904,0.715,0.794,0.599,1.112,0.800,0.634,0.625,0.604,0.483,0.382,0.579,0.652,1.047,1.329,1.210,0.454,0.025,1.217,0.517,1.773,1.000,0.376,0.392,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,
// };

/// skimsamp scales
const vector<float> nvtxScales_metlt125_eq0j = {
  1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,0.680,1.527,0.890,1.126,2.105,0.774,0.949,1.964,1.486,1.561,1.365,1.010,1.199,1.112,0.897,1.132,0.910,0.952,0.932,1.016,0.918,0.946,0.984,0.776,0.925,0.890,0.827,0.914,0.995,0.637,0.729,1.142,0.758,1.043,0.411,0.889,2.470,0.847,2.495,1.000,1.062,1.409,1.000,0.421,1.000,1.000,1.000,0.692,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,
};
const vector<float> nvtxScales_metlt125_geq1j = {
  1.000,1.000,1.000,10.102,0.724,3.742,4.928,2.077,4.404,2.832,1.971,1.489,1.946,1.811,1.992,1.748,1.730,1.389,1.450,1.557,1.526,1.438,1.308,1.316,1.262,1.191,1.245,1.122,1.126,1.033,1.011,0.979,0.966,0.887,0.907,0.875,0.842,0.797,0.792,0.752,0.762,0.707,0.708,0.691,0.652,0.616,0.576,0.642,0.646,0.433,0.543,0.465,0.527,0.343,0.455,0.486,0.654,0.252,0.365,0.518,0.688,0.388,0.499,0.712,0.620,0.718,0.261,0.101,0.124,15.943,0.027,0.003,2.721,0.143,1.000,0.045,0.006,0.068,1.000,1.099,
};
const vector<float> nvtxScales_metlt125_eq1j = {
  1.000,1.000,1.000,10.102,0.724,3.742,4.928,2.077,4.404,2.832,1.971,1.489,1.946,1.811,1.992,1.748,1.730,1.389,1.450,1.557,1.526,1.438,1.308,1.316,1.262,1.191,1.245,1.122,1.126,1.033,1.011,0.979,0.966,0.887,0.907,0.875,0.842,0.797,0.792,0.752,0.762,0.707,0.708,0.691,0.652,0.616,0.576,0.642,0.646,0.433,0.543,0.465,0.527,0.343,0.455,0.486,0.654,0.252,0.365,0.518,0.688,0.388,0.499,0.712,0.620,0.718,0.261,0.101,0.124,15.943,0.027,0.003,2.721,0.143,1.000,0.045,0.006,0.068,1.000,1.099,
};
const vector<float> nvtxScales_metlt125_eq2j = {
  1.000,1.000,1.000,10.102,0.724,3.742,4.928,2.077,4.404,2.832,1.971,1.489,1.946,1.811,1.992,1.748,1.730,1.389,1.450,1.557,1.526,1.438,1.308,1.316,1.262,1.191,1.245,1.122,1.126,1.033,1.011,0.979,0.966,0.887,0.907,0.875,0.842,0.797,0.792,0.752,0.762,0.707,0.708,0.691,0.652,0.616,0.576,0.642,0.646,0.433,0.543,0.465,0.527,0.343,0.455,0.486,0.654,0.252,0.365,0.518,0.688,0.388,0.499,0.712,0.620,0.718,0.261,0.101,0.124,15.943,0.027,0.003,2.721,0.143,1.000,0.045,0.006,0.068,1.000,1.099,
};
const vector<float> nvtxScales_metlt125_vbf = {
  1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,3.332,1.000,1.030,3.314,6.260,2.012,5.737,1.594,1.750,2.188,1.628,1.831,2.936,2.117,2.099,1.658,1.355,1.780,1.409,1.381,1.352,0.859,1.161,0.905,1.011,0.971,0.772,0.891,0.876,0.915,0.798,0.801,0.746,0.821,0.517,0.857,0.451,0.915,0.635,0.542,0.605,0.959,0.252,0.424,0.494,0.618,0.848,1.547,0.893,1.000,0.026,1.000,1.000,1.000,1.000,1.000,0.290,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,
};



const vector<float> nvtxScales_Zpeak_geq1j = {
  1.0,2.345,0.070,0.529,0.463,0.471,0.408,0.440,0.467,0.475,0.520,0.489,0.487,0.547,0.585,0.593,0.592,0.623,0.671,0.685,0.719,0.759,0.806,0.831,0.875,0.917,0.956,1.001,1.033,1.084,1.131,1.159,1.222,1.295,1.315,1.322,1.410,1.477,1.543,1.674,1.649,1.664,1.716,1.794,1.980,1.984,2.027,2.058,2.073,2.328,2.441,2.464,2.411,2.878,2.703,2.164,2.574,2.943,3.235,2.287,2.576,2.649,3.543,2.817,2.709,3.989,4.626,4.153,3.691,3.226,4.597,1.955,3.896,2.394,1.199,3.961,9.694,19.62,0.254,7.277,
};


}

#endif  // HZZLOOPER_UTILITIES_H
