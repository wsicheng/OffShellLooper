#include "OSSelections.h"
// #include "Utilities.h"
#include <bitset>
#include <unordered_map>

namespace {

inline bool isCloseObject(const float eta1, const float phi1, const float eta2, const float phi2, const float conesize, float* deltaR = nullptr) {
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

std::unordered_map<string,int> trigname_cache = {
  // {"HLT_Photon200_v", -1}, {"HLT_Photon165_R9Id90_HE10_IsoM_v", -1}, {"HLT_Photon120_R9Id90_HE10_IsoM_v", -1}, {"HLT_Photon90_R9Id90_HE10_IsoM_v", -1},
  // {"HLT_Photon75_R9Id90_HE10_IsoM_v", -1}, {"HLT_Photon50_R9Id90_HE10_IsoM_v", -1}, 
  // {"HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v", -1}, {"HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v", -1}, {"HLT_IsoMu24_v", -1}, {"HLT_IsoTkMu24_v", -1},
  // {"HLT_IsoMu27_v", -1}, {"HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_v", -1}, {"HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v", -1}, {"HLT_Ele27_WPTight_Gsf_v", -1},
  // {"HLT_Ele35_WPTight_Gsf_v", -1}, {"HLT_Ele32_WPTight_Gsf_L1DoubleEG_v", -1}, {"HLT_Ele32_WPTight_Gsf_v", -1},

  // 2018 trigger list
  {"HLT_AK8PFJet400_TrimMass30_v", 0},
  {"HLT_DoubleEle25_CaloIdL_MW_v", 1},
  {"HLT_Ele32_WPTight_Gsf_v", 2},
  {"HLT_IsoMu24_v", 3},
  {"HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v", 4},
  {"HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_v", 5},
  {"HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_v", 6},
  {"HLT_PFHT1050_v", 7},
  {"HLT_PFMET120_PFMHT120_IDTight_v", 8},
  {"HLT_PFMET120_PFMHT120_IDTight_PFHT60_v", 9},
  {"HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_v", 10},
  {"HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_v", 11},
  {"HLT_Photon300_NoHE_v", 12},
  {"HLT_Mu8_TrkIsoVVL_v", 13},
  {"HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_v", 14},
  {"HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v", 15},
  {"HLT_Mu17_TrkIsoVVL_v", 16},
  {"HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v", 17},
  {"HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_v", 18},
  {"HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v", 19},
  {"HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v", 20},
  {"HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_v", 21},
  {"HLT_Photon33_v", 22},
  {"HLT_Photon120_v", 23},
  {"HLT_Photon175_v", 24},
  {"HLT_Photon200_v", 25},
  {"HLT_Photon50_R9Id90_HE10_IsoM_v", 26},
  {"HLT_Photon75_R9Id90_HE10_IsoM_v", 27},
  {"HLT_Photon90_R9Id90_HE10_IsoM_v", 28},
  {"HLT_Photon120_R9Id90_HE10_IsoM_v", 29},
  {"HLT_Photon165_R9Id90_HE10_IsoM_v", 30},
  {"HLT_TripleMu_10_5_5_DZ_v", 31},
  {"HLT_TripleMu_12_10_5_v", 32},
  {"HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_v", 33},
  {"HLT_Mu8_v", 34},
  {"HLT_Mu17_v", 35},
  {"HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_v", 36},
  {"HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_v", 37},
  {"HLT_Ele8_CaloIdM_TrackIdM_PFJet30_v", 38},
  {"HLT_Ele17_CaloIdM_TrackIdM_PFJet30_v", 39},
  {"HLT_Photon20_HoverELoose_v", 40},
  {"HLT_Photon30_HoverELoose_v", 41},
};

}

using namespace std;
using namespace tas;


int pct = 99;

// RoccoR* muoncorr = nullptr;
TRandom3* randomGenerator = nullptr;

bool passTrigger(string name, int* bridx) {
  int idx = trigname_cache[name];
  if (pct < 10) cout << __LINE__ << ": idx= " << idx << ", muons_pt().size()= " << muons_pt().size() << ", pct= " << pct << endl;
  if (idx < 0 || triggers_name().at(idx).find(name) != 0) {
    idx = -1;
    for (auto it = triggers_name().begin(); it != triggers_name().end(); ++it) {
      if (it->find(name) == 0) {
        idx = it - triggers_name().begin();
      }
    }
    if (pct < 10) cout << __LINE__ << ": idx= " << idx << ", triggers_name().at(idx)= " << triggers_name().at(idx) << ", name= " << name << endl;
    trigname_cache[name] = idx;      
    if (idx < 0) return false;
  }
  
  if (pct < 10) cout << __LINE__ << ": idx= " << idx << ", triggers_passTrigger().at(idx)= " << triggers_passTrigger().at(idx) << endl;
  if (bridx) *bridx = idx;
  if (!triggers_passTrigger().at(idx)) return false;

  if (pct < 10) cout << __LINE__ << ": idx= " << idx << endl;
  return true;
}

int passTriggerSelections(int trigtype, float objpt) {
  if (!gconf.is_data) return true;  // not using the trigger emulatino in MC

  if (trigtype == 1) {
    // Muon triggers
    if (pct++ < 20) {
      int idx = -1;
      bool des = passTrigger("HLT_IsoMu24_v", &idx);
      cout << __FILE__ << ":" << __LINE__ << ": " << "HLT_IsoMu24_v:" << des
           << ": trigname_cache[name]= " << trigname_cache["HLT_IsoMu24_v"] << ", triggers_name().at(idx)= " << ((idx > 0)? triggers_name().at(idx) : "-10") << endl;
          
    }
 
   switch (gconf.year) {
      case 2016:
        return ( passTrigger("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v") || passTrigger("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v") ||
                 passTrigger("HLT_IsoMu24_v") || passTrigger("HLT_IsoTkMu24_v") );
      case 2017:
        return ( passTrigger("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v") ||
                 passTrigger("HLT_IsoMu27_v") );
      case 2018:
      default:
        return ( passTrigger("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_v") ||
                 passTrigger("HLT_IsoMu24_v") );
    }
  } else if (trigtype == 2) {
    // Electron triggers
    switch (gconf.year) {
      case 2016:
        return ( passTrigger("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v") ||
                 passTrigger("HLT_Ele27_WPTight_Gsf_v") );
      case 2017:
        return ( passTrigger("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v") ||
                 passTrigger("HLT_Ele35_WPTight_Gsf_v") ||
                 passTrigger("HLT_Ele32_WPTight_Gsf_L1DoubleEG_v") );

      case 2018:
      default:
        return ( passTrigger("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v") ||
                 passTrigger("HLT_Ele32_WPTight_Gsf_v") || passTrigger("HLT_Ele32_WPTight_Gsf_L1DoubleEG_v") );
    }
  } else if (trigtype == 3) {
  //   // emu triggers
  //   switch (gconf.year) {
  //     case 2016:
  //     case 2017:
  //     case 2018:
  //     default:
  //       return (
  //           HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL() || HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ() ||
  //           HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL() || HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ() ||
  //           HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL()  || HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ()  );
  //   }
  } else if (trigtype == 4) {
    // Photon triggers
    int prescaled = 1;
    switch (gconf.year) {
      case 2016:
        // prescaled photon triggers
        // if (false) {
        //   prescaled = (
        //       HLT_Photon50_R9Id90_HE10_IsoM() ||  // eff lumi: 0.
        //       HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50() ||
        //       HLT_Photon75_R9Id90_HE10_IsoM() ||
        //       HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3() ||
        //       HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3() ||
        //       HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3() ||
        //       HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3() ||
        //       HLT_Photon90_R9Id90_HE10_IsoM() ||
        //       HLT_Photon120_R9Id90_HE10_IsoM() );
        // }

        // unprescaled in 2016, prescaled in 2017 & 2018
        // return ( prescaled || HLT_Photon165_R9Id90_HE10_IsoM() || HLT_Photon250_NoHE() || HLT_Photon300_NoHE());
        return true;
        // HLT_Photon175() || HLT_Photon200()  // unprescaled, but not use
        // HLT_Photon250_NoHE(); // in 2016 only that doesn't exist
      case 2017:
      case 2018:
      default:
        int idx = -1;
        if ( passTrigger("HLT_Photon200_v", &idx) > 0 && objpt > 210 )
          return triggers_HLTprescale().at(idx) * triggers_L1prescale().at(idx);
        if ( passTrigger("HLT_Photon165_R9Id90_HE10_IsoM_v", &idx) > 0 && objpt > 180 && objpt < 210 )
          return triggers_HLTprescale().at(idx) * triggers_L1prescale().at(idx);
        if ( passTrigger("HLT_Photon120_R9Id90_HE10_IsoM_v", &idx) > 0 && objpt > 135 && objpt < 180 )
          return triggers_HLTprescale().at(idx) * triggers_L1prescale().at(idx);
        if ( passTrigger("HLT_Photon90_R9Id90_HE10_IsoM_v", &idx)  > 0 && objpt > 105 && objpt < 135 )
          return triggers_HLTprescale().at(idx) * triggers_L1prescale().at(idx);
        if ( passTrigger("HLT_Photon75_R9Id90_HE10_IsoM_v", &idx)  > 0 && objpt > 85 && objpt < 105  )
          return triggers_HLTprescale().at(idx) * triggers_L1prescale().at(idx);
        if ( passTrigger("HLT_Photon50_R9Id90_HE10_IsoM_v", &idx)  > 0 && objpt > 55 && objpt < 85   )
          return triggers_HLTprescale().at(idx) * triggers_L1prescale().at(idx);

        return false;
        // unprescaled in 2016, prescaled in 2017 & 2018
        // return ( prescaled || HLT_Photon300_NoHE() );
        // HLT_Photon175() || HLT_Photon200()  // unprescaled, but not use
    }
    // Lepton triggers that doesn't exist
    // HLT_IsoTkMu24() ||
    // HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL() ||
    // HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ() ||
  }

  // return false;
  return true;
}

bool passesMETfilters(bool is_data) {

  if (gconf.year == 2016) {
    if (!metfilter_goodVertices()) return false; // primary vertex filter?
    if (!metfilter_globalSuperTightHalo2016Filter()) return false; // beam halo filter
    if (!metfilter_HBHENoiseFilter()) return false;
    if (!metfilter_HBHENoiseIsoFilter()) return false;
    if (!metfilter_EcalDeadCellTriggerPrimitiveFilter()) return false; // ECAL TP filter
    if (!metfilter_BadPFMuonFilter()) return false; // bad PF muon filter
    // if (!metfilter_BadChargedCandidateFilter()) return false;  // bad charged hadron filter
    if (is_data) {
      if (!metfilter_eeBadScFilter()) return false;
    }
  } else if (gconf.year == 2017) {
    if (!metfilter_goodVertices()) return false; // primary vertex filter
    if (!metfilter_globalSuperTightHalo2016Filter()) return false; // beam halo filter
    if (!metfilter_HBHENoiseFilter()) return false; // HBHE noise filter
    if (!metfilter_HBHENoiseIsoFilter()) return false; // HBHEiso noise filter
    if (!metfilter_EcalDeadCellTriggerPrimitiveFilter()) return false; // ECAL TP filter
    if (!metfilter_BadPFMuonFilter()) return false; // bad PF muon filter
    // if (!metfilter_BadChargedCandidateFilter()) return false;  // bad charged hadron filter
    if (!metfilter_ecalBadCalibFilterUpdated()) return false;  // ECAL bad calibration filter update
    if (is_data) {
      if (!metfilter_eeBadScFilter()) return false;
    }
  } else if (gconf.year == 2018) {
    if (!metfilter_goodVertices()) return false; // primary vertex filter
    if (!metfilter_globalSuperTightHalo2016Filter()) return false; // beam halo filter
    if (!metfilter_HBHENoiseFilter()) return false; // HBHE noise filter
    if (!metfilter_HBHENoiseIsoFilter()) return false; // HBHEiso noise filter
    if (!metfilter_EcalDeadCellTriggerPrimitiveFilter()) return false; // ECAL TP filter
    if (!metfilter_BadPFMuonFilter()) return false; // bad PF muon filter
    // if (!metfilter_BadChargedCandidateFilter()) return false;  // bad charged hadron filter
    if (!metfilter_ecalBadCalibFilterUpdated()) return false;  // ECAL bad calibration filter update
    if (is_data) {
      if (!metfilter_eeBadScFilter()) return false;
    }
  } else {
    std::cout << "[Selections::passesMETfilters] >> uh, I don't know what year this is" << std::endl;
  }

  // // Customized bad jet filter -- reject event if any bad ID jet > 30 GeV present 
  // for (unsigned j = 0; j < ak4jets_pt().size(); ++j) {
  //   if (ak4jets_pt()[j] > 30 && !ak4jets_pass_tightId()[j]) return false;
  // }

  return true;
}

float getDileptonMT(const LorentzVector& boson, const LorentzVector& metvec) {
  double ptll = boson.Pt(), mll = boson.M(), met = metvec.Pt();
  double term1 = sqrt(ptll*ptll + mll*mll) + sqrt(met*met + mZ*mZ);
  double term2 = (boson + metvec).Pt();
  return sqrt( term1*term1 - term2*term2 );
}

void giveMassToPhoton(LorentzVector& boson, TH1* h_weight) {
  double mass = mZ;
  if (h_weight != nullptr) {
    do {
      mass = h_weight->GetRandom();
    } while (fabs(mass-mZ) > 15);
  }
  boson = LorentzVector(boson.Pt(), boson.Eta(), boson.Phi(), mass);
}


std::tuple<vector<int>, vector<int>> getElectronIdxs() {

  vector<int> looseElectrons;
  vector<int> tightElectrons;

  for (unsigned i = 0; i < electrons_pt().size(); ++i) {
    // double const absEtaSc = fabs(electrons_etaSC()[i]);
    double const pt = electrons_pt()[i] * electrons_scale_smear_corr()[i];
    double const absEtaSc = fabs(electrons_eta()[i]);
    bool const passLooseId = electrons_id_MVA_Fall17V2_NoIso_pass_wp90()[i];
    bool passIso = (electrons_pfIso03_comb_nofsr()[i]/pt < 0.1);

    if (pt < k_minPt_el_loose || absEtaSc > 2.5 || !passLooseId || !passIso)
      continue;

    looseElectrons.push_back(i);

    // bool const passTightId = ((electrons_id_cutBased_Fall17V2_Medium_Bits()[i] & 0x37f) == 0x37f);
    bool const passTightId = electrons_id_MVA_Fall17V2_NoIso_pass_wp90()[i];

    if (absEtaSc > 1.4442 and absEtaSc < 1.5660)  // EB-EE gap
      continue;

    if (pt < k_minPt_lep2_tight or not passTightId or not passIso)
      continue;

    tightElectrons.emplace_back(i);
  }

  std::sort(looseElectrons.begin(), looseElectrons.end(), [](int a, int b){ return electrons_pt()[a] > electrons_pt()[b]; });
  std::sort(tightElectrons.begin(), tightElectrons.end(), [](int a, int b){ return electrons_pt()[a] > electrons_pt()[b]; });
  if (tightElectrons.size() > 0 && electrons_pt()[tightElectrons[0]] < k_minPt_lep1_tight) tightElectrons.clear();

  return {tightElectrons, looseElectrons};
}


void ApplyRochesterCorrectionToMuon(LorentzVector* muon, int idx) {

  // Apply the correction only in its domain of validity
  if (muon->Pt() > 200. or std::abs(muon->Eta()) > 2.4)
    return;

  double scale = 1.;

  // if (gconf.is_data) {
  //   scale = muoncorr->kScaleDT(Muon_charge()[idx], Muon_pt()[idx], Muon_eta()[idx], Muon_phi()[idx]);
  // } else {
  //   // Flavour of genParticle for MC matching to status==1 muons: 1 = prompt muon (including
  //   // gamma*->mu mu), 15 = muon from prompt tau, 5 = muon from b, 4 = muon from c, 3 = muon from
  //   // light or unknown, 0 = unmatched
  //   if (Muon_genPartFlav().at(idx) > 0) {
  //     scale = muoncorr->kSpreadMC(Muon_charge()[idx], Muon_pt()[idx], Muon_eta()[idx], Muon_phi()[idx],
  //                                 GenPart_pt().at(Muon_genPartIdx()[idx]));
  //   } else {
  //     randomGenerator->SetSeed(int(100000 * (Muon_phi()[idx] + 3.2)));
  //     scale = muoncorr->kSmearMC(Muon_charge()[idx], Muon_pt()[idx], Muon_eta()[idx], Muon_phi()[idx],
  //                                Muon_nTrackerLayers()[idx], randomGenerator->Uniform());
  //   }
  // }

  // muon->p4.SetPtEtaPhiM(Muon_pt()[idx] * scale, Muon_eta()[idx], Muon_phi()[idx], Muon_mass()[idx]);  // Q: no scale for mass?
}

std::tuple<vector<int>, vector<int>> getMuonIdxs(bool applyRocCorr, float* shiftx, float* shifty) {

  vector<int> looseMuons;
  vector<int> tightMuons;

  for (unsigned i = 0; i < muons_pt().size(); ++i) {
    // Loose ID as per https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideMuonIdRun2#Loose_Muon
    // bool const passLooseId = muons_isPFcand()[i] && muons_isGlobal()[i] && muons_isTracker()[i];
    double const pt = muons_pt()[i] * muons_scale_smear_pt_corr()[i];
    bool const passLooseId = (muons_POG_selector_bits()[i] & 1);
    // bool const passLooseIso = (muons_pfIso03_comb_nofsr()[i]/muons_pt()[i] > 0.1);
    bool const passLooseIso = (muons_pfIso03_comb_nofsr()[i]/pt < 0.25);
    if (fabs(muons_eta()[i]) > 2.4 or not passLooseId or passLooseIso)
      continue;

    // LorentzVector muon(muons_pt()[i], muons_eta()[i], muons_phi()[i], muons_mass()[i]);
    // muon.charge = muons_charge()[i];

    if (pt < k_minPt_mu_loose)  // minPtLoose
      continue;

    looseMuons.emplace_back(i);

    // bool const passTightId = muons_tightId()[i];
    bool const passTightId = (muons_POG_selector_bits()[i] & (1UL << 2)); // mediumPromptID
    bool const passTightIso = (muons_pfIso03_comb_nofsr()[i]/pt < 0.15);

    if (pt < k_minPt_lep2_tight or not passTightId or passTightIso) // minPtTight
      continue;

    tightMuons.emplace_back(i);
  }

  std::sort(looseMuons.begin(), looseMuons.end(), [](int a, int b){ return muons_pt()[a] > muons_pt()[b]; });
  std::sort(tightMuons.begin(), tightMuons.end(), [](int a, int b){ return muons_pt()[a] > muons_pt()[b]; });
  if (tightMuons.size() > 0 && (muons_pt()[tightMuons[0]] < k_minPt_lep1_tight)) tightMuons.clear();

  return {tightMuons, looseMuons};
}

vector<int> getPhotonIdxs() {
  vector<int> photons;

  for (unsigned i = 0; i < photons_pt().size(); ++i) {
    // Tight ID
    // const bool passId = (gconf.year == 2016)? (photons_id_cutBased_Fall17V2_Loose_Bits()[i] >= 3) : (photons_id_cutBased_Fall17V2_Loose_Bits()[i] & 0b1111);
    const bool passId = ((photons_id_cutBased_Fall17V2_Loose_Bits()[i] & 0b1111) == 0b1111);

    if (photons_pt()[i] < k_minPt_photon or not passId)
      continue;

    // Only consider photons in the barrel
    if (photons_eta()[i] > 2.5)
      continue;

    // gamma.SetPtEtaPhiM(Photon_pt()[i], Photon_eta()[i], Photon_phi()[i], 0.);
    photons.emplace_back(i);
  }

  // Make sure the collection is ordered in pt
  std::sort(photons.begin(), photons.end(), [](int a, int b){ return photons_pt()[a] > photons_pt()[b]; });

  return photons;
}


float getJetCorrectionFactorFromFile(int jetidx, LorentzVector injet, bool applyJER) {

    double corrFactor = 1.;
    // const double corrPt = injet.Pt();  // pt with nominal JEC

    /*
    // Evaluate JEC uncertainty
    if (syst_ == Syst::JEC) {
      jecUncProvider_->setJetEta(jet.Eta());
      jecUncProvider_->setJetPt(corrPt);
      const double uncertainty = jecUncProvider_->getUncertainty(true);

      if (systDirection_ == SystDirection::Up)
        corrFactor *= (1. + uncertainty);
      else
        corrFactor *= (1. - uncertainty);
    }

    // Apply JER smearing. Corresponding correction factor is always evaluated
    // with nominal JEC applied, even if a JEC variation has been requested.
    // This aligns with how the JER smearing is usually applied in CMSSW.
    if (isSim_) {
      // Relative jet pt resolution in simulation
      double const ptResolution = jerProvider_->getResolution(
        {{JME::Binning::JetPt, corrPt}, {JME::Binning::JetEta, jet.Eta()},
         {JME::Binning::Rho, *puRho_}});

      // Find data-to-simulation scale factor
      Variation jerDirection;

      if (syst_ == Syst::JER) {
        if (systDirection_ == SystDirection::Up)
          jerDirection = Variation::UP;
        else
          jerDirection = Variation::DOWN;
      } else
        jerDirection = Variation::NOMINAL;

      double const jerSF = jerSFProvider_->getScaleFactor(
        {{JME::Binning::JetEta, jet.Eta()}}, jerDirection);


      // Depending on the presence of a matching generator-level jet, perform
      // deterministic or stochastic smearing [1]
      // [1] https://twiki.cern.ch/twiki/bin/view/CMS/JetResolution?rev=71#Smearing_procedures
      GenJet const *genJet = FindGenMatch(jet, ptResolution);


      if (genJet) {
        double const jerFactor = 1. +
          (jerSF - 1.) * (corrPt - genJet->p4.Pt()) / corrPt;
        corrFactor *= jerFactor;
      } else {
        double const jerFactor = 1. + randomGenerator_.Gaus(0., ptResolution) *
          std::sqrt(std::max(std::pow(jerSF, 2) - 1., 0.));
        corrFactor *= jerFactor;
      }
    }

    LorentzVector const originalP4 = jet;
    jet *= corrFactor;

    // Propagate the change in jet momentum for the use in ptmiss. The type 1
    // correction to ptmiss has been applied using jets with originalP4.Pt()
    // above 15 GeV. After the additional corrections applied above, the set of
    // jets with pt > 15 GeV has changed. However, without the access to raw
    // momenta of jets, it is not possible to undo the contribution to the
    // type 1 correction from jets whose pt has changed from above to below
    // 15 GeV. For simplicity, use the same set of jets as in the original
    // type 1 correction (modulus the different jet ID).

    // if (originalP4.Pt() > 15.)
    //   AddMomentumShift(originalP4, jet);
    */
    return corrFactor;
}

bool PassVBFcuts(const vector<int> &selJets, const LorentzVector &boson) {
  if (selJets.size() < 2) return false;

  float etamax = ak4jets_eta()[selJets[0]];
  float etamin = ak4jets_eta()[selJets[1]];
  if (etamax < etamin) std::swap(etamin, etamax);

  bool centralJetVeto = false;
  if (selJets.size() > 2) {
    for (unsigned int i = 2; i < selJets.size(); i++) {
      if (ak4jets_eta()[selJets[i]] > etamin && ak4jets_eta()[selJets[i]] < etamax)
        centralJetVeto = true;
    }
  }
  bool centralBoson = (boson.Eta() > etamin && boson.Eta() < etamax);
  bool passDeltaEta = ((etamax - etamin) > 4.);

  LorentzVector jet1(ak4jets_pt()[selJets[0]], ak4jets_eta()[selJets[0]], ak4jets_phi()[selJets[0]], ak4jets_mass()[selJets[0]]);
  LorentzVector jet2(ak4jets_pt()[selJets[1]], ak4jets_eta()[selJets[1]], ak4jets_phi()[selJets[1]], ak4jets_mass()[selJets[1]]);
  bool passMjj = ((jet1 + jet2).M() > 500);

  if (!centralJetVeto && centralBoson && passDeltaEta && passMjj) return true;

  return false;
}

vector<int> getJetIdxs(const vector<int>& mus, const vector<int>& els, const vector<int>& phs, bool reapplyJEC, bool isSim) {
  vector<int> jets;

  for (unsigned j = 0; j < ak4jets_pt().size(); ++j) {
    if (not ak4jets_pass_tightId()[j])  // bit1 always false in 2017 since it does not exist
      continue;

    // LorentzVector jet(ak4jets_pt()[j], ak4jets_eta()[j], ak4jets_phi()[j], ak4jets_mass()[j]);

    // Perform angular cleaning w.r.t. recognized leptons and photons
    for (int l : mus) {
      if (isCloseObject(ak4jets_eta()[j], ak4jets_phi()[j], muons_eta()[l], muons_phi()[l], 0.4))
        goto end_of_loop_jets;
    }
    for (int l : els) {
      if (isCloseObject(ak4jets_eta()[j], ak4jets_phi()[j], electrons_eta()[l], electrons_phi()[l], 0.4))
        goto end_of_loop_jets;
    }
    for (int ph : phs) {
      if (isCloseObject(ak4jets_eta()[j], ak4jets_phi()[j], photons_eta()[ph], photons_phi()[ph], 0.4))
        goto end_of_loop_jets;
    }

    // jet.bTag = ak4jets_btagDeepFlavB()[j];
    // if (!gconf.is_data)
    //   jet.hadronFlavour = ak4jets_hadronFlavour()[j];
    // else
    //   jet.hadronFlavour = 0;

    // if (reapplyJEC)
    //   jet *= getJetCorrectionFactorFromFile();

    // Kinematical cuts for jets to be stored in the collection
    if (ak4jets_pt()[j] < k_minPt_jet or fabs(ak4jets_eta()[j]) > k_maxAbsEta_jet)
      continue;

    jets.emplace_back(j);

 end_of_loop_jets:;
  }

  // Make sure jets are sorted in pt
  // std::sort(jets.begin(), jets.end(), [](auto a, auto b){ return a.Pt() > b.Pt(); });
  std::sort(jets.begin(), jets.end(), [](int a, int b){ return ak4jets_pt()[a] > ak4jets_pt()[b]; });

  return jets;
}

bool ZZ2l2vPrunerCuts() {
  double const minLepPt = 20.;
  std::vector<LorentzVector> leptonMomenta;

  for (unsigned i = 0; i < electrons_pt().size(); ++i) {
    if (electrons_pt()[i]*electrons_scale_smear_corr()[i] < minLepPt or not ((electrons_id_cutBased_Fall17V2_Tight_Bits()[i] & 1023) == 1023 /* fails tight working point */))
      continue;

    LorentzVector p4(electrons_pt()[i], electrons_eta()[i], electrons_phi()[i], electrons_mass()[i]);
    p4 *= electrons_scale_smear_corr()[i];
    leptonMomenta.emplace_back(p4);
  }

  for (unsigned i = 0; i < muons_pt().size(); ++i) {
    if (muons_pt()[i]*muons_scale_smear_pt_corr()[i] < 0.9 * minLepPt or not (muons_POG_selector_bits()[i] & (1UL << 3 /* tightID */)))
      continue;

    LorentzVector p4(muons_pt()[i]*muons_scale_smear_pt_corr()[i], muons_eta()[i], muons_phi()[i], muons_mass()[i]);
    leptonMomenta.emplace_back(p4);
  }

  // Select events with at least two good leptons, regardless of their flavours.
  if (leptonMomenta.size() < 2) return false;

  for (int i = 0; i < int(leptonMomenta.size()) - 1; ++i) {
    for (int j = i + 1; j < int(leptonMomenta.size()); ++j) {
      const LorentzVector p4Z = leptonMomenta[i] + leptonMomenta[j];
      if (p4Z.M() > 50. and p4Z.Pt() > 50.)
        return true;
    }
  }

  return false;
}

bool InstrMETPrunerCuts() {

  for (unsigned i = 0; i < photons_pt().size(); ++i) {
    // Tight ID
    if ((photons_pt()[i] * photons_scale_smear_corr()[i]) < 50) continue;

    const bool passId = ((photons_id_cutBased_Fall17V2_Tight_Bits()[i] & 0b1111) == 0b1111);

    if (!passId) continue;
    // Only consider photons in the barrel
    // if (photons_eta()[i] > 2.5) continue;
    return true;
  }

  return false;
}
