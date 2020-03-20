#ifndef OSSelections_H
#define OSSelections_H

#include "Math/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TRandom3.h"
#include "TLorentzVector.h"

#include "CMS5.h"
#include "Config.h"
// #include "RoccoR.h"

// #include "PhysicsObjects.h"

typedef ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > LorentzVector;

const float k_minPt_photon = 55;
const float k_minPt_el_loose = 10;
const float k_minPt_mu_loose = 3;
const float k_minPt_lep_tight = 25;
const float k_minPt_lep1_tight = 25;
const float k_minPt_lep2_tight = 25;  // 20
const float k_minPt_jet = 30;
const float k_maxAbsEta_jet = 4.7;

const float mZ = 91.1876;
const float k_mZwin = 15;

// extern RoccoR* muoncorr;
extern TRandom3* randomGenerator;

enum ID_level { idVeto, idLoose, idMedium, idTight };
enum jet_cat { eq0j, geq1j, vbf };

float getDileptonMT(const LorentzVector& boson, const LorentzVector& metvec);
bool passTrigger(string name, int* bridx = nullptr);
bool passesMETfilters(bool is_data);
int passTriggerSelections(int trigtype, float objpt = 0.);

// vector<LorentzVector> getJets(const vector<LorentzVector>& mus, const vector<LorentzVector>& els, const vector<LorentzVector>& phs, bool reapplyJEC = false, bool isSim = true);
// std::tuple<vector<LorentzVector>, vector<LorentzVector>> getMuons(bool applyRocCorr = true, float* shiftx = nullptr, float* shifty = nullptr);
// std::tuple<vector<LorentzVector>, vector<LorentzVector>> getElectrons();
// vector<LorentzVector> getPhotons();

vector<int> getJetIdxs(const vector<int>& mus, const vector<int>& els, const vector<int>& phs, bool reapplyJEC = false, bool isSim = true);
std::tuple<vector<int>, vector<int>> getMuonIdxs(bool applyRocCorr = true, float* shiftx = nullptr, float* shifty = nullptr);
std::tuple<vector<int>, vector<int>> getElectronIdxs();
vector<int> getPhotonIdxs();

void giveMassToPhoton(LorentzVector& boson, TH1* h_weight = nullptr);
void ApplyRochesterCorrectionToMuon(LorentzVector *muon, int muidx);
float getJetCorrectionFactorFromFile(int jetidx, LorentzVector injet, bool applyJER = true);
bool PassVBFcuts(const vector<int> &selJets, const LorentzVector &boson);

bool ZZ2l2vPrunerCuts();
bool InstrMETPrunerCuts();

#endif
