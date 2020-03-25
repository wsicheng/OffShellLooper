// -*- C++ -*-
#pragma GCC diagnostic ignored "-Wsign-compare"
#include "TFile.h"
#include "TH1F.h"
#include "TTree.h"
#include "TChain.h"
#include "TTreeCache.h"
#include "TTreeCacheUnzip.h"
#include "TTreePerfStats.h"
#include "Math/VectorUtil.h"
#include "TLorentzVector.h"

#include <iostream>
#include <iomanip>
#include <map>

// #include "../NanoCORE/Nano.h"
// #include "../NanoCORE/Config.h"
// #include "../NanoCORE/MetSelections.h"
#include "Tools/goodrun.h"
#include "Tools/dorky.h"
#include "Tools/tqdm.h"

#include "CMS5.h"
#include "Config.h"
#include "Utilities.h"
#include "OSSelections.h"

// #include "config/list_xsecs.icc"

#define SUM(vec) std::accumulate((vec).begin(), (vec).end(), 0);
#define SUM_GT(vec,num) std::accumulate((vec).begin(), (vec).end(), 0, [](float x,float y) { return ((y > (num)) ? x+y : x); });
#define COUNT_GT(vec,num) std::count_if((vec).begin(), (vec).end(), [](float x) { return x > (num); });
#define COUNT_LT(vec,num) std::count_if((vec).begin(), (vec).end(), [](float x) { return x < (num); });


#define H1(name,nbins,low,high) TH1F *h_##name = new TH1F(#name,#name,nbins,low,high);

// #define DEBUG

struct debugger { template<typename T> debugger& operator , (const T& v) { cerr<<v<<" "; return *this; } } dbg;
#ifdef DEBUG
#define debug(args...) do {cerr << #args << ": "; dbg,args; cerr << endl;} while(0)
#else
#define debug(args...)
#endif

using namespace std;
using namespace tas;

// turn on to apply json file to data
const bool applyGoodRunList = true;

const bool triggerPrescaleTest = true;
const bool applySyncCuts = false;

int ScanChain(TChain *ch, string sample, string outdir, double sumwgts, string portion) {

  TFile* fout = new TFile(Form("%s/%s.root", outdir.c_str(), sample.c_str()), "RECREATE");
  // H1(met, 50, 0, -1);

  unsigned int nEventsChain = ch->GetEntries();
  unsigned int nEventsTotal = 0;
  unsigned int nPassedTotal = 0;
  unsigned int nDuplicates = 0;
  TFile *currentFile = 0;
  TObjArray *listOfFiles = ch->GetListOfFiles();
  TIter fileIter(listOfFiles);
  tqdm bar;
  const bool show_progress = (sample.find("test") == string::npos);

  int ievt_begin(0), ievt_end(nEventsChain);
  if (portion != "" && portion.find("/") != string::npos) {
    int mid = portion.find("/");
    int num = stoi(portion.substr(0,mid)), den = stoi(portion.substr(mid+1));
    int perport = nEventsChain / den;
    ievt_begin = (num-1) * perport;
    ievt_end = (num == den)? nEventsChain : num * perport;
    cout << ">>> Will be running the " << portion << " of the total events! " << " begin= " << ievt_begin << ", end= " << ievt_end << endl;
  }

  map<string,TH1*> hvec;
  // TFile* outfile = new TFile("hists.root", "RECREATE");

  // set configuration parameters
  gconf.GetConfigs(2018);
  gconf.GetSampleType("/"+sample);

  // if (applyGoodRunList && gconf.is_data) {
  //   const char* json_file = "../NanoCORE/data/goodrun/Cert_271036-325175_13TeV_Combined161718_JSON_snt.txt";
  //   cout << ">>> Loading goodrun json file: " << json_file << endl;
  //   set_goodrun_file(json_file);
  // }

  // muoncorr = new RoccoR();
  randomGenerator = new TRandom3();

  const bool getWeightSum = (sumwgts <= 0.0);
  const bool reweightHist = false;
  double sum_wgts(0.);
  double sum_evts(0.);
  double sum_nwgt(0.);
  double xsection(1.);

  while ( (currentFile = (TFile*)fileIter.Next()) ) {
    TFile *file = TFile::Open( currentFile->GetTitle() );
    TTree *tree = (TTree*)file->Get("cms3ntuple/Events");
    TString filename(currentFile->GetTitle());

    tree->SetCacheSize(128*1024*1024);
    tree->SetCacheLearnEntries(100);

    gconf.GetConfigsFromDatasetName(filename.Data());

    if (sumwgts == 1.0) {
      // Get the sum_wgts stored
      TH1D* h_sum_wgts = (TH1D*) file->Get("cms3ntuple/h_sum_weights");
      if (h_sum_wgts) sum_wgts = h_sum_wgts->GetBinContent(1);
      else cout << ">>> Cannot get the sum of weights histogram from file " << file->GetName() << endl;
      cout << ">>> Geting the sum_wgts = " << sum_wgts << " from histogram." << endl;
    } else if (sumwgts > 0.0) {
      sum_wgts = sumwgts;
      cout << ">>> Geting the sum_wgts = " << sum_wgts << " from argument input." << endl;
    } else if (sum_wgts == 0.0) {
      cout << ">>> Not reweighting by the sum_wgts !!" << endl;
    }

    cms5.Init(tree);

    for (unsigned int evt = 0; evt < tree->GetEntriesFast(); ++evt) {
      // if (evt > 1000) break; // quick test, debug
      // if (evt > 100'000'000) break; // quick test, debug

      cms5.GetEntry(evt);
      tree->LoadTree(evt);

      nEventsTotal++;
      if (show_progress) bar.progress(nEventsTotal, nEventsChain);

      float weight = 1.0;
      if (!gconf.is_data) weight = genHEPMCweight_default();
      if (getWeightSum) sum_wgts += weight; // only useful when running on full sample
      sum_evts += (weight >= 0)? 1 : -1;
      if (evt == 0 && !gconf.is_data) {
        xsection = xsec();
      }
      if (gconf.is_signal) {
        if (sample.find("ggH") == 0) {
          if (sample.find("_sigonly_") != string::npos)
            weight *= p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM() * p_Gen_CPStoBWPropRewgt();
          else
            weight *= p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM() * p_Gen_CPStoBWPropRewgt();
        } else if (sample.find("VBF") == 0) {
          if (sample.find("_sigonly_") != string::npos)
            weight *= p_Gen_JJEW_BSI_ghv1_1_MCFM() * p_Gen_CPStoBWPropRewgt();
          else
            weight *= p_Gen_JJEW_SIG_ghv1_1_MCFM() * p_Gen_CPStoBWPropRewgt();
        }
      }

      if (!reweightHist && !gconf.is_data) {
        double scaleToLumi = (xsection*1000 * gconf.lumi / sum_wgts);
        weight = (genHEPMCweight_default() > 0)? scaleToLumi : -1.0*scaleToLumi;  // sum_wgts = total effective events
      }
      sum_nwgt += weight;

      // weight *= (xsection*1000 * gconf.lumi / sum_wgts);

      // if (event > 50000) break;

      // TODO:
      // if (gconf.is_data) {
      //   if (applyGoodRunList && !goodrun(run(), luminosityBlock())) continue;
      //   duplicate_removal::DorkyEventIdentifier id(RunNumber(), EventNumber(), luminosityBlock());
      //   if (is_duplicate(id)) {
      //     ++nDuplicates;
      //     continue;
      //   }
      // }

      plot1d("h_nphotons_raw", photons_pt().size(), weight, hvec, ";n_{ph} [GeV]" , 5,  0, 5);
      float lead_photon_pt = 0;
      float lead_photon_idx = -1;
      for (int i = 0; i < photons_pt().size(); ++i) {
        if ((photons_pt()[i] * photons_scale_smear_corr()[i]) > lead_photon_pt) {
          lead_photon_pt = (photons_pt()[i] * photons_scale_smear_corr()[i]);
          lead_photon_idx = i;
        }
        // if (photons_pt()[i] > lead_photon_pt) lead_photon_pt = photons_pt()[i];
      }
      float lead_photon_eta = (lead_photon_idx >= 0)? photons_eta()[lead_photon_idx] : -9;

      if (triggerPrescaleTest && lead_photon_idx >= 0) {
        // use HLT_Photon200 as the numerator
        const bool pass_Photon200 = passTrigger("HLT_Photon200_v");
        const bool pass_ele32 = passTrigger("HLT_Ele32_WPTight_Gsf_v");
        if (pass_Photon200)
          plot1d("h_gammapt_HLT_Photon200", lead_photon_pt, 1, hvec, ";pt_{ph} [GeV]" , 160,  0, 800);
        if (pass_ele32)
          plot1d("h_gammapt_HLT_Ele32", lead_photon_pt, 1, hvec, ";pt_{ph} [GeV]" , 160,  0, 800);

        auto fillTrigScale_Photon200 = [&](string trig) {
          if (!passTrigger(trig)) return;
          plot1d("hden_Photon200_vs_"+trig, lead_photon_pt, 1, hvec, ";pt_{ph} [GeV]" , 160,  0, 800);
          if (pass_Photon200)
            linkHist("hnum_Photon200_vs_"+trig, "h_gammapt_HLT_Photon200", hvec);
          if (pass_ele32) {
            linkHist("hden_trigeff_"+trig, "h_gammapt_HLT_Ele32", hvec);
            plot1d("hnum_trigeff_"+trig, lead_photon_pt, 1, hvec, ";pt_{ph} [GeV]" , 160,  0, 800);
          }
        };
        fillTrigScale_Photon200("HLT_Photon175_v");
        fillTrigScale_Photon200("HLT_Photon120_v");
        fillTrigScale_Photon200("HLT_Photon33_v");
        fillTrigScale_Photon200("HLT_Photon50_R9Id90_HE10_IsoM_v");
        fillTrigScale_Photon200("HLT_Photon75_R9Id90_HE10_IsoM_v");
        fillTrigScale_Photon200("HLT_Photon90_R9Id90_HE10_IsoM_v");
        fillTrigScale_Photon200("HLT_Photon120_R9Id90_HE10_IsoM_v");
        fillTrigScale_Photon200("HLT_Photon165_R9Id90_HE10_IsoM_v");
        fillTrigScale_Photon200("HLT_Photon300_NoHE_v");
        fillTrigScale_Photon200("HLT_Photon200_v");  // just to get the efficiency

      }

      plot1d("h_lead_photon_pt_raw", lead_photon_pt, weight, hvec, ";pt_{ph} [GeV]" , 40,  0, 200);

      plot1d("h_preselec_steps", 0, 1, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
      plot1d("h_preselec_met_step0", pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      plot1d("h_preselec_gammapt_step0", lead_photon_pt, weight, hvec, ";pt_{ph} [GeV]" , 40,  0, 200);
      plot1d("h_preselec_gammaeta_step0", lead_photon_eta, weight, hvec, ";#eta_{ph}" , 40,  -4.0f, 4.0f);

      for (unsigned j = 0; j < ak4jets_pt().size(); ++j) {
        if (ak4jets_pt()[j] < 30 || ak4jets_pass_tightId()[j]) continue;
        if (pfmet_metPhi_Nominal() > 75)
          plot1d("h_dphi_met_badjet", deltaPhi(ak4jets_phi()[j], pfmet_metPhi_Nominal()), weight, hvec, ";#eta(bad jet) [GeV]" , 32,  0, 3.2);
        plot1d("h_met_badjetexist", pfmet_metPhi_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
        // MET, MET/pTjet, dPhi(MET, jet) for tight && fail PU, MET + vec pT of tight && PU jet
      }
      bool passMETfilt = passesMETfilters(gconf.is_data);
      if (!passMETfilt) continue;

      plot1d("h_preselec_steps", 1, 1, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
      plot1d("h_preselec_met_step1", pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      plot1d("h_preselec_gammapt_step1", lead_photon_pt, weight, hvec, ";pt_{ph} [GeV]" , 40,  0, 200);
      plot1d("h_preselec_gammaeta_step1", lead_photon_eta, weight, hvec, ";#eta_{ph}" , 40,  -4.0f, 4.0f);

      int nPhoton50 = 0;
      for (unsigned i = 0; i < photons_pt().size(); ++i) {
        if ((photons_id_cutBased_Fall17V2_Tight_Bits()[i] & 0b1111) != 0b1111) continue;
        if (photons_pt()[i] >= 50) nPhoton50++;
      }
      plot1d("h_nphotons50", nPhoton50, weight, hvec, ";n_{ph} [GeV]" , 5,  0, 5);
      // if (applySyncCuts && nPhoton50 == 0) continue;

      plot1d("h_preselec_steps", 2, 1, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
      plot1d("h_preselec_met_step2", pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      plot1d("h_preselec_gammapt_step2", lead_photon_pt, weight, hvec, ";pt_{ph} [GeV]" , 40,  0, 200);
      plot1d("h_preselec_gammaeta_step2", lead_photon_eta, weight, hvec, ";#eta_{ph}" , 40,  -4.0f, 4.0f);

      // To apply the same skim cut as the NanoAOD
      if (applySyncCuts) {
        // if (isGamma)
        //   if (!InstrMETPrunerCuts()) continue;
        // else
        if (!ZZ2l2vPrunerCuts()) continue;
        // if (!InstrMETPrunerCuts()) continue;
      }

      plot1d("h_preselec_steps", 3, 1, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
      plot1d("h_preselec_met_step3", pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      plot1d("h_preselec_gammapt_step3", lead_photon_pt, weight, hvec, ";pt_{ph} [GeV]" , 40,  0, 200);
      plot1d("h_preselec_gammaeta_step3", lead_photon_eta, weight, hvec, ";#eta_{ph}" , 40,  -4.0f, 4.0f);

      nPassedTotal++;

      int nFailCuts = 0;

      // Functions return tuple of vector<int>
      auto [tightElectrons, looseElectrons] = getElectronIdxs();
      auto [tightMuons, looseMuons] = getMuonIdxs();
      vector<int> photons = getPhotonIdxs();

      bool isEE = (tightElectrons.size() == 2); // 2 good electrons
      bool isMuMu = (tightMuons.size() == 2); // 2 good muons
      bool isGamma = (photons.size() == 1 && !isEE && !isMuMu); // 1 good photon

      string lepcat = "gamma";
      if (isEE) lepcat = "ee";
      else if (isMuMu) lepcat = "mumu";
      else if (isGamma) lepcat = "gamma";

      int istep=0;
      plot1d("h_weight_"+to_string(istep), weight, 1, hvec, ";Event weight"  , 200,  0, 20);
      plot1d("h_met_step"+to_string(istep), pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      plot1d("h_met_unwgtd_step"+to_string(istep), pfmet_met_Nominal(), 1, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      if (nFailCuts == 0) {
        plot1d("h_passed_steps_"+lepcat, istep , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_passed_steps", istep++ , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_met_step"+to_string(istep), pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      }

      // if (evt < 200) cout << __LINE__ << ": isEE= " << isEE << ", isMuMu= " << isMuMu << ", isGamma= " << isGamma << endl;
      // if (isGamma) continue;  // don't study photon for now

      bool isOppositeSign = ((isEE && (electrons_charge()[tightElectrons[0]] * electrons_charge()[tightElectrons[1]] == -1)) ||
                             (isMuMu && (muons_charge()[tightMuons[0]] * muons_charge()[tightMuons[1]] == -1)) || isGamma);
      if (!isOppositeSign) continue;  // reject events that are not opposite sign

      if (nFailCuts == 0) {
        plot1d("h_passed_steps_"+lepcat, istep , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_passed_steps", istep++ , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_met_step"+to_string(istep), pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      }

      if (isGamma) {
        plot1d("h_ptgamma_raw", photons_pt().at(0), weight, hvec, ";p_{T}(#gamma) [GeV]" , 40,  0, 800);
        plot1d("h_etagamma_raw", photons_eta().at(0), weight, hvec, ";#eta(#gamma) [GeV]" , 40,  -4.0f, 4.0f);
        plot2d("h2d_ph_selected_eta_phi", photons_eta().at(photons.at(0)), photons_phi().at(photons.at(0)), weight, hvec, ";#eta(#gamma);#phi(#gamma)" , 50, -2.5f, 2.5f, 64, -3.2f, 3.2f);
        for (int i = 0; i < photons_pt().size(); ++i) {
          plot2d("h2d_photon_eta_phi", photons_eta().at(i), photons_phi().at(i), weight, hvec, ";#eta(#gamma);#phi(#gamma)" , 50, -2.5f, 2.5f, 64, -3.2f, 3.2f);
        }
      } else {
        for (int i : looseElectrons) {
          plot2d("h2d_elec_eta_phi", electrons_eta().at(i), electrons_phi().at(i), weight, hvec, ";#eta(e);#phi(e)" , 50, -2.5f, 2.5f, 64, -3.2f, 3.2f);
        }
      }

      bool passLeptonVeto = true;
      if (isGamma)
        passLeptonVeto = (looseElectrons.empty() and looseMuons.empty());
      else if (isEE)
        passLeptonVeto = (looseElectrons.size() == 2 and looseMuons.empty());
      else if (isMuMu)
        passLeptonVeto = (looseElectrons.empty() and looseMuons.size() == 2);

      // // Other version of veto only tight candidates 
      // if (isEE)
      //   passLeptonVeto = (tightElectrons.size() == 2 and tightMuons.empty());
      // else if (isMuMu)
      //   passLeptonVeto = (tightElectrons.empty() and tightMuons.size() == 2);

      if (!passLeptonVeto) continue;  // temporary
      // Add track+tau veto also?? <-- to be studied
      if (nFailCuts == 0) {
        plot1d("h_passed_steps_"+lepcat, istep , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_passed_steps", istep++ , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_met_step"+to_string(istep), pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      }

      std::vector<LorentzVector> tightLeptons;
      if (isMuMu) {
        for (const int &l : tightMuons) {
          tightLeptons.emplace_back(muons_pt()[l] * muons_scale_smear_pt_corr()[l], muons_eta()[l], muons_phi()[l], muons_mass()[l]);
        }
      } else if (isEE) {
        for (const int &l : tightElectrons) {
          tightLeptons.emplace_back(electrons_pt()[l], electrons_eta()[l], electrons_phi()[l], electrons_mass()[l]);
          tightLeptons.back() *= electrons_scale_smear_corr()[l];
        }
      }

      LorentzVector boson;
      float lep1pt(0.), lep2pt(0.);
      if (isGamma) {
        int ph = photons[0];
        boson = LorentzVector(photons_pt()[ph], photons_eta()[ph], photons_phi()[ph], photons_mass()[ph]);
        boson *= photons_scale_smear_corr()[ph];
        giveMassToPhoton(boson);
      } else {
        boson = tightLeptons[0] + tightLeptons[1];
        lep1pt = tightLeptons[0].pt();
        lep2pt = tightLeptons[1].pt();
        if (lep1pt < lep2pt) std::swap(lep1pt, lep2pt);
      }

      // cout << evt << ": boson.Pt()= " << boson.Pt() <<  ", isEE= " << isEE << ", isMuMu= " << isMuMu << ", tightLeptons[0].pt()= " << tightLeptons[0].pt() << ", tightLeptons[1].pt()= " << tightLeptons[1].pt() << endl;
      if (isGamma && !gconf.is_data) {
        // Apply the LO to NLO scale factor here
        weight *= (boson.pt() >= 600)? 1 : (1.72 - 0.0012 * boson.pt());
      }

      // TODO: triggers
      // if (static int pct=0; isMuMu && pct++ < 20) {
      //   bool des =  passTriggerSelections(1);
      //   cout << __FILE__ << ":" <<__LINE__ << ": passTriggerSelections(1)= " << des << endl;
      // } else if (pct > 21) {
      //   break;
      // }

      if (isGamma) {
        int prescale = passTriggerSelections(4, boson.pt());
        if (prescale >= 1)
          weight *= prescale;
        else
          continue;

        plot1d("h_gamma_pt_raw", boson.pt(), weight, hvec, ";p_{T}(#gamma) [GeV]" , 120,  0, 600);
        string suf = "_xxx";
        if (boson.pt() > 210 ) suf = "_gt210";
        if (boson.pt() > 180 && boson.pt() < 210 ) suf = "_180to210";
        if (boson.pt() > 135 && boson.pt() < 180 ) suf = "_135to180";
        if (boson.pt() > 105 && boson.pt() < 135 ) suf = "_105to135";
        if (boson.pt() > 85 && boson.pt() < 105  ) suf = "_85to105";
        if (boson.pt() > 55 && boson.pt() < 85   ) suf = "_55to85";
        plot1d("h_prescale"+suf, prescale, weight, hvec, ";p_{T}(#gamma) [GeV]" , 200,  0, 2000);
      }
      else if (isEE) {
        plot1d("hden_lep1pt_el", lep1pt, weight, hvec, ";p_{T}(e) [GeV]" , 120,  0, 600);
        if (!passTriggerSelections(1) && !passTriggerSelections(2)) continue;
        plot1d("hnum_lep1pt_el", lep2pt, weight, hvec, ";p_{T}(e) [GeV]" , 120,  0, 600);
      }
      else if (isMuMu) {
        plot1d("hden_lep1pt_mu", lep1pt, weight, hvec, ";p_{T}(#mu) [GeV]" , 120,  0, 600);
        if (!passTriggerSelections(1) && !passTriggerSelections(2)) continue;
        plot1d("hnum_lep1pt_mu", lep1pt, weight, hvec, ";p_{T}(#mu) [GeV]" , 120,  0, 600);
      }

      // Get jets
      auto jets = getJetIdxs(looseMuons, looseElectrons, photons);

      /// Get crude HT value from all jets
      float ht_all = 0;
      for (auto jetpt : ak4jets_pt()) {
        ht_all += jetpt;
      }

      bool passBTagVeto = true;
      for (int j : jets) {
        if (!ak4jets_pass_tightId()[j]) continue;
        float btagval = (ak4jets_deepFlavourprobb()[j] + ak4jets_deepFlavourprobbb()[j] + ak4jets_deepFlavourproblepb()[j]);
        if ( btagval > gconf.WP_DeepFlav_loose && fabs(ak4jets_eta()[j]) < 2.5) {
          passBTagVeto = false;
          break;
        }
      }
      if (!passBTagVeto) nFailCuts++;
      if (nFailCuts > 1) continue;
      if (nFailCuts == 0) {
        plot1d("h_passed_steps", istep++ , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_met_step"+to_string(istep), pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      }

      string jetcat = "geq1j";
      if (jets.size() == 0)
        jetcat = "eq0j";
      else if (jets.size() == 1)
        jetcat = "eq1j";
      else if (jets.size() == 2)
        jetcat = "eq2j";
      // else if (PassVBFcuts(jets, boson))
      //   jetcat = "vbf";

      // LorentzVector met_p4(pfmet_met_Nominal(), 0., pfmet_metPhi_Nominal(), 0.);
      LorentzVector met_p4(pfmet_met_Nominal(), 0., pfmet_metPhi_Nominal(), 0.);
      // LorentzVector met_p4(puppimet_met_Nominal(), 0., puppimet_metPhi_Nominal(), 0.);

      // float met_sig = MET_significance();
      float mtZZ = getDileptonMT(boson, met_p4);

      // if (MET_pt() < 125) continue;
      auto fill_mll_hists = [&](string s) {
        if (!isMuMu && !isEE) return;
        plot1d("h_mll_"+s, boson.M() , weight, hvec, ";M_{ll} [GeV]" , 50,  0, 500);
        // plot1d(Form("h_mll_%s_%s", s.c_str(), lepcat.c_str()), boson.M() , weight, hvec, ";M_{ll} [GeV]" , 50,  0, 500);
        plot1d(Form("h_mll_%s_%s_%s", s.c_str(), jetcat.c_str(), lepcat.c_str()), boson.M() , weight, hvec, ";M_{ll} [GeV]" , 50,  0, 500);
      };
      // fill_mll_hists("full");

      bool passZpt = (boson.Pt() > 55);
      if (!passZpt) nFailCuts++;
      if (nFailCuts > 1) continue;
      if (nFailCuts == 0) {
        plot1d("h_passed_steps_"+lepcat, istep , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_passed_steps", istep++ , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_met_step"+to_string(istep), pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      }

      bool passZmassWindow = (fabs(boson.M() - mZ) < k_mZwin);  // use 15 for sync
      if (!passZmassWindow) nFailCuts++;
      if (nFailCuts > 1) continue;
      if (nFailCuts == 0) {
        plot1d("h_passed_steps", istep++ , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_met_step"+to_string(istep), pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      }

      float deltaPhi_MET_Boson = deltaPhi(boson.Phi(), met_p4.phi());
      bool passDeltaPhiZMET = (deltaPhi_MET_Boson > 0.5);
      if (!passDeltaPhiZMET) nFailCuts++;
      if (nFailCuts > 1) continue;
      if (nFailCuts == 0) {
        plot1d("h_passed_steps", istep++ , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_met_step"+to_string(istep), pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      }

      float min_dphijZ = 4;

      LorentzVector p4_lljets = boson;
      for (auto const &j : jets) {
        p4_lljets += LorentzVector(ak4jets_pt()[j], ak4jets_eta()[j], ak4jets_phi()[j], ak4jets_mass()[j]);
        float dphijZ = deltaPhi(boson.phi(), ak4jets_phi()[j]);
        if (dphijZ < min_dphijZ) min_dphijZ = dphijZ;
      }
      float deltaPhi_MET_lljets = deltaPhi(met_p4.phi(), p4_lljets.phi());
      bool passDeltaPhiMETlljets = (deltaPhi_MET_lljets > 2.6);
      // if (!passDeltaPhiMETlljets) nFailCuts++;
      // if (nFailCuts > 1) continue;
      
      float min_dphijmet = 4.0;
      for (auto const &j : jets) {
        float dphi = deltaPhi(ak4jets_phi()[j], met_p4.phi());
        if (dphi < min_dphijmet) min_dphijmet = dphi;
      }
      bool passDeltaPhiJetMET = (min_dphijmet > 0.5);
      
      auto fill_Zmet_hists = [&](string s) {
        if (nFailCuts == 0) {
          plot1d("h_met_"+s, met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
          plot1d("h_njets_"+s,  jets.size(), weight, hvec, ";N(jets)"  , 6,  0, 6);
          plot1d("h_ht_all_"+s, ht_all, weight, hvec, ";H_{T}(all jets) [GeV]"  , 80,  0, 800);
          plot1d("h_boson_pt_"+s, boson.pt(), weight, hvec, ";p_{T}(boson) [GeV]"  , 120,  0, 600);
          plot1d("h_boson_eta_"+s, boson.Eta(), weight, hvec, ";#eta(boson) "  , 100,  -5.0f, 5.0f);
          plot1d("h_dphiZmet_"+s, deltaPhi_MET_Boson , weight, hvec, ";#Delta#phi(ll, E_{T}^{miss}) ", 32,  0, 3.2);
          // plot1d("h_nvtxs_"+s,  vtxs_nvtxs(), weight, hvec, ";N(vtx)" , 80,  0, 80);
          plot1d("h_nvtxs_good_"+s,  vtxs_nvtxs_good(), weight, hvec, ";N(vtx good)"  , 80,  0, 80);
          // plot1d("h_nvtxs_PU_"+s,  n_vtxs_PU(), weight, hvec, ";N(vtx PU)"  , 80,  0, 80);
          if (!isGamma) {
            plot1d("h_lep1pt_"+s, lep1pt, weight, hvec, ";p_{T}(lep1) [GeV]" , 100,  0, 500);
            plot1d("h_lep2pt_"+s, lep2pt, weight, hvec, ";p_{T}(lep2) [GeV]" , 100,  0, 500);
          }

          if (jets.size() > 0) {
            plot1d("h_min_dphijmet_"+s, min_dphijmet , weight, hvec, ";min #Delta#phi(j, E_{T}^{miss}) ", 32,  0, 3.2);
            plot1d("h_jet1_pt_"+s, ak4jets_pt()[0], weight, hvec, ";p_{T}(jet-1) [GeV]"  , 120,  0, 600);
          }
        } else if (nFailCuts == 1) {
          if (!passDeltaPhiZMET) plot1d("h_dphiZmet_"+s, deltaPhi_MET_Boson , weight, hvec, ";#Delta#phi(ll, E_{T}^{miss}) ", 32,  0, 3.2);
        }
      };
      fill_Zmet_hists("Zpeak_unwgtd_"+jetcat);
      if (jets.size() >= 2) fill_Zmet_hists("Zpeak_unwgtd_geq2j");

      int icat = -1;

      const bool doNvtxReweight = false;
      const bool doBosonPtReweight = false;
      if (isGamma && !gconf.is_data) {
        if (doNvtxReweight) {
          int nvtx = vtxs_nvtxs_good();
          if (nvtx > 79) nvtx = 79;
          float scale = 1.0;
          // if (jetcat == "geq1j") scale = nvtxScales_geq1j.at(nvtx);
          if (jetcat == "eq1j") scale = nvtxScales_metlt125_eq1j.at(nvtx);
          else if (jetcat == "eq0j") scale = nvtxScales_metlt125_eq0j.at(nvtx);
          else if (jetcat == "eq2j") scale = nvtxScales_metlt125_eq2j.at(nvtx);
          else if (jetcat == "geq1j") scale = nvtxScales_metlt125_geq1j.at(nvtx);
          else if (jetcat == "vbf") scale = nvtxScales_metlt125_vbf.at(nvtx);
          weight *= scale;
        }
        if (doBosonPtReweight) {
          // int icat = std::upper_bound(ptRanges.begin(), ptRanges.end(), boson.pt()) - ptRanges.begin() - 1;
          icat = (boson.pt() > 440)? 39 : (boson.pt() - 50) / 10;
          float scale = 1.0;
          // if (jetcat == "geq1j") scale = ptScales_geq1j.at(icat);
          if (jetcat == "eq1j") scale = ZptScales_metlt125_eq1j.at(icat);
          else if (jetcat == "eq0j") scale = ZptScales_metlt125_eq0j.at(icat);
          else if (jetcat == "eq2j") scale = ZptScales_metlt125_eq2j.at(icat);
          else if (jetcat == "geq1j") scale = ZptScales_metlt125_geq1j.at(icat);
          else if (jetcat == "vbf") scale = ZptScales_metlt125_vbf.at(icat);

          if (static int pct = 0; jetcat == "geq1j" && pct++ < 20) 
            cout << __LINE__ << ": boson.pt()= " << boson.pt() << ", icat = " << icat << ", scale= " << scale << endl;
          weight *= scale;
        }
      }

      fill_Zmet_hists("Zpeak");
      // fill_Zmet_hists("Zpeak_"+lepcat);
      fill_Zmet_hists("Zpeak_"+jetcat);
      if (jets.size() >= 2) fill_Zmet_hists("Zpeak_geq2j");

      if (!passDeltaPhiJetMET) nFailCuts++;
      if (nFailCuts > 1) continue;
      if (nFailCuts == 0) {
        plot1d("h_passed_steps", istep++ , weight, hvec, ";M_{ll} [GeV]" , 20,  0, 20);
        plot1d("h_met_step"+to_string(istep), pfmet_met_Nominal(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
      }

      if (isGamma && !gconf.is_data) {
        if (doBosonPtReweight) {
          float scale = 1.0;
          if (jetcat == "eq1j") scale = ZptScales_metlt125_eq1j.at(icat);
          else if (jetcat == "eq0j") scale = ZptScales_metlt125_eq0j.at(icat);
          else if (jetcat == "eq2j") scale = ZptScales_metlt125_eq2j.at(icat);
          else if (jetcat == "geq1j") scale = ZptScales_metlt125_geq1j.at(icat);
          else if (jetcat == "vbf") scale = ZptScales_metlt125_vbf.at(icat);
          weight /= scale;
        }
      }
      fill_Zmet_hists("fullMET_unwgtd_"+jetcat);
      if (met_p4.pt() < 50)
        fill_Zmet_hists("metlt50_unwgtd_"+jetcat);
      else if (met_p4.pt() < 125)
        fill_Zmet_hists("metlt125_unwgtd_"+jetcat);
      else  // >= 125
        fill_Zmet_hists("metge125_unwgtd_"+jetcat);

      if (jets.size() >= 2) {
        if (met_p4.pt() < 50)
          fill_Zmet_hists("metlt50_unwgtd_geq2j");
        else if (met_p4.pt() < 125)
          fill_Zmet_hists("metlt125_unwgtd_geq2j");
        else  // >= 125
          fill_Zmet_hists("metge125_unwgtd_geq2j");
      }

      if (isGamma && !gconf.is_data) {
        if (doBosonPtReweight) {
          float scale = 1.0;
          if (jetcat == "eq1j") scale = ZptScales_metlt125_eq1j.at(icat);
          else if (jetcat == "eq0j") scale = ZptScales_metlt125_eq0j.at(icat);
          else if (jetcat == "eq2j") scale = ZptScales_metlt125_eq2j.at(icat);
          else if (jetcat == "geq1j") scale = ZptScales_metlt125_geq1j.at(icat);
          else if (jetcat == "vbf") scale = ZptScales_metlt125_vbf.at(icat);
          weight *= scale;
        }
      }

      fill_Zmet_hists("fullMET");
      fill_Zmet_hists("fullMET_"+jetcat);
      fill_Zmet_hists("fullMET_"+jetcat+"_"+lepcat);
      if (jets.size() >= 2) {
        fill_Zmet_hists("fullMET_geq2j");
        fill_Zmet_hists("fullMET_geq2j_"+lepcat);
      }

      string metsuf = (met_p4.pt() < 50)? "metlt50_" : (met_p4.pt() < 125)? "metlt125_" : "metge125_";
      fill_Zmet_hists(metsuf+jetcat);
      fill_Zmet_hists(metsuf+jetcat+"_"+lepcat);
      if (jets.size() >= 2) {
        fill_Zmet_hists(metsuf+"_geq2j");
        fill_Zmet_hists(metsuf+"_geq2j_"+lepcat);
      }

      for (const auto &j : jets) {
        plot2d("h2d_jet_eta_phi_fullMET", ak4jets_eta().at(j), ak4jets_phi().at(j), weight, hvec, ";#eta(j);#phi(j)" , 100, -5.0f, 5.0f, 64, -3.2f, 3.2f);
        plot2d("h2d_jet_eta_phi_"+metsuf, ak4jets_eta().at(j), ak4jets_phi().at(j), weight, hvec, ";#eta(j);#phi(j)" , 100, -5.0f, 5.0f, 64, -3.2f, 3.2f);
        if ((ak4jets_eta().at(j) > -4.7 && ak4jets_eta().at(j) < -1.4) && (ak4jets_eta().at(j) > -1.6 && ak4jets_eta().at(j) < -0.8)) {
          plot1d("h_met_inHEM_jet", met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
        } else if ((ak4jets_eta().at(j) < 4.7 && ak4jets_eta().at(j) > 1.4) && (ak4jets_eta().at(j) < 1.6 && ak4jets_eta().at(j) > 0.8)) {
          plot1d("h_met_outHEM_jet", met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
        }
      }
      if (isGamma) {
        for (int i : photons) {
          plot2d("h2d_photon_eta_phi_fullMET", photons_eta().at(i), photons_phi().at(i), weight, hvec, ";#eta(#gamma);#phi(#gamma)" , 50, -2.5f, 2.5f, 64, -3.2f, 3.2f);
          plot2d("h2d_photon_eta_phi_"+metsuf, photons_eta().at(i), photons_phi().at(i), weight, hvec, ";#eta(#gamma);#phi(#gamma)" , 50, -2.5f, 2.5f, 64, -3.2f, 3.2f);
          if ((photons_eta().at(i) > -4.7 && photons_eta().at(i) < -1.4) && (photons_eta().at(i) > -1.6 && photons_eta().at(i) < -0.8)) {
            plot1d("h_met_inHEM_ph", met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
          } else if ((photons_eta().at(i) < 4.7 && photons_eta().at(i) > 1.4) && (photons_eta().at(i) < 1.6 && photons_eta().at(i) > 0.8)) {
            plot1d("h_met_outHEM_ph", met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
          }
        }
      } else if (isEE || isMuMu) {
        for (int i = 0; i < photons_pt().size(); ++i) {
          plot2d("h2d_photon_eta_phi_fullMET", photons_eta().at(i), photons_phi().at(i), weight, hvec, ";#eta(#gamma);#phi(#gamma)" , 50, -2.5f, 2.5f, 64, -3.2f, 3.2f);
          plot2d("h2d_photon_eta_phi_"+metsuf, photons_eta().at(i), photons_phi().at(i), weight, hvec, ";#eta(#gamma);#phi(#gamma)" , 50, -2.5f, 2.5f, 64, -3.2f, 3.2f);
          if ((photons_eta().at(i) > -4.7 && photons_eta().at(i) < -1.4) && (photons_eta().at(i) > -1.6 && photons_eta().at(i) < -0.8)) {
            plot1d("h_met_inHEM_ph", met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
          } else if ((photons_eta().at(i) < 4.7 && photons_eta().at(i) > 1.4) && (photons_eta().at(i) < 1.6 && photons_eta().at(i) > 0.8)) {
            plot1d("h_met_outHEM_ph", met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
          }
        }
      }

      for (int i : looseElectrons) {
        plot2d("h2d_elec_eta_phi_fullMET", electrons_eta().at(i), electrons_phi().at(i), weight, hvec, ";#eta(e);#phi(e)" , 50, -2.5f, 2.5f, 64, -3.2f, 3.2f);
        plot2d("h2d_elec_eta_phi_"+metsuf, electrons_eta().at(i), electrons_phi().at(i), weight, hvec, ";#eta(e);#phi(e)" , 50, -2.5f, 2.5f, 64, -3.2f, 3.2f);
        if ((electrons_eta().at(i) > -4.7 && electrons_eta().at(i) < -1.4) && (electrons_eta().at(i) > -1.6 && electrons_eta().at(i) < -0.8)) {
          plot1d("h_met_inHEM_el", met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
        } else if ((electrons_eta().at(i) < 4.7 && electrons_eta().at(i) > 1.4) && (electrons_eta().at(i) < 1.6 && electrons_eta().at(i) > 0.8)) {
          plot1d("h_met_outHEM_el", met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 120,  0, 600);
        }
      }

      bool passMETMHTRatio = ((met_p4.pt() / p4_lljets.pt()) >= pow(85.f/p4_lljets.pt(), 1.5));
      // if (!passMETMHTRatio) nFailCuts++;
      // if (nFailCuts > 1) continue;

      auto fill_jmet_hists = [&](string s) {
        // plot1d("h_met_Zpeak"+s, met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 200,  0, 200);
        // plot1d("h_min_dphijmet_Zpeak"+s, min_dphijmet , weight, hvec, ";min #Delta#phi(j, E_{T}^{miss}) ", 32,  0, 3.2);
        plot2d("h2d_Zpt_vs_dphijmet"+s, min_dphijmet, boson.Pt(), weight, hvec, ";min #Delta#phi(j, E_{T}^{miss}); p_{T}(ll) [GeV] ", 32,  0, 3.2, 20,  0, 400);
        // plot1d("h_logZpt_over_dphijmet"+s, log(boson.Pt()) / min_dphijmet, weight, hvec, ";log(p_{T}(ll)) / min #Delta#phi(j, E_{T}^{miss}) ", 50,  0, 10);
        // if (passZpt) plot1d("h_min_dphijmet_Zpt55"+s, min_dphijmet , weight, hvec, ";min #Delta#phi(j, E_{T}^{miss}) ", 32,  0, 3.2);
        // else plot1d("h_min_dphijmet_lowZpt"+s, min_dphijmet , weight, hvec, ";min #Delta#phi(j, E_{T}^{miss}) ", 32,  0, 3.2);
        // if (passDeltaPhiZMET) plot1d("h_min_dphijmet_dphiZmet"+s, min_dphijmet , weight, hvec, ";min #Delta#phi(j, E_{T}^{miss}) ", 32,  0, 3.2);
      };

      // if (!passDeltaPhiJetMET) continue;
      bool passMET85  = (met_p4.pt() > 85);
      bool passMET125 = (met_p4.pt() > 125);

      // if (!passMET85) nFailCuts++;
      // if (nFailCuts > 1) continue;
      if (!passMET85) continue;

      if (!passMET125) nFailCuts++;
      if (nFailCuts > 1) continue;
     
      // Enter the section of n-1 plots

      if (nFailCuts == 1) {
        auto fillNminus1 = [&](string s) {
          if (!passZmassWindow && (isEE || isMuMu)) plot1d("h_mll"+s, boson.M() , weight, hvec, ";M(ll) [GeV]" , 125,  0, 500);
          else if (!passZpt && (isEE || isMuMu)) plot1d("h_ptll"+s,  boson.Pt() , weight, hvec, ";p_{T}(ll) [GeV]" , 200,  0, 800);
          // else if (!passMET85) plot1d("h_met"+s, met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 160,  0, 800);
          else if (!passDeltaPhiJetMET) plot1d("h_min_dphijmet"+s, min_dphijmet , weight, hvec, ";min #Delta#phi(j, E_{T}^{miss}) ", 32,  0, 3.2);
          else if (!passDeltaPhiZMET) plot1d("h_dphiZmet"+s, deltaPhi_MET_Boson , weight, hvec, ";#Delta#phi(ll, E_{T}^{miss}) ", 32,  0, 3.2);
          else if (!passDeltaPhiMETlljets) plot1d("h_dphiMETlljets"+s, deltaPhi_MET_lljets , weight, hvec, ";#Delta#phi(ll+jets, E_{T}^{miss}) ", 32,  0, 3.2);
          else if (!passMETMHTRatio) plot1d("h_METMHTRatio"+s, met_p4.pt()/p4_lljets.pt() , weight, hvec, "; E_{T}^{miss} / p_{T}^{ll+jets} ", 50,  0, 10);
          else if (!passMET125) plot1d("h_met"+s,    met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 160,  0, 800);
          
        };
        fillNminus1("");
        fillNminus1("_"+jetcat);
        fillNminus1("_"+lepcat);
        fillNminus1("_"+jetcat+"_"+lepcat);
        // if (jets.size() > 0) fillNminus1("_geq1j");
        // if (ak4jets_pt().size() > 1) fillNminus1("_geq2j");
        if (!passDeltaPhiJetMET) {
          fill_jmet_hists("");
          fill_jmet_hists("_"+jetcat);
        }
      }

      if (nFailCuts > 0) continue;  // final selections!

      // Events passes all selections

      LorentzVector p4nunu_approx(met_p4.pt(), boson.eta(), met_p4.phi(), mZ);
      float mZZ_approx = (p4nunu_approx + boson).M();

      auto fillhists = [&](string s) {
        plot1d("h_njets"+s,  jets.size(), weight, hvec, ";N(jets)"  , 6,  0, 6);
        plot1d("h_met"+s,    met_p4.pt(), weight, hvec, ";E_{T}^{miss} [GeV]"  , 160,  0, 800);
        plot1d("h_metphi"+s, met_p4.phi(), weight, hvec, ";#phi(E_{T}^{miss})"  , 34, -3.4, 3.4);
        plot1d("h_puppimet"+s,    puppimet_met_Nominal(), weight, hvec, ";E_{T}^{miss,PUPPI} [GeV]"  , 30,  0, 750);
        plot1d("h_puppimetphi"+s, puppimet_metPhi_Nominal(), weight, hvec, ";#phi(E_{T}^{miss,PUPPI})"  , 34, -3.4, 3.4);
        plot1d("h_min_dphijmet"+s, min_dphijmet , weight, hvec, ";min #Delta#phi(j, E_{T}^{miss}) ", 32,  0, 3.2);
        plot1d("h_dphiZmet"+s, deltaPhi_MET_Boson , weight, hvec, ";#Delta#phi(ll, E_{T}^{miss}) ", 32,  0, 3.2);
        plot1d("h_dphiMETlljets"+s, deltaPhi_MET_lljets , weight, hvec, ";#Delta#phi(ll+jet, E_{T}^{miss}) ", 32,  0, 3.2);
        plot1d("h_ZmetPtRatio"+s, met_p4.pt()/boson.Pt() , weight, hvec, "; E_{T}^{miss} / p_{T}^{ll} ", 50,  0, 10);
        plot1d("h_METMHTRatio"+s, met_p4.pt()/p4_lljets.pt() , weight, hvec, "; E_{T}^{miss} / p_{T}^{ll+jets} ", 50,  0, 10);
        if (ak4jets_phi().size() > 0)
          plot1d("h_dphiZj1"+s, deltaPhi(boson.phi(), ak4jets_phi()[0]) , weight, hvec, ";#Delta#phi(ll, jet1) ", 32,  0, 3.2);

        plot1d("h_metsig"+s, pfmet_metSignificance() , weight, hvec, ";#sigma(E_{T}^{miss,CHS}) " , 20,  0, 40);
        // Z quantities
        if (isEE || isMuMu) {
          plot1d("h_mll"+s,   boson.M() , weight, hvec, ";M_{ll} [GeV]" , 125,  0, 500);
          plot1d("h_ptll"+s,  boson.Pt() , weight, hvec, ";p_{T}(ll) [GeV]" , 200,  0, 800);
          plot1d("h_etall"+s, boson.Eta(), weight, hvec, ";#eta(ll) [GeV]"     , 50,  -5, 5);

          plot1d("h_lep1pt"+s,   tightLeptons[0].Pt() , weight, hvec, ";p_{T}(lep1) [GeV]"  , 25,  0, 500);
          plot1d("h_lep2pt"+s,   tightLeptons[1].Pt() , weight, hvec, ";p_{T}(lep2) [GeV]"  , 20,  0, 400);
          plot1d("h_lep1eta"+s,  tightLeptons[0].Eta() , weight, hvec, ";#eta(lep1)"        , 36, -2.4, 2.4);
          plot1d("h_lep2eta"+s,  tightLeptons[1].Eta() , weight, hvec, ";#eta(lep2)"        , 36, -2.4, 2.4);
        } else if (isGamma) {
          plot1d("h_Zmass"+s, boson.M()  , weight, hvec, ";fake M(#gamma)[GeV]"       , 20,  0, 500);
          plot1d("h_ptgamma"+s, boson.Pt()  , weight, hvec, ";p_{T}(#gamma) [GeV]"    , 40,  0, 800);
          plot1d("h_etagamma"+s, boson.Eta(), weight, hvec, ";#eta(#gamma) [GeV]"     , 40,  -5, 5);
        }

        plot1d("h_mtZZ"+s, mtZZ  , weight, hvec, ";M_{T}(ZZ) [GeV]"   , 200,  0, 2000);
        plot1d("h_mZZ"+s, mZZ_approx  , weight, hvec, ";M^{ZZ}(approx) [GeV]"   , 200,  0, 2000);

        const vector<float> mtbin1 = {0, 75, 150, 225, 300, 375, 450, 525, 600, 725, 850, 975, 1100, 1350, 1600, 2100, 3000};
        plot1d("h_mtZZ_b1"+s,   mtZZ , weight, hvec, ";M_{T}(ZZ) [GeV]" , mtbin1.size()-1, mtbin1.data());
        const vector<float> mtbin3 = {0, 75, 150, 225, 300, 375, 450, 525, 600, 725, 850, 975, 1100, 1350, 1600, 2100, 3000};
        plot1d("h_mtZZ_b3"+s,   mtZZ , weight, hvec, ";M_{T}(ZZ) [GeV]" , mtbin3.size()-1, mtbin3.data());
      };

      fillhists("");
      fillhists("_"+jetcat);
      fillhists("_"+lepcat);
      fillhists("_"+jetcat+"_"+lepcat);
      // if (ak4jets_pt().size() > 1) fillhists("_geq2j");
      // if (jets.size() > 0) fillhists("_geq1j");
    } // Event loop

    delete file;

  } // File loop
  if (show_progress) bar.finish();

  cout << ">>> The total sum of weights is: " << sum_wgts << endl;
  plot1d("h_sum_wgts", 0, nEventsTotal, hvec, ";Bin;Sum of weights" , 5, 0, 5);
  plot1d("h_sum_wgts", 1, sum_evts, hvec, ";Bin;Sum of weights" , 5, 0, 5);
  plot1d("h_sum_wgts", 2, sum_wgts, hvec, ";Bin;Sum of weights" , 5, 0, 5);
  plot1d("h_sum_wgts", 3, sum_nwgt, hvec, ";Bin;Sum of weights" , 5, 0, 5);

  fout->cd();
  for (const auto& h : hvec) {
    if (h.first.find("hnum") != 0) continue;
    if (h.first.find("2d") == string::npos)
      moveOverFlowToLastBin1D(h.second);
    string hname = h.first;
    hname.erase(0, 4);
    // dummy.cd();
    TH1F* h_ratio = (TH1F*) h.second->Clone(("ratio"+hname).c_str());
    h_ratio->SetDirectory(0);
    h_ratio->Divide(h_ratio, hvec.at("hden"+hname), 1, 1, "B");

    const string dirname = "effstudy_eff";
    TDirectory* dir = (TDirectory*) fout->Get(dirname.c_str());
    if (dir == nullptr) dir = fout->mkdir(dirname.c_str());
    dir->cd();
    h_ratio->Write();

    dir = (TDirectory*) fout->Get("effstudy_num");
    if (dir == nullptr) dir = fout->mkdir("effstudy_num");
    dir->cd();
    h.second->Write(("hnum"+hname).c_str());

    dir = (TDirectory*) fout->Get("effstudy_den");
    if (dir == nullptr) dir = fout->mkdir("effstudy_den");
    dir->cd();
    hvec.at("hden"+hname)->Write(("hden"+hname).c_str());
  }

  for (auto& h : hvec) {
    if (h.first.find("hnum") == 0 || h.first.find("hden") == 0) continue;
    if (h.first.find("phi") == string::npos && h.first.find("2d") == string::npos)
      moveOverFlowToLastBin1D(h.second);
    string dirname = "OffShell";
    for (string dirsuf : {
            "_eq0j_ee", "_eq0j_mumu", "_geq1j_ee", "_geq1j_mumu",
            "_eq1j_ee", "_eq1j_mumu", "_eq2j_ee", "_eq2j_mumu", "_vbf_ee", "_vbf_mumu",
            "_eq0j_gamma", "_geq1j_gamma", "_eq1j_gamma", "_eq2j_gamma", "_vbf_gamma", 
            "_geq2j_ee", "_geq2j_mumu", "_geq2j_gamma",
            "_ee", "_mumu", "_gamma", "_eq0j", "_eq1j", "_eq2j", "_geq1j", "_vbf", "_geq2j",
            }) {
      if (h.first.find(dirsuf) != string::npos) {
        dirname += dirsuf;
        break;
      }
    }
    TDirectory* dir = (TDirectory*) fout->Get(dirname.c_str());
    if (dir == nullptr) dir = fout->mkdir(dirname.c_str());
    dir->cd();

    if (reweightHist && !gconf.is_data) h.second->Scale(xsection*1000 * gconf.lumi / sum_wgts);
    if (h.first.rfind("h2d", 0) == 0 && h.first.find("_vs_") != string::npos) {
      TH2* hcond = (TH2*) h.second->Clone((h.first+"_cond").c_str());
      conditionalizeHist(hcond);
      hcond->Write();
    }
    h.second->Write();
  }

  // linkHist(, , hvec);
  // fout->Write();
  fout->Close();

  delete fout; fout = nullptr;
  // delete muoncorr; muoncorr = nullptr;

  cout << "\n---------------------------------" << endl;
  cout << nEventsTotal << " Events Processed, where " << nDuplicates << " duplicates were skipped, and ";
  cout << nPassedTotal << " Events passed all selections." << endl;
  cout << "xsec = " << xsection << ", sum_wgts = " << sum_wgts << endl;
  cout << "---------------------------------\n" << endl;

  return 0;
}
