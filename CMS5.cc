#include "CMS5.h"
CMS5 cms5;

void CMS5::Init(TTree *tree) {
  tree->SetMakeClass(1);
  ak8jets_partonFlavour_branch = 0;
  if (tree->GetBranch("ak8jets_partonFlavour") != 0) {
    ak8jets_partonFlavour_branch = tree->GetBranch("ak8jets_partonFlavour");
    if (ak8jets_partonFlavour_branch) { ak8jets_partonFlavour_branch->SetAddress(&ak8jets_partonFlavour_); }
  }
  triggerObjects_type_branch = 0;
  if (tree->GetBranch("triggerObjects_type") != 0) {
    triggerObjects_type_branch = tree->GetBranch("triggerObjects_type");
    if (triggerObjects_type_branch) { triggerObjects_type_branch->SetAddress(&triggerObjects_type_); }
  }
  electrons_eta_branch = 0;
  if (tree->GetBranch("electrons_eta") != 0) {
    electrons_eta_branch = tree->GetBranch("electrons_eta");
    if (electrons_eta_branch) { electrons_eta_branch->SetAddress(&electrons_eta_); }
  }
  KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_branch = 0;
  if (tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp") != 0) {
    KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_branch = tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp");
    if (KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_branch) { KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_branch->SetAddress(&KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_); }
  }
  triggerObjects_associatedTriggers_branch = 0;
  if (tree->GetBranch("triggerObjects_associatedTriggers") != 0) {
    triggerObjects_associatedTriggers_branch = tree->GetBranch("triggerObjects_associatedTriggers");
    if (triggerObjects_associatedTriggers_branch) { triggerObjects_associatedTriggers_branch->SetAddress(&triggerObjects_associatedTriggers_); }
  }
  electrons_pfIso04_sum_charged_nofsr_branch = 0;
  if (tree->GetBranch("electrons_pfIso04_sum_charged_nofsr") != 0) {
    electrons_pfIso04_sum_charged_nofsr_branch = tree->GetBranch("electrons_pfIso04_sum_charged_nofsr");
    if (electrons_pfIso04_sum_charged_nofsr_branch) { electrons_pfIso04_sum_charged_nofsr_branch->SetAddress(&electrons_pfIso04_sum_charged_nofsr_); }
  }
  lheparticles_pz_branch = 0;
  if (tree->GetBranch("lheparticles_pz") != 0) {
    lheparticles_pz_branch = tree->GetBranch("lheparticles_pz");
    if (lheparticles_pz_branch) { lheparticles_pz_branch->SetAddress(&lheparticles_pz_); }
  }
  ak4jets_pass_tightId_branch = 0;
  if (tree->GetBranch("ak4jets_pass_tightId") != 0) {
    ak4jets_pass_tightId_branch = tree->GetBranch("ak4jets_pass_tightId");
    if (ak4jets_pass_tightId_branch) { ak4jets_pass_tightId_branch->SetAddress(&ak4jets_pass_tightId_); }
  }
  lheparticles_py_branch = 0;
  if (tree->GetBranch("lheparticles_py") != 0) {
    lheparticles_py_branch = tree->GetBranch("lheparticles_py");
    if (lheparticles_py_branch) { lheparticles_py_branch->SetAddress(&lheparticles_py_); }
  }
  electrons_id_cutBased_Fall17V2_Veto_Bits_branch = 0;
  if (tree->GetBranch("electrons_id_cutBased_Fall17V2_Veto_Bits") != 0) {
    electrons_id_cutBased_Fall17V2_Veto_Bits_branch = tree->GetBranch("electrons_id_cutBased_Fall17V2_Veto_Bits");
    if (electrons_id_cutBased_Fall17V2_Veto_Bits_branch) { electrons_id_cutBased_Fall17V2_Veto_Bits_branch->SetAddress(&electrons_id_cutBased_Fall17V2_Veto_Bits_); }
  }
  pfmet_metPhi_Nominal_branch = 0;
  if (tree->GetBranch("pfmet_metPhi_Nominal") != 0) {
    pfmet_metPhi_Nominal_branch = tree->GetBranch("pfmet_metPhi_Nominal");
    if (pfmet_metPhi_Nominal_branch) { pfmet_metPhi_Nominal_branch->SetAddress(&pfmet_metPhi_Nominal_); }
  }
  xsec_branch = 0;
  if (tree->GetBranch("xsec") != 0) {
    xsec_branch = tree->GetBranch("xsec");
    if (xsec_branch) { xsec_branch->SetAddress(&xsec_); }
  }
  pfmet_met_UnclusteredEnDn_branch = 0;
  if (tree->GetBranch("pfmet_met_UnclusteredEnDn") != 0) {
    pfmet_met_UnclusteredEnDn_branch = tree->GetBranch("pfmet_met_UnclusteredEnDn");
    if (pfmet_met_UnclusteredEnDn_branch) { pfmet_met_UnclusteredEnDn_branch->SetAddress(&pfmet_met_UnclusteredEnDn_); }
  }
  p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_); }
  }
  electrons_miniIso_comb_nofsr_uncorrected_branch = 0;
  if (tree->GetBranch("electrons_miniIso_comb_nofsr_uncorrected") != 0) {
    electrons_miniIso_comb_nofsr_uncorrected_branch = tree->GetBranch("electrons_miniIso_comb_nofsr_uncorrected");
    if (electrons_miniIso_comb_nofsr_uncorrected_branch) { electrons_miniIso_comb_nofsr_uncorrected_branch->SetAddress(&electrons_miniIso_comb_nofsr_uncorrected_); }
  }
  p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_); }
  }
  p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM");
    if (p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_branch) { p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_); }
  }
  isotracks_is_pfCand_branch = 0;
  if (tree->GetBranch("isotracks_is_pfCand") != 0) {
    isotracks_is_pfCand_branch = tree->GetBranch("isotracks_is_pfCand");
    if (isotracks_is_pfCand_branch) { isotracks_is_pfCand_branch->SetAddress(&isotracks_is_pfCand_); }
  }
  metfilter_CSCTightHaloFilter_branch = 0;
  if (tree->GetBranch("metfilter_CSCTightHaloFilter") != 0) {
    metfilter_CSCTightHaloFilter_branch = tree->GetBranch("metfilter_CSCTightHaloFilter");
    if (metfilter_CSCTightHaloFilter_branch) { metfilter_CSCTightHaloFilter_branch->SetAddress(&metfilter_CSCTightHaloFilter_); }
  }
  muons_pt_branch = 0;
  if (tree->GetBranch("muons_pt") != 0) {
    muons_pt_branch = tree->GetBranch("muons_pt");
    if (muons_pt_branch) { muons_pt_branch->SetAddress(&muons_pt_); }
  }
  electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose") != 0) {
    electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose");
    if (electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_branch) { electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_branch->SetAddress(&electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_); }
  }
  photons_scale_smear_corr_branch = 0;
  if (tree->GetBranch("photons_scale_smear_corr") != 0) {
    photons_scale_smear_corr_branch = tree->GetBranch("photons_scale_smear_corr");
    if (photons_scale_smear_corr_branch) { photons_scale_smear_corr_branch->SetAddress(&photons_scale_smear_corr_); }
  }
  LHEweight_AsMZ_Dn_default_branch = 0;
  if (tree->GetBranch("LHEweight_AsMZ_Dn_default") != 0) {
    LHEweight_AsMZ_Dn_default_branch = tree->GetBranch("LHEweight_AsMZ_Dn_default");
    if (LHEweight_AsMZ_Dn_default_branch) { LHEweight_AsMZ_Dn_default_branch->SetAddress(&LHEweight_AsMZ_Dn_default_); }
  }
  electrons_mass_branch = 0;
  if (tree->GetBranch("electrons_mass") != 0) {
    electrons_mass_branch = tree->GetBranch("electrons_mass");
    if (electrons_mass_branch) { electrons_mass_branch->SetAddress(&electrons_mass_); }
  }
  pfmet_metPhi_JECDn_branch = 0;
  if (tree->GetBranch("pfmet_metPhi_JECDn") != 0) {
    pfmet_metPhi_JECDn_branch = tree->GetBranch("pfmet_metPhi_JECDn");
    if (pfmet_metPhi_JECDn_branch) { pfmet_metPhi_JECDn_branch->SetAddress(&pfmet_metPhi_JECDn_); }
  }
  ak4jets_JERDn_branch = 0;
  if (tree->GetBranch("ak4jets_JERDn") != 0) {
    ak4jets_JERDn_branch = tree->GetBranch("ak4jets_JERDn");
    if (ak4jets_JERDn_branch) { ak4jets_JERDn_branch->SetAddress(&ak4jets_JERDn_); }
  }
  xsec_lhe_branch = 0;
  if (tree->GetBranch("xsec_lhe") != 0) {
    xsec_lhe_branch = tree->GetBranch("xsec_lhe");
    if (xsec_lhe_branch) { xsec_lhe_branch->SetAddress(&xsec_lhe_); }
  }
  ak4jets_partonFlavour_branch = 0;
  if (tree->GetBranch("ak4jets_partonFlavour") != 0) {
    ak4jets_partonFlavour_branch = tree->GetBranch("ak4jets_partonFlavour");
    if (ak4jets_partonFlavour_branch) { ak4jets_partonFlavour_branch->SetAddress(&ak4jets_partonFlavour_); }
  }
  ak4jets_eta_branch = 0;
  if (tree->GetBranch("ak4jets_eta") != 0) {
    ak4jets_eta_branch = tree->GetBranch("ak4jets_eta");
    if (ak4jets_eta_branch) { ak4jets_eta_branch->SetAddress(&ak4jets_eta_); }
  }
  ak4jets_totalMultiplicity_branch = 0;
  if (tree->GetBranch("ak4jets_totalMultiplicity") != 0) {
    ak4jets_totalMultiplicity_branch = tree->GetBranch("ak4jets_totalMultiplicity");
    if (ak4jets_totalMultiplicity_branch) { ak4jets_totalMultiplicity_branch->SetAddress(&ak4jets_totalMultiplicity_); }
  }
  puppimet_metPhi_JECDn_branch = 0;
  if (tree->GetBranch("puppimet_metPhi_JECDn") != 0) {
    puppimet_metPhi_JECDn_branch = tree->GetBranch("puppimet_metPhi_JECDn");
    if (puppimet_metPhi_JECDn_branch) { puppimet_metPhi_JECDn_branch->SetAddress(&puppimet_metPhi_JECDn_); }
  }
  electrons_pt_branch = 0;
  if (tree->GetBranch("electrons_pt") != 0) {
    electrons_pt_branch = tree->GetBranch("electrons_pt");
    if (electrons_pt_branch) { electrons_pt_branch->SetAddress(&electrons_pt_); }
  }
  PythiaWeight_fsr_muR0p5_branch = 0;
  if (tree->GetBranch("PythiaWeight_fsr_muR0p5") != 0) {
    PythiaWeight_fsr_muR0p5_branch = tree->GetBranch("PythiaWeight_fsr_muR0p5");
    if (PythiaWeight_fsr_muR0p5_branch) { PythiaWeight_fsr_muR0p5_branch->SetAddress(&PythiaWeight_fsr_muR0p5_); }
  }
  ak8jets_mass_branch = 0;
  if (tree->GetBranch("ak8jets_mass") != 0) {
    ak8jets_mass_branch = tree->GetBranch("ak8jets_mass");
    if (ak8jets_mass_branch) { ak8jets_mass_branch->SetAddress(&ak8jets_mass_); }
  }
  KFactor_QCD_NNLO_ggZZ_Sig_AsUp_branch = 0;
  if (tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_AsUp") != 0) {
    KFactor_QCD_NNLO_ggZZ_Sig_AsUp_branch = tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_AsUp");
    if (KFactor_QCD_NNLO_ggZZ_Sig_AsUp_branch) { KFactor_QCD_NNLO_ggZZ_Sig_AsUp_branch->SetAddress(&KFactor_QCD_NNLO_ggZZ_Sig_AsUp_); }
  }
  muons_pull_dxdz_noArb_DT_branch = 0;
  if (tree->GetBranch("muons_pull_dxdz_noArb_DT") != 0) {
    muons_pull_dxdz_noArb_DT_branch = tree->GetBranch("muons_pull_dxdz_noArb_DT");
    if (muons_pull_dxdz_noArb_DT_branch) { muons_pull_dxdz_noArb_DT_branch->SetAddress(&muons_pull_dxdz_noArb_DT_); }
  }
  ak8jets_totalMultiplicity_branch = 0;
  if (tree->GetBranch("ak8jets_totalMultiplicity") != 0) {
    ak8jets_totalMultiplicity_branch = tree->GetBranch("ak8jets_totalMultiplicity");
    if (ak8jets_totalMultiplicity_branch) { ak8jets_totalMultiplicity_branch->SetAddress(&ak8jets_totalMultiplicity_); }
  }
  ak8jets_pass_looseId_branch = 0;
  if (tree->GetBranch("ak8jets_pass_looseId") != 0) {
    ak8jets_pass_looseId_branch = tree->GetBranch("ak8jets_pass_looseId");
    if (ak8jets_pass_looseId_branch) { ak8jets_pass_looseId_branch->SetAddress(&ak8jets_pass_looseId_); }
  }
  n_shower_gluons_to_bottom_branch = 0;
  if (tree->GetBranch("n_shower_gluons_to_bottom") != 0) {
    n_shower_gluons_to_bottom_branch = tree->GetBranch("n_shower_gluons_to_bottom");
    if (n_shower_gluons_to_bottom_branch) { n_shower_gluons_to_bottom_branch->SetAddress(&n_shower_gluons_to_bottom_); }
  }
  p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_); }
  }
  isotracks_fromPV_branch = 0;
  if (tree->GetBranch("isotracks_fromPV") != 0) {
    isotracks_fromPV_branch = tree->GetBranch("isotracks_fromPV");
    if (isotracks_fromPV_branch) { isotracks_fromPV_branch->SetAddress(&isotracks_fromPV_); }
  }
  ak4jets_pt_branch = 0;
  if (tree->GetBranch("ak4jets_pt") != 0) {
    ak4jets_pt_branch = tree->GetBranch("ak4jets_pt");
    if (ak4jets_pt_branch) { ak4jets_pt_branch->SetAddress(&ak4jets_pt_); }
  }
  p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_); }
  }
  lheparticles_E_branch = 0;
  if (tree->GetBranch("lheparticles_E") != 0) {
    lheparticles_E_branch = tree->GetBranch("lheparticles_E");
    if (lheparticles_E_branch) { lheparticles_E_branch->SetAddress(&lheparticles_E_); }
  }
  electrons_id_MVA_Fall17V2_NoIso_pass_wp80_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_NoIso_pass_wp80") != 0) {
    electrons_id_MVA_Fall17V2_NoIso_pass_wp80_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_NoIso_pass_wp80");
    if (electrons_id_MVA_Fall17V2_NoIso_pass_wp80_branch) { electrons_id_MVA_Fall17V2_NoIso_pass_wp80_branch->SetAddress(&electrons_id_MVA_Fall17V2_NoIso_pass_wp80_); }
  }
  isotracks_pfIso03_comb_nofsr_branch = 0;
  if (tree->GetBranch("isotracks_pfIso03_comb_nofsr") != 0) {
    isotracks_pfIso03_comb_nofsr_branch = tree->GetBranch("isotracks_pfIso03_comb_nofsr");
    if (isotracks_pfIso03_comb_nofsr_branch) { isotracks_pfIso03_comb_nofsr_branch->SetAddress(&isotracks_pfIso03_comb_nofsr_); }
  }
  vtxs_is_fake_branch = 0;
  if (tree->GetBranch("vtxs_is_fake") != 0) {
    vtxs_is_fake_branch = tree->GetBranch("vtxs_is_fake");
    if (vtxs_is_fake_branch) { vtxs_is_fake_branch->SetAddress(&vtxs_is_fake_); }
  }
  LuminosityBlock_branch = 0;
  if (tree->GetBranch("LuminosityBlock") != 0) {
    LuminosityBlock_branch = tree->GetBranch("LuminosityBlock");
    if (LuminosityBlock_branch) { LuminosityBlock_branch->SetAddress(&LuminosityBlock_); }
  }
  ak8jets_JERDn_branch = 0;
  if (tree->GetBranch("ak8jets_JERDn") != 0) {
    ak8jets_JERDn_branch = tree->GetBranch("ak8jets_JERDn");
    if (ak8jets_JERDn_branch) { ak8jets_JERDn_branch->SetAddress(&ak8jets_JERDn_); }
  }
  qscale_branch = 0;
  if (tree->GetBranch("qscale") != 0) {
    qscale_branch = tree->GetBranch("qscale");
    if (qscale_branch) { qscale_branch->SetAddress(&qscale_); }
  }
  p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_); }
  }
  isotracks_miniIso_comb_nofsr_branch = 0;
  if (tree->GetBranch("isotracks_miniIso_comb_nofsr") != 0) {
    isotracks_miniIso_comb_nofsr_branch = tree->GetBranch("isotracks_miniIso_comb_nofsr");
    if (isotracks_miniIso_comb_nofsr_branch) { isotracks_miniIso_comb_nofsr_branch->SetAddress(&isotracks_miniIso_comb_nofsr_); }
  }
  muons_pfIso03_sum_charged_nofsr_branch = 0;
  if (tree->GetBranch("muons_pfIso03_sum_charged_nofsr") != 0) {
    muons_pfIso03_sum_charged_nofsr_branch = tree->GetBranch("muons_pfIso03_sum_charged_nofsr");
    if (muons_pfIso03_sum_charged_nofsr_branch) { muons_pfIso03_sum_charged_nofsr_branch->SetAddress(&muons_pfIso03_sum_charged_nofsr_); }
  }
  p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_); }
  }
  electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_HZZRun2Legacy_Iso_Cat") != 0) {
    electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch = tree->GetBranch("electrons_id_MVA_HZZRun2Legacy_Iso_Cat");
    if (electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch) { electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch->SetAddress(&electrons_id_MVA_HZZRun2Legacy_Iso_Cat_); }
  }
  isotracks_pfIso03_em_branch = 0;
  if (tree->GetBranch("isotracks_pfIso03_em") != 0) {
    isotracks_pfIso03_em_branch = tree->GetBranch("isotracks_pfIso03_em");
    if (isotracks_pfIso03_em_branch) { isotracks_pfIso03_em_branch->SetAddress(&isotracks_pfIso03_em_); }
  }
  p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_); }
  }
  vtxs_is_good_branch = 0;
  if (tree->GetBranch("vtxs_is_good") != 0) {
    vtxs_is_good_branch = tree->GetBranch("vtxs_is_good");
    if (vtxs_is_good_branch) { vtxs_is_good_branch->SetAddress(&vtxs_is_good_); }
  }
  electrons_scale_smear_corr_smear_totalDn_branch = 0;
  if (tree->GetBranch("electrons_scale_smear_corr_smear_totalDn") != 0) {
    electrons_scale_smear_corr_smear_totalDn_branch = tree->GetBranch("electrons_scale_smear_corr_smear_totalDn");
    if (electrons_scale_smear_corr_smear_totalDn_branch) { electrons_scale_smear_corr_smear_totalDn_branch->SetAddress(&electrons_scale_smear_corr_smear_totalDn_); }
  }
  muons_pfIso04_comb_nofsr_branch = 0;
  if (tree->GetBranch("muons_pfIso04_comb_nofsr") != 0) {
    muons_pfIso04_comb_nofsr_branch = tree->GetBranch("muons_pfIso04_comb_nofsr");
    if (muons_pfIso04_comb_nofsr_branch) { muons_pfIso04_comb_nofsr_branch->SetAddress(&muons_pfIso04_comb_nofsr_); }
  }
  LHECandMass_branch = 0;
  if (tree->GetBranch("LHECandMass") != 0) {
    LHECandMass_branch = tree->GetBranch("LHECandMass");
    if (LHECandMass_branch) { LHECandMass_branch->SetAddress(&LHECandMass_); }
  }
  triggerObjects_passedTriggers_branch = 0;
  if (tree->GetBranch("triggerObjects_passedTriggers") != 0) {
    triggerObjects_passedTriggers_branch = tree->GetBranch("triggerObjects_passedTriggers");
    if (triggerObjects_passedTriggers_branch) { triggerObjects_passedTriggers_branch->SetAddress(&triggerObjects_passedTriggers_); }
  }
  metfilter_goodVertices_branch = 0;
  if (tree->GetBranch("metfilter_goodVertices") != 0) {
    metfilter_goodVertices_branch = tree->GetBranch("metfilter_goodVertices");
    if (metfilter_goodVertices_branch) { metfilter_goodVertices_branch->SetAddress(&metfilter_goodVertices_); }
  }
  muons_pfIso04_sum_charged_nofsr_branch = 0;
  if (tree->GetBranch("muons_pfIso04_sum_charged_nofsr") != 0) {
    muons_pfIso04_sum_charged_nofsr_branch = tree->GetBranch("muons_pfIso04_sum_charged_nofsr");
    if (muons_pfIso04_sum_charged_nofsr_branch) { muons_pfIso04_sum_charged_nofsr_branch->SetAddress(&muons_pfIso04_sum_charged_nofsr_); }
  }
  pfmet_met_JECUp_branch = 0;
  if (tree->GetBranch("pfmet_met_JECUp") != 0) {
    pfmet_met_JECUp_branch = tree->GetBranch("pfmet_met_JECUp");
    if (pfmet_met_JECUp_branch) { pfmet_met_JECUp_branch->SetAddress(&pfmet_met_JECUp_); }
  }
  ak4jets_JECDn_branch = 0;
  if (tree->GetBranch("ak4jets_JECDn") != 0) {
    ak4jets_JECDn_branch = tree->GetBranch("ak4jets_JECDn");
    if (ak4jets_JECDn_branch) { ak4jets_JECDn_branch->SetAddress(&ak4jets_JECDn_); }
  }
  electrons_pfIso03_comb_nofsr_branch = 0;
  if (tree->GetBranch("electrons_pfIso03_comb_nofsr") != 0) {
    electrons_pfIso03_comb_nofsr_branch = tree->GetBranch("electrons_pfIso03_comb_nofsr");
    if (electrons_pfIso03_comb_nofsr_branch) { electrons_pfIso03_comb_nofsr_branch->SetAddress(&electrons_pfIso03_comb_nofsr_); }
  }
  photons_pfIso_comb_branch = 0;
  if (tree->GetBranch("photons_pfIso_comb") != 0) {
    photons_pfIso_comb_branch = tree->GetBranch("photons_pfIso_comb");
    if (photons_pfIso_comb_branch) { photons_pfIso_comb_branch->SetAddress(&photons_pfIso_comb_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_); }
  }
  metfilter_trkPOG_toomanystripclus53X_branch = 0;
  if (tree->GetBranch("metfilter_trkPOG_toomanystripclus53X") != 0) {
    metfilter_trkPOG_toomanystripclus53X_branch = tree->GetBranch("metfilter_trkPOG_toomanystripclus53X");
    if (metfilter_trkPOG_toomanystripclus53X_branch) { metfilter_trkPOG_toomanystripclus53X_branch->SetAddress(&metfilter_trkPOG_toomanystripclus53X_); }
  }
  triggerObjects_phi_branch = 0;
  if (tree->GetBranch("triggerObjects_phi") != 0) {
    triggerObjects_phi_branch = tree->GetBranch("triggerObjects_phi");
    if (triggerObjects_phi_branch) { triggerObjects_phi_branch->SetAddress(&triggerObjects_phi_); }
  }
  isotracks_pt_branch = 0;
  if (tree->GetBranch("isotracks_pt") != 0) {
    isotracks_pt_branch = tree->GetBranch("isotracks_pt");
    if (isotracks_pt_branch) { isotracks_pt_branch->SetAddress(&isotracks_pt_); }
  }
  lheparticles_mother1_index_branch = 0;
  if (tree->GetBranch("lheparticles_mother1_index") != 0) {
    lheparticles_mother1_index_branch = tree->GetBranch("lheparticles_mother1_index");
    if (lheparticles_mother1_index_branch) { lheparticles_mother1_index_branch->SetAddress(&lheparticles_mother1_index_); }
  }
  p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM");
    if (p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_branch) { p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_); }
  }
  pfmet_calo_met_branch = 0;
  if (tree->GetBranch("pfmet_calo_met") != 0) {
    pfmet_calo_met_branch = tree->GetBranch("pfmet_calo_met");
    if (pfmet_calo_met_branch) { pfmet_calo_met_branch->SetAddress(&pfmet_calo_met_); }
  }
  muons_pfIso03_comb_nofsr_branch = 0;
  if (tree->GetBranch("muons_pfIso03_comb_nofsr") != 0) {
    muons_pfIso03_comb_nofsr_branch = tree->GetBranch("muons_pfIso03_comb_nofsr");
    if (muons_pfIso03_comb_nofsr_branch) { muons_pfIso03_comb_nofsr_branch->SetAddress(&muons_pfIso03_comb_nofsr_); }
  }
  isotracks_miniIso_db_branch = 0;
  if (tree->GetBranch("isotracks_miniIso_db") != 0) {
    isotracks_miniIso_db_branch = tree->GetBranch("isotracks_miniIso_db");
    if (isotracks_miniIso_db_branch) { isotracks_miniIso_db_branch->SetAddress(&isotracks_miniIso_db_); }
  }
  passCommonSkim_branch = 0;
  if (tree->GetBranch("passCommonSkim") != 0) {
    passCommonSkim_branch = tree->GetBranch("passCommonSkim");
    if (passCommonSkim_branch) { passCommonSkim_branch->SetAddress(&passCommonSkim_); }
  }
  muons_scale_smear_pt_corr_scale_totalUp_branch = 0;
  if (tree->GetBranch("muons_scale_smear_pt_corr_scale_totalUp") != 0) {
    muons_scale_smear_pt_corr_scale_totalUp_branch = tree->GetBranch("muons_scale_smear_pt_corr_scale_totalUp");
    if (muons_scale_smear_pt_corr_scale_totalUp_branch) { muons_scale_smear_pt_corr_scale_totalUp_branch->SetAddress(&muons_scale_smear_pt_corr_scale_totalUp_); }
  }
  isotracks_is_tightTrack_branch = 0;
  if (tree->GetBranch("isotracks_is_tightTrack") != 0) {
    isotracks_is_tightTrack_branch = tree->GetBranch("isotracks_is_tightTrack");
    if (isotracks_is_tightTrack_branch) { isotracks_is_tightTrack_branch->SetAddress(&isotracks_is_tightTrack_); }
  }
  photons_id_cutBased_Fall17V2_Loose_Bits_branch = 0;
  if (tree->GetBranch("photons_id_cutBased_Fall17V2_Loose_Bits") != 0) {
    photons_id_cutBased_Fall17V2_Loose_Bits_branch = tree->GetBranch("photons_id_cutBased_Fall17V2_Loose_Bits");
    if (photons_id_cutBased_Fall17V2_Loose_Bits_branch) { photons_id_cutBased_Fall17V2_Loose_Bits_branch->SetAddress(&photons_id_cutBased_Fall17V2_Loose_Bits_); }
  }
  ak4jets_deepCSVprobbb_branch = 0;
  if (tree->GetBranch("ak4jets_deepCSVprobbb") != 0) {
    ak4jets_deepCSVprobbb_branch = tree->GetBranch("ak4jets_deepCSVprobbb");
    if (ak4jets_deepCSVprobbb_branch) { ak4jets_deepCSVprobbb_branch->SetAddress(&ak4jets_deepCSVprobbb_); }
  }
  pfmet_metShift_px_JERNominal_branch = 0;
  if (tree->GetBranch("pfmet_metShift_px_JERNominal") != 0) {
    pfmet_metShift_px_JERNominal_branch = tree->GetBranch("pfmet_metShift_px_JERNominal");
    if (pfmet_metShift_px_JERNominal_branch) { pfmet_metShift_px_JERNominal_branch->SetAddress(&pfmet_metShift_px_JERNominal_); }
  }
  metfilter_trkPOG_logErrorTooManyClusters_branch = 0;
  if (tree->GetBranch("metfilter_trkPOG_logErrorTooManyClusters") != 0) {
    metfilter_trkPOG_logErrorTooManyClusters_branch = tree->GetBranch("metfilter_trkPOG_logErrorTooManyClusters");
    if (metfilter_trkPOG_logErrorTooManyClusters_branch) { metfilter_trkPOG_logErrorTooManyClusters_branch->SetAddress(&metfilter_trkPOG_logErrorTooManyClusters_); }
  }
  pfmet_met_UnclusteredEnUp_branch = 0;
  if (tree->GetBranch("pfmet_met_UnclusteredEnUp") != 0) {
    pfmet_met_UnclusteredEnUp_branch = tree->GetBranch("pfmet_met_UnclusteredEnUp");
    if (pfmet_met_UnclusteredEnUp_branch) { pfmet_met_UnclusteredEnUp_branch->SetAddress(&pfmet_met_UnclusteredEnUp_); }
  }
  puppimet_met_UnclusteredEnUp_branch = 0;
  if (tree->GetBranch("puppimet_met_UnclusteredEnUp") != 0) {
    puppimet_met_UnclusteredEnUp_branch = tree->GetBranch("puppimet_met_UnclusteredEnUp");
    if (puppimet_met_UnclusteredEnUp_branch) { puppimet_met_UnclusteredEnUp_branch->SetAddress(&puppimet_met_UnclusteredEnUp_); }
  }
  puppimet_metPhi_UnclusteredEnUp_branch = 0;
  if (tree->GetBranch("puppimet_metPhi_UnclusteredEnUp") != 0) {
    puppimet_metPhi_UnclusteredEnUp_branch = tree->GetBranch("puppimet_metPhi_UnclusteredEnUp");
    if (puppimet_metPhi_UnclusteredEnUp_branch) { puppimet_metPhi_UnclusteredEnUp_branch->SetAddress(&puppimet_metPhi_UnclusteredEnUp_); }
  }
  p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_); }
  }
  isotracks_is_highPurityTrack_branch = 0;
  if (tree->GetBranch("isotracks_is_highPurityTrack") != 0) {
    isotracks_is_highPurityTrack_branch = tree->GetBranch("isotracks_is_highPurityTrack");
    if (isotracks_is_highPurityTrack_branch) { isotracks_is_highPurityTrack_branch->SetAddress(&isotracks_is_highPurityTrack_); }
  }
  LHEweight_AsMZ_Up_NNPDF30_branch = 0;
  if (tree->GetBranch("LHEweight_AsMZ_Up_NNPDF30") != 0) {
    LHEweight_AsMZ_Up_NNPDF30_branch = tree->GetBranch("LHEweight_AsMZ_Up_NNPDF30");
    if (LHEweight_AsMZ_Up_NNPDF30_branch) { LHEweight_AsMZ_Up_NNPDF30_branch->SetAddress(&LHEweight_AsMZ_Up_NNPDF30_); }
  }
  triggers_name_branch = 0;
  if (tree->GetBranch("triggers_name") != 0) {
    triggers_name_branch = tree->GetBranch("triggers_name");
    if (triggers_name_branch) { triggers_name_branch->SetAddress(&triggers_name_); }
  }
  puppimet_met_JECDn_branch = 0;
  if (tree->GetBranch("puppimet_met_JECDn") != 0) {
    puppimet_met_JECDn_branch = tree->GetBranch("puppimet_met_JECDn");
    if (puppimet_met_JECDn_branch) { puppimet_met_JECDn_branch->SetAddress(&puppimet_met_JECDn_); }
  }
  electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_pass_wp80") != 0) {
    electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_pass_wp80");
    if (electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch) { electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch->SetAddress(&electrons_id_MVA_Fall17V2_Iso_pass_wp80_); }
  }
  photons_mass_branch = 0;
  if (tree->GetBranch("photons_mass") != 0) {
    photons_mass_branch = tree->GetBranch("photons_mass");
    if (photons_mass_branch) { photons_mass_branch->SetAddress(&photons_mass_); }
  }
  electrons_id_cutBased_Fall17V2_Loose_Bits_branch = 0;
  if (tree->GetBranch("electrons_id_cutBased_Fall17V2_Loose_Bits") != 0) {
    electrons_id_cutBased_Fall17V2_Loose_Bits_branch = tree->GetBranch("electrons_id_cutBased_Fall17V2_Loose_Bits");
    if (electrons_id_cutBased_Fall17V2_Loose_Bits_branch) { electrons_id_cutBased_Fall17V2_Loose_Bits_branch->SetAddress(&electrons_id_cutBased_Fall17V2_Loose_Bits_); }
  }
  electrons_id_MVA_HZZRun2Legacy_Iso_Val_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_HZZRun2Legacy_Iso_Val") != 0) {
    electrons_id_MVA_HZZRun2Legacy_Iso_Val_branch = tree->GetBranch("electrons_id_MVA_HZZRun2Legacy_Iso_Val");
    if (electrons_id_MVA_HZZRun2Legacy_Iso_Val_branch) { electrons_id_MVA_HZZRun2Legacy_Iso_Val_branch->SetAddress(&electrons_id_MVA_HZZRun2Legacy_Iso_Val_); }
  }
  photons_pt_branch = 0;
  if (tree->GetBranch("photons_pt") != 0) {
    photons_pt_branch = tree->GetBranch("photons_pt");
    if (photons_pt_branch) { photons_pt_branch->SetAddress(&photons_pt_); }
  }
  ak8jets_pass_tightId_branch = 0;
  if (tree->GetBranch("ak8jets_pass_tightId") != 0) {
    ak8jets_pass_tightId_branch = tree->GetBranch("ak8jets_pass_tightId");
    if (ak8jets_pass_tightId_branch) { ak8jets_pass_tightId_branch->SetAddress(&ak8jets_pass_tightId_); }
  }
  KFactor_QCD_NNLO_ggZZ_Sig_Nominal_branch = 0;
  if (tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_Nominal") != 0) {
    KFactor_QCD_NNLO_ggZZ_Sig_Nominal_branch = tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_Nominal");
    if (KFactor_QCD_NNLO_ggZZ_Sig_Nominal_branch) { KFactor_QCD_NNLO_ggZZ_Sig_Nominal_branch->SetAddress(&KFactor_QCD_NNLO_ggZZ_Sig_Nominal_); }
  }
  metfilter_CSCTightHaloTrkMuUnvetoFilter_branch = 0;
  if (tree->GetBranch("metfilter_CSCTightHaloTrkMuUnvetoFilter") != 0) {
    metfilter_CSCTightHaloTrkMuUnvetoFilter_branch = tree->GetBranch("metfilter_CSCTightHaloTrkMuUnvetoFilter");
    if (metfilter_CSCTightHaloTrkMuUnvetoFilter_branch) { metfilter_CSCTightHaloTrkMuUnvetoFilter_branch->SetAddress(&metfilter_CSCTightHaloTrkMuUnvetoFilter_); }
  }
  electrons_miniIso_comb_nofsr_branch = 0;
  if (tree->GetBranch("electrons_miniIso_comb_nofsr") != 0) {
    electrons_miniIso_comb_nofsr_branch = tree->GetBranch("electrons_miniIso_comb_nofsr");
    if (electrons_miniIso_comb_nofsr_branch) { electrons_miniIso_comb_nofsr_branch->SetAddress(&electrons_miniIso_comb_nofsr_); }
  }
  muons_pull_dxdz_noArb_CSC_branch = 0;
  if (tree->GetBranch("muons_pull_dxdz_noArb_CSC") != 0) {
    muons_pull_dxdz_noArb_CSC_branch = tree->GetBranch("muons_pull_dxdz_noArb_CSC");
    if (muons_pull_dxdz_noArb_CSC_branch) { muons_pull_dxdz_noArb_CSC_branch->SetAddress(&muons_pull_dxdz_noArb_CSC_); }
  }
  metfilter_globalTightHalo2016Filter_branch = 0;
  if (tree->GetBranch("metfilter_globalTightHalo2016Filter") != 0) {
    metfilter_globalTightHalo2016Filter_branch = tree->GetBranch("metfilter_globalTightHalo2016Filter");
    if (metfilter_globalTightHalo2016Filter_branch) { metfilter_globalTightHalo2016Filter_branch->SetAddress(&metfilter_globalTightHalo2016Filter_); }
  }
  p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM");
    if (p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_branch) { p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_); }
  }
  ak8jets_pass_leptonVetoId_branch = 0;
  if (tree->GetBranch("ak8jets_pass_leptonVetoId") != 0) {
    ak8jets_pass_leptonVetoId_branch = tree->GetBranch("ak8jets_pass_leptonVetoId");
    if (ak8jets_pass_leptonVetoId_branch) { ak8jets_pass_leptonVetoId_branch->SetAddress(&ak8jets_pass_leptonVetoId_); }
  }
  ak4jets_pass_looseId_branch = 0;
  if (tree->GetBranch("ak4jets_pass_looseId") != 0) {
    ak4jets_pass_looseId_branch = tree->GetBranch("ak4jets_pass_looseId");
    if (ak4jets_pass_looseId_branch) { ak4jets_pass_looseId_branch->SetAddress(&ak4jets_pass_looseId_); }
  }
  triggerObjects_pt_branch = 0;
  if (tree->GetBranch("triggerObjects_pt") != 0) {
    triggerObjects_pt_branch = tree->GetBranch("triggerObjects_pt");
    if (triggerObjects_pt_branch) { triggerObjects_pt_branch->SetAddress(&triggerObjects_pt_); }
  }
  metfilter_globalSuperTightHalo2016Filter_branch = 0;
  if (tree->GetBranch("metfilter_globalSuperTightHalo2016Filter") != 0) {
    metfilter_globalSuperTightHalo2016Filter_branch = tree->GetBranch("metfilter_globalSuperTightHalo2016Filter");
    if (metfilter_globalSuperTightHalo2016Filter_branch) { metfilter_globalSuperTightHalo2016Filter_branch->SetAddress(&metfilter_globalSuperTightHalo2016Filter_); }
  }
  muons_dxy_bestTrack_firstPV_branch = 0;
  if (tree->GetBranch("muons_dxy_bestTrack_firstPV") != 0) {
    muons_dxy_bestTrack_firstPV_branch = tree->GetBranch("muons_dxy_bestTrack_firstPV");
    if (muons_dxy_bestTrack_firstPV_branch) { muons_dxy_bestTrack_firstPV_branch->SetAddress(&muons_dxy_bestTrack_firstPV_); }
  }
  metfilter_HcalStripHaloFilter_branch = 0;
  if (tree->GetBranch("metfilter_HcalStripHaloFilter") != 0) {
    metfilter_HcalStripHaloFilter_branch = tree->GetBranch("metfilter_HcalStripHaloFilter");
    if (metfilter_HcalStripHaloFilter_branch) { metfilter_HcalStripHaloFilter_branch->SetAddress(&metfilter_HcalStripHaloFilter_); }
  }
  p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_); }
  }
  electrons_miniIso_sum_neutral_nofsr_old_branch = 0;
  if (tree->GetBranch("electrons_miniIso_sum_neutral_nofsr_old") != 0) {
    electrons_miniIso_sum_neutral_nofsr_old_branch = tree->GetBranch("electrons_miniIso_sum_neutral_nofsr_old");
    if (electrons_miniIso_sum_neutral_nofsr_old_branch) { electrons_miniIso_sum_neutral_nofsr_old_branch->SetAddress(&electrons_miniIso_sum_neutral_nofsr_old_); }
  }
  photons_scale_smear_corr_scale_totalUp_branch = 0;
  if (tree->GetBranch("photons_scale_smear_corr_scale_totalUp") != 0) {
    photons_scale_smear_corr_scale_totalUp_branch = tree->GetBranch("photons_scale_smear_corr_scale_totalUp");
    if (photons_scale_smear_corr_scale_totalUp_branch) { photons_scale_smear_corr_scale_totalUp_branch->SetAddress(&photons_scale_smear_corr_scale_totalUp_); }
  }
  p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_); }
  }
  electrons_scale_smear_corr_scale_totalUp_branch = 0;
  if (tree->GetBranch("electrons_scale_smear_corr_scale_totalUp") != 0) {
    electrons_scale_smear_corr_scale_totalUp_branch = tree->GetBranch("electrons_scale_smear_corr_scale_totalUp");
    if (electrons_scale_smear_corr_scale_totalUp_branch) { electrons_scale_smear_corr_scale_totalUp_branch->SetAddress(&electrons_scale_smear_corr_scale_totalUp_); }
  }
  metfilter_trkPOG_manystripclus53X_branch = 0;
  if (tree->GetBranch("metfilter_trkPOG_manystripclus53X") != 0) {
    metfilter_trkPOG_manystripclus53X_branch = tree->GetBranch("metfilter_trkPOG_manystripclus53X");
    if (metfilter_trkPOG_manystripclus53X_branch) { metfilter_trkPOG_manystripclus53X_branch->SetAddress(&metfilter_trkPOG_manystripclus53X_); }
  }
  isotracks_id_branch = 0;
  if (tree->GetBranch("isotracks_id") != 0) {
    isotracks_id_branch = tree->GetBranch("isotracks_id");
    if (isotracks_id_branch) { isotracks_id_branch->SetAddress(&isotracks_id_); }
  }
  ak4jets_JECNominal_branch = 0;
  if (tree->GetBranch("ak4jets_JECNominal") != 0) {
    ak4jets_JECNominal_branch = tree->GetBranch("ak4jets_JECNominal");
    if (ak4jets_JECNominal_branch) { ak4jets_JECNominal_branch->SetAddress(&ak4jets_JECNominal_); }
  }
  LHEweight_PDFVariation_Dn_NNPDF30_branch = 0;
  if (tree->GetBranch("LHEweight_PDFVariation_Dn_NNPDF30") != 0) {
    LHEweight_PDFVariation_Dn_NNPDF30_branch = tree->GetBranch("LHEweight_PDFVariation_Dn_NNPDF30");
    if (LHEweight_PDFVariation_Dn_NNPDF30_branch) { LHEweight_PDFVariation_Dn_NNPDF30_branch->SetAddress(&LHEweight_PDFVariation_Dn_NNPDF30_); }
  }
  triggers_L1prescale_branch = 0;
  if (tree->GetBranch("triggers_L1prescale") != 0) {
    triggers_L1prescale_branch = tree->GetBranch("triggers_L1prescale");
    if (triggers_L1prescale_branch) { triggers_L1prescale_branch->SetAddress(&triggers_L1prescale_); }
  }
  isotracks_dxy_branch = 0;
  if (tree->GetBranch("isotracks_dxy") != 0) {
    isotracks_dxy_branch = tree->GetBranch("isotracks_dxy");
    if (isotracks_dxy_branch) { isotracks_dxy_branch->SetAddress(&isotracks_dxy_); }
  }
  pfmet_met_Raw_branch = 0;
  if (tree->GetBranch("pfmet_met_Raw") != 0) {
    pfmet_met_Raw_branch = tree->GetBranch("pfmet_met_Raw");
    if (pfmet_met_Raw_branch) { pfmet_met_Raw_branch->SetAddress(&pfmet_met_Raw_); }
  }
  electrons_id_MVA_Fall17V2_Iso_pass_wp90_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_pass_wp90") != 0) {
    electrons_id_MVA_Fall17V2_Iso_pass_wp90_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_pass_wp90");
    if (electrons_id_MVA_Fall17V2_Iso_pass_wp90_branch) { electrons_id_MVA_Fall17V2_Iso_pass_wp90_branch->SetAddress(&electrons_id_MVA_Fall17V2_Iso_pass_wp90_); }
  }
  LHEweight_QCDscale_muR0p5_muF0p5_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR0p5_muF0p5") != 0) {
    LHEweight_QCDscale_muR0p5_muF0p5_branch = tree->GetBranch("LHEweight_QCDscale_muR0p5_muF0p5");
    if (LHEweight_QCDscale_muR0p5_muF0p5_branch) { LHEweight_QCDscale_muR0p5_muF0p5_branch->SetAddress(&LHEweight_QCDscale_muR0p5_muF0p5_); }
  }
  metfilter_EcalDeadCellBoundaryEnergyFilter_branch = 0;
  if (tree->GetBranch("metfilter_EcalDeadCellBoundaryEnergyFilter") != 0) {
    metfilter_EcalDeadCellBoundaryEnergyFilter_branch = tree->GetBranch("metfilter_EcalDeadCellBoundaryEnergyFilter");
    if (metfilter_EcalDeadCellBoundaryEnergyFilter_branch) { metfilter_EcalDeadCellBoundaryEnergyFilter_branch->SetAddress(&metfilter_EcalDeadCellBoundaryEnergyFilter_); }
  }
  pfmet_metPhi_JECUp_branch = 0;
  if (tree->GetBranch("pfmet_metPhi_JECUp") != 0) {
    pfmet_metPhi_JECUp_branch = tree->GetBranch("pfmet_metPhi_JECUp");
    if (pfmet_metPhi_JECUp_branch) { pfmet_metPhi_JECUp_branch->SetAddress(&pfmet_metPhi_JECUp_); }
  }
  muons_scale_smear_pt_corr_smear_totalUp_branch = 0;
  if (tree->GetBranch("muons_scale_smear_pt_corr_smear_totalUp") != 0) {
    muons_scale_smear_pt_corr_smear_totalUp_branch = tree->GetBranch("muons_scale_smear_pt_corr_smear_totalUp");
    if (muons_scale_smear_pt_corr_smear_totalUp_branch) { muons_scale_smear_pt_corr_smear_totalUp_branch->SetAddress(&muons_scale_smear_pt_corr_smear_totalUp_); }
  }
  ak8jets_phi_branch = 0;
  if (tree->GetBranch("ak8jets_phi") != 0) {
    ak8jets_phi_branch = tree->GetBranch("ak8jets_phi");
    if (ak8jets_phi_branch) { ak8jets_phi_branch->SetAddress(&ak8jets_phi_); }
  }
  pfmet_met_JECDn_branch = 0;
  if (tree->GetBranch("pfmet_met_JECDn") != 0) {
    pfmet_met_JECDn_branch = tree->GetBranch("pfmet_met_JECDn");
    if (pfmet_met_JECDn_branch) { pfmet_met_JECDn_branch->SetAddress(&pfmet_met_JECDn_); }
  }
  photons_hasPixelSeed_branch = 0;
  if (tree->GetBranch("photons_hasPixelSeed") != 0) {
    photons_hasPixelSeed_branch = tree->GetBranch("photons_hasPixelSeed");
    if (photons_hasPixelSeed_branch) { photons_hasPixelSeed_branch->SetAddress(&photons_hasPixelSeed_); }
  }
  pfmet_metShift_py_JERDn_branch = 0;
  if (tree->GetBranch("pfmet_metShift_py_JERDn") != 0) {
    pfmet_metShift_py_JERDn_branch = tree->GetBranch("pfmet_metShift_py_JERDn");
    if (pfmet_metShift_py_JERDn_branch) { pfmet_metShift_py_JERDn_branch->SetAddress(&pfmet_metShift_py_JERDn_); }
  }
  puppimet_metPhi_JECUp_branch = 0;
  if (tree->GetBranch("puppimet_metPhi_JECUp") != 0) {
    puppimet_metPhi_JECUp_branch = tree->GetBranch("puppimet_metPhi_JECUp");
    if (puppimet_metPhi_JECUp_branch) { puppimet_metPhi_JECUp_branch->SetAddress(&puppimet_metPhi_JECUp_); }
  }
  photons_id_MVA_Fall17V2_Cat_branch = 0;
  if (tree->GetBranch("photons_id_MVA_Fall17V2_Cat") != 0) {
    photons_id_MVA_Fall17V2_Cat_branch = tree->GetBranch("photons_id_MVA_Fall17V2_Cat");
    if (photons_id_MVA_Fall17V2_Cat_branch) { photons_id_MVA_Fall17V2_Cat_branch->SetAddress(&photons_id_MVA_Fall17V2_Cat_); }
  }
  ak8jets_JECDn_branch = 0;
  if (tree->GetBranch("ak8jets_JECDn") != 0) {
    ak8jets_JECDn_branch = tree->GetBranch("ak8jets_JECDn");
    if (ak8jets_JECDn_branch) { ak8jets_JECDn_branch->SetAddress(&ak8jets_JECDn_); }
  }
  fsrcands_eta_branch = 0;
  if (tree->GetBranch("fsrcands_eta") != 0) {
    fsrcands_eta_branch = tree->GetBranch("fsrcands_eta");
    if (fsrcands_eta_branch) { fsrcands_eta_branch->SetAddress(&fsrcands_eta_); }
  }
  ak4jets_pass_puId_branch = 0;
  if (tree->GetBranch("ak4jets_pass_puId") != 0) {
    ak4jets_pass_puId_branch = tree->GetBranch("ak4jets_pass_puId");
    if (ak4jets_pass_puId_branch) { ak4jets_pass_puId_branch->SetAddress(&ak4jets_pass_puId_); }
  }
  alphaS_branch = 0;
  if (tree->GetBranch("alphaS") != 0) {
    alphaS_branch = tree->GetBranch("alphaS");
    if (alphaS_branch) { alphaS_branch->SetAddress(&alphaS_); }
  }
  electrons_conv_vtx_flag_branch = 0;
  if (tree->GetBranch("electrons_conv_vtx_flag") != 0) {
    electrons_conv_vtx_flag_branch = tree->GetBranch("electrons_conv_vtx_flag");
    if (electrons_conv_vtx_flag_branch) { electrons_conv_vtx_flag_branch->SetAddress(&electrons_conv_vtx_flag_); }
  }
  ak4jets_JECUp_branch = 0;
  if (tree->GetBranch("ak4jets_JECUp") != 0) {
    ak4jets_JECUp_branch = tree->GetBranch("ak4jets_JECUp");
    if (ak4jets_JECUp_branch) { ak4jets_JECUp_branch->SetAddress(&ak4jets_JECUp_); }
  }
  fsrcands_fsrMatch_muon_index_list_branch = 0;
  if (tree->GetBranch("fsrcands_fsrMatch_muon_index_list") != 0) {
    fsrcands_fsrMatch_muon_index_list_branch = tree->GetBranch("fsrcands_fsrMatch_muon_index_list");
    if (fsrcands_fsrMatch_muon_index_list_branch) { fsrcands_fsrMatch_muon_index_list_branch->SetAddress(&fsrcands_fsrMatch_muon_index_list_); }
  }
  muons_pfIso03_sum_neutral_nofsr_branch = 0;
  if (tree->GetBranch("muons_pfIso03_sum_neutral_nofsr") != 0) {
    muons_pfIso03_sum_neutral_nofsr_branch = tree->GetBranch("muons_pfIso03_sum_neutral_nofsr");
    if (muons_pfIso03_sum_neutral_nofsr_branch) { muons_pfIso03_sum_neutral_nofsr_branch->SetAddress(&muons_pfIso03_sum_neutral_nofsr_); }
  }
  p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_); }
  }
  LHEweight_QCDscale_muR1_muF0p5_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR1_muF0p5") != 0) {
    LHEweight_QCDscale_muR1_muF0p5_branch = tree->GetBranch("LHEweight_QCDscale_muR1_muF0p5");
    if (LHEweight_QCDscale_muR1_muF0p5_branch) { LHEweight_QCDscale_muR1_muF0p5_branch->SetAddress(&LHEweight_QCDscale_muR1_muF0p5_); }
  }
  muons_dz_bestTrack_firstPV_branch = 0;
  if (tree->GetBranch("muons_dz_bestTrack_firstPV") != 0) {
    muons_dz_bestTrack_firstPV_branch = tree->GetBranch("muons_dz_bestTrack_firstPV");
    if (muons_dz_bestTrack_firstPV_branch) { muons_dz_bestTrack_firstPV_branch->SetAddress(&muons_dz_bestTrack_firstPV_); }
  }
  pfmet_sumEt_Nominal_branch = 0;
  if (tree->GetBranch("pfmet_sumEt_Nominal") != 0) {
    pfmet_sumEt_Nominal_branch = tree->GetBranch("pfmet_sumEt_Nominal");
    if (pfmet_sumEt_Nominal_branch) { pfmet_sumEt_Nominal_branch->SetAddress(&pfmet_sumEt_Nominal_); }
  }
  ak4jets_pt_resolution_branch = 0;
  if (tree->GetBranch("ak4jets_pt_resolution") != 0) {
    ak4jets_pt_resolution_branch = tree->GetBranch("ak4jets_pt_resolution");
    if (ak4jets_pt_resolution_branch) { ak4jets_pt_resolution_branch->SetAddress(&ak4jets_pt_resolution_); }
  }
  electrons_scale_smear_corr_branch = 0;
  if (tree->GetBranch("electrons_scale_smear_corr") != 0) {
    electrons_scale_smear_corr_branch = tree->GetBranch("electrons_scale_smear_corr");
    if (electrons_scale_smear_corr_branch) { electrons_scale_smear_corr_branch->SetAddress(&electrons_scale_smear_corr_); }
  }
  isotracks_pfIso03_db_branch = 0;
  if (tree->GetBranch("isotracks_pfIso03_db") != 0) {
    isotracks_pfIso03_db_branch = tree->GetBranch("isotracks_pfIso03_db");
    if (isotracks_pfIso03_db_branch) { isotracks_pfIso03_db_branch->SetAddress(&isotracks_pfIso03_db_); }
  }
  metfilter_ecalBadCalibFilterUpdated_branch = 0;
  if (tree->GetBranch("metfilter_ecalBadCalibFilterUpdated") != 0) {
    metfilter_ecalBadCalibFilterUpdated_branch = tree->GetBranch("metfilter_ecalBadCalibFilterUpdated");
    if (metfilter_ecalBadCalibFilterUpdated_branch) { metfilter_ecalBadCalibFilterUpdated_branch->SetAddress(&metfilter_ecalBadCalibFilterUpdated_); }
  }
  lheparticles_status_branch = 0;
  if (tree->GetBranch("lheparticles_status") != 0) {
    lheparticles_status_branch = tree->GetBranch("lheparticles_status");
    if (lheparticles_status_branch) { lheparticles_status_branch->SetAddress(&lheparticles_status_); }
  }
  LHEweight_QCDscale_muR2_muF0p5_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR2_muF0p5") != 0) {
    LHEweight_QCDscale_muR2_muF0p5_branch = tree->GetBranch("LHEweight_QCDscale_muR2_muF0p5");
    if (LHEweight_QCDscale_muR2_muF0p5_branch) { LHEweight_QCDscale_muR2_muF0p5_branch->SetAddress(&LHEweight_QCDscale_muR2_muF0p5_); }
  }
  isotracks_dzerr_branch = 0;
  if (tree->GetBranch("isotracks_dzerr") != 0) {
    isotracks_dzerr_branch = tree->GetBranch("isotracks_dzerr");
    if (isotracks_dzerr_branch) { isotracks_dzerr_branch->SetAddress(&isotracks_dzerr_); }
  }
  ak8jets_eta_branch = 0;
  if (tree->GetBranch("ak8jets_eta") != 0) {
    ak8jets_eta_branch = tree->GetBranch("ak8jets_eta");
    if (ak8jets_eta_branch) { ak8jets_eta_branch->SetAddress(&ak8jets_eta_); }
  }
  ak4jets_JECL1Nominal_branch = 0;
  if (tree->GetBranch("ak4jets_JECL1Nominal") != 0) {
    ak4jets_JECL1Nominal_branch = tree->GetBranch("ak4jets_JECL1Nominal");
    if (ak4jets_JECL1Nominal_branch) { ak4jets_JECL1Nominal_branch->SetAddress(&ak4jets_JECL1Nominal_); }
  }
  p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM");
    if (p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_branch) { p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_); }
  }
  p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM");
    if (p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_branch) { p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_); }
  }
  lheparticles_px_branch = 0;
  if (tree->GetBranch("lheparticles_px") != 0) {
    lheparticles_px_branch = tree->GetBranch("lheparticles_px");
    if (lheparticles_px_branch) { lheparticles_px_branch->SetAddress(&lheparticles_px_); }
  }
  pfmet_met_Nominal_branch = 0;
  if (tree->GetBranch("pfmet_met_Nominal") != 0) {
    pfmet_met_Nominal_branch = tree->GetBranch("pfmet_met_Nominal");
    if (pfmet_met_Nominal_branch) { pfmet_met_Nominal_branch->SetAddress(&pfmet_met_Nominal_); }
  }
  ak4jets_deepFlavourproblepb_branch = 0;
  if (tree->GetBranch("ak4jets_deepFlavourproblepb") != 0) {
    ak4jets_deepFlavourproblepb_branch = tree->GetBranch("ak4jets_deepFlavourproblepb");
    if (ak4jets_deepFlavourproblepb_branch) { ak4jets_deepFlavourproblepb_branch->SetAddress(&ak4jets_deepFlavourproblepb_); }
  }
  photons_pfNeutralHadronIso_EAcorr_branch = 0;
  if (tree->GetBranch("photons_pfNeutralHadronIso_EAcorr") != 0) {
    photons_pfNeutralHadronIso_EAcorr_branch = tree->GetBranch("photons_pfNeutralHadronIso_EAcorr");
    if (photons_pfNeutralHadronIso_EAcorr_branch) { photons_pfNeutralHadronIso_EAcorr_branch->SetAddress(&photons_pfNeutralHadronIso_EAcorr_); }
  }
  p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_); }
  }
  vtxs_pos_y_branch = 0;
  if (tree->GetBranch("vtxs_pos_y") != 0) {
    vtxs_pos_y_branch = tree->GetBranch("vtxs_pos_y");
    if (vtxs_pos_y_branch) { vtxs_pos_y_branch->SetAddress(&vtxs_pos_y_); }
  }
  vtxs_pos_x_branch = 0;
  if (tree->GetBranch("vtxs_pos_x") != 0) {
    vtxs_pos_x_branch = tree->GetBranch("vtxs_pos_x");
    if (vtxs_pos_x_branch) { vtxs_pos_x_branch->SetAddress(&vtxs_pos_x_); }
  }
  vtxs_pos_z_branch = 0;
  if (tree->GetBranch("vtxs_pos_z") != 0) {
    vtxs_pos_z_branch = tree->GetBranch("vtxs_pos_z");
    if (vtxs_pos_z_branch) { vtxs_pos_z_branch->SetAddress(&vtxs_pos_z_); }
  }
  vtxs_pos_t_branch = 0;
  if (tree->GetBranch("vtxs_pos_t") != 0) {
    vtxs_pos_t_branch = tree->GetBranch("vtxs_pos_t");
    if (vtxs_pos_t_branch) { vtxs_pos_t_branch->SetAddress(&vtxs_pos_t_); }
  }
  p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_); }
  }
  puppimet_metPhi_UnclusteredEnDn_branch = 0;
  if (tree->GetBranch("puppimet_metPhi_UnclusteredEnDn") != 0) {
    puppimet_metPhi_UnclusteredEnDn_branch = tree->GetBranch("puppimet_metPhi_UnclusteredEnDn");
    if (puppimet_metPhi_UnclusteredEnDn_branch) { puppimet_metPhi_UnclusteredEnDn_branch->SetAddress(&puppimet_metPhi_UnclusteredEnDn_); }
  }
  ak4jets_deepCSVprobudsg_branch = 0;
  if (tree->GetBranch("ak4jets_deepCSVprobudsg") != 0) {
    ak4jets_deepCSVprobudsg_branch = tree->GetBranch("ak4jets_deepCSVprobudsg");
    if (ak4jets_deepCSVprobudsg_branch) { ak4jets_deepCSVprobudsg_branch->SetAddress(&ak4jets_deepCSVprobudsg_); }
  }
  electrons_n_missing_inner_hits_branch = 0;
  if (tree->GetBranch("electrons_n_missing_inner_hits") != 0) {
    electrons_n_missing_inner_hits_branch = tree->GetBranch("electrons_n_missing_inner_hits");
    if (electrons_n_missing_inner_hits_branch) { electrons_n_missing_inner_hits_branch->SetAddress(&electrons_n_missing_inner_hits_); }
  }
  xsecerr_branch = 0;
  if (tree->GetBranch("xsecerr") != 0) {
    xsecerr_branch = tree->GetBranch("xsecerr");
    if (xsecerr_branch) { xsecerr_branch->SetAddress(&xsecerr_); }
  }
  photons_id_MVA_Fall17V2_pass_wp80_branch = 0;
  if (tree->GetBranch("photons_id_MVA_Fall17V2_pass_wp80") != 0) {
    photons_id_MVA_Fall17V2_pass_wp80_branch = tree->GetBranch("photons_id_MVA_Fall17V2_pass_wp80");
    if (photons_id_MVA_Fall17V2_pass_wp80_branch) { photons_id_MVA_Fall17V2_pass_wp80_branch->SetAddress(&photons_id_MVA_Fall17V2_pass_wp80_); }
  }
  LHEweight_QCDscale_muR2_muF2_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR2_muF2") != 0) {
    LHEweight_QCDscale_muR2_muF2_branch = tree->GetBranch("LHEweight_QCDscale_muR2_muF2");
    if (LHEweight_QCDscale_muR2_muF2_branch) { LHEweight_QCDscale_muR2_muF2_branch->SetAddress(&LHEweight_QCDscale_muR2_muF2_); }
  }
  LHEweight_QCDscale_muR2_muF1_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR2_muF1") != 0) {
    LHEweight_QCDscale_muR2_muF1_branch = tree->GetBranch("LHEweight_QCDscale_muR2_muF1");
    if (LHEweight_QCDscale_muR2_muF1_branch) { LHEweight_QCDscale_muR2_muF1_branch->SetAddress(&LHEweight_QCDscale_muR2_muF1_); }
  }
  muons_mass_branch = 0;
  if (tree->GetBranch("muons_mass") != 0) {
    muons_mass_branch = tree->GetBranch("muons_mass");
    if (muons_mass_branch) { muons_mass_branch->SetAddress(&muons_mass_); }
  }
  muons_miniIso_sum_neutral_nofsr_branch = 0;
  if (tree->GetBranch("muons_miniIso_sum_neutral_nofsr") != 0) {
    muons_miniIso_sum_neutral_nofsr_branch = tree->GetBranch("muons_miniIso_sum_neutral_nofsr");
    if (muons_miniIso_sum_neutral_nofsr_branch) { muons_miniIso_sum_neutral_nofsr_branch->SetAddress(&muons_miniIso_sum_neutral_nofsr_); }
  }
  isotracks_phi_branch = 0;
  if (tree->GetBranch("isotracks_phi") != 0) {
    isotracks_phi_branch = tree->GetBranch("isotracks_phi");
    if (isotracks_phi_branch) { isotracks_phi_branch->SetAddress(&isotracks_phi_); }
  }
  photons_passElectronVeto_branch = 0;
  if (tree->GetBranch("photons_passElectronVeto") != 0) {
    photons_passElectronVeto_branch = tree->GetBranch("photons_passElectronVeto");
    if (photons_passElectronVeto_branch) { photons_passElectronVeto_branch->SetAddress(&photons_passElectronVeto_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_); }
  }
  EventNumber_branch = 0;
  if (tree->GetBranch("EventNumber") != 0) {
    EventNumber_branch = tree->GetBranch("EventNumber");
    if (EventNumber_branch) { EventNumber_branch->SetAddress(&EventNumber_); }
  }
  p_Gen_GG_BKG_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BKG_MCFM") != 0) {
    p_Gen_GG_BKG_MCFM_branch = tree->GetBranch("p_Gen_GG_BKG_MCFM");
    if (p_Gen_GG_BKG_MCFM_branch) { p_Gen_GG_BKG_MCFM_branch->SetAddress(&p_Gen_GG_BKG_MCFM_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_); }
  }
  ak4jets_JERNominal_branch = 0;
  if (tree->GetBranch("ak4jets_JERNominal") != 0) {
    ak4jets_JERNominal_branch = tree->GetBranch("ak4jets_JERNominal");
    if (ak4jets_JERNominal_branch) { ak4jets_JERNominal_branch->SetAddress(&ak4jets_JERNominal_); }
  }
  muons_scale_smear_pt_corr_scale_totalDn_branch = 0;
  if (tree->GetBranch("muons_scale_smear_pt_corr_scale_totalDn") != 0) {
    muons_scale_smear_pt_corr_scale_totalDn_branch = tree->GetBranch("muons_scale_smear_pt_corr_scale_totalDn");
    if (muons_scale_smear_pt_corr_scale_totalDn_branch) { muons_scale_smear_pt_corr_scale_totalDn_branch->SetAddress(&muons_scale_smear_pt_corr_scale_totalDn_); }
  }
  ak8jets_JERNominal_branch = 0;
  if (tree->GetBranch("ak8jets_JERNominal") != 0) {
    ak8jets_JERNominal_branch = tree->GetBranch("ak8jets_JERNominal");
    if (ak8jets_JERNominal_branch) { ak8jets_JERNominal_branch->SetAddress(&ak8jets_JERNominal_); }
  }
  ak8jets_hadronFlavour_branch = 0;
  if (tree->GetBranch("ak8jets_hadronFlavour") != 0) {
    ak8jets_hadronFlavour_branch = tree->GetBranch("ak8jets_hadronFlavour");
    if (ak8jets_hadronFlavour_branch) { ak8jets_hadronFlavour_branch->SetAddress(&ak8jets_hadronFlavour_); }
  }
  vtxs_nvtxs_good_branch = 0;
  if (tree->GetBranch("vtxs_nvtxs_good") != 0) {
    vtxs_nvtxs_good_branch = tree->GetBranch("vtxs_nvtxs_good");
    if (vtxs_nvtxs_good_branch) { vtxs_nvtxs_good_branch->SetAddress(&vtxs_nvtxs_good_); }
  }
  ak4jets_mucands_sump4_py_branch = 0;
  if (tree->GetBranch("ak4jets_mucands_sump4_py") != 0) {
    ak4jets_mucands_sump4_py_branch = tree->GetBranch("ak4jets_mucands_sump4_py");
    if (ak4jets_mucands_sump4_py_branch) { ak4jets_mucands_sump4_py_branch->SetAddress(&ak4jets_mucands_sump4_py_); }
  }
  ak4jets_mucands_sump4_px_branch = 0;
  if (tree->GetBranch("ak4jets_mucands_sump4_px") != 0) {
    ak4jets_mucands_sump4_px_branch = tree->GetBranch("ak4jets_mucands_sump4_px");
    if (ak4jets_mucands_sump4_px_branch) { ak4jets_mucands_sump4_px_branch->SetAddress(&ak4jets_mucands_sump4_px_); }
  }
  pfmet_metShift_py_JERNominal_branch = 0;
  if (tree->GetBranch("pfmet_metShift_py_JERNominal") != 0) {
    pfmet_metShift_py_JERNominal_branch = tree->GetBranch("pfmet_metShift_py_JERNominal");
    if (pfmet_metShift_py_JERNominal_branch) { pfmet_metShift_py_JERNominal_branch->SetAddress(&pfmet_metShift_py_JERNominal_); }
  }
  p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_); }
  }
  photons_scale_smear_corr_scale_totalDn_branch = 0;
  if (tree->GetBranch("photons_scale_smear_corr_scale_totalDn") != 0) {
    photons_scale_smear_corr_scale_totalDn_branch = tree->GetBranch("photons_scale_smear_corr_scale_totalDn");
    if (photons_scale_smear_corr_scale_totalDn_branch) { photons_scale_smear_corr_scale_totalDn_branch->SetAddress(&photons_scale_smear_corr_scale_totalDn_); }
  }
  pfmet_metSignificance_branch = 0;
  if (tree->GetBranch("pfmet_metSignificance") != 0) {
    pfmet_metSignificance_branch = tree->GetBranch("pfmet_metSignificance");
    if (pfmet_metSignificance_branch) { pfmet_metSignificance_branch->SetAddress(&pfmet_metSignificance_); }
  }
  puppimet_met_Nominal_branch = 0;
  if (tree->GetBranch("puppimet_met_Nominal") != 0) {
    puppimet_met_Nominal_branch = tree->GetBranch("puppimet_met_Nominal");
    if (puppimet_met_Nominal_branch) { puppimet_met_Nominal_branch->SetAddress(&puppimet_met_Nominal_); }
  }
  isotracks_miniIso_nh_branch = 0;
  if (tree->GetBranch("isotracks_miniIso_nh") != 0) {
    isotracks_miniIso_nh_branch = tree->GetBranch("isotracks_miniIso_nh");
    if (isotracks_miniIso_nh_branch) { isotracks_miniIso_nh_branch->SetAddress(&isotracks_miniIso_nh_); }
  }
  triggers_HLTprescale_branch = 0;
  if (tree->GetBranch("triggers_HLTprescale") != 0) {
    triggers_HLTprescale_branch = tree->GetBranch("triggers_HLTprescale");
    if (triggers_HLTprescale_branch) { triggers_HLTprescale_branch->SetAddress(&triggers_HLTprescale_); }
  }
  fsrcands_mass_branch = 0;
  if (tree->GetBranch("fsrcands_mass") != 0) {
    fsrcands_mass_branch = tree->GetBranch("fsrcands_mass");
    if (fsrcands_mass_branch) { fsrcands_mass_branch->SetAddress(&fsrcands_mass_); }
  }
  metfilter_BadPFMuonFilter_branch = 0;
  if (tree->GetBranch("metfilter_BadPFMuonFilter") != 0) {
    metfilter_BadPFMuonFilter_branch = tree->GetBranch("metfilter_BadPFMuonFilter");
    if (metfilter_BadPFMuonFilter_branch) { metfilter_BadPFMuonFilter_branch->SetAddress(&metfilter_BadPFMuonFilter_); }
  }
  KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_branch = 0;
  if (tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn") != 0) {
    KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_branch = tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn");
    if (KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_branch) { KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_branch->SetAddress(&KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_); }
  }
  electrons_pfIso03_sum_neutral_nofsr_branch = 0;
  if (tree->GetBranch("electrons_pfIso03_sum_neutral_nofsr") != 0) {
    electrons_pfIso03_sum_neutral_nofsr_branch = tree->GetBranch("electrons_pfIso03_sum_neutral_nofsr");
    if (electrons_pfIso03_sum_neutral_nofsr_branch) { electrons_pfIso03_sum_neutral_nofsr_branch->SetAddress(&electrons_pfIso03_sum_neutral_nofsr_); }
  }
  electrons_charge_branch = 0;
  if (tree->GetBranch("electrons_charge") != 0) {
    electrons_charge_branch = tree->GetBranch("electrons_charge");
    if (electrons_charge_branch) { electrons_charge_branch->SetAddress(&electrons_charge_); }
  }
  metfilter_trkPOGFilters_branch = 0;
  if (tree->GetBranch("metfilter_trkPOGFilters") != 0) {
    metfilter_trkPOGFilters_branch = tree->GetBranch("metfilter_trkPOGFilters");
    if (metfilter_trkPOGFilters_branch) { metfilter_trkPOGFilters_branch->SetAddress(&metfilter_trkPOGFilters_); }
  }
  PythiaWeight_fsr_muRsqrt2_branch = 0;
  if (tree->GetBranch("PythiaWeight_fsr_muRsqrt2") != 0) {
    PythiaWeight_fsr_muRsqrt2_branch = tree->GetBranch("PythiaWeight_fsr_muRsqrt2");
    if (PythiaWeight_fsr_muRsqrt2_branch) { PythiaWeight_fsr_muRsqrt2_branch->SetAddress(&PythiaWeight_fsr_muRsqrt2_); }
  }
  PythiaWeight_isr_muR0p5_branch = 0;
  if (tree->GetBranch("PythiaWeight_isr_muR0p5") != 0) {
    PythiaWeight_isr_muR0p5_branch = tree->GetBranch("PythiaWeight_isr_muR0p5");
    if (PythiaWeight_isr_muR0p5_branch) { PythiaWeight_isr_muR0p5_branch->SetAddress(&PythiaWeight_isr_muR0p5_); }
  }
  genmet_metPhi_branch = 0;
  if (tree->GetBranch("genmet_metPhi") != 0) {
    genmet_metPhi_branch = tree->GetBranch("genmet_metPhi");
    if (genmet_metPhi_branch) { genmet_metPhi_branch->SetAddress(&genmet_metPhi_); }
  }
  n_vtxs_PU_branch = 0;
  if (tree->GetBranch("n_vtxs_PU") != 0) {
    n_vtxs_PU_branch = tree->GetBranch("n_vtxs_PU");
    if (n_vtxs_PU_branch) { n_vtxs_PU_branch->SetAddress(&n_vtxs_PU_); }
  }
  PythiaWeight_isr_muRoneoversqrt2_branch = 0;
  if (tree->GetBranch("PythiaWeight_isr_muRoneoversqrt2") != 0) {
    PythiaWeight_isr_muRoneoversqrt2_branch = tree->GetBranch("PythiaWeight_isr_muRoneoversqrt2");
    if (PythiaWeight_isr_muRoneoversqrt2_branch) { PythiaWeight_isr_muRoneoversqrt2_branch->SetAddress(&PythiaWeight_isr_muRoneoversqrt2_); }
  }
  electrons_id_MVA_Fall17V2_Iso_Cat_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_Cat") != 0) {
    electrons_id_MVA_Fall17V2_Iso_Cat_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_Cat");
    if (electrons_id_MVA_Fall17V2_Iso_Cat_branch) { electrons_id_MVA_Fall17V2_Iso_Cat_branch->SetAddress(&electrons_id_MVA_Fall17V2_Iso_Cat_); }
  }
  p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_); }
  }
  photons_eta_branch = 0;
  if (tree->GetBranch("photons_eta") != 0) {
    photons_eta_branch = tree->GetBranch("photons_eta");
    if (photons_eta_branch) { photons_eta_branch->SetAddress(&photons_eta_); }
  }
  triggerObjects_eta_branch = 0;
  if (tree->GetBranch("triggerObjects_eta") != 0) {
    triggerObjects_eta_branch = tree->GetBranch("triggerObjects_eta");
    if (triggerObjects_eta_branch) { triggerObjects_eta_branch->SetAddress(&triggerObjects_eta_); }
  }
  pfmet_metShift_py_JERUp_branch = 0;
  if (tree->GetBranch("pfmet_metShift_py_JERUp") != 0) {
    pfmet_metShift_py_JERUp_branch = tree->GetBranch("pfmet_metShift_py_JERUp");
    if (pfmet_metShift_py_JERUp_branch) { pfmet_metShift_py_JERUp_branch->SetAddress(&pfmet_metShift_py_JERUp_); }
  }
  photons_id_cutBased_Fall17V2_Tight_Bits_branch = 0;
  if (tree->GetBranch("photons_id_cutBased_Fall17V2_Tight_Bits") != 0) {
    photons_id_cutBased_Fall17V2_Tight_Bits_branch = tree->GetBranch("photons_id_cutBased_Fall17V2_Tight_Bits");
    if (photons_id_cutBased_Fall17V2_Tight_Bits_branch) { photons_id_cutBased_Fall17V2_Tight_Bits_branch->SetAddress(&photons_id_cutBased_Fall17V2_Tight_Bits_); }
  }
  ak8jets_axis1_branch = 0;
  if (tree->GetBranch("ak8jets_axis1") != 0) {
    ak8jets_axis1_branch = tree->GetBranch("ak8jets_axis1");
    if (ak8jets_axis1_branch) { ak8jets_axis1_branch->SetAddress(&ak8jets_axis1_); }
  }
  ak8jets_axis2_branch = 0;
  if (tree->GetBranch("ak8jets_axis2") != 0) {
    ak8jets_axis2_branch = tree->GetBranch("ak8jets_axis2");
    if (ak8jets_axis2_branch) { ak8jets_axis2_branch->SetAddress(&ak8jets_axis2_); }
  }
  LHEweight_AsMZ_Dn_NNPDF30_branch = 0;
  if (tree->GetBranch("LHEweight_AsMZ_Dn_NNPDF30") != 0) {
    LHEweight_AsMZ_Dn_NNPDF30_branch = tree->GetBranch("LHEweight_AsMZ_Dn_NNPDF30");
    if (LHEweight_AsMZ_Dn_NNPDF30_branch) { LHEweight_AsMZ_Dn_NNPDF30_branch->SetAddress(&LHEweight_AsMZ_Dn_NNPDF30_); }
  }
  pThat_branch = 0;
  if (tree->GetBranch("pThat") != 0) {
    pThat_branch = tree->GetBranch("pThat");
    if (pThat_branch) { pThat_branch->SetAddress(&pThat_); }
  }
  LHEweight_QCDscale_muR0p5_muF2_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR0p5_muF2") != 0) {
    LHEweight_QCDscale_muR0p5_muF2_branch = tree->GetBranch("LHEweight_QCDscale_muR0p5_muF2");
    if (LHEweight_QCDscale_muR0p5_muF2_branch) { LHEweight_QCDscale_muR0p5_muF2_branch->SetAddress(&LHEweight_QCDscale_muR0p5_muF2_); }
  }
  KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_branch = 0;
  if (tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn") != 0) {
    KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_branch = tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn");
    if (KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_branch) { KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_branch->SetAddress(&KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_); }
  }
  isotracks_miniIso_ch_branch = 0;
  if (tree->GetBranch("isotracks_miniIso_ch") != 0) {
    isotracks_miniIso_ch_branch = tree->GetBranch("isotracks_miniIso_ch");
    if (isotracks_miniIso_ch_branch) { isotracks_miniIso_ch_branch->SetAddress(&isotracks_miniIso_ch_); }
  }
  electrons_scale_smear_corr_scale_totalDn_branch = 0;
  if (tree->GetBranch("electrons_scale_smear_corr_scale_totalDn") != 0) {
    electrons_scale_smear_corr_scale_totalDn_branch = tree->GetBranch("electrons_scale_smear_corr_scale_totalDn");
    if (electrons_scale_smear_corr_scale_totalDn_branch) { electrons_scale_smear_corr_scale_totalDn_branch->SetAddress(&electrons_scale_smear_corr_scale_totalDn_); }
  }
  electrons_pfIso03_sum_charged_nofsr_branch = 0;
  if (tree->GetBranch("electrons_pfIso03_sum_charged_nofsr") != 0) {
    electrons_pfIso03_sum_charged_nofsr_branch = tree->GetBranch("electrons_pfIso03_sum_charged_nofsr");
    if (electrons_pfIso03_sum_charged_nofsr_branch) { electrons_pfIso03_sum_charged_nofsr_branch->SetAddress(&electrons_pfIso03_sum_charged_nofsr_); }
  }
  metfilter_trackingFailureFilter_branch = 0;
  if (tree->GetBranch("metfilter_trackingFailureFilter") != 0) {
    metfilter_trackingFailureFilter_branch = tree->GetBranch("metfilter_trackingFailureFilter");
    if (metfilter_trackingFailureFilter_branch) { metfilter_trackingFailureFilter_branch->SetAddress(&metfilter_trackingFailureFilter_); }
  }
  ak8jets_n_softdrop_subjets_branch = 0;
  if (tree->GetBranch("ak8jets_n_softdrop_subjets") != 0) {
    ak8jets_n_softdrop_subjets_branch = tree->GetBranch("ak8jets_n_softdrop_subjets");
    if (ak8jets_n_softdrop_subjets_branch) { ak8jets_n_softdrop_subjets_branch->SetAddress(&ak8jets_n_softdrop_subjets_); }
  }
  p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_); }
  }
  puppimet_sumEt_Raw_branch = 0;
  if (tree->GetBranch("puppimet_sumEt_Raw") != 0) {
    puppimet_sumEt_Raw_branch = tree->GetBranch("puppimet_sumEt_Raw");
    if (puppimet_sumEt_Raw_branch) { puppimet_sumEt_Raw_branch->SetAddress(&puppimet_sumEt_Raw_); }
  }
  KFactor_QCD_ggZZ_Sig_arg_branch = 0;
  if (tree->GetBranch("KFactor_QCD_ggZZ_Sig_arg") != 0) {
    KFactor_QCD_ggZZ_Sig_arg_branch = tree->GetBranch("KFactor_QCD_ggZZ_Sig_arg");
    if (KFactor_QCD_ggZZ_Sig_arg_branch) { KFactor_QCD_ggZZ_Sig_arg_branch->SetAddress(&KFactor_QCD_ggZZ_Sig_arg_); }
  }
  photons_phi_branch = 0;
  if (tree->GetBranch("photons_phi") != 0) {
    photons_phi_branch = tree->GetBranch("photons_phi");
    if (photons_phi_branch) { photons_phi_branch->SetAddress(&photons_phi_); }
  }
  pfmet_metPhi_UnclusteredEnUp_branch = 0;
  if (tree->GetBranch("pfmet_metPhi_UnclusteredEnUp") != 0) {
    pfmet_metPhi_UnclusteredEnUp_branch = tree->GetBranch("pfmet_metPhi_UnclusteredEnUp");
    if (pfmet_metPhi_UnclusteredEnUp_branch) { pfmet_metPhi_UnclusteredEnUp_branch->SetAddress(&pfmet_metPhi_UnclusteredEnUp_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_); }
  }
  ak8jets_pt_branch = 0;
  if (tree->GetBranch("ak8jets_pt") != 0) {
    ak8jets_pt_branch = tree->GetBranch("ak8jets_pt");
    if (ak8jets_pt_branch) { ak8jets_pt_branch->SetAddress(&ak8jets_pt_); }
  }
  ak8jets_JECUp_branch = 0;
  if (tree->GetBranch("ak8jets_JECUp") != 0) {
    ak8jets_JECUp_branch = tree->GetBranch("ak8jets_JECUp");
    if (ak8jets_JECUp_branch) { ak8jets_JECUp_branch->SetAddress(&ak8jets_JECUp_); }
  }
  muons_scale_smear_pt_corr_branch = 0;
  if (tree->GetBranch("muons_scale_smear_pt_corr") != 0) {
    muons_scale_smear_pt_corr_branch = tree->GetBranch("muons_scale_smear_pt_corr");
    if (muons_scale_smear_pt_corr_branch) { muons_scale_smear_pt_corr_branch->SetAddress(&muons_scale_smear_pt_corr_); }
  }
  vtxs_pos_dy_branch = 0;
  if (tree->GetBranch("vtxs_pos_dy") != 0) {
    vtxs_pos_dy_branch = tree->GetBranch("vtxs_pos_dy");
    if (vtxs_pos_dy_branch) { vtxs_pos_dy_branch->SetAddress(&vtxs_pos_dy_); }
  }
  vtxs_pos_dt_branch = 0;
  if (tree->GetBranch("vtxs_pos_dt") != 0) {
    vtxs_pos_dt_branch = tree->GetBranch("vtxs_pos_dt");
    if (vtxs_pos_dt_branch) { vtxs_pos_dt_branch->SetAddress(&vtxs_pos_dt_); }
  }
  vtxs_pos_dz_branch = 0;
  if (tree->GetBranch("vtxs_pos_dz") != 0) {
    vtxs_pos_dz_branch = tree->GetBranch("vtxs_pos_dz");
    if (vtxs_pos_dz_branch) { vtxs_pos_dz_branch->SetAddress(&vtxs_pos_dz_); }
  }
  vtxs_pos_dx_branch = 0;
  if (tree->GetBranch("vtxs_pos_dx") != 0) {
    vtxs_pos_dx_branch = tree->GetBranch("vtxs_pos_dx");
    if (vtxs_pos_dx_branch) { vtxs_pos_dx_branch->SetAddress(&vtxs_pos_dx_); }
  }
  p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM");
    if (p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_branch) { p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_); }
  }
  puppimet_met_Raw_branch = 0;
  if (tree->GetBranch("puppimet_met_Raw") != 0) {
    puppimet_met_Raw_branch = tree->GetBranch("puppimet_met_Raw");
    if (puppimet_met_Raw_branch) { puppimet_met_Raw_branch->SetAddress(&puppimet_met_Raw_); }
  }
  ak4jets_mass_branch = 0;
  if (tree->GetBranch("ak4jets_mass") != 0) {
    ak4jets_mass_branch = tree->GetBranch("ak4jets_mass");
    if (ak4jets_mass_branch) { ak4jets_mass_branch->SetAddress(&ak4jets_mass_); }
  }
  vtxs_ndof_branch = 0;
  if (tree->GetBranch("vtxs_ndof") != 0) {
    vtxs_ndof_branch = tree->GetBranch("vtxs_ndof");
    if (vtxs_ndof_branch) { vtxs_ndof_branch->SetAddress(&vtxs_ndof_); }
  }
  ak8jets_JECNominal_branch = 0;
  if (tree->GetBranch("ak8jets_JECNominal") != 0) {
    ak8jets_JECNominal_branch = tree->GetBranch("ak8jets_JECNominal");
    if (ak8jets_JECNominal_branch) { ak8jets_JECNominal_branch->SetAddress(&ak8jets_JECNominal_); }
  }
  puppimet_metSignificance_branch = 0;
  if (tree->GetBranch("puppimet_metSignificance") != 0) {
    puppimet_metSignificance_branch = tree->GetBranch("puppimet_metSignificance");
    if (puppimet_metSignificance_branch) { puppimet_metSignificance_branch->SetAddress(&puppimet_metSignificance_); }
  }
  isotracks_dz_branch = 0;
  if (tree->GetBranch("isotracks_dz") != 0) {
    isotracks_dz_branch = tree->GetBranch("isotracks_dz");
    if (isotracks_dz_branch) { isotracks_dz_branch->SetAddress(&isotracks_dz_); }
  }
  metfilter_chargedHadronTrackResolutionFilter_branch = 0;
  if (tree->GetBranch("metfilter_chargedHadronTrackResolutionFilter") != 0) {
    metfilter_chargedHadronTrackResolutionFilter_branch = tree->GetBranch("metfilter_chargedHadronTrackResolutionFilter");
    if (metfilter_chargedHadronTrackResolutionFilter_branch) { metfilter_chargedHadronTrackResolutionFilter_branch->SetAddress(&metfilter_chargedHadronTrackResolutionFilter_); }
  }
  metfilter_EcalDeadCellTriggerPrimitiveFilter_branch = 0;
  if (tree->GetBranch("metfilter_EcalDeadCellTriggerPrimitiveFilter") != 0) {
    metfilter_EcalDeadCellTriggerPrimitiveFilter_branch = tree->GetBranch("metfilter_EcalDeadCellTriggerPrimitiveFilter");
    if (metfilter_EcalDeadCellTriggerPrimitiveFilter_branch) { metfilter_EcalDeadCellTriggerPrimitiveFilter_branch->SetAddress(&metfilter_EcalDeadCellTriggerPrimitiveFilter_); }
  }
  p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM");
    if (p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch) { p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_); }
  }
  fsrcands_phi_branch = 0;
  if (tree->GetBranch("fsrcands_phi") != 0) {
    fsrcands_phi_branch = tree->GetBranch("fsrcands_phi");
    if (fsrcands_phi_branch) { fsrcands_phi_branch->SetAddress(&fsrcands_phi_); }
  }
  PythiaWeight_isr_muR2_branch = 0;
  if (tree->GetBranch("PythiaWeight_isr_muR2") != 0) {
    PythiaWeight_isr_muR2_branch = tree->GetBranch("PythiaWeight_isr_muR2");
    if (PythiaWeight_isr_muR2_branch) { PythiaWeight_isr_muR2_branch->SetAddress(&PythiaWeight_isr_muR2_); }
  }
  electrons_miniIso_comb_nofsr_old_branch = 0;
  if (tree->GetBranch("electrons_miniIso_comb_nofsr_old") != 0) {
    electrons_miniIso_comb_nofsr_old_branch = tree->GetBranch("electrons_miniIso_comb_nofsr_old");
    if (electrons_miniIso_comb_nofsr_old_branch) { electrons_miniIso_comb_nofsr_old_branch->SetAddress(&electrons_miniIso_comb_nofsr_old_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_); }
  }
  muons_scale_smear_pt_corr_smear_totalDn_branch = 0;
  if (tree->GetBranch("muons_scale_smear_pt_corr_smear_totalDn") != 0) {
    muons_scale_smear_pt_corr_smear_totalDn_branch = tree->GetBranch("muons_scale_smear_pt_corr_smear_totalDn");
    if (muons_scale_smear_pt_corr_smear_totalDn_branch) { muons_scale_smear_pt_corr_smear_totalDn_branch->SetAddress(&muons_scale_smear_pt_corr_smear_totalDn_); }
  }
  PythiaWeight_isr_muR4_branch = 0;
  if (tree->GetBranch("PythiaWeight_isr_muR4") != 0) {
    PythiaWeight_isr_muR4_branch = tree->GetBranch("PythiaWeight_isr_muR4");
    if (PythiaWeight_isr_muR4_branch) { PythiaWeight_isr_muR4_branch->SetAddress(&PythiaWeight_isr_muR4_); }
  }
  ak8jets_pt_resolution_branch = 0;
  if (tree->GetBranch("ak8jets_pt_resolution") != 0) {
    ak8jets_pt_resolution_branch = tree->GetBranch("ak8jets_pt_resolution");
    if (ak8jets_pt_resolution_branch) { ak8jets_pt_resolution_branch->SetAddress(&ak8jets_pt_resolution_); }
  }
  electrons_id_MVA_Fall17V2_Iso_Val_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_Val") != 0) {
    electrons_id_MVA_Fall17V2_Iso_Val_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_Val");
    if (electrons_id_MVA_Fall17V2_Iso_Val_branch) { electrons_id_MVA_Fall17V2_Iso_Val_branch->SetAddress(&electrons_id_MVA_Fall17V2_Iso_Val_); }
  }
  metfilter_hcalLaserEventFilter_branch = 0;
  if (tree->GetBranch("metfilter_hcalLaserEventFilter") != 0) {
    metfilter_hcalLaserEventFilter_branch = tree->GetBranch("metfilter_hcalLaserEventFilter");
    if (metfilter_hcalLaserEventFilter_branch) { metfilter_hcalLaserEventFilter_branch->SetAddress(&metfilter_hcalLaserEventFilter_); }
  }
  KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_branch = 0;
  if (tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp") != 0) {
    KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_branch = tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp");
    if (KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_branch) { KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_branch->SetAddress(&KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_); }
  }
  isotracks_is_lostTrack_branch = 0;
  if (tree->GetBranch("isotracks_is_lostTrack") != 0) {
    isotracks_is_lostTrack_branch = tree->GetBranch("isotracks_is_lostTrack");
    if (isotracks_is_lostTrack_branch) { isotracks_is_lostTrack_branch->SetAddress(&isotracks_is_lostTrack_); }
  }
  electrons_pfIso04_comb_nofsr_branch = 0;
  if (tree->GetBranch("electrons_pfIso04_comb_nofsr") != 0) {
    electrons_pfIso04_comb_nofsr_branch = tree->GetBranch("electrons_pfIso04_comb_nofsr");
    if (electrons_pfIso04_comb_nofsr_branch) { electrons_pfIso04_comb_nofsr_branch->SetAddress(&electrons_pfIso04_comb_nofsr_); }
  }
  LHEweight_PDFVariation_Up_default_branch = 0;
  if (tree->GetBranch("LHEweight_PDFVariation_Up_default") != 0) {
    LHEweight_PDFVariation_Up_default_branch = tree->GetBranch("LHEweight_PDFVariation_Up_default");
    if (LHEweight_PDFVariation_Up_default_branch) { LHEweight_PDFVariation_Up_default_branch->SetAddress(&LHEweight_PDFVariation_Up_default_); }
  }
  fsrcands_fsrMatch_electron_index_list_branch = 0;
  if (tree->GetBranch("fsrcands_fsrMatch_electron_index_list") != 0) {
    fsrcands_fsrMatch_electron_index_list_branch = tree->GetBranch("fsrcands_fsrMatch_electron_index_list");
    if (fsrcands_fsrMatch_electron_index_list_branch) { fsrcands_fsrMatch_electron_index_list_branch->SetAddress(&fsrcands_fsrMatch_electron_index_list_); }
  }
  n_true_int_branch = 0;
  if (tree->GetBranch("n_true_int") != 0) {
    n_true_int_branch = tree->GetBranch("n_true_int");
    if (n_true_int_branch) { n_true_int_branch->SetAddress(&n_true_int_); }
  }
  RunNumber_branch = 0;
  if (tree->GetBranch("RunNumber") != 0) {
    RunNumber_branch = tree->GetBranch("RunNumber");
    if (RunNumber_branch) { RunNumber_branch->SetAddress(&RunNumber_); }
  }
  electrons_id_cutBased_Fall17V2_Tight_Bits_branch = 0;
  if (tree->GetBranch("electrons_id_cutBased_Fall17V2_Tight_Bits") != 0) {
    electrons_id_cutBased_Fall17V2_Tight_Bits_branch = tree->GetBranch("electrons_id_cutBased_Fall17V2_Tight_Bits");
    if (electrons_id_cutBased_Fall17V2_Tight_Bits_branch) { electrons_id_cutBased_Fall17V2_Tight_Bits_branch->SetAddress(&electrons_id_cutBased_Fall17V2_Tight_Bits_); }
  }
  ak4jets_pass_leptonVetoId_branch = 0;
  if (tree->GetBranch("ak4jets_pass_leptonVetoId") != 0) {
    ak4jets_pass_leptonVetoId_branch = tree->GetBranch("ak4jets_pass_leptonVetoId");
    if (ak4jets_pass_leptonVetoId_branch) { ak4jets_pass_leptonVetoId_branch->SetAddress(&ak4jets_pass_leptonVetoId_); }
  }
  electrons_pfIso04_comb_nofsr_old_branch = 0;
  if (tree->GetBranch("electrons_pfIso04_comb_nofsr_old") != 0) {
    electrons_pfIso04_comb_nofsr_old_branch = tree->GetBranch("electrons_pfIso04_comb_nofsr_old");
    if (electrons_pfIso04_comb_nofsr_old_branch) { electrons_pfIso04_comb_nofsr_old_branch->SetAddress(&electrons_pfIso04_comb_nofsr_old_); }
  }
  isotracks_dxyerr_branch = 0;
  if (tree->GetBranch("isotracks_dxyerr") != 0) {
    isotracks_dxyerr_branch = tree->GetBranch("isotracks_dxyerr");
    if (isotracks_dxyerr_branch) { isotracks_dxyerr_branch->SetAddress(&isotracks_dxyerr_); }
  }
  puppimet_metPhi_Raw_branch = 0;
  if (tree->GetBranch("puppimet_metPhi_Raw") != 0) {
    puppimet_metPhi_Raw_branch = tree->GetBranch("puppimet_metPhi_Raw");
    if (puppimet_metPhi_Raw_branch) { puppimet_metPhi_Raw_branch->SetAddress(&puppimet_metPhi_Raw_); }
  }
  PythiaWeight_fsr_muRoneoversqrt2_branch = 0;
  if (tree->GetBranch("PythiaWeight_fsr_muRoneoversqrt2") != 0) {
    PythiaWeight_fsr_muRoneoversqrt2_branch = tree->GetBranch("PythiaWeight_fsr_muRoneoversqrt2");
    if (PythiaWeight_fsr_muRoneoversqrt2_branch) { PythiaWeight_fsr_muRoneoversqrt2_branch->SetAddress(&PythiaWeight_fsr_muRoneoversqrt2_); }
  }
  ak4jets_ptDistribution_branch = 0;
  if (tree->GetBranch("ak4jets_ptDistribution") != 0) {
    ak4jets_ptDistribution_branch = tree->GetBranch("ak4jets_ptDistribution");
    if (ak4jets_ptDistribution_branch) { ak4jets_ptDistribution_branch->SetAddress(&ak4jets_ptDistribution_); }
  }
  isotracks_eta_branch = 0;
  if (tree->GetBranch("isotracks_eta") != 0) {
    isotracks_eta_branch = tree->GetBranch("isotracks_eta");
    if (isotracks_eta_branch) { isotracks_eta_branch->SetAddress(&isotracks_eta_); }
  }
  p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM");
    if (p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch) { p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_); }
  }
  photons_id_MVA_Fall17V2_pass_wp90_branch = 0;
  if (tree->GetBranch("photons_id_MVA_Fall17V2_pass_wp90") != 0) {
    photons_id_MVA_Fall17V2_pass_wp90_branch = tree->GetBranch("photons_id_MVA_Fall17V2_pass_wp90");
    if (photons_id_MVA_Fall17V2_pass_wp90_branch) { photons_id_MVA_Fall17V2_pass_wp90_branch->SetAddress(&photons_id_MVA_Fall17V2_pass_wp90_); }
  }
  fsrcands_photonVeto_index_list_branch = 0;
  if (tree->GetBranch("fsrcands_photonVeto_index_list") != 0) {
    fsrcands_photonVeto_index_list_branch = tree->GetBranch("fsrcands_photonVeto_index_list");
    if (fsrcands_photonVeto_index_list_branch) { fsrcands_photonVeto_index_list_branch->SetAddress(&fsrcands_photonVeto_index_list_); }
  }
  metfilter_eeBadScFilter_branch = 0;
  if (tree->GetBranch("metfilter_eeBadScFilter") != 0) {
    metfilter_eeBadScFilter_branch = tree->GetBranch("metfilter_eeBadScFilter");
    if (metfilter_eeBadScFilter_branch) { metfilter_eeBadScFilter_branch->SetAddress(&metfilter_eeBadScFilter_); }
  }
  puppimet_metPhi_Nominal_branch = 0;
  if (tree->GetBranch("puppimet_metPhi_Nominal") != 0) {
    puppimet_metPhi_Nominal_branch = tree->GetBranch("puppimet_metPhi_Nominal");
    if (puppimet_metPhi_Nominal_branch) { puppimet_metPhi_Nominal_branch->SetAddress(&puppimet_metPhi_Nominal_); }
  }
  isotracks_pfIso03_nh_branch = 0;
  if (tree->GetBranch("isotracks_pfIso03_nh") != 0) {
    isotracks_pfIso03_nh_branch = tree->GetBranch("isotracks_pfIso03_nh");
    if (isotracks_pfIso03_nh_branch) { isotracks_pfIso03_nh_branch->SetAddress(&isotracks_pfIso03_nh_); }
  }
  p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM");
    if (p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_branch) { p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_); }
  }
  photons_scale_smear_corr_smear_totalUp_branch = 0;
  if (tree->GetBranch("photons_scale_smear_corr_smear_totalUp") != 0) {
    photons_scale_smear_corr_smear_totalUp_branch = tree->GetBranch("photons_scale_smear_corr_smear_totalUp");
    if (photons_scale_smear_corr_smear_totalUp_branch) { photons_scale_smear_corr_smear_totalUp_branch->SetAddress(&photons_scale_smear_corr_smear_totalUp_); }
  }
  metfilter_ecalBadCalibFilter_branch = 0;
  if (tree->GetBranch("metfilter_ecalBadCalibFilter") != 0) {
    metfilter_ecalBadCalibFilter_branch = tree->GetBranch("metfilter_ecalBadCalibFilter");
    if (metfilter_ecalBadCalibFilter_branch) { metfilter_ecalBadCalibFilter_branch->SetAddress(&metfilter_ecalBadCalibFilter_); }
  }
  electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ") != 0) {
    electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_branch = tree->GetBranch("electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ");
    if (electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_branch) { electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_branch->SetAddress(&electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_); }
  }
  electrons_miniIso_sum_neutral_nofsr_branch = 0;
  if (tree->GetBranch("electrons_miniIso_sum_neutral_nofsr") != 0) {
    electrons_miniIso_sum_neutral_nofsr_branch = tree->GetBranch("electrons_miniIso_sum_neutral_nofsr");
    if (electrons_miniIso_sum_neutral_nofsr_branch) { electrons_miniIso_sum_neutral_nofsr_branch->SetAddress(&electrons_miniIso_sum_neutral_nofsr_); }
  }
  muons_charge_branch = 0;
  if (tree->GetBranch("muons_charge") != 0) {
    muons_charge_branch = tree->GetBranch("muons_charge");
    if (muons_charge_branch) { muons_charge_branch->SetAddress(&muons_charge_); }
  }
  pfmet_metShift_px_JERUp_branch = 0;
  if (tree->GetBranch("pfmet_metShift_px_JERUp") != 0) {
    pfmet_metShift_px_JERUp_branch = tree->GetBranch("pfmet_metShift_px_JERUp");
    if (pfmet_metShift_px_JERUp_branch) { pfmet_metShift_px_JERUp_branch->SetAddress(&pfmet_metShift_px_JERUp_); }
  }
  event_rho_branch = 0;
  if (tree->GetBranch("event_rho") != 0) {
    event_rho_branch = tree->GetBranch("event_rho");
    if (event_rho_branch) { event_rho_branch->SetAddress(&event_rho_); }
  }
  ak4jets_hadronFlavour_branch = 0;
  if (tree->GetBranch("ak4jets_hadronFlavour") != 0) {
    ak4jets_hadronFlavour_branch = tree->GetBranch("ak4jets_hadronFlavour");
    if (ak4jets_hadronFlavour_branch) { ak4jets_hadronFlavour_branch->SetAddress(&ak4jets_hadronFlavour_); }
  }
  KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_branch = 0;
  if (tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp") != 0) {
    KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_branch = tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp");
    if (KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_branch) { KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_branch->SetAddress(&KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_); }
  }
  puppimet_sumEt_Nominal_branch = 0;
  if (tree->GetBranch("puppimet_sumEt_Nominal") != 0) {
    puppimet_sumEt_Nominal_branch = tree->GetBranch("puppimet_sumEt_Nominal");
    if (puppimet_sumEt_Nominal_branch) { puppimet_sumEt_Nominal_branch->SetAddress(&puppimet_sumEt_Nominal_); }
  }
  electrons_id_MVA_Fall17V2_NoIso_pass_wp90_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_NoIso_pass_wp90") != 0) {
    electrons_id_MVA_Fall17V2_NoIso_pass_wp90_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_NoIso_pass_wp90");
    if (electrons_id_MVA_Fall17V2_NoIso_pass_wp90_branch) { electrons_id_MVA_Fall17V2_NoIso_pass_wp90_branch->SetAddress(&electrons_id_MVA_Fall17V2_NoIso_pass_wp90_); }
  }
  electrons_id_MVA_Fall17V2_NoIso_Cat_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_NoIso_Cat") != 0) {
    electrons_id_MVA_Fall17V2_NoIso_Cat_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_NoIso_Cat");
    if (electrons_id_MVA_Fall17V2_NoIso_Cat_branch) { electrons_id_MVA_Fall17V2_NoIso_Cat_branch->SetAddress(&electrons_id_MVA_Fall17V2_NoIso_Cat_); }
  }
  pfmet_sumEt_Raw_branch = 0;
  if (tree->GetBranch("pfmet_sumEt_Raw") != 0) {
    pfmet_sumEt_Raw_branch = tree->GetBranch("pfmet_sumEt_Raw");
    if (pfmet_sumEt_Raw_branch) { pfmet_sumEt_Raw_branch->SetAddress(&pfmet_sumEt_Raw_); }
  }
  photons_etaSC_branch = 0;
  if (tree->GetBranch("photons_etaSC") != 0) {
    photons_etaSC_branch = tree->GetBranch("photons_etaSC");
    if (photons_etaSC_branch) { photons_etaSC_branch->SetAddress(&photons_etaSC_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_); }
  }
  genHEPMCweight_default_branch = 0;
  if (tree->GetBranch("genHEPMCweight_default") != 0) {
    genHEPMCweight_default_branch = tree->GetBranch("genHEPMCweight_default");
    if (genHEPMCweight_default_branch) { genHEPMCweight_default_branch->SetAddress(&genHEPMCweight_default_); }
  }
  LHEweight_QCDscale_muR0p5_muF1_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR0p5_muF1") != 0) {
    LHEweight_QCDscale_muR0p5_muF1_branch = tree->GetBranch("LHEweight_QCDscale_muR0p5_muF1");
    if (LHEweight_QCDscale_muR0p5_muF1_branch) { LHEweight_QCDscale_muR0p5_muF1_branch->SetAddress(&LHEweight_QCDscale_muR0p5_muF1_); }
  }
  ak8jets_ptDistribution_branch = 0;
  if (tree->GetBranch("ak8jets_ptDistribution") != 0) {
    ak8jets_ptDistribution_branch = tree->GetBranch("ak8jets_ptDistribution");
    if (ak8jets_ptDistribution_branch) { ak8jets_ptDistribution_branch->SetAddress(&ak8jets_ptDistribution_); }
  }
  muons_pfIso04_sum_neutral_nofsr_branch = 0;
  if (tree->GetBranch("muons_pfIso04_sum_neutral_nofsr") != 0) {
    muons_pfIso04_sum_neutral_nofsr_branch = tree->GetBranch("muons_pfIso04_sum_neutral_nofsr");
    if (muons_pfIso04_sum_neutral_nofsr_branch) { muons_pfIso04_sum_neutral_nofsr_branch->SetAddress(&muons_pfIso04_sum_neutral_nofsr_); }
  }
  KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_branch = 0;
  if (tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn") != 0) {
    KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_branch = tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn");
    if (KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_branch) { KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_branch->SetAddress(&KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_); }
  }
  lheparticles_mother0_index_branch = 0;
  if (tree->GetBranch("lheparticles_mother0_index") != 0) {
    lheparticles_mother0_index_branch = tree->GetBranch("lheparticles_mother0_index");
    if (lheparticles_mother0_index_branch) { lheparticles_mother0_index_branch->SetAddress(&lheparticles_mother0_index_); }
  }
  isotracks_charge_branch = 0;
  if (tree->GetBranch("isotracks_charge") != 0) {
    isotracks_charge_branch = tree->GetBranch("isotracks_charge");
    if (isotracks_charge_branch) { isotracks_charge_branch->SetAddress(&isotracks_charge_); }
  }
  p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM");
    if (p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_branch) { p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_); }
  }
  metfilter_METFilters_branch = 0;
  if (tree->GetBranch("metfilter_METFilters") != 0) {
    metfilter_METFilters_branch = tree->GetBranch("metfilter_METFilters");
    if (metfilter_METFilters_branch) { metfilter_METFilters_branch->SetAddress(&metfilter_METFilters_); }
  }
  pfmet_calo_metPhi_branch = 0;
  if (tree->GetBranch("pfmet_calo_metPhi") != 0) {
    pfmet_calo_metPhi_branch = tree->GetBranch("pfmet_calo_metPhi");
    if (pfmet_calo_metPhi_branch) { pfmet_calo_metPhi_branch->SetAddress(&pfmet_calo_metPhi_); }
  }
  p_Gen_CPStoBWPropRewgt_branch = 0;
  if (tree->GetBranch("p_Gen_CPStoBWPropRewgt") != 0) {
    p_Gen_CPStoBWPropRewgt_branch = tree->GetBranch("p_Gen_CPStoBWPropRewgt");
    if (p_Gen_CPStoBWPropRewgt_branch) { p_Gen_CPStoBWPropRewgt_branch->SetAddress(&p_Gen_CPStoBWPropRewgt_); }
  }
  puppimet_met_over_sqrtSumEt_branch = 0;
  if (tree->GetBranch("puppimet_met_over_sqrtSumEt") != 0) {
    puppimet_met_over_sqrtSumEt_branch = tree->GetBranch("puppimet_met_over_sqrtSumEt");
    if (puppimet_met_over_sqrtSumEt_branch) { puppimet_met_over_sqrtSumEt_branch->SetAddress(&puppimet_met_over_sqrtSumEt_); }
  }
  muons_phi_branch = 0;
  if (tree->GetBranch("muons_phi") != 0) {
    muons_phi_branch = tree->GetBranch("muons_phi");
    if (muons_phi_branch) { muons_phi_branch->SetAddress(&muons_phi_); }
  }
  genHEPMCweight_NNPDF30_branch = 0;
  if (tree->GetBranch("genHEPMCweight_NNPDF30") != 0) {
    genHEPMCweight_NNPDF30_branch = tree->GetBranch("genHEPMCweight_NNPDF30");
    if (genHEPMCweight_NNPDF30_branch) { genHEPMCweight_NNPDF30_branch->SetAddress(&genHEPMCweight_NNPDF30_); }
  }
  p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_); }
  }
  electrons_id_cutBased_Fall17V2_Medium_Bits_branch = 0;
  if (tree->GetBranch("electrons_id_cutBased_Fall17V2_Medium_Bits") != 0) {
    electrons_id_cutBased_Fall17V2_Medium_Bits_branch = tree->GetBranch("electrons_id_cutBased_Fall17V2_Medium_Bits");
    if (electrons_id_cutBased_Fall17V2_Medium_Bits_branch) { electrons_id_cutBased_Fall17V2_Medium_Bits_branch->SetAddress(&electrons_id_cutBased_Fall17V2_Medium_Bits_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_); }
  }
  metfilter_HBHENoiseFilter_branch = 0;
  if (tree->GetBranch("metfilter_HBHENoiseFilter") != 0) {
    metfilter_HBHENoiseFilter_branch = tree->GetBranch("metfilter_HBHENoiseFilter");
    if (metfilter_HBHENoiseFilter_branch) { metfilter_HBHENoiseFilter_branch->SetAddress(&metfilter_HBHENoiseFilter_); }
  }
  ak4jets_deepFlavourprobc_branch = 0;
  if (tree->GetBranch("ak4jets_deepFlavourprobc") != 0) {
    ak4jets_deepFlavourprobc_branch = tree->GetBranch("ak4jets_deepFlavourprobc");
    if (ak4jets_deepFlavourprobc_branch) { ak4jets_deepFlavourprobc_branch->SetAddress(&ak4jets_deepFlavourprobc_); }
  }
  ak4jets_deepFlavourprobb_branch = 0;
  if (tree->GetBranch("ak4jets_deepFlavourprobb") != 0) {
    ak4jets_deepFlavourprobb_branch = tree->GetBranch("ak4jets_deepFlavourprobb");
    if (ak4jets_deepFlavourprobb_branch) { ak4jets_deepFlavourprobb_branch->SetAddress(&ak4jets_deepFlavourprobb_); }
  }
  ak4jets_deepFlavourprobg_branch = 0;
  if (tree->GetBranch("ak4jets_deepFlavourprobg") != 0) {
    ak4jets_deepFlavourprobg_branch = tree->GetBranch("ak4jets_deepFlavourprobg");
    if (ak4jets_deepFlavourprobg_branch) { ak4jets_deepFlavourprobg_branch->SetAddress(&ak4jets_deepFlavourprobg_); }
  }
  LHEweight_QCDscale_muR1_muF2_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR1_muF2") != 0) {
    LHEweight_QCDscale_muR1_muF2_branch = tree->GetBranch("LHEweight_QCDscale_muR1_muF2");
    if (LHEweight_QCDscale_muR1_muF2_branch) { LHEweight_QCDscale_muR1_muF2_branch->SetAddress(&LHEweight_QCDscale_muR1_muF2_); }
  }
  LHEweight_QCDscale_muR1_muF1_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR1_muF1") != 0) {
    LHEweight_QCDscale_muR1_muF1_branch = tree->GetBranch("LHEweight_QCDscale_muR1_muF1");
    if (LHEweight_QCDscale_muR1_muF1_branch) { LHEweight_QCDscale_muR1_muF1_branch->SetAddress(&LHEweight_QCDscale_muR1_muF1_); }
  }
  metfilter_BadChargedCandidateFilter_branch = 0;
  if (tree->GetBranch("metfilter_BadChargedCandidateFilter") != 0) {
    metfilter_BadChargedCandidateFilter_branch = tree->GetBranch("metfilter_BadChargedCandidateFilter");
    if (metfilter_BadChargedCandidateFilter_branch) { metfilter_BadChargedCandidateFilter_branch->SetAddress(&metfilter_BadChargedCandidateFilter_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_); }
  }
  sumEt_branch = 0;
  if (tree->GetBranch("sumEt") != 0) {
    sumEt_branch = tree->GetBranch("sumEt");
    if (sumEt_branch) { sumEt_branch->SetAddress(&sumEt_); }
  }
  vtxs_nvtxs_branch = 0;
  if (tree->GetBranch("vtxs_nvtxs") != 0) {
    vtxs_nvtxs_branch = tree->GetBranch("vtxs_nvtxs");
    if (vtxs_nvtxs_branch) { vtxs_nvtxs_branch->SetAddress(&vtxs_nvtxs_); }
  }
  muons_miniIso_sum_charged_nofsr_branch = 0;
  if (tree->GetBranch("muons_miniIso_sum_charged_nofsr") != 0) {
    muons_miniIso_sum_charged_nofsr_branch = tree->GetBranch("muons_miniIso_sum_charged_nofsr");
    if (muons_miniIso_sum_charged_nofsr_branch) { muons_miniIso_sum_charged_nofsr_branch->SetAddress(&muons_miniIso_sum_charged_nofsr_); }
  }
  muons_POG_selector_bits_branch = 0;
  if (tree->GetBranch("muons_POG_selector_bits") != 0) {
    muons_POG_selector_bits_branch = tree->GetBranch("muons_POG_selector_bits");
    if (muons_POG_selector_bits_branch) { muons_POG_selector_bits_branch->SetAddress(&muons_POG_selector_bits_); }
  }
  muons_miniIso_comb_nofsr_branch = 0;
  if (tree->GetBranch("muons_miniIso_comb_nofsr") != 0) {
    muons_miniIso_comb_nofsr_branch = tree->GetBranch("muons_miniIso_comb_nofsr");
    if (muons_miniIso_comb_nofsr_branch) { muons_miniIso_comb_nofsr_branch->SetAddress(&muons_miniIso_comb_nofsr_); }
  }
  photons_pfChargedHadronIso_EAcorr_branch = 0;
  if (tree->GetBranch("photons_pfChargedHadronIso_EAcorr") != 0) {
    photons_pfChargedHadronIso_EAcorr_branch = tree->GetBranch("photons_pfChargedHadronIso_EAcorr");
    if (photons_pfChargedHadronIso_EAcorr_branch) { photons_pfChargedHadronIso_EAcorr_branch->SetAddress(&photons_pfChargedHadronIso_EAcorr_); }
  }
  isotracks_pfIso03_ch_branch = 0;
  if (tree->GetBranch("isotracks_pfIso03_ch") != 0) {
    isotracks_pfIso03_ch_branch = tree->GetBranch("isotracks_pfIso03_ch");
    if (isotracks_pfIso03_ch_branch) { isotracks_pfIso03_ch_branch->SetAddress(&isotracks_pfIso03_ch_); }
  }
  electrons_phi_branch = 0;
  if (tree->GetBranch("electrons_phi") != 0) {
    electrons_phi_branch = tree->GetBranch("electrons_phi");
    if (electrons_phi_branch) { electrons_phi_branch->SetAddress(&electrons_phi_); }
  }
  LHEweight_PDFVariation_Dn_default_branch = 0;
  if (tree->GetBranch("LHEweight_PDFVariation_Dn_default") != 0) {
    LHEweight_PDFVariation_Dn_default_branch = tree->GetBranch("LHEweight_PDFVariation_Dn_default");
    if (LHEweight_PDFVariation_Dn_default_branch) { LHEweight_PDFVariation_Dn_default_branch->SetAddress(&LHEweight_PDFVariation_Dn_default_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_); }
  }
  pfmet_metPhi_UnclusteredEnDn_branch = 0;
  if (tree->GetBranch("pfmet_metPhi_UnclusteredEnDn") != 0) {
    pfmet_metPhi_UnclusteredEnDn_branch = tree->GetBranch("pfmet_metPhi_UnclusteredEnDn");
    if (pfmet_metPhi_UnclusteredEnDn_branch) { pfmet_metPhi_UnclusteredEnDn_branch->SetAddress(&pfmet_metPhi_UnclusteredEnDn_); }
  }
  ak4jets_phi_branch = 0;
  if (tree->GetBranch("ak4jets_phi") != 0) {
    ak4jets_phi_branch = tree->GetBranch("ak4jets_phi");
    if (ak4jets_phi_branch) { ak4jets_phi_branch->SetAddress(&ak4jets_phi_); }
  }
  photons_id_cutBased_Fall17V2_Medium_Bits_branch = 0;
  if (tree->GetBranch("photons_id_cutBased_Fall17V2_Medium_Bits") != 0) {
    photons_id_cutBased_Fall17V2_Medium_Bits_branch = tree->GetBranch("photons_id_cutBased_Fall17V2_Medium_Bits");
    if (photons_id_cutBased_Fall17V2_Medium_Bits_branch) { photons_id_cutBased_Fall17V2_Medium_Bits_branch->SetAddress(&photons_id_cutBased_Fall17V2_Medium_Bits_); }
  }
  p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_); }
  }
  isotracks_lepOverlap_branch = 0;
  if (tree->GetBranch("isotracks_lepOverlap") != 0) {
    isotracks_lepOverlap_branch = tree->GetBranch("isotracks_lepOverlap");
    if (isotracks_lepOverlap_branch) { isotracks_lepOverlap_branch->SetAddress(&isotracks_lepOverlap_); }
  }
  p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM");
    if (p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_branch) { p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_); }
  }
  muons_eta_branch = 0;
  if (tree->GetBranch("muons_eta") != 0) {
    muons_eta_branch = tree->GetBranch("muons_eta");
    if (muons_eta_branch) { muons_eta_branch->SetAddress(&muons_eta_); }
  }
  vtxs_is_valid_branch = 0;
  if (tree->GetBranch("vtxs_is_valid") != 0) {
    vtxs_is_valid_branch = tree->GetBranch("vtxs_is_valid");
    if (vtxs_is_valid_branch) { vtxs_is_valid_branch->SetAddress(&vtxs_is_valid_); }
  }
  p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_); }
  }
  electrons_miniIso_sum_charged_nofsr_branch = 0;
  if (tree->GetBranch("electrons_miniIso_sum_charged_nofsr") != 0) {
    electrons_miniIso_sum_charged_nofsr_branch = tree->GetBranch("electrons_miniIso_sum_charged_nofsr");
    if (electrons_miniIso_sum_charged_nofsr_branch) { electrons_miniIso_sum_charged_nofsr_branch->SetAddress(&electrons_miniIso_sum_charged_nofsr_); }
  }
  ak4jets_deepFlavourprobbb_branch = 0;
  if (tree->GetBranch("ak4jets_deepFlavourprobbb") != 0) {
    ak4jets_deepFlavourprobbb_branch = tree->GetBranch("ak4jets_deepFlavourprobbb");
    if (ak4jets_deepFlavourprobbb_branch) { ak4jets_deepFlavourprobbb_branch->SetAddress(&ak4jets_deepFlavourprobbb_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_); }
  }
  LHEweight_AsMZ_Up_default_branch = 0;
  if (tree->GetBranch("LHEweight_AsMZ_Up_default") != 0) {
    LHEweight_AsMZ_Up_default_branch = tree->GetBranch("LHEweight_AsMZ_Up_default");
    if (LHEweight_AsMZ_Up_default_branch) { LHEweight_AsMZ_Up_default_branch->SetAddress(&LHEweight_AsMZ_Up_default_); }
  }
  muons_miniIso_comb_nofsr_uncorrected_branch = 0;
  if (tree->GetBranch("muons_miniIso_comb_nofsr_uncorrected") != 0) {
    muons_miniIso_comb_nofsr_uncorrected_branch = tree->GetBranch("muons_miniIso_comb_nofsr_uncorrected");
    if (muons_miniIso_comb_nofsr_uncorrected_branch) { muons_miniIso_comb_nofsr_uncorrected_branch->SetAddress(&muons_miniIso_comb_nofsr_uncorrected_); }
  }
  metfilter_CSCTightHalo2015Filter_branch = 0;
  if (tree->GetBranch("metfilter_CSCTightHalo2015Filter") != 0) {
    metfilter_CSCTightHalo2015Filter_branch = tree->GetBranch("metfilter_CSCTightHalo2015Filter");
    if (metfilter_CSCTightHalo2015Filter_branch) { metfilter_CSCTightHalo2015Filter_branch->SetAddress(&metfilter_CSCTightHalo2015Filter_); }
  }
  pfmet_metShift_px_JERDn_branch = 0;
  if (tree->GetBranch("pfmet_metShift_px_JERDn") != 0) {
    pfmet_metShift_px_JERDn_branch = tree->GetBranch("pfmet_metShift_px_JERDn");
    if (pfmet_metShift_px_JERDn_branch) { pfmet_metShift_px_JERDn_branch->SetAddress(&pfmet_metShift_px_JERDn_); }
  }
  electrons_etaSC_branch = 0;
  if (tree->GetBranch("electrons_etaSC") != 0) {
    electrons_etaSC_branch = tree->GetBranch("electrons_etaSC");
    if (electrons_etaSC_branch) { electrons_etaSC_branch->SetAddress(&electrons_etaSC_); }
  }
  n_shower_gluons_to_charm_branch = 0;
  if (tree->GetBranch("n_shower_gluons_to_charm") != 0) {
    n_shower_gluons_to_charm_branch = tree->GetBranch("n_shower_gluons_to_charm");
    if (n_shower_gluons_to_charm_branch) { n_shower_gluons_to_charm_branch->SetAddress(&n_shower_gluons_to_charm_); }
  }
  PythiaWeight_fsr_muR0p25_branch = 0;
  if (tree->GetBranch("PythiaWeight_fsr_muR0p25") != 0) {
    PythiaWeight_fsr_muR0p25_branch = tree->GetBranch("PythiaWeight_fsr_muR0p25");
    if (PythiaWeight_fsr_muR0p25_branch) { PythiaWeight_fsr_muR0p25_branch->SetAddress(&PythiaWeight_fsr_muR0p25_); }
  }
  PythiaWeight_isr_muRsqrt2_branch = 0;
  if (tree->GetBranch("PythiaWeight_isr_muRsqrt2") != 0) {
    PythiaWeight_isr_muRsqrt2_branch = tree->GetBranch("PythiaWeight_isr_muRsqrt2");
    if (PythiaWeight_isr_muRsqrt2_branch) { PythiaWeight_isr_muRsqrt2_branch->SetAddress(&PythiaWeight_isr_muRsqrt2_); }
  }
  ak4jets_deepFlavourprobuds_branch = 0;
  if (tree->GetBranch("ak4jets_deepFlavourprobuds") != 0) {
    ak4jets_deepFlavourprobuds_branch = tree->GetBranch("ak4jets_deepFlavourprobuds");
    if (ak4jets_deepFlavourprobuds_branch) { ak4jets_deepFlavourprobuds_branch->SetAddress(&ak4jets_deepFlavourprobuds_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_); }
  }
  KFactor_QCD_NNLO_ggZZ_Sig_AsDn_branch = 0;
  if (tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_AsDn") != 0) {
    KFactor_QCD_NNLO_ggZZ_Sig_AsDn_branch = tree->GetBranch("KFactor_QCD_NNLO_ggZZ_Sig_AsDn");
    if (KFactor_QCD_NNLO_ggZZ_Sig_AsDn_branch) { KFactor_QCD_NNLO_ggZZ_Sig_AsDn_branch->SetAddress(&KFactor_QCD_NNLO_ggZZ_Sig_AsDn_); }
  }
  electrons_pfIso04_sum_neutral_nofsr_branch = 0;
  if (tree->GetBranch("electrons_pfIso04_sum_neutral_nofsr") != 0) {
    electrons_pfIso04_sum_neutral_nofsr_branch = tree->GetBranch("electrons_pfIso04_sum_neutral_nofsr");
    if (electrons_pfIso04_sum_neutral_nofsr_branch) { electrons_pfIso04_sum_neutral_nofsr_branch->SetAddress(&electrons_pfIso04_sum_neutral_nofsr_); }
  }
  muons_pass_muon_timing_branch = 0;
  if (tree->GetBranch("muons_pass_muon_timing") != 0) {
    muons_pass_muon_timing_branch = tree->GetBranch("muons_pass_muon_timing");
    if (muons_pass_muon_timing_branch) { muons_pass_muon_timing_branch->SetAddress(&muons_pass_muon_timing_); }
  }
  metfilter_ecalLaserCorrFilter_branch = 0;
  if (tree->GetBranch("metfilter_ecalLaserCorrFilter") != 0) {
    metfilter_ecalLaserCorrFilter_branch = tree->GetBranch("metfilter_ecalLaserCorrFilter");
    if (metfilter_ecalLaserCorrFilter_branch) { metfilter_ecalLaserCorrFilter_branch->SetAddress(&metfilter_ecalLaserCorrFilter_); }
  }
  metfilter_HBHENoiseIsoFilter_branch = 0;
  if (tree->GetBranch("metfilter_HBHENoiseIsoFilter") != 0) {
    metfilter_HBHENoiseIsoFilter_branch = tree->GetBranch("metfilter_HBHENoiseIsoFilter");
    if (metfilter_HBHENoiseIsoFilter_branch) { metfilter_HBHENoiseIsoFilter_branch->SetAddress(&metfilter_HBHENoiseIsoFilter_); }
  }
  triggerObjects_mass_branch = 0;
  if (tree->GetBranch("triggerObjects_mass") != 0) {
    triggerObjects_mass_branch = tree->GetBranch("triggerObjects_mass");
    if (triggerObjects_mass_branch) { triggerObjects_mass_branch->SetAddress(&triggerObjects_mass_); }
  }
  p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_); }
  }
  PythiaWeight_isr_muR0p25_branch = 0;
  if (tree->GetBranch("PythiaWeight_isr_muR0p25") != 0) {
    PythiaWeight_isr_muR0p25_branch = tree->GetBranch("PythiaWeight_isr_muR0p25");
    if (PythiaWeight_isr_muR0p25_branch) { PythiaWeight_isr_muR0p25_branch->SetAddress(&PythiaWeight_isr_muR0p25_); }
  }
  genmet_met_branch = 0;
  if (tree->GetBranch("genmet_met") != 0) {
    genmet_met_branch = tree->GetBranch("genmet_met");
    if (genmet_met_branch) { genmet_met_branch->SetAddress(&genmet_met_); }
  }
  fsrcands_pt_branch = 0;
  if (tree->GetBranch("fsrcands_pt") != 0) {
    fsrcands_pt_branch = tree->GetBranch("fsrcands_pt");
    if (fsrcands_pt_branch) { fsrcands_pt_branch->SetAddress(&fsrcands_pt_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_); }
  }
  ak4jets_JERUp_branch = 0;
  if (tree->GetBranch("ak4jets_JERUp") != 0) {
    ak4jets_JERUp_branch = tree->GetBranch("ak4jets_JERUp");
    if (ak4jets_JERUp_branch) { ak4jets_JERUp_branch->SetAddress(&ak4jets_JERUp_); }
  }
  photons_id_MVA_Fall17V2_Val_branch = 0;
  if (tree->GetBranch("photons_id_MVA_Fall17V2_Val") != 0) {
    photons_id_MVA_Fall17V2_Val_branch = tree->GetBranch("photons_id_MVA_Fall17V2_Val");
    if (photons_id_MVA_Fall17V2_Val_branch) { photons_id_MVA_Fall17V2_Val_branch->SetAddress(&photons_id_MVA_Fall17V2_Val_); }
  }
  p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_); }
  }
  ak4jets_axis1_branch = 0;
  if (tree->GetBranch("ak4jets_axis1") != 0) {
    ak4jets_axis1_branch = tree->GetBranch("ak4jets_axis1");
    if (ak4jets_axis1_branch) { ak4jets_axis1_branch->SetAddress(&ak4jets_axis1_); }
  }
  ak4jets_axis2_branch = 0;
  if (tree->GetBranch("ak4jets_axis2") != 0) {
    ak4jets_axis2_branch = tree->GetBranch("ak4jets_axis2");
    if (ak4jets_axis2_branch) { ak4jets_axis2_branch->SetAddress(&ak4jets_axis2_); }
  }
  puppimet_met_JECUp_branch = 0;
  if (tree->GetBranch("puppimet_met_JECUp") != 0) {
    puppimet_met_JECUp_branch = tree->GetBranch("puppimet_met_JECUp");
    if (puppimet_met_JECUp_branch) { puppimet_met_JECUp_branch->SetAddress(&puppimet_met_JECUp_); }
  }
  electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_pass_wpLoose") != 0) {
    electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_pass_wpLoose");
    if (electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_branch) { electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_branch->SetAddress(&electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_); }
  }
  p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_); }
  }
  electrons_id_MVA_Fall17V2_NoIso_Val_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_NoIso_Val") != 0) {
    electrons_id_MVA_Fall17V2_NoIso_Val_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_NoIso_Val");
    if (electrons_id_MVA_Fall17V2_NoIso_Val_branch) { electrons_id_MVA_Fall17V2_NoIso_Val_branch->SetAddress(&electrons_id_MVA_Fall17V2_NoIso_Val_); }
  }
  PythiaWeight_fsr_muR2_branch = 0;
  if (tree->GetBranch("PythiaWeight_fsr_muR2") != 0) {
    PythiaWeight_fsr_muR2_branch = tree->GetBranch("PythiaWeight_fsr_muR2");
    if (PythiaWeight_fsr_muR2_branch) { PythiaWeight_fsr_muR2_branch->SetAddress(&PythiaWeight_fsr_muR2_); }
  }
  electrons_pfIso03_comb_nofsr_old_branch = 0;
  if (tree->GetBranch("electrons_pfIso03_comb_nofsr_old") != 0) {
    electrons_pfIso03_comb_nofsr_old_branch = tree->GetBranch("electrons_pfIso03_comb_nofsr_old");
    if (electrons_pfIso03_comb_nofsr_old_branch) { electrons_pfIso03_comb_nofsr_old_branch->SetAddress(&electrons_pfIso03_comb_nofsr_old_); }
  }
  pfmet_met_over_sqrtSumEt_branch = 0;
  if (tree->GetBranch("pfmet_met_over_sqrtSumEt") != 0) {
    pfmet_met_over_sqrtSumEt_branch = tree->GetBranch("pfmet_met_over_sqrtSumEt");
    if (pfmet_met_over_sqrtSumEt_branch) { pfmet_met_over_sqrtSumEt_branch->SetAddress(&pfmet_met_over_sqrtSumEt_); }
  }
  PythiaWeight_fsr_muR4_branch = 0;
  if (tree->GetBranch("PythiaWeight_fsr_muR4") != 0) {
    PythiaWeight_fsr_muR4_branch = tree->GetBranch("PythiaWeight_fsr_muR4");
    if (PythiaWeight_fsr_muR4_branch) { PythiaWeight_fsr_muR4_branch->SetAddress(&PythiaWeight_fsr_muR4_); }
  }
  lheparticles_id_branch = 0;
  if (tree->GetBranch("lheparticles_id") != 0) {
    lheparticles_id_branch = tree->GetBranch("lheparticles_id");
    if (lheparticles_id_branch) { lheparticles_id_branch->SetAddress(&lheparticles_id_); }
  }
  puppimet_met_UnclusteredEnDn_branch = 0;
  if (tree->GetBranch("puppimet_met_UnclusteredEnDn") != 0) {
    puppimet_met_UnclusteredEnDn_branch = tree->GetBranch("puppimet_met_UnclusteredEnDn");
    if (puppimet_met_UnclusteredEnDn_branch) { puppimet_met_UnclusteredEnDn_branch->SetAddress(&puppimet_met_UnclusteredEnDn_); }
  }
  electrons_pfIso04_sum_neutral_nofsr_old_branch = 0;
  if (tree->GetBranch("electrons_pfIso04_sum_neutral_nofsr_old") != 0) {
    electrons_pfIso04_sum_neutral_nofsr_old_branch = tree->GetBranch("electrons_pfIso04_sum_neutral_nofsr_old");
    if (electrons_pfIso04_sum_neutral_nofsr_old_branch) { electrons_pfIso04_sum_neutral_nofsr_old_branch->SetAddress(&electrons_pfIso04_sum_neutral_nofsr_old_); }
  }
  electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ") != 0) {
    electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ");
    if (electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_branch) { electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_branch->SetAddress(&electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_); }
  }
  electrons_scale_smear_corr_smear_totalUp_branch = 0;
  if (tree->GetBranch("electrons_scale_smear_corr_smear_totalUp") != 0) {
    electrons_scale_smear_corr_smear_totalUp_branch = tree->GetBranch("electrons_scale_smear_corr_smear_totalUp");
    if (electrons_scale_smear_corr_smear_totalUp_branch) { electrons_scale_smear_corr_smear_totalUp_branch->SetAddress(&electrons_scale_smear_corr_smear_totalUp_); }
  }
  isotracks_mass_branch = 0;
  if (tree->GetBranch("isotracks_mass") != 0) {
    isotracks_mass_branch = tree->GetBranch("isotracks_mass");
    if (isotracks_mass_branch) { isotracks_mass_branch->SetAddress(&isotracks_mass_); }
  }
  triggers_passTrigger_branch = 0;
  if (tree->GetBranch("triggers_passTrigger") != 0) {
    triggers_passTrigger_branch = tree->GetBranch("triggers_passTrigger");
    if (triggers_passTrigger_branch) { triggers_passTrigger_branch->SetAddress(&triggers_passTrigger_); }
  }
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_); }
  }
  pfmet_metPhi_Raw_branch = 0;
  if (tree->GetBranch("pfmet_metPhi_Raw") != 0) {
    pfmet_metPhi_Raw_branch = tree->GetBranch("pfmet_metPhi_Raw");
    if (pfmet_metPhi_Raw_branch) { pfmet_metPhi_Raw_branch->SetAddress(&pfmet_metPhi_Raw_); }
  }
  LHEweight_PDFVariation_Up_NNPDF30_branch = 0;
  if (tree->GetBranch("LHEweight_PDFVariation_Up_NNPDF30") != 0) {
    LHEweight_PDFVariation_Up_NNPDF30_branch = tree->GetBranch("LHEweight_PDFVariation_Up_NNPDF30");
    if (LHEweight_PDFVariation_Up_NNPDF30_branch) { LHEweight_PDFVariation_Up_NNPDF30_branch->SetAddress(&LHEweight_PDFVariation_Up_NNPDF30_); }
  }
  electrons_pfIso03_sum_neutral_nofsr_old_branch = 0;
  if (tree->GetBranch("electrons_pfIso03_sum_neutral_nofsr_old") != 0) {
    electrons_pfIso03_sum_neutral_nofsr_old_branch = tree->GetBranch("electrons_pfIso03_sum_neutral_nofsr_old");
    if (electrons_pfIso03_sum_neutral_nofsr_old_branch) { electrons_pfIso03_sum_neutral_nofsr_old_branch->SetAddress(&electrons_pfIso03_sum_neutral_nofsr_old_); }
  }
  photons_pfEMIso_EAcorr_branch = 0;
  if (tree->GetBranch("photons_pfEMIso_EAcorr") != 0) {
    photons_pfEMIso_EAcorr_branch = tree->GetBranch("photons_pfEMIso_EAcorr");
    if (photons_pfEMIso_EAcorr_branch) { photons_pfEMIso_EAcorr_branch->SetAddress(&photons_pfEMIso_EAcorr_); }
  }
  p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_); }
  }
  ak8jets_JERUp_branch = 0;
  if (tree->GetBranch("ak8jets_JERUp") != 0) {
    ak8jets_JERUp_branch = tree->GetBranch("ak8jets_JERUp");
    if (ak8jets_JERUp_branch) { ak8jets_JERUp_branch->SetAddress(&ak8jets_JERUp_); }
  }
  p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM");
    if (p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_branch) { p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_); }
  }
  metfilter_muonBadTrackFilter_branch = 0;
  if (tree->GetBranch("metfilter_muonBadTrackFilter") != 0) {
    metfilter_muonBadTrackFilter_branch = tree->GetBranch("metfilter_muonBadTrackFilter");
    if (metfilter_muonBadTrackFilter_branch) { metfilter_muonBadTrackFilter_branch->SetAddress(&metfilter_muonBadTrackFilter_); }
  }
  isotracks_miniIso_em_branch = 0;
  if (tree->GetBranch("isotracks_miniIso_em") != 0) {
    isotracks_miniIso_em_branch = tree->GetBranch("isotracks_miniIso_em");
    if (isotracks_miniIso_em_branch) { isotracks_miniIso_em_branch->SetAddress(&isotracks_miniIso_em_); }
  }
  ak4jets_deepCSVprobb_branch = 0;
  if (tree->GetBranch("ak4jets_deepCSVprobb") != 0) {
    ak4jets_deepCSVprobb_branch = tree->GetBranch("ak4jets_deepCSVprobb");
    if (ak4jets_deepCSVprobb_branch) { ak4jets_deepCSVprobb_branch->SetAddress(&ak4jets_deepCSVprobb_); }
  }
  ak4jets_deepCSVprobc_branch = 0;
  if (tree->GetBranch("ak4jets_deepCSVprobc") != 0) {
    ak4jets_deepCSVprobc_branch = tree->GetBranch("ak4jets_deepCSVprobc");
    if (ak4jets_deepCSVprobc_branch) { ak4jets_deepCSVprobc_branch->SetAddress(&ak4jets_deepCSVprobc_); }
  }
  photons_scale_smear_corr_smear_totalDn_branch = 0;
  if (tree->GetBranch("photons_scale_smear_corr_smear_totalDn") != 0) {
    photons_scale_smear_corr_smear_totalDn_branch = tree->GetBranch("photons_scale_smear_corr_smear_totalDn");
    if (photons_scale_smear_corr_smear_totalDn_branch) { photons_scale_smear_corr_smear_totalDn_branch->SetAddress(&photons_scale_smear_corr_smear_totalDn_); }
  }
  p_Gen_JJEW_BSI_ghv1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_1_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_1_MCFM_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_MCFM_); }
  }
  tree->SetMakeClass(0);
}
void CMS5::GetEntry(unsigned int idx) {
  index = idx;
  ak8jets_partonFlavour_isLoaded = false;
  triggerObjects_type_isLoaded = false;
  electrons_eta_isLoaded = false;
  KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_isLoaded = false;
  triggerObjects_associatedTriggers_isLoaded = false;
  electrons_pfIso04_sum_charged_nofsr_isLoaded = false;
  lheparticles_pz_isLoaded = false;
  ak4jets_pass_tightId_isLoaded = false;
  lheparticles_py_isLoaded = false;
  electrons_id_cutBased_Fall17V2_Veto_Bits_isLoaded = false;
  pfmet_metPhi_Nominal_isLoaded = false;
  xsec_isLoaded = false;
  pfmet_met_UnclusteredEnDn_isLoaded = false;
  p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_isLoaded = false;
  electrons_miniIso_comb_nofsr_uncorrected_isLoaded = false;
  p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = false;
  p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_isLoaded = false;
  isotracks_is_pfCand_isLoaded = false;
  metfilter_CSCTightHaloFilter_isLoaded = false;
  muons_pt_isLoaded = false;
  electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_isLoaded = false;
  photons_scale_smear_corr_isLoaded = false;
  LHEweight_AsMZ_Dn_default_isLoaded = false;
  electrons_mass_isLoaded = false;
  pfmet_metPhi_JECDn_isLoaded = false;
  ak4jets_JERDn_isLoaded = false;
  xsec_lhe_isLoaded = false;
  ak4jets_partonFlavour_isLoaded = false;
  ak4jets_eta_isLoaded = false;
  ak4jets_totalMultiplicity_isLoaded = false;
  puppimet_metPhi_JECDn_isLoaded = false;
  electrons_pt_isLoaded = false;
  PythiaWeight_fsr_muR0p5_isLoaded = false;
  ak8jets_mass_isLoaded = false;
  KFactor_QCD_NNLO_ggZZ_Sig_AsUp_isLoaded = false;
  muons_pull_dxdz_noArb_DT_isLoaded = false;
  ak8jets_totalMultiplicity_isLoaded = false;
  ak8jets_pass_looseId_isLoaded = false;
  n_shower_gluons_to_bottom_isLoaded = false;
  p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_isLoaded = false;
  isotracks_fromPV_isLoaded = false;
  ak4jets_pt_isLoaded = false;
  p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_isLoaded = false;
  lheparticles_E_isLoaded = false;
  electrons_id_MVA_Fall17V2_NoIso_pass_wp80_isLoaded = false;
  isotracks_pfIso03_comb_nofsr_isLoaded = false;
  vtxs_is_fake_isLoaded = false;
  LuminosityBlock_isLoaded = false;
  ak8jets_JERDn_isLoaded = false;
  qscale_isLoaded = false;
  p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_isLoaded = false;
  isotracks_miniIso_comb_nofsr_isLoaded = false;
  muons_pfIso03_sum_charged_nofsr_isLoaded = false;
  p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_isLoaded = false;
  electrons_id_MVA_HZZRun2Legacy_Iso_Cat_isLoaded = false;
  isotracks_pfIso03_em_isLoaded = false;
  p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_isLoaded = false;
  vtxs_is_good_isLoaded = false;
  electrons_scale_smear_corr_smear_totalDn_isLoaded = false;
  muons_pfIso04_comb_nofsr_isLoaded = false;
  LHECandMass_isLoaded = false;
  triggerObjects_passedTriggers_isLoaded = false;
  metfilter_goodVertices_isLoaded = false;
  muons_pfIso04_sum_charged_nofsr_isLoaded = false;
  pfmet_met_JECUp_isLoaded = false;
  ak4jets_JECDn_isLoaded = false;
  electrons_pfIso03_comb_nofsr_isLoaded = false;
  photons_pfIso_comb_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_isLoaded = false;
  metfilter_trkPOG_toomanystripclus53X_isLoaded = false;
  triggerObjects_phi_isLoaded = false;
  isotracks_pt_isLoaded = false;
  lheparticles_mother1_index_isLoaded = false;
  p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_isLoaded = false;
  pfmet_calo_met_isLoaded = false;
  muons_pfIso03_comb_nofsr_isLoaded = false;
  isotracks_miniIso_db_isLoaded = false;
  passCommonSkim_isLoaded = false;
  muons_scale_smear_pt_corr_scale_totalUp_isLoaded = false;
  isotracks_is_tightTrack_isLoaded = false;
  photons_id_cutBased_Fall17V2_Loose_Bits_isLoaded = false;
  ak4jets_deepCSVprobbb_isLoaded = false;
  pfmet_metShift_px_JERNominal_isLoaded = false;
  metfilter_trkPOG_logErrorTooManyClusters_isLoaded = false;
  pfmet_met_UnclusteredEnUp_isLoaded = false;
  puppimet_met_UnclusteredEnUp_isLoaded = false;
  puppimet_metPhi_UnclusteredEnUp_isLoaded = false;
  p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_isLoaded = false;
  isotracks_is_highPurityTrack_isLoaded = false;
  LHEweight_AsMZ_Up_NNPDF30_isLoaded = false;
  triggers_name_isLoaded = false;
  puppimet_met_JECDn_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_pass_wp80_isLoaded = false;
  photons_mass_isLoaded = false;
  electrons_id_cutBased_Fall17V2_Loose_Bits_isLoaded = false;
  electrons_id_MVA_HZZRun2Legacy_Iso_Val_isLoaded = false;
  photons_pt_isLoaded = false;
  ak8jets_pass_tightId_isLoaded = false;
  KFactor_QCD_NNLO_ggZZ_Sig_Nominal_isLoaded = false;
  metfilter_CSCTightHaloTrkMuUnvetoFilter_isLoaded = false;
  electrons_miniIso_comb_nofsr_isLoaded = false;
  muons_pull_dxdz_noArb_CSC_isLoaded = false;
  metfilter_globalTightHalo2016Filter_isLoaded = false;
  p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_isLoaded = false;
  ak8jets_pass_leptonVetoId_isLoaded = false;
  ak4jets_pass_looseId_isLoaded = false;
  triggerObjects_pt_isLoaded = false;
  metfilter_globalSuperTightHalo2016Filter_isLoaded = false;
  muons_dxy_bestTrack_firstPV_isLoaded = false;
  metfilter_HcalStripHaloFilter_isLoaded = false;
  p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_isLoaded = false;
  electrons_miniIso_sum_neutral_nofsr_old_isLoaded = false;
  photons_scale_smear_corr_scale_totalUp_isLoaded = false;
  p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = false;
  electrons_scale_smear_corr_scale_totalUp_isLoaded = false;
  metfilter_trkPOG_manystripclus53X_isLoaded = false;
  isotracks_id_isLoaded = false;
  ak4jets_JECNominal_isLoaded = false;
  LHEweight_PDFVariation_Dn_NNPDF30_isLoaded = false;
  triggers_L1prescale_isLoaded = false;
  isotracks_dxy_isLoaded = false;
  pfmet_met_Raw_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_pass_wp90_isLoaded = false;
  LHEweight_QCDscale_muR0p5_muF0p5_isLoaded = false;
  metfilter_EcalDeadCellBoundaryEnergyFilter_isLoaded = false;
  pfmet_metPhi_JECUp_isLoaded = false;
  muons_scale_smear_pt_corr_smear_totalUp_isLoaded = false;
  ak8jets_phi_isLoaded = false;
  pfmet_met_JECDn_isLoaded = false;
  photons_hasPixelSeed_isLoaded = false;
  pfmet_metShift_py_JERDn_isLoaded = false;
  puppimet_metPhi_JECUp_isLoaded = false;
  photons_id_MVA_Fall17V2_Cat_isLoaded = false;
  ak8jets_JECDn_isLoaded = false;
  fsrcands_eta_isLoaded = false;
  ak4jets_pass_puId_isLoaded = false;
  alphaS_isLoaded = false;
  electrons_conv_vtx_flag_isLoaded = false;
  ak4jets_JECUp_isLoaded = false;
  fsrcands_fsrMatch_muon_index_list_isLoaded = false;
  muons_pfIso03_sum_neutral_nofsr_isLoaded = false;
  p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_isLoaded = false;
  LHEweight_QCDscale_muR1_muF0p5_isLoaded = false;
  muons_dz_bestTrack_firstPV_isLoaded = false;
  pfmet_sumEt_Nominal_isLoaded = false;
  ak4jets_pt_resolution_isLoaded = false;
  electrons_scale_smear_corr_isLoaded = false;
  isotracks_pfIso03_db_isLoaded = false;
  metfilter_ecalBadCalibFilterUpdated_isLoaded = false;
  lheparticles_status_isLoaded = false;
  LHEweight_QCDscale_muR2_muF0p5_isLoaded = false;
  isotracks_dzerr_isLoaded = false;
  ak8jets_eta_isLoaded = false;
  ak4jets_JECL1Nominal_isLoaded = false;
  p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_isLoaded = false;
  p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_isLoaded = false;
  lheparticles_px_isLoaded = false;
  pfmet_met_Nominal_isLoaded = false;
  ak4jets_deepFlavourproblepb_isLoaded = false;
  photons_pfNeutralHadronIso_EAcorr_isLoaded = false;
  p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = false;
  vtxs_pos_y_isLoaded = false;
  vtxs_pos_x_isLoaded = false;
  vtxs_pos_z_isLoaded = false;
  vtxs_pos_t_isLoaded = false;
  p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_isLoaded = false;
  puppimet_metPhi_UnclusteredEnDn_isLoaded = false;
  ak4jets_deepCSVprobudsg_isLoaded = false;
  electrons_n_missing_inner_hits_isLoaded = false;
  xsecerr_isLoaded = false;
  photons_id_MVA_Fall17V2_pass_wp80_isLoaded = false;
  LHEweight_QCDscale_muR2_muF2_isLoaded = false;
  LHEweight_QCDscale_muR2_muF1_isLoaded = false;
  muons_mass_isLoaded = false;
  muons_miniIso_sum_neutral_nofsr_isLoaded = false;
  isotracks_phi_isLoaded = false;
  photons_passElectronVeto_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_isLoaded = false;
  EventNumber_isLoaded = false;
  p_Gen_GG_BKG_MCFM_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_isLoaded = false;
  ak4jets_JERNominal_isLoaded = false;
  muons_scale_smear_pt_corr_scale_totalDn_isLoaded = false;
  ak8jets_JERNominal_isLoaded = false;
  ak8jets_hadronFlavour_isLoaded = false;
  vtxs_nvtxs_good_isLoaded = false;
  ak4jets_mucands_sump4_py_isLoaded = false;
  ak4jets_mucands_sump4_px_isLoaded = false;
  pfmet_metShift_py_JERNominal_isLoaded = false;
  p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = false;
  photons_scale_smear_corr_scale_totalDn_isLoaded = false;
  pfmet_metSignificance_isLoaded = false;
  puppimet_met_Nominal_isLoaded = false;
  isotracks_miniIso_nh_isLoaded = false;
  triggers_HLTprescale_isLoaded = false;
  fsrcands_mass_isLoaded = false;
  metfilter_BadPFMuonFilter_isLoaded = false;
  KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_isLoaded = false;
  electrons_pfIso03_sum_neutral_nofsr_isLoaded = false;
  electrons_charge_isLoaded = false;
  metfilter_trkPOGFilters_isLoaded = false;
  PythiaWeight_fsr_muRsqrt2_isLoaded = false;
  PythiaWeight_isr_muR0p5_isLoaded = false;
  genmet_metPhi_isLoaded = false;
  n_vtxs_PU_isLoaded = false;
  PythiaWeight_isr_muRoneoversqrt2_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_Cat_isLoaded = false;
  p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_isLoaded = false;
  photons_eta_isLoaded = false;
  triggerObjects_eta_isLoaded = false;
  pfmet_metShift_py_JERUp_isLoaded = false;
  photons_id_cutBased_Fall17V2_Tight_Bits_isLoaded = false;
  ak8jets_axis1_isLoaded = false;
  ak8jets_axis2_isLoaded = false;
  LHEweight_AsMZ_Dn_NNPDF30_isLoaded = false;
  pThat_isLoaded = false;
  LHEweight_QCDscale_muR0p5_muF2_isLoaded = false;
  KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_isLoaded = false;
  isotracks_miniIso_ch_isLoaded = false;
  electrons_scale_smear_corr_scale_totalDn_isLoaded = false;
  electrons_pfIso03_sum_charged_nofsr_isLoaded = false;
  metfilter_trackingFailureFilter_isLoaded = false;
  ak8jets_n_softdrop_subjets_isLoaded = false;
  p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_isLoaded = false;
  puppimet_sumEt_Raw_isLoaded = false;
  KFactor_QCD_ggZZ_Sig_arg_isLoaded = false;
  photons_phi_isLoaded = false;
  pfmet_metPhi_UnclusteredEnUp_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_isLoaded = false;
  ak8jets_pt_isLoaded = false;
  ak8jets_JECUp_isLoaded = false;
  muons_scale_smear_pt_corr_isLoaded = false;
  vtxs_pos_dy_isLoaded = false;
  vtxs_pos_dt_isLoaded = false;
  vtxs_pos_dz_isLoaded = false;
  vtxs_pos_dx_isLoaded = false;
  p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_isLoaded = false;
  puppimet_met_Raw_isLoaded = false;
  ak4jets_mass_isLoaded = false;
  vtxs_ndof_isLoaded = false;
  ak8jets_JECNominal_isLoaded = false;
  puppimet_metSignificance_isLoaded = false;
  isotracks_dz_isLoaded = false;
  metfilter_chargedHadronTrackResolutionFilter_isLoaded = false;
  metfilter_EcalDeadCellTriggerPrimitiveFilter_isLoaded = false;
  p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_isLoaded = false;
  fsrcands_phi_isLoaded = false;
  PythiaWeight_isr_muR2_isLoaded = false;
  electrons_miniIso_comb_nofsr_old_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_isLoaded = false;
  muons_scale_smear_pt_corr_smear_totalDn_isLoaded = false;
  PythiaWeight_isr_muR4_isLoaded = false;
  ak8jets_pt_resolution_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_Val_isLoaded = false;
  metfilter_hcalLaserEventFilter_isLoaded = false;
  KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_isLoaded = false;
  isotracks_is_lostTrack_isLoaded = false;
  electrons_pfIso04_comb_nofsr_isLoaded = false;
  LHEweight_PDFVariation_Up_default_isLoaded = false;
  fsrcands_fsrMatch_electron_index_list_isLoaded = false;
  n_true_int_isLoaded = false;
  RunNumber_isLoaded = false;
  electrons_id_cutBased_Fall17V2_Tight_Bits_isLoaded = false;
  ak4jets_pass_leptonVetoId_isLoaded = false;
  electrons_pfIso04_comb_nofsr_old_isLoaded = false;
  isotracks_dxyerr_isLoaded = false;
  puppimet_metPhi_Raw_isLoaded = false;
  PythiaWeight_fsr_muRoneoversqrt2_isLoaded = false;
  ak4jets_ptDistribution_isLoaded = false;
  isotracks_eta_isLoaded = false;
  p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_isLoaded = false;
  photons_id_MVA_Fall17V2_pass_wp90_isLoaded = false;
  fsrcands_photonVeto_index_list_isLoaded = false;
  metfilter_eeBadScFilter_isLoaded = false;
  puppimet_metPhi_Nominal_isLoaded = false;
  isotracks_pfIso03_nh_isLoaded = false;
  p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_isLoaded = false;
  photons_scale_smear_corr_smear_totalUp_isLoaded = false;
  metfilter_ecalBadCalibFilter_isLoaded = false;
  electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_isLoaded = false;
  electrons_miniIso_sum_neutral_nofsr_isLoaded = false;
  muons_charge_isLoaded = false;
  pfmet_metShift_px_JERUp_isLoaded = false;
  event_rho_isLoaded = false;
  ak4jets_hadronFlavour_isLoaded = false;
  KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_isLoaded = false;
  puppimet_sumEt_Nominal_isLoaded = false;
  electrons_id_MVA_Fall17V2_NoIso_pass_wp90_isLoaded = false;
  electrons_id_MVA_Fall17V2_NoIso_Cat_isLoaded = false;
  pfmet_sumEt_Raw_isLoaded = false;
  photons_etaSC_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_isLoaded = false;
  genHEPMCweight_default_isLoaded = false;
  LHEweight_QCDscale_muR0p5_muF1_isLoaded = false;
  ak8jets_ptDistribution_isLoaded = false;
  muons_pfIso04_sum_neutral_nofsr_isLoaded = false;
  KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_isLoaded = false;
  lheparticles_mother0_index_isLoaded = false;
  isotracks_charge_isLoaded = false;
  p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_isLoaded = false;
  metfilter_METFilters_isLoaded = false;
  pfmet_calo_metPhi_isLoaded = false;
  p_Gen_CPStoBWPropRewgt_isLoaded = false;
  puppimet_met_over_sqrtSumEt_isLoaded = false;
  muons_phi_isLoaded = false;
  genHEPMCweight_NNPDF30_isLoaded = false;
  p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_isLoaded = false;
  electrons_id_cutBased_Fall17V2_Medium_Bits_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_isLoaded = false;
  metfilter_HBHENoiseFilter_isLoaded = false;
  ak4jets_deepFlavourprobc_isLoaded = false;
  ak4jets_deepFlavourprobb_isLoaded = false;
  ak4jets_deepFlavourprobg_isLoaded = false;
  LHEweight_QCDscale_muR1_muF2_isLoaded = false;
  LHEweight_QCDscale_muR1_muF1_isLoaded = false;
  metfilter_BadChargedCandidateFilter_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_isLoaded = false;
  sumEt_isLoaded = false;
  vtxs_nvtxs_isLoaded = false;
  muons_miniIso_sum_charged_nofsr_isLoaded = false;
  muons_POG_selector_bits_isLoaded = false;
  muons_miniIso_comb_nofsr_isLoaded = false;
  photons_pfChargedHadronIso_EAcorr_isLoaded = false;
  isotracks_pfIso03_ch_isLoaded = false;
  electrons_phi_isLoaded = false;
  LHEweight_PDFVariation_Dn_default_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_isLoaded = false;
  pfmet_metPhi_UnclusteredEnDn_isLoaded = false;
  ak4jets_phi_isLoaded = false;
  photons_id_cutBased_Fall17V2_Medium_Bits_isLoaded = false;
  p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_isLoaded = false;
  isotracks_lepOverlap_isLoaded = false;
  p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_isLoaded = false;
  muons_eta_isLoaded = false;
  vtxs_is_valid_isLoaded = false;
  p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_isLoaded = false;
  electrons_miniIso_sum_charged_nofsr_isLoaded = false;
  ak4jets_deepFlavourprobbb_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_isLoaded = false;
  LHEweight_AsMZ_Up_default_isLoaded = false;
  muons_miniIso_comb_nofsr_uncorrected_isLoaded = false;
  metfilter_CSCTightHalo2015Filter_isLoaded = false;
  pfmet_metShift_px_JERDn_isLoaded = false;
  electrons_etaSC_isLoaded = false;
  n_shower_gluons_to_charm_isLoaded = false;
  PythiaWeight_fsr_muR0p25_isLoaded = false;
  PythiaWeight_isr_muRsqrt2_isLoaded = false;
  ak4jets_deepFlavourprobuds_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_isLoaded = false;
  KFactor_QCD_NNLO_ggZZ_Sig_AsDn_isLoaded = false;
  electrons_pfIso04_sum_neutral_nofsr_isLoaded = false;
  muons_pass_muon_timing_isLoaded = false;
  metfilter_ecalLaserCorrFilter_isLoaded = false;
  metfilter_HBHENoiseIsoFilter_isLoaded = false;
  triggerObjects_mass_isLoaded = false;
  p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_isLoaded = false;
  PythiaWeight_isr_muR0p25_isLoaded = false;
  genmet_met_isLoaded = false;
  fsrcands_pt_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_isLoaded = false;
  ak4jets_JERUp_isLoaded = false;
  photons_id_MVA_Fall17V2_Val_isLoaded = false;
  p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_isLoaded = false;
  ak4jets_axis1_isLoaded = false;
  ak4jets_axis2_isLoaded = false;
  puppimet_met_JECUp_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_isLoaded = false;
  p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = false;
  electrons_id_MVA_Fall17V2_NoIso_Val_isLoaded = false;
  PythiaWeight_fsr_muR2_isLoaded = false;
  electrons_pfIso03_comb_nofsr_old_isLoaded = false;
  pfmet_met_over_sqrtSumEt_isLoaded = false;
  PythiaWeight_fsr_muR4_isLoaded = false;
  lheparticles_id_isLoaded = false;
  puppimet_met_UnclusteredEnDn_isLoaded = false;
  electrons_pfIso04_sum_neutral_nofsr_old_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_isLoaded = false;
  electrons_scale_smear_corr_smear_totalUp_isLoaded = false;
  isotracks_mass_isLoaded = false;
  triggers_passTrigger_isLoaded = false;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_isLoaded = false;
  pfmet_metPhi_Raw_isLoaded = false;
  LHEweight_PDFVariation_Up_NNPDF30_isLoaded = false;
  electrons_pfIso03_sum_neutral_nofsr_old_isLoaded = false;
  photons_pfEMIso_EAcorr_isLoaded = false;
  p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_isLoaded = false;
  ak8jets_JERUp_isLoaded = false;
  p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_isLoaded = false;
  metfilter_muonBadTrackFilter_isLoaded = false;
  isotracks_miniIso_em_isLoaded = false;
  ak4jets_deepCSVprobb_isLoaded = false;
  ak4jets_deepCSVprobc_isLoaded = false;
  photons_scale_smear_corr_smear_totalDn_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_1_MCFM_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_MCFM_isLoaded = false;
}
void CMS5::LoadAllBranches() {
  if (ak8jets_partonFlavour_branch != 0) ak8jets_partonFlavour();
  if (triggerObjects_type_branch != 0) triggerObjects_type();
  if (electrons_eta_branch != 0) electrons_eta();
  if (KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_branch != 0) KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM();
  if (triggerObjects_associatedTriggers_branch != 0) triggerObjects_associatedTriggers();
  if (electrons_pfIso04_sum_charged_nofsr_branch != 0) electrons_pfIso04_sum_charged_nofsr();
  if (lheparticles_pz_branch != 0) lheparticles_pz();
  if (ak4jets_pass_tightId_branch != 0) ak4jets_pass_tightId();
  if (lheparticles_py_branch != 0) lheparticles_py();
  if (electrons_id_cutBased_Fall17V2_Veto_Bits_branch != 0) electrons_id_cutBased_Fall17V2_Veto_Bits();
  if (pfmet_metPhi_Nominal_branch != 0) pfmet_metPhi_Nominal();
  if (xsec_branch != 0) xsec();
  if (pfmet_met_UnclusteredEnDn_branch != 0) pfmet_met_UnclusteredEnDn();
  if (p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM();
  if (electrons_miniIso_comb_nofsr_uncorrected_branch != 0) electrons_miniIso_comb_nofsr_uncorrected();
  if (p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM();
  if (p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM();
  if (isotracks_is_pfCand_branch != 0) isotracks_is_pfCand();
  if (metfilter_CSCTightHaloFilter_branch != 0) metfilter_CSCTightHaloFilter();
  if (muons_pt_branch != 0) muons_pt();
  if (electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_branch != 0) electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose();
  if (photons_scale_smear_corr_branch != 0) photons_scale_smear_corr();
  if (LHEweight_AsMZ_Dn_default_branch != 0) LHEweight_AsMZ_Dn_default();
  if (electrons_mass_branch != 0) electrons_mass();
  if (pfmet_metPhi_JECDn_branch != 0) pfmet_metPhi_JECDn();
  if (ak4jets_JERDn_branch != 0) ak4jets_JERDn();
  if (xsec_lhe_branch != 0) xsec_lhe();
  if (ak4jets_partonFlavour_branch != 0) ak4jets_partonFlavour();
  if (ak4jets_eta_branch != 0) ak4jets_eta();
  if (ak4jets_totalMultiplicity_branch != 0) ak4jets_totalMultiplicity();
  if (puppimet_metPhi_JECDn_branch != 0) puppimet_metPhi_JECDn();
  if (electrons_pt_branch != 0) electrons_pt();
  if (PythiaWeight_fsr_muR0p5_branch != 0) PythiaWeight_fsr_muR0p5();
  if (ak8jets_mass_branch != 0) ak8jets_mass();
  if (KFactor_QCD_NNLO_ggZZ_Sig_AsUp_branch != 0) KFactor_QCD_NNLO_ggZZ_Sig_AsUp();
  if (muons_pull_dxdz_noArb_DT_branch != 0) muons_pull_dxdz_noArb_DT();
  if (ak8jets_totalMultiplicity_branch != 0) ak8jets_totalMultiplicity();
  if (ak8jets_pass_looseId_branch != 0) ak8jets_pass_looseId();
  if (n_shower_gluons_to_bottom_branch != 0) n_shower_gluons_to_bottom();
  if (p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM();
  if (isotracks_fromPV_branch != 0) isotracks_fromPV();
  if (ak4jets_pt_branch != 0) ak4jets_pt();
  if (p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM();
  if (lheparticles_E_branch != 0) lheparticles_E();
  if (electrons_id_MVA_Fall17V2_NoIso_pass_wp80_branch != 0) electrons_id_MVA_Fall17V2_NoIso_pass_wp80();
  if (isotracks_pfIso03_comb_nofsr_branch != 0) isotracks_pfIso03_comb_nofsr();
  if (vtxs_is_fake_branch != 0) vtxs_is_fake();
  if (LuminosityBlock_branch != 0) LuminosityBlock();
  if (ak8jets_JERDn_branch != 0) ak8jets_JERDn();
  if (qscale_branch != 0) qscale();
  if (p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM();
  if (isotracks_miniIso_comb_nofsr_branch != 0) isotracks_miniIso_comb_nofsr();
  if (muons_pfIso03_sum_charged_nofsr_branch != 0) muons_pfIso03_sum_charged_nofsr();
  if (p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM();
  if (electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch != 0) electrons_id_MVA_HZZRun2Legacy_Iso_Cat();
  if (isotracks_pfIso03_em_branch != 0) isotracks_pfIso03_em();
  if (p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM();
  if (vtxs_is_good_branch != 0) vtxs_is_good();
  if (electrons_scale_smear_corr_smear_totalDn_branch != 0) electrons_scale_smear_corr_smear_totalDn();
  if (muons_pfIso04_comb_nofsr_branch != 0) muons_pfIso04_comb_nofsr();
  if (LHECandMass_branch != 0) LHECandMass();
  if (triggerObjects_passedTriggers_branch != 0) triggerObjects_passedTriggers();
  if (metfilter_goodVertices_branch != 0) metfilter_goodVertices();
  if (muons_pfIso04_sum_charged_nofsr_branch != 0) muons_pfIso04_sum_charged_nofsr();
  if (pfmet_met_JECUp_branch != 0) pfmet_met_JECUp();
  if (ak4jets_JECDn_branch != 0) ak4jets_JECDn();
  if (electrons_pfIso03_comb_nofsr_branch != 0) electrons_pfIso03_comb_nofsr();
  if (photons_pfIso_comb_branch != 0) photons_pfIso_comb();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM();
  if (metfilter_trkPOG_toomanystripclus53X_branch != 0) metfilter_trkPOG_toomanystripclus53X();
  if (triggerObjects_phi_branch != 0) triggerObjects_phi();
  if (isotracks_pt_branch != 0) isotracks_pt();
  if (lheparticles_mother1_index_branch != 0) lheparticles_mother1_index();
  if (p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM();
  if (pfmet_calo_met_branch != 0) pfmet_calo_met();
  if (muons_pfIso03_comb_nofsr_branch != 0) muons_pfIso03_comb_nofsr();
  if (isotracks_miniIso_db_branch != 0) isotracks_miniIso_db();
  if (passCommonSkim_branch != 0) passCommonSkim();
  if (muons_scale_smear_pt_corr_scale_totalUp_branch != 0) muons_scale_smear_pt_corr_scale_totalUp();
  if (isotracks_is_tightTrack_branch != 0) isotracks_is_tightTrack();
  if (photons_id_cutBased_Fall17V2_Loose_Bits_branch != 0) photons_id_cutBased_Fall17V2_Loose_Bits();
  if (ak4jets_deepCSVprobbb_branch != 0) ak4jets_deepCSVprobbb();
  if (pfmet_metShift_px_JERNominal_branch != 0) pfmet_metShift_px_JERNominal();
  if (metfilter_trkPOG_logErrorTooManyClusters_branch != 0) metfilter_trkPOG_logErrorTooManyClusters();
  if (pfmet_met_UnclusteredEnUp_branch != 0) pfmet_met_UnclusteredEnUp();
  if (puppimet_met_UnclusteredEnUp_branch != 0) puppimet_met_UnclusteredEnUp();
  if (puppimet_metPhi_UnclusteredEnUp_branch != 0) puppimet_metPhi_UnclusteredEnUp();
  if (p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM();
  if (isotracks_is_highPurityTrack_branch != 0) isotracks_is_highPurityTrack();
  if (LHEweight_AsMZ_Up_NNPDF30_branch != 0) LHEweight_AsMZ_Up_NNPDF30();
  if (triggers_name_branch != 0) triggers_name();
  if (puppimet_met_JECDn_branch != 0) puppimet_met_JECDn();
  if (electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch != 0) electrons_id_MVA_Fall17V2_Iso_pass_wp80();
  if (photons_mass_branch != 0) photons_mass();
  if (electrons_id_cutBased_Fall17V2_Loose_Bits_branch != 0) electrons_id_cutBased_Fall17V2_Loose_Bits();
  if (electrons_id_MVA_HZZRun2Legacy_Iso_Val_branch != 0) electrons_id_MVA_HZZRun2Legacy_Iso_Val();
  if (photons_pt_branch != 0) photons_pt();
  if (ak8jets_pass_tightId_branch != 0) ak8jets_pass_tightId();
  if (KFactor_QCD_NNLO_ggZZ_Sig_Nominal_branch != 0) KFactor_QCD_NNLO_ggZZ_Sig_Nominal();
  if (metfilter_CSCTightHaloTrkMuUnvetoFilter_branch != 0) metfilter_CSCTightHaloTrkMuUnvetoFilter();
  if (electrons_miniIso_comb_nofsr_branch != 0) electrons_miniIso_comb_nofsr();
  if (muons_pull_dxdz_noArb_CSC_branch != 0) muons_pull_dxdz_noArb_CSC();
  if (metfilter_globalTightHalo2016Filter_branch != 0) metfilter_globalTightHalo2016Filter();
  if (p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM();
  if (ak8jets_pass_leptonVetoId_branch != 0) ak8jets_pass_leptonVetoId();
  if (ak4jets_pass_looseId_branch != 0) ak4jets_pass_looseId();
  if (triggerObjects_pt_branch != 0) triggerObjects_pt();
  if (metfilter_globalSuperTightHalo2016Filter_branch != 0) metfilter_globalSuperTightHalo2016Filter();
  if (muons_dxy_bestTrack_firstPV_branch != 0) muons_dxy_bestTrack_firstPV();
  if (metfilter_HcalStripHaloFilter_branch != 0) metfilter_HcalStripHaloFilter();
  if (p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM();
  if (electrons_miniIso_sum_neutral_nofsr_old_branch != 0) electrons_miniIso_sum_neutral_nofsr_old();
  if (photons_scale_smear_corr_scale_totalUp_branch != 0) photons_scale_smear_corr_scale_totalUp();
  if (p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM();
  if (electrons_scale_smear_corr_scale_totalUp_branch != 0) electrons_scale_smear_corr_scale_totalUp();
  if (metfilter_trkPOG_manystripclus53X_branch != 0) metfilter_trkPOG_manystripclus53X();
  if (isotracks_id_branch != 0) isotracks_id();
  if (ak4jets_JECNominal_branch != 0) ak4jets_JECNominal();
  if (LHEweight_PDFVariation_Dn_NNPDF30_branch != 0) LHEweight_PDFVariation_Dn_NNPDF30();
  if (triggers_L1prescale_branch != 0) triggers_L1prescale();
  if (isotracks_dxy_branch != 0) isotracks_dxy();
  if (pfmet_met_Raw_branch != 0) pfmet_met_Raw();
  if (electrons_id_MVA_Fall17V2_Iso_pass_wp90_branch != 0) electrons_id_MVA_Fall17V2_Iso_pass_wp90();
  if (LHEweight_QCDscale_muR0p5_muF0p5_branch != 0) LHEweight_QCDscale_muR0p5_muF0p5();
  if (metfilter_EcalDeadCellBoundaryEnergyFilter_branch != 0) metfilter_EcalDeadCellBoundaryEnergyFilter();
  if (pfmet_metPhi_JECUp_branch != 0) pfmet_metPhi_JECUp();
  if (muons_scale_smear_pt_corr_smear_totalUp_branch != 0) muons_scale_smear_pt_corr_smear_totalUp();
  if (ak8jets_phi_branch != 0) ak8jets_phi();
  if (pfmet_met_JECDn_branch != 0) pfmet_met_JECDn();
  if (photons_hasPixelSeed_branch != 0) photons_hasPixelSeed();
  if (pfmet_metShift_py_JERDn_branch != 0) pfmet_metShift_py_JERDn();
  if (puppimet_metPhi_JECUp_branch != 0) puppimet_metPhi_JECUp();
  if (photons_id_MVA_Fall17V2_Cat_branch != 0) photons_id_MVA_Fall17V2_Cat();
  if (ak8jets_JECDn_branch != 0) ak8jets_JECDn();
  if (fsrcands_eta_branch != 0) fsrcands_eta();
  if (ak4jets_pass_puId_branch != 0) ak4jets_pass_puId();
  if (alphaS_branch != 0) alphaS();
  if (electrons_conv_vtx_flag_branch != 0) electrons_conv_vtx_flag();
  if (ak4jets_JECUp_branch != 0) ak4jets_JECUp();
  if (fsrcands_fsrMatch_muon_index_list_branch != 0) fsrcands_fsrMatch_muon_index_list();
  if (muons_pfIso03_sum_neutral_nofsr_branch != 0) muons_pfIso03_sum_neutral_nofsr();
  if (p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM();
  if (LHEweight_QCDscale_muR1_muF0p5_branch != 0) LHEweight_QCDscale_muR1_muF0p5();
  if (muons_dz_bestTrack_firstPV_branch != 0) muons_dz_bestTrack_firstPV();
  if (pfmet_sumEt_Nominal_branch != 0) pfmet_sumEt_Nominal();
  if (ak4jets_pt_resolution_branch != 0) ak4jets_pt_resolution();
  if (electrons_scale_smear_corr_branch != 0) electrons_scale_smear_corr();
  if (isotracks_pfIso03_db_branch != 0) isotracks_pfIso03_db();
  if (metfilter_ecalBadCalibFilterUpdated_branch != 0) metfilter_ecalBadCalibFilterUpdated();
  if (lheparticles_status_branch != 0) lheparticles_status();
  if (LHEweight_QCDscale_muR2_muF0p5_branch != 0) LHEweight_QCDscale_muR2_muF0p5();
  if (isotracks_dzerr_branch != 0) isotracks_dzerr();
  if (ak8jets_eta_branch != 0) ak8jets_eta();
  if (ak4jets_JECL1Nominal_branch != 0) ak4jets_JECL1Nominal();
  if (p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM();
  if (p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM();
  if (lheparticles_px_branch != 0) lheparticles_px();
  if (pfmet_met_Nominal_branch != 0) pfmet_met_Nominal();
  if (ak4jets_deepFlavourproblepb_branch != 0) ak4jets_deepFlavourproblepb();
  if (photons_pfNeutralHadronIso_EAcorr_branch != 0) photons_pfNeutralHadronIso_EAcorr();
  if (p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM();
  if (vtxs_pos_y_branch != 0) vtxs_pos_y();
  if (vtxs_pos_x_branch != 0) vtxs_pos_x();
  if (vtxs_pos_z_branch != 0) vtxs_pos_z();
  if (vtxs_pos_t_branch != 0) vtxs_pos_t();
  if (p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM();
  if (puppimet_metPhi_UnclusteredEnDn_branch != 0) puppimet_metPhi_UnclusteredEnDn();
  if (ak4jets_deepCSVprobudsg_branch != 0) ak4jets_deepCSVprobudsg();
  if (electrons_n_missing_inner_hits_branch != 0) electrons_n_missing_inner_hits();
  if (xsecerr_branch != 0) xsecerr();
  if (photons_id_MVA_Fall17V2_pass_wp80_branch != 0) photons_id_MVA_Fall17V2_pass_wp80();
  if (LHEweight_QCDscale_muR2_muF2_branch != 0) LHEweight_QCDscale_muR2_muF2();
  if (LHEweight_QCDscale_muR2_muF1_branch != 0) LHEweight_QCDscale_muR2_muF1();
  if (muons_mass_branch != 0) muons_mass();
  if (muons_miniIso_sum_neutral_nofsr_branch != 0) muons_miniIso_sum_neutral_nofsr();
  if (isotracks_phi_branch != 0) isotracks_phi();
  if (photons_passElectronVeto_branch != 0) photons_passElectronVeto();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM();
  if (EventNumber_branch != 0) EventNumber();
  if (p_Gen_GG_BKG_MCFM_branch != 0) p_Gen_GG_BKG_MCFM();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM();
  if (ak4jets_JERNominal_branch != 0) ak4jets_JERNominal();
  if (muons_scale_smear_pt_corr_scale_totalDn_branch != 0) muons_scale_smear_pt_corr_scale_totalDn();
  if (ak8jets_JERNominal_branch != 0) ak8jets_JERNominal();
  if (ak8jets_hadronFlavour_branch != 0) ak8jets_hadronFlavour();
  if (vtxs_nvtxs_good_branch != 0) vtxs_nvtxs_good();
  if (ak4jets_mucands_sump4_py_branch != 0) ak4jets_mucands_sump4_py();
  if (ak4jets_mucands_sump4_px_branch != 0) ak4jets_mucands_sump4_px();
  if (pfmet_metShift_py_JERNominal_branch != 0) pfmet_metShift_py_JERNominal();
  if (p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM();
  if (photons_scale_smear_corr_scale_totalDn_branch != 0) photons_scale_smear_corr_scale_totalDn();
  if (pfmet_metSignificance_branch != 0) pfmet_metSignificance();
  if (puppimet_met_Nominal_branch != 0) puppimet_met_Nominal();
  if (isotracks_miniIso_nh_branch != 0) isotracks_miniIso_nh();
  if (triggers_HLTprescale_branch != 0) triggers_HLTprescale();
  if (fsrcands_mass_branch != 0) fsrcands_mass();
  if (metfilter_BadPFMuonFilter_branch != 0) metfilter_BadPFMuonFilter();
  if (KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_branch != 0) KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn();
  if (electrons_pfIso03_sum_neutral_nofsr_branch != 0) electrons_pfIso03_sum_neutral_nofsr();
  if (electrons_charge_branch != 0) electrons_charge();
  if (metfilter_trkPOGFilters_branch != 0) metfilter_trkPOGFilters();
  if (PythiaWeight_fsr_muRsqrt2_branch != 0) PythiaWeight_fsr_muRsqrt2();
  if (PythiaWeight_isr_muR0p5_branch != 0) PythiaWeight_isr_muR0p5();
  if (genmet_metPhi_branch != 0) genmet_metPhi();
  if (n_vtxs_PU_branch != 0) n_vtxs_PU();
  if (PythiaWeight_isr_muRoneoversqrt2_branch != 0) PythiaWeight_isr_muRoneoversqrt2();
  if (electrons_id_MVA_Fall17V2_Iso_Cat_branch != 0) electrons_id_MVA_Fall17V2_Iso_Cat();
  if (p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM();
  if (photons_eta_branch != 0) photons_eta();
  if (triggerObjects_eta_branch != 0) triggerObjects_eta();
  if (pfmet_metShift_py_JERUp_branch != 0) pfmet_metShift_py_JERUp();
  if (photons_id_cutBased_Fall17V2_Tight_Bits_branch != 0) photons_id_cutBased_Fall17V2_Tight_Bits();
  if (ak8jets_axis1_branch != 0) ak8jets_axis1();
  if (ak8jets_axis2_branch != 0) ak8jets_axis2();
  if (LHEweight_AsMZ_Dn_NNPDF30_branch != 0) LHEweight_AsMZ_Dn_NNPDF30();
  if (pThat_branch != 0) pThat();
  if (LHEweight_QCDscale_muR0p5_muF2_branch != 0) LHEweight_QCDscale_muR0p5_muF2();
  if (KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_branch != 0) KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn();
  if (isotracks_miniIso_ch_branch != 0) isotracks_miniIso_ch();
  if (electrons_scale_smear_corr_scale_totalDn_branch != 0) electrons_scale_smear_corr_scale_totalDn();
  if (electrons_pfIso03_sum_charged_nofsr_branch != 0) electrons_pfIso03_sum_charged_nofsr();
  if (metfilter_trackingFailureFilter_branch != 0) metfilter_trackingFailureFilter();
  if (ak8jets_n_softdrop_subjets_branch != 0) ak8jets_n_softdrop_subjets();
  if (p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM();
  if (p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM();
  if (puppimet_sumEt_Raw_branch != 0) puppimet_sumEt_Raw();
  if (KFactor_QCD_ggZZ_Sig_arg_branch != 0) KFactor_QCD_ggZZ_Sig_arg();
  if (photons_phi_branch != 0) photons_phi();
  if (pfmet_metPhi_UnclusteredEnUp_branch != 0) pfmet_metPhi_UnclusteredEnUp();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM();
  if (ak8jets_pt_branch != 0) ak8jets_pt();
  if (ak8jets_JECUp_branch != 0) ak8jets_JECUp();
  if (muons_scale_smear_pt_corr_branch != 0) muons_scale_smear_pt_corr();
  if (vtxs_pos_dy_branch != 0) vtxs_pos_dy();
  if (vtxs_pos_dt_branch != 0) vtxs_pos_dt();
  if (vtxs_pos_dz_branch != 0) vtxs_pos_dz();
  if (vtxs_pos_dx_branch != 0) vtxs_pos_dx();
  if (p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM();
  if (puppimet_met_Raw_branch != 0) puppimet_met_Raw();
  if (ak4jets_mass_branch != 0) ak4jets_mass();
  if (vtxs_ndof_branch != 0) vtxs_ndof();
  if (ak8jets_JECNominal_branch != 0) ak8jets_JECNominal();
  if (puppimet_metSignificance_branch != 0) puppimet_metSignificance();
  if (isotracks_dz_branch != 0) isotracks_dz();
  if (metfilter_chargedHadronTrackResolutionFilter_branch != 0) metfilter_chargedHadronTrackResolutionFilter();
  if (metfilter_EcalDeadCellTriggerPrimitiveFilter_branch != 0) metfilter_EcalDeadCellTriggerPrimitiveFilter();
  if (p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch != 0) p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM();
  if (fsrcands_phi_branch != 0) fsrcands_phi();
  if (PythiaWeight_isr_muR2_branch != 0) PythiaWeight_isr_muR2();
  if (electrons_miniIso_comb_nofsr_old_branch != 0) electrons_miniIso_comb_nofsr_old();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM();
  if (muons_scale_smear_pt_corr_smear_totalDn_branch != 0) muons_scale_smear_pt_corr_smear_totalDn();
  if (PythiaWeight_isr_muR4_branch != 0) PythiaWeight_isr_muR4();
  if (ak8jets_pt_resolution_branch != 0) ak8jets_pt_resolution();
  if (electrons_id_MVA_Fall17V2_Iso_Val_branch != 0) electrons_id_MVA_Fall17V2_Iso_Val();
  if (metfilter_hcalLaserEventFilter_branch != 0) metfilter_hcalLaserEventFilter();
  if (KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_branch != 0) KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp();
  if (isotracks_is_lostTrack_branch != 0) isotracks_is_lostTrack();
  if (electrons_pfIso04_comb_nofsr_branch != 0) electrons_pfIso04_comb_nofsr();
  if (LHEweight_PDFVariation_Up_default_branch != 0) LHEweight_PDFVariation_Up_default();
  if (fsrcands_fsrMatch_electron_index_list_branch != 0) fsrcands_fsrMatch_electron_index_list();
  if (n_true_int_branch != 0) n_true_int();
  if (RunNumber_branch != 0) RunNumber();
  if (electrons_id_cutBased_Fall17V2_Tight_Bits_branch != 0) electrons_id_cutBased_Fall17V2_Tight_Bits();
  if (ak4jets_pass_leptonVetoId_branch != 0) ak4jets_pass_leptonVetoId();
  if (electrons_pfIso04_comb_nofsr_old_branch != 0) electrons_pfIso04_comb_nofsr_old();
  if (isotracks_dxyerr_branch != 0) isotracks_dxyerr();
  if (puppimet_metPhi_Raw_branch != 0) puppimet_metPhi_Raw();
  if (PythiaWeight_fsr_muRoneoversqrt2_branch != 0) PythiaWeight_fsr_muRoneoversqrt2();
  if (ak4jets_ptDistribution_branch != 0) ak4jets_ptDistribution();
  if (isotracks_eta_branch != 0) isotracks_eta();
  if (p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch != 0) p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM();
  if (photons_id_MVA_Fall17V2_pass_wp90_branch != 0) photons_id_MVA_Fall17V2_pass_wp90();
  if (fsrcands_photonVeto_index_list_branch != 0) fsrcands_photonVeto_index_list();
  if (metfilter_eeBadScFilter_branch != 0) metfilter_eeBadScFilter();
  if (puppimet_metPhi_Nominal_branch != 0) puppimet_metPhi_Nominal();
  if (isotracks_pfIso03_nh_branch != 0) isotracks_pfIso03_nh();
  if (p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM();
  if (photons_scale_smear_corr_smear_totalUp_branch != 0) photons_scale_smear_corr_smear_totalUp();
  if (metfilter_ecalBadCalibFilter_branch != 0) metfilter_ecalBadCalibFilter();
  if (electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_branch != 0) electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ();
  if (electrons_miniIso_sum_neutral_nofsr_branch != 0) electrons_miniIso_sum_neutral_nofsr();
  if (muons_charge_branch != 0) muons_charge();
  if (pfmet_metShift_px_JERUp_branch != 0) pfmet_metShift_px_JERUp();
  if (event_rho_branch != 0) event_rho();
  if (ak4jets_hadronFlavour_branch != 0) ak4jets_hadronFlavour();
  if (KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_branch != 0) KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp();
  if (puppimet_sumEt_Nominal_branch != 0) puppimet_sumEt_Nominal();
  if (electrons_id_MVA_Fall17V2_NoIso_pass_wp90_branch != 0) electrons_id_MVA_Fall17V2_NoIso_pass_wp90();
  if (electrons_id_MVA_Fall17V2_NoIso_Cat_branch != 0) electrons_id_MVA_Fall17V2_NoIso_Cat();
  if (pfmet_sumEt_Raw_branch != 0) pfmet_sumEt_Raw();
  if (photons_etaSC_branch != 0) photons_etaSC();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM();
  if (p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM();
  if (genHEPMCweight_default_branch != 0) genHEPMCweight_default();
  if (LHEweight_QCDscale_muR0p5_muF1_branch != 0) LHEweight_QCDscale_muR0p5_muF1();
  if (ak8jets_ptDistribution_branch != 0) ak8jets_ptDistribution();
  if (muons_pfIso04_sum_neutral_nofsr_branch != 0) muons_pfIso04_sum_neutral_nofsr();
  if (KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_branch != 0) KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn();
  if (lheparticles_mother0_index_branch != 0) lheparticles_mother0_index();
  if (isotracks_charge_branch != 0) isotracks_charge();
  if (p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM();
  if (metfilter_METFilters_branch != 0) metfilter_METFilters();
  if (pfmet_calo_metPhi_branch != 0) pfmet_calo_metPhi();
  if (p_Gen_CPStoBWPropRewgt_branch != 0) p_Gen_CPStoBWPropRewgt();
  if (puppimet_met_over_sqrtSumEt_branch != 0) puppimet_met_over_sqrtSumEt();
  if (muons_phi_branch != 0) muons_phi();
  if (genHEPMCweight_NNPDF30_branch != 0) genHEPMCweight_NNPDF30();
  if (p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM();
  if (electrons_id_cutBased_Fall17V2_Medium_Bits_branch != 0) electrons_id_cutBased_Fall17V2_Medium_Bits();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM();
  if (metfilter_HBHENoiseFilter_branch != 0) metfilter_HBHENoiseFilter();
  if (ak4jets_deepFlavourprobc_branch != 0) ak4jets_deepFlavourprobc();
  if (ak4jets_deepFlavourprobb_branch != 0) ak4jets_deepFlavourprobb();
  if (ak4jets_deepFlavourprobg_branch != 0) ak4jets_deepFlavourprobg();
  if (LHEweight_QCDscale_muR1_muF2_branch != 0) LHEweight_QCDscale_muR1_muF2();
  if (LHEweight_QCDscale_muR1_muF1_branch != 0) LHEweight_QCDscale_muR1_muF1();
  if (metfilter_BadChargedCandidateFilter_branch != 0) metfilter_BadChargedCandidateFilter();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM();
  if (sumEt_branch != 0) sumEt();
  if (vtxs_nvtxs_branch != 0) vtxs_nvtxs();
  if (muons_miniIso_sum_charged_nofsr_branch != 0) muons_miniIso_sum_charged_nofsr();
  if (muons_POG_selector_bits_branch != 0) muons_POG_selector_bits();
  if (muons_miniIso_comb_nofsr_branch != 0) muons_miniIso_comb_nofsr();
  if (photons_pfChargedHadronIso_EAcorr_branch != 0) photons_pfChargedHadronIso_EAcorr();
  if (isotracks_pfIso03_ch_branch != 0) isotracks_pfIso03_ch();
  if (electrons_phi_branch != 0) electrons_phi();
  if (LHEweight_PDFVariation_Dn_default_branch != 0) LHEweight_PDFVariation_Dn_default();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM();
  if (pfmet_metPhi_UnclusteredEnDn_branch != 0) pfmet_metPhi_UnclusteredEnDn();
  if (ak4jets_phi_branch != 0) ak4jets_phi();
  if (photons_id_cutBased_Fall17V2_Medium_Bits_branch != 0) photons_id_cutBased_Fall17V2_Medium_Bits();
  if (p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM();
  if (isotracks_lepOverlap_branch != 0) isotracks_lepOverlap();
  if (p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM();
  if (muons_eta_branch != 0) muons_eta();
  if (vtxs_is_valid_branch != 0) vtxs_is_valid();
  if (p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM();
  if (electrons_miniIso_sum_charged_nofsr_branch != 0) electrons_miniIso_sum_charged_nofsr();
  if (ak4jets_deepFlavourprobbb_branch != 0) ak4jets_deepFlavourprobbb();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM();
  if (LHEweight_AsMZ_Up_default_branch != 0) LHEweight_AsMZ_Up_default();
  if (muons_miniIso_comb_nofsr_uncorrected_branch != 0) muons_miniIso_comb_nofsr_uncorrected();
  if (metfilter_CSCTightHalo2015Filter_branch != 0) metfilter_CSCTightHalo2015Filter();
  if (pfmet_metShift_px_JERDn_branch != 0) pfmet_metShift_px_JERDn();
  if (electrons_etaSC_branch != 0) electrons_etaSC();
  if (n_shower_gluons_to_charm_branch != 0) n_shower_gluons_to_charm();
  if (PythiaWeight_fsr_muR0p25_branch != 0) PythiaWeight_fsr_muR0p25();
  if (PythiaWeight_isr_muRsqrt2_branch != 0) PythiaWeight_isr_muRsqrt2();
  if (ak4jets_deepFlavourprobuds_branch != 0) ak4jets_deepFlavourprobuds();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM();
  if (KFactor_QCD_NNLO_ggZZ_Sig_AsDn_branch != 0) KFactor_QCD_NNLO_ggZZ_Sig_AsDn();
  if (electrons_pfIso04_sum_neutral_nofsr_branch != 0) electrons_pfIso04_sum_neutral_nofsr();
  if (muons_pass_muon_timing_branch != 0) muons_pass_muon_timing();
  if (metfilter_ecalLaserCorrFilter_branch != 0) metfilter_ecalLaserCorrFilter();
  if (metfilter_HBHENoiseIsoFilter_branch != 0) metfilter_HBHENoiseIsoFilter();
  if (triggerObjects_mass_branch != 0) triggerObjects_mass();
  if (p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM();
  if (PythiaWeight_isr_muR0p25_branch != 0) PythiaWeight_isr_muR0p25();
  if (genmet_met_branch != 0) genmet_met();
  if (fsrcands_pt_branch != 0) fsrcands_pt();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM();
  if (ak4jets_JERUp_branch != 0) ak4jets_JERUp();
  if (photons_id_MVA_Fall17V2_Val_branch != 0) photons_id_MVA_Fall17V2_Val();
  if (p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM();
  if (ak4jets_axis1_branch != 0) ak4jets_axis1();
  if (ak4jets_axis2_branch != 0) ak4jets_axis2();
  if (puppimet_met_JECUp_branch != 0) puppimet_met_JECUp();
  if (electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_branch != 0) electrons_id_MVA_Fall17V2_Iso_pass_wpLoose();
  if (p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM();
  if (electrons_id_MVA_Fall17V2_NoIso_Val_branch != 0) electrons_id_MVA_Fall17V2_NoIso_Val();
  if (PythiaWeight_fsr_muR2_branch != 0) PythiaWeight_fsr_muR2();
  if (electrons_pfIso03_comb_nofsr_old_branch != 0) electrons_pfIso03_comb_nofsr_old();
  if (pfmet_met_over_sqrtSumEt_branch != 0) pfmet_met_over_sqrtSumEt();
  if (PythiaWeight_fsr_muR4_branch != 0) PythiaWeight_fsr_muR4();
  if (lheparticles_id_branch != 0) lheparticles_id();
  if (puppimet_met_UnclusteredEnDn_branch != 0) puppimet_met_UnclusteredEnDn();
  if (electrons_pfIso04_sum_neutral_nofsr_old_branch != 0) electrons_pfIso04_sum_neutral_nofsr_old();
  if (electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_branch != 0) electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ();
  if (electrons_scale_smear_corr_smear_totalUp_branch != 0) electrons_scale_smear_corr_smear_totalUp();
  if (isotracks_mass_branch != 0) isotracks_mass();
  if (triggers_passTrigger_branch != 0) triggers_passTrigger();
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM();
  if (pfmet_metPhi_Raw_branch != 0) pfmet_metPhi_Raw();
  if (LHEweight_PDFVariation_Up_NNPDF30_branch != 0) LHEweight_PDFVariation_Up_NNPDF30();
  if (electrons_pfIso03_sum_neutral_nofsr_old_branch != 0) electrons_pfIso03_sum_neutral_nofsr_old();
  if (photons_pfEMIso_EAcorr_branch != 0) photons_pfEMIso_EAcorr();
  if (p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM();
  if (ak8jets_JERUp_branch != 0) ak8jets_JERUp();
  if (p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM();
  if (metfilter_muonBadTrackFilter_branch != 0) metfilter_muonBadTrackFilter();
  if (isotracks_miniIso_em_branch != 0) isotracks_miniIso_em();
  if (ak4jets_deepCSVprobb_branch != 0) ak4jets_deepCSVprobb();
  if (ak4jets_deepCSVprobc_branch != 0) ak4jets_deepCSVprobc();
  if (photons_scale_smear_corr_smear_totalDn_branch != 0) photons_scale_smear_corr_smear_totalDn();
  if (p_Gen_JJEW_BSI_ghv1_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_1_MCFM();
  if (p_Gen_JJEW_SIG_ghv1_1_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_MCFM();
}
const vector<char> &CMS5::ak8jets_partonFlavour() {
  if (not ak8jets_partonFlavour_isLoaded) {
    if (ak8jets_partonFlavour_branch != 0) {
      ak8jets_partonFlavour_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_partonFlavour_branch does not exist!\n");
      exit(1);
    }
    ak8jets_partonFlavour_isLoaded = true;
  }
  return *ak8jets_partonFlavour_;
}
const vector<int> &CMS5::triggerObjects_type() {
  if (not triggerObjects_type_isLoaded) {
    if (triggerObjects_type_branch != 0) {
      triggerObjects_type_branch->GetEntry(index);
    } else {
      printf("branch triggerObjects_type_branch does not exist!\n");
      exit(1);
    }
    triggerObjects_type_isLoaded = true;
  }
  return *triggerObjects_type_;
}
const vector<float> &CMS5::electrons_eta() {
  if (not electrons_eta_isLoaded) {
    if (electrons_eta_branch != 0) {
      electrons_eta_branch->GetEntry(index);
    } else {
      printf("branch electrons_eta_branch does not exist!\n");
      exit(1);
    }
    electrons_eta_isLoaded = true;
  }
  return *electrons_eta_;
}
const float &CMS5::KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp() {
  if (not KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_isLoaded) {
    if (KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_branch != 0) {
      KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_branch->GetEntry(index);
    } else {
      printf("branch KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_branch does not exist!\n");
      exit(1);
    }
    KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_isLoaded = true;
  }
  return KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM_;
}
const vector<vector<unsigned int> > &CMS5::triggerObjects_associatedTriggers() {
  if (not triggerObjects_associatedTriggers_isLoaded) {
    if (triggerObjects_associatedTriggers_branch != 0) {
      triggerObjects_associatedTriggers_branch->GetEntry(index);
    } else {
      printf("branch triggerObjects_associatedTriggers_branch does not exist!\n");
      exit(1);
    }
    triggerObjects_associatedTriggers_isLoaded = true;
  }
  return *triggerObjects_associatedTriggers_;
}
const vector<float> &CMS5::electrons_pfIso04_sum_charged_nofsr() {
  if (not electrons_pfIso04_sum_charged_nofsr_isLoaded) {
    if (electrons_pfIso04_sum_charged_nofsr_branch != 0) {
      electrons_pfIso04_sum_charged_nofsr_branch->GetEntry(index);
    } else {
      printf("branch electrons_pfIso04_sum_charged_nofsr_branch does not exist!\n");
      exit(1);
    }
    electrons_pfIso04_sum_charged_nofsr_isLoaded = true;
  }
  return *electrons_pfIso04_sum_charged_nofsr_;
}
const vector<float> &CMS5::lheparticles_pz() {
  if (not lheparticles_pz_isLoaded) {
    if (lheparticles_pz_branch != 0) {
      lheparticles_pz_branch->GetEntry(index);
    } else {
      printf("branch lheparticles_pz_branch does not exist!\n");
      exit(1);
    }
    lheparticles_pz_isLoaded = true;
  }
  return *lheparticles_pz_;
}
const vector<bool> &CMS5::ak4jets_pass_tightId() {
  if (not ak4jets_pass_tightId_isLoaded) {
    if (ak4jets_pass_tightId_branch != 0) {
      ak4jets_pass_tightId_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_pass_tightId_branch does not exist!\n");
      exit(1);
    }
    ak4jets_pass_tightId_isLoaded = true;
  }
  return *ak4jets_pass_tightId_;
}
const vector<float> &CMS5::lheparticles_py() {
  if (not lheparticles_py_isLoaded) {
    if (lheparticles_py_branch != 0) {
      lheparticles_py_branch->GetEntry(index);
    } else {
      printf("branch lheparticles_py_branch does not exist!\n");
      exit(1);
    }
    lheparticles_py_isLoaded = true;
  }
  return *lheparticles_py_;
}
const vector<unsigned short> &CMS5::electrons_id_cutBased_Fall17V2_Veto_Bits() {
  if (not electrons_id_cutBased_Fall17V2_Veto_Bits_isLoaded) {
    if (electrons_id_cutBased_Fall17V2_Veto_Bits_branch != 0) {
      electrons_id_cutBased_Fall17V2_Veto_Bits_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_cutBased_Fall17V2_Veto_Bits_branch does not exist!\n");
      exit(1);
    }
    electrons_id_cutBased_Fall17V2_Veto_Bits_isLoaded = true;
  }
  return *electrons_id_cutBased_Fall17V2_Veto_Bits_;
}
const float &CMS5::pfmet_metPhi_Nominal() {
  if (not pfmet_metPhi_Nominal_isLoaded) {
    if (pfmet_metPhi_Nominal_branch != 0) {
      pfmet_metPhi_Nominal_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metPhi_Nominal_branch does not exist!\n");
      exit(1);
    }
    pfmet_metPhi_Nominal_isLoaded = true;
  }
  return pfmet_metPhi_Nominal_;
}
const float &CMS5::xsec() {
  if (not xsec_isLoaded) {
    if (xsec_branch != 0) {
      xsec_branch->GetEntry(index);
    } else {
      printf("branch xsec_branch does not exist!\n");
      exit(1);
    }
    xsec_isLoaded = true;
  }
  return xsec_;
}
const float &CMS5::pfmet_met_UnclusteredEnDn() {
  if (not pfmet_met_UnclusteredEnDn_isLoaded) {
    if (pfmet_met_UnclusteredEnDn_branch != 0) {
      pfmet_met_UnclusteredEnDn_branch->GetEntry(index);
    } else {
      printf("branch pfmet_met_UnclusteredEnDn_branch does not exist!\n");
      exit(1);
    }
    pfmet_met_UnclusteredEnDn_isLoaded = true;
  }
  return pfmet_met_UnclusteredEnDn_;
}
const float &CMS5::p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::electrons_miniIso_comb_nofsr_uncorrected() {
  if (not electrons_miniIso_comb_nofsr_uncorrected_isLoaded) {
    if (electrons_miniIso_comb_nofsr_uncorrected_branch != 0) {
      electrons_miniIso_comb_nofsr_uncorrected_branch->GetEntry(index);
    } else {
      printf("branch electrons_miniIso_comb_nofsr_uncorrected_branch does not exist!\n");
      exit(1);
    }
    electrons_miniIso_comb_nofsr_uncorrected_isLoaded = true;
  }
  return *electrons_miniIso_comb_nofsr_uncorrected_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM_;
}
const vector<bool> &CMS5::isotracks_is_pfCand() {
  if (not isotracks_is_pfCand_isLoaded) {
    if (isotracks_is_pfCand_branch != 0) {
      isotracks_is_pfCand_branch->GetEntry(index);
    } else {
      printf("branch isotracks_is_pfCand_branch does not exist!\n");
      exit(1);
    }
    isotracks_is_pfCand_isLoaded = true;
  }
  return *isotracks_is_pfCand_;
}
const bool &CMS5::metfilter_CSCTightHaloFilter() {
  if (not metfilter_CSCTightHaloFilter_isLoaded) {
    if (metfilter_CSCTightHaloFilter_branch != 0) {
      metfilter_CSCTightHaloFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_CSCTightHaloFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_CSCTightHaloFilter_isLoaded = true;
  }
  return metfilter_CSCTightHaloFilter_;
}
const vector<float> &CMS5::muons_pt() {
  if (not muons_pt_isLoaded) {
    if (muons_pt_branch != 0) {
      muons_pt_branch->GetEntry(index);
    } else {
      printf("branch muons_pt_branch does not exist!\n");
      exit(1);
    }
    muons_pt_isLoaded = true;
  }
  return *muons_pt_;
}
const vector<bool> &CMS5::electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose() {
  if (not electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_isLoaded) {
    if (electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_branch != 0) {
      electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_;
}
const vector<float> &CMS5::photons_scale_smear_corr() {
  if (not photons_scale_smear_corr_isLoaded) {
    if (photons_scale_smear_corr_branch != 0) {
      photons_scale_smear_corr_branch->GetEntry(index);
    } else {
      printf("branch photons_scale_smear_corr_branch does not exist!\n");
      exit(1);
    }
    photons_scale_smear_corr_isLoaded = true;
  }
  return *photons_scale_smear_corr_;
}
const float &CMS5::LHEweight_AsMZ_Dn_default() {
  if (not LHEweight_AsMZ_Dn_default_isLoaded) {
    if (LHEweight_AsMZ_Dn_default_branch != 0) {
      LHEweight_AsMZ_Dn_default_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_AsMZ_Dn_default_branch does not exist!\n");
      exit(1);
    }
    LHEweight_AsMZ_Dn_default_isLoaded = true;
  }
  return LHEweight_AsMZ_Dn_default_;
}
const vector<float> &CMS5::electrons_mass() {
  if (not electrons_mass_isLoaded) {
    if (electrons_mass_branch != 0) {
      electrons_mass_branch->GetEntry(index);
    } else {
      printf("branch electrons_mass_branch does not exist!\n");
      exit(1);
    }
    electrons_mass_isLoaded = true;
  }
  return *electrons_mass_;
}
const float &CMS5::pfmet_metPhi_JECDn() {
  if (not pfmet_metPhi_JECDn_isLoaded) {
    if (pfmet_metPhi_JECDn_branch != 0) {
      pfmet_metPhi_JECDn_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metPhi_JECDn_branch does not exist!\n");
      exit(1);
    }
    pfmet_metPhi_JECDn_isLoaded = true;
  }
  return pfmet_metPhi_JECDn_;
}
const vector<float> &CMS5::ak4jets_JERDn() {
  if (not ak4jets_JERDn_isLoaded) {
    if (ak4jets_JERDn_branch != 0) {
      ak4jets_JERDn_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_JERDn_branch does not exist!\n");
      exit(1);
    }
    ak4jets_JERDn_isLoaded = true;
  }
  return *ak4jets_JERDn_;
}
const float &CMS5::xsec_lhe() {
  if (not xsec_lhe_isLoaded) {
    if (xsec_lhe_branch != 0) {
      xsec_lhe_branch->GetEntry(index);
    } else {
      printf("branch xsec_lhe_branch does not exist!\n");
      exit(1);
    }
    xsec_lhe_isLoaded = true;
  }
  return xsec_lhe_;
}
const vector<char> &CMS5::ak4jets_partonFlavour() {
  if (not ak4jets_partonFlavour_isLoaded) {
    if (ak4jets_partonFlavour_branch != 0) {
      ak4jets_partonFlavour_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_partonFlavour_branch does not exist!\n");
      exit(1);
    }
    ak4jets_partonFlavour_isLoaded = true;
  }
  return *ak4jets_partonFlavour_;
}
const vector<float> &CMS5::ak4jets_eta() {
  if (not ak4jets_eta_isLoaded) {
    if (ak4jets_eta_branch != 0) {
      ak4jets_eta_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_eta_branch does not exist!\n");
      exit(1);
    }
    ak4jets_eta_isLoaded = true;
  }
  return *ak4jets_eta_;
}
const vector<float> &CMS5::ak4jets_totalMultiplicity() {
  if (not ak4jets_totalMultiplicity_isLoaded) {
    if (ak4jets_totalMultiplicity_branch != 0) {
      ak4jets_totalMultiplicity_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_totalMultiplicity_branch does not exist!\n");
      exit(1);
    }
    ak4jets_totalMultiplicity_isLoaded = true;
  }
  return *ak4jets_totalMultiplicity_;
}
const float &CMS5::puppimet_metPhi_JECDn() {
  if (not puppimet_metPhi_JECDn_isLoaded) {
    if (puppimet_metPhi_JECDn_branch != 0) {
      puppimet_metPhi_JECDn_branch->GetEntry(index);
    } else {
      printf("branch puppimet_metPhi_JECDn_branch does not exist!\n");
      exit(1);
    }
    puppimet_metPhi_JECDn_isLoaded = true;
  }
  return puppimet_metPhi_JECDn_;
}
const vector<float> &CMS5::electrons_pt() {
  if (not electrons_pt_isLoaded) {
    if (electrons_pt_branch != 0) {
      electrons_pt_branch->GetEntry(index);
    } else {
      printf("branch electrons_pt_branch does not exist!\n");
      exit(1);
    }
    electrons_pt_isLoaded = true;
  }
  return *electrons_pt_;
}
const float &CMS5::PythiaWeight_fsr_muR0p5() {
  if (not PythiaWeight_fsr_muR0p5_isLoaded) {
    if (PythiaWeight_fsr_muR0p5_branch != 0) {
      PythiaWeight_fsr_muR0p5_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_fsr_muR0p5_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_fsr_muR0p5_isLoaded = true;
  }
  return PythiaWeight_fsr_muR0p5_;
}
const vector<float> &CMS5::ak8jets_mass() {
  if (not ak8jets_mass_isLoaded) {
    if (ak8jets_mass_branch != 0) {
      ak8jets_mass_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_mass_branch does not exist!\n");
      exit(1);
    }
    ak8jets_mass_isLoaded = true;
  }
  return *ak8jets_mass_;
}
const float &CMS5::KFactor_QCD_NNLO_ggZZ_Sig_AsUp() {
  if (not KFactor_QCD_NNLO_ggZZ_Sig_AsUp_isLoaded) {
    if (KFactor_QCD_NNLO_ggZZ_Sig_AsUp_branch != 0) {
      KFactor_QCD_NNLO_ggZZ_Sig_AsUp_branch->GetEntry(index);
    } else {
      printf("branch KFactor_QCD_NNLO_ggZZ_Sig_AsUp_branch does not exist!\n");
      exit(1);
    }
    KFactor_QCD_NNLO_ggZZ_Sig_AsUp_isLoaded = true;
  }
  return KFactor_QCD_NNLO_ggZZ_Sig_AsUp_;
}
const vector<float> &CMS5::muons_pull_dxdz_noArb_DT() {
  if (not muons_pull_dxdz_noArb_DT_isLoaded) {
    if (muons_pull_dxdz_noArb_DT_branch != 0) {
      muons_pull_dxdz_noArb_DT_branch->GetEntry(index);
    } else {
      printf("branch muons_pull_dxdz_noArb_DT_branch does not exist!\n");
      exit(1);
    }
    muons_pull_dxdz_noArb_DT_isLoaded = true;
  }
  return *muons_pull_dxdz_noArb_DT_;
}
const vector<float> &CMS5::ak8jets_totalMultiplicity() {
  if (not ak8jets_totalMultiplicity_isLoaded) {
    if (ak8jets_totalMultiplicity_branch != 0) {
      ak8jets_totalMultiplicity_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_totalMultiplicity_branch does not exist!\n");
      exit(1);
    }
    ak8jets_totalMultiplicity_isLoaded = true;
  }
  return *ak8jets_totalMultiplicity_;
}
const vector<bool> &CMS5::ak8jets_pass_looseId() {
  if (not ak8jets_pass_looseId_isLoaded) {
    if (ak8jets_pass_looseId_branch != 0) {
      ak8jets_pass_looseId_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_pass_looseId_branch does not exist!\n");
      exit(1);
    }
    ak8jets_pass_looseId_isLoaded = true;
  }
  return *ak8jets_pass_looseId_;
}
const short &CMS5::n_shower_gluons_to_bottom() {
  if (not n_shower_gluons_to_bottom_isLoaded) {
    if (n_shower_gluons_to_bottom_branch != 0) {
      n_shower_gluons_to_bottom_branch->GetEntry(index);
    } else {
      printf("branch n_shower_gluons_to_bottom_branch does not exist!\n");
      exit(1);
    }
    n_shower_gluons_to_bottom_isLoaded = true;
  }
  return n_shower_gluons_to_bottom_;
}
const float &CMS5::p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM_;
}
const vector<bool> &CMS5::isotracks_fromPV() {
  if (not isotracks_fromPV_isLoaded) {
    if (isotracks_fromPV_branch != 0) {
      isotracks_fromPV_branch->GetEntry(index);
    } else {
      printf("branch isotracks_fromPV_branch does not exist!\n");
      exit(1);
    }
    isotracks_fromPV_isLoaded = true;
  }
  return *isotracks_fromPV_;
}
const vector<float> &CMS5::ak4jets_pt() {
  if (not ak4jets_pt_isLoaded) {
    if (ak4jets_pt_branch != 0) {
      ak4jets_pt_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_pt_branch does not exist!\n");
      exit(1);
    }
    ak4jets_pt_isLoaded = true;
  }
  return *ak4jets_pt_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::lheparticles_E() {
  if (not lheparticles_E_isLoaded) {
    if (lheparticles_E_branch != 0) {
      lheparticles_E_branch->GetEntry(index);
    } else {
      printf("branch lheparticles_E_branch does not exist!\n");
      exit(1);
    }
    lheparticles_E_isLoaded = true;
  }
  return *lheparticles_E_;
}
const vector<bool> &CMS5::electrons_id_MVA_Fall17V2_NoIso_pass_wp80() {
  if (not electrons_id_MVA_Fall17V2_NoIso_pass_wp80_isLoaded) {
    if (electrons_id_MVA_Fall17V2_NoIso_pass_wp80_branch != 0) {
      electrons_id_MVA_Fall17V2_NoIso_pass_wp80_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_NoIso_pass_wp80_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_NoIso_pass_wp80_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_NoIso_pass_wp80_;
}
const vector<float> &CMS5::isotracks_pfIso03_comb_nofsr() {
  if (not isotracks_pfIso03_comb_nofsr_isLoaded) {
    if (isotracks_pfIso03_comb_nofsr_branch != 0) {
      isotracks_pfIso03_comb_nofsr_branch->GetEntry(index);
    } else {
      printf("branch isotracks_pfIso03_comb_nofsr_branch does not exist!\n");
      exit(1);
    }
    isotracks_pfIso03_comb_nofsr_isLoaded = true;
  }
  return *isotracks_pfIso03_comb_nofsr_;
}
const vector<bool> &CMS5::vtxs_is_fake() {
  if (not vtxs_is_fake_isLoaded) {
    if (vtxs_is_fake_branch != 0) {
      vtxs_is_fake_branch->GetEntry(index);
    } else {
      printf("branch vtxs_is_fake_branch does not exist!\n");
      exit(1);
    }
    vtxs_is_fake_isLoaded = true;
  }
  return *vtxs_is_fake_;
}
const unsigned int &CMS5::LuminosityBlock() {
  if (not LuminosityBlock_isLoaded) {
    if (LuminosityBlock_branch != 0) {
      LuminosityBlock_branch->GetEntry(index);
    } else {
      printf("branch LuminosityBlock_branch does not exist!\n");
      exit(1);
    }
    LuminosityBlock_isLoaded = true;
  }
  return LuminosityBlock_;
}
const vector<float> &CMS5::ak8jets_JERDn() {
  if (not ak8jets_JERDn_isLoaded) {
    if (ak8jets_JERDn_branch != 0) {
      ak8jets_JERDn_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_JERDn_branch does not exist!\n");
      exit(1);
    }
    ak8jets_JERDn_isLoaded = true;
  }
  return *ak8jets_JERDn_;
}
const float &CMS5::qscale() {
  if (not qscale_isLoaded) {
    if (qscale_branch != 0) {
      qscale_branch->GetEntry(index);
    } else {
      printf("branch qscale_branch does not exist!\n");
      exit(1);
    }
    qscale_isLoaded = true;
  }
  return qscale_;
}
const float &CMS5::p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::isotracks_miniIso_comb_nofsr() {
  if (not isotracks_miniIso_comb_nofsr_isLoaded) {
    if (isotracks_miniIso_comb_nofsr_branch != 0) {
      isotracks_miniIso_comb_nofsr_branch->GetEntry(index);
    } else {
      printf("branch isotracks_miniIso_comb_nofsr_branch does not exist!\n");
      exit(1);
    }
    isotracks_miniIso_comb_nofsr_isLoaded = true;
  }
  return *isotracks_miniIso_comb_nofsr_;
}
const vector<float> &CMS5::muons_pfIso03_sum_charged_nofsr() {
  if (not muons_pfIso03_sum_charged_nofsr_isLoaded) {
    if (muons_pfIso03_sum_charged_nofsr_branch != 0) {
      muons_pfIso03_sum_charged_nofsr_branch->GetEntry(index);
    } else {
      printf("branch muons_pfIso03_sum_charged_nofsr_branch does not exist!\n");
      exit(1);
    }
    muons_pfIso03_sum_charged_nofsr_isLoaded = true;
  }
  return *muons_pfIso03_sum_charged_nofsr_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM_;
}
const vector<unsigned char> &CMS5::electrons_id_MVA_HZZRun2Legacy_Iso_Cat() {
  if (not electrons_id_MVA_HZZRun2Legacy_Iso_Cat_isLoaded) {
    if (electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch != 0) {
      electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_HZZRun2Legacy_Iso_Cat_isLoaded = true;
  }
  return *electrons_id_MVA_HZZRun2Legacy_Iso_Cat_;
}
const vector<float> &CMS5::isotracks_pfIso03_em() {
  if (not isotracks_pfIso03_em_isLoaded) {
    if (isotracks_pfIso03_em_branch != 0) {
      isotracks_pfIso03_em_branch->GetEntry(index);
    } else {
      printf("branch isotracks_pfIso03_em_branch does not exist!\n");
      exit(1);
    }
    isotracks_pfIso03_em_isLoaded = true;
  }
  return *isotracks_pfIso03_em_;
}
const float &CMS5::p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM_;
}
const vector<bool> &CMS5::vtxs_is_good() {
  if (not vtxs_is_good_isLoaded) {
    if (vtxs_is_good_branch != 0) {
      vtxs_is_good_branch->GetEntry(index);
    } else {
      printf("branch vtxs_is_good_branch does not exist!\n");
      exit(1);
    }
    vtxs_is_good_isLoaded = true;
  }
  return *vtxs_is_good_;
}
const vector<float> &CMS5::electrons_scale_smear_corr_smear_totalDn() {
  if (not electrons_scale_smear_corr_smear_totalDn_isLoaded) {
    if (electrons_scale_smear_corr_smear_totalDn_branch != 0) {
      electrons_scale_smear_corr_smear_totalDn_branch->GetEntry(index);
    } else {
      printf("branch electrons_scale_smear_corr_smear_totalDn_branch does not exist!\n");
      exit(1);
    }
    electrons_scale_smear_corr_smear_totalDn_isLoaded = true;
  }
  return *electrons_scale_smear_corr_smear_totalDn_;
}
const vector<float> &CMS5::muons_pfIso04_comb_nofsr() {
  if (not muons_pfIso04_comb_nofsr_isLoaded) {
    if (muons_pfIso04_comb_nofsr_branch != 0) {
      muons_pfIso04_comb_nofsr_branch->GetEntry(index);
    } else {
      printf("branch muons_pfIso04_comb_nofsr_branch does not exist!\n");
      exit(1);
    }
    muons_pfIso04_comb_nofsr_isLoaded = true;
  }
  return *muons_pfIso04_comb_nofsr_;
}
const float &CMS5::LHECandMass() {
  if (not LHECandMass_isLoaded) {
    if (LHECandMass_branch != 0) {
      LHECandMass_branch->GetEntry(index);
    } else {
      printf("branch LHECandMass_branch does not exist!\n");
      exit(1);
    }
    LHECandMass_isLoaded = true;
  }
  return LHECandMass_;
}
const vector<vector<unsigned int> > &CMS5::triggerObjects_passedTriggers() {
  if (not triggerObjects_passedTriggers_isLoaded) {
    if (triggerObjects_passedTriggers_branch != 0) {
      triggerObjects_passedTriggers_branch->GetEntry(index);
    } else {
      printf("branch triggerObjects_passedTriggers_branch does not exist!\n");
      exit(1);
    }
    triggerObjects_passedTriggers_isLoaded = true;
  }
  return *triggerObjects_passedTriggers_;
}
const bool &CMS5::metfilter_goodVertices() {
  if (not metfilter_goodVertices_isLoaded) {
    if (metfilter_goodVertices_branch != 0) {
      metfilter_goodVertices_branch->GetEntry(index);
    } else {
      printf("branch metfilter_goodVertices_branch does not exist!\n");
      exit(1);
    }
    metfilter_goodVertices_isLoaded = true;
  }
  return metfilter_goodVertices_;
}
const vector<float> &CMS5::muons_pfIso04_sum_charged_nofsr() {
  if (not muons_pfIso04_sum_charged_nofsr_isLoaded) {
    if (muons_pfIso04_sum_charged_nofsr_branch != 0) {
      muons_pfIso04_sum_charged_nofsr_branch->GetEntry(index);
    } else {
      printf("branch muons_pfIso04_sum_charged_nofsr_branch does not exist!\n");
      exit(1);
    }
    muons_pfIso04_sum_charged_nofsr_isLoaded = true;
  }
  return *muons_pfIso04_sum_charged_nofsr_;
}
const float &CMS5::pfmet_met_JECUp() {
  if (not pfmet_met_JECUp_isLoaded) {
    if (pfmet_met_JECUp_branch != 0) {
      pfmet_met_JECUp_branch->GetEntry(index);
    } else {
      printf("branch pfmet_met_JECUp_branch does not exist!\n");
      exit(1);
    }
    pfmet_met_JECUp_isLoaded = true;
  }
  return pfmet_met_JECUp_;
}
const vector<float> &CMS5::ak4jets_JECDn() {
  if (not ak4jets_JECDn_isLoaded) {
    if (ak4jets_JECDn_branch != 0) {
      ak4jets_JECDn_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_JECDn_branch does not exist!\n");
      exit(1);
    }
    ak4jets_JECDn_isLoaded = true;
  }
  return *ak4jets_JECDn_;
}
const vector<float> &CMS5::electrons_pfIso03_comb_nofsr() {
  if (not electrons_pfIso03_comb_nofsr_isLoaded) {
    if (electrons_pfIso03_comb_nofsr_branch != 0) {
      electrons_pfIso03_comb_nofsr_branch->GetEntry(index);
    } else {
      printf("branch electrons_pfIso03_comb_nofsr_branch does not exist!\n");
      exit(1);
    }
    electrons_pfIso03_comb_nofsr_isLoaded = true;
  }
  return *electrons_pfIso03_comb_nofsr_;
}
const vector<float> &CMS5::photons_pfIso_comb() {
  if (not photons_pfIso_comb_isLoaded) {
    if (photons_pfIso_comb_branch != 0) {
      photons_pfIso_comb_branch->GetEntry(index);
    } else {
      printf("branch photons_pfIso_comb_branch does not exist!\n");
      exit(1);
    }
    photons_pfIso_comb_isLoaded = true;
  }
  return *photons_pfIso_comb_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM_;
}
const bool &CMS5::metfilter_trkPOG_toomanystripclus53X() {
  if (not metfilter_trkPOG_toomanystripclus53X_isLoaded) {
    if (metfilter_trkPOG_toomanystripclus53X_branch != 0) {
      metfilter_trkPOG_toomanystripclus53X_branch->GetEntry(index);
    } else {
      printf("branch metfilter_trkPOG_toomanystripclus53X_branch does not exist!\n");
      exit(1);
    }
    metfilter_trkPOG_toomanystripclus53X_isLoaded = true;
  }
  return metfilter_trkPOG_toomanystripclus53X_;
}
const vector<float> &CMS5::triggerObjects_phi() {
  if (not triggerObjects_phi_isLoaded) {
    if (triggerObjects_phi_branch != 0) {
      triggerObjects_phi_branch->GetEntry(index);
    } else {
      printf("branch triggerObjects_phi_branch does not exist!\n");
      exit(1);
    }
    triggerObjects_phi_isLoaded = true;
  }
  return *triggerObjects_phi_;
}
const vector<float> &CMS5::isotracks_pt() {
  if (not isotracks_pt_isLoaded) {
    if (isotracks_pt_branch != 0) {
      isotracks_pt_branch->GetEntry(index);
    } else {
      printf("branch isotracks_pt_branch does not exist!\n");
      exit(1);
    }
    isotracks_pt_isLoaded = true;
  }
  return *isotracks_pt_;
}
const vector<int> &CMS5::lheparticles_mother1_index() {
  if (not lheparticles_mother1_index_isLoaded) {
    if (lheparticles_mother1_index_branch != 0) {
      lheparticles_mother1_index_branch->GetEntry(index);
    } else {
      printf("branch lheparticles_mother1_index_branch does not exist!\n");
      exit(1);
    }
    lheparticles_mother1_index_isLoaded = true;
  }
  return *lheparticles_mother1_index_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM_;
}
const float &CMS5::pfmet_calo_met() {
  if (not pfmet_calo_met_isLoaded) {
    if (pfmet_calo_met_branch != 0) {
      pfmet_calo_met_branch->GetEntry(index);
    } else {
      printf("branch pfmet_calo_met_branch does not exist!\n");
      exit(1);
    }
    pfmet_calo_met_isLoaded = true;
  }
  return pfmet_calo_met_;
}
const vector<float> &CMS5::muons_pfIso03_comb_nofsr() {
  if (not muons_pfIso03_comb_nofsr_isLoaded) {
    if (muons_pfIso03_comb_nofsr_branch != 0) {
      muons_pfIso03_comb_nofsr_branch->GetEntry(index);
    } else {
      printf("branch muons_pfIso03_comb_nofsr_branch does not exist!\n");
      exit(1);
    }
    muons_pfIso03_comb_nofsr_isLoaded = true;
  }
  return *muons_pfIso03_comb_nofsr_;
}
const vector<float> &CMS5::isotracks_miniIso_db() {
  if (not isotracks_miniIso_db_isLoaded) {
    if (isotracks_miniIso_db_branch != 0) {
      isotracks_miniIso_db_branch->GetEntry(index);
    } else {
      printf("branch isotracks_miniIso_db_branch does not exist!\n");
      exit(1);
    }
    isotracks_miniIso_db_isLoaded = true;
  }
  return *isotracks_miniIso_db_;
}
const bool &CMS5::passCommonSkim() {
  if (not passCommonSkim_isLoaded) {
    if (passCommonSkim_branch != 0) {
      passCommonSkim_branch->GetEntry(index);
    } else {
      printf("branch passCommonSkim_branch does not exist!\n");
      exit(1);
    }
    passCommonSkim_isLoaded = true;
  }
  return passCommonSkim_;
}
const vector<float> &CMS5::muons_scale_smear_pt_corr_scale_totalUp() {
  if (not muons_scale_smear_pt_corr_scale_totalUp_isLoaded) {
    if (muons_scale_smear_pt_corr_scale_totalUp_branch != 0) {
      muons_scale_smear_pt_corr_scale_totalUp_branch->GetEntry(index);
    } else {
      printf("branch muons_scale_smear_pt_corr_scale_totalUp_branch does not exist!\n");
      exit(1);
    }
    muons_scale_smear_pt_corr_scale_totalUp_isLoaded = true;
  }
  return *muons_scale_smear_pt_corr_scale_totalUp_;
}
const vector<bool> &CMS5::isotracks_is_tightTrack() {
  if (not isotracks_is_tightTrack_isLoaded) {
    if (isotracks_is_tightTrack_branch != 0) {
      isotracks_is_tightTrack_branch->GetEntry(index);
    } else {
      printf("branch isotracks_is_tightTrack_branch does not exist!\n");
      exit(1);
    }
    isotracks_is_tightTrack_isLoaded = true;
  }
  return *isotracks_is_tightTrack_;
}
const vector<unsigned int> &CMS5::photons_id_cutBased_Fall17V2_Loose_Bits() {
  if (not photons_id_cutBased_Fall17V2_Loose_Bits_isLoaded) {
    if (photons_id_cutBased_Fall17V2_Loose_Bits_branch != 0) {
      photons_id_cutBased_Fall17V2_Loose_Bits_branch->GetEntry(index);
    } else {
      printf("branch photons_id_cutBased_Fall17V2_Loose_Bits_branch does not exist!\n");
      exit(1);
    }
    photons_id_cutBased_Fall17V2_Loose_Bits_isLoaded = true;
  }
  return *photons_id_cutBased_Fall17V2_Loose_Bits_;
}
const vector<float> &CMS5::ak4jets_deepCSVprobbb() {
  if (not ak4jets_deepCSVprobbb_isLoaded) {
    if (ak4jets_deepCSVprobbb_branch != 0) {
      ak4jets_deepCSVprobbb_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_deepCSVprobbb_branch does not exist!\n");
      exit(1);
    }
    ak4jets_deepCSVprobbb_isLoaded = true;
  }
  return *ak4jets_deepCSVprobbb_;
}
const float &CMS5::pfmet_metShift_px_JERNominal() {
  if (not pfmet_metShift_px_JERNominal_isLoaded) {
    if (pfmet_metShift_px_JERNominal_branch != 0) {
      pfmet_metShift_px_JERNominal_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metShift_px_JERNominal_branch does not exist!\n");
      exit(1);
    }
    pfmet_metShift_px_JERNominal_isLoaded = true;
  }
  return pfmet_metShift_px_JERNominal_;
}
const bool &CMS5::metfilter_trkPOG_logErrorTooManyClusters() {
  if (not metfilter_trkPOG_logErrorTooManyClusters_isLoaded) {
    if (metfilter_trkPOG_logErrorTooManyClusters_branch != 0) {
      metfilter_trkPOG_logErrorTooManyClusters_branch->GetEntry(index);
    } else {
      printf("branch metfilter_trkPOG_logErrorTooManyClusters_branch does not exist!\n");
      exit(1);
    }
    metfilter_trkPOG_logErrorTooManyClusters_isLoaded = true;
  }
  return metfilter_trkPOG_logErrorTooManyClusters_;
}
const float &CMS5::pfmet_met_UnclusteredEnUp() {
  if (not pfmet_met_UnclusteredEnUp_isLoaded) {
    if (pfmet_met_UnclusteredEnUp_branch != 0) {
      pfmet_met_UnclusteredEnUp_branch->GetEntry(index);
    } else {
      printf("branch pfmet_met_UnclusteredEnUp_branch does not exist!\n");
      exit(1);
    }
    pfmet_met_UnclusteredEnUp_isLoaded = true;
  }
  return pfmet_met_UnclusteredEnUp_;
}
const float &CMS5::puppimet_met_UnclusteredEnUp() {
  if (not puppimet_met_UnclusteredEnUp_isLoaded) {
    if (puppimet_met_UnclusteredEnUp_branch != 0) {
      puppimet_met_UnclusteredEnUp_branch->GetEntry(index);
    } else {
      printf("branch puppimet_met_UnclusteredEnUp_branch does not exist!\n");
      exit(1);
    }
    puppimet_met_UnclusteredEnUp_isLoaded = true;
  }
  return puppimet_met_UnclusteredEnUp_;
}
const float &CMS5::puppimet_metPhi_UnclusteredEnUp() {
  if (not puppimet_metPhi_UnclusteredEnUp_isLoaded) {
    if (puppimet_metPhi_UnclusteredEnUp_branch != 0) {
      puppimet_metPhi_UnclusteredEnUp_branch->GetEntry(index);
    } else {
      printf("branch puppimet_metPhi_UnclusteredEnUp_branch does not exist!\n");
      exit(1);
    }
    puppimet_metPhi_UnclusteredEnUp_isLoaded = true;
  }
  return puppimet_metPhi_UnclusteredEnUp_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM_;
}
const vector<bool> &CMS5::isotracks_is_highPurityTrack() {
  if (not isotracks_is_highPurityTrack_isLoaded) {
    if (isotracks_is_highPurityTrack_branch != 0) {
      isotracks_is_highPurityTrack_branch->GetEntry(index);
    } else {
      printf("branch isotracks_is_highPurityTrack_branch does not exist!\n");
      exit(1);
    }
    isotracks_is_highPurityTrack_isLoaded = true;
  }
  return *isotracks_is_highPurityTrack_;
}
const float &CMS5::LHEweight_AsMZ_Up_NNPDF30() {
  if (not LHEweight_AsMZ_Up_NNPDF30_isLoaded) {
    if (LHEweight_AsMZ_Up_NNPDF30_branch != 0) {
      LHEweight_AsMZ_Up_NNPDF30_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_AsMZ_Up_NNPDF30_branch does not exist!\n");
      exit(1);
    }
    LHEweight_AsMZ_Up_NNPDF30_isLoaded = true;
  }
  return LHEweight_AsMZ_Up_NNPDF30_;
}
const vector<string> &CMS5::triggers_name() {
  if (not triggers_name_isLoaded) {
    if (triggers_name_branch != 0) {
      triggers_name_branch->GetEntry(index);
    } else {
      printf("branch triggers_name_branch does not exist!\n");
      exit(1);
    }
    triggers_name_isLoaded = true;
  }
  return *triggers_name_;
}
const float &CMS5::puppimet_met_JECDn() {
  if (not puppimet_met_JECDn_isLoaded) {
    if (puppimet_met_JECDn_branch != 0) {
      puppimet_met_JECDn_branch->GetEntry(index);
    } else {
      printf("branch puppimet_met_JECDn_branch does not exist!\n");
      exit(1);
    }
    puppimet_met_JECDn_isLoaded = true;
  }
  return puppimet_met_JECDn_;
}
const vector<bool> &CMS5::electrons_id_MVA_Fall17V2_Iso_pass_wp80() {
  if (not electrons_id_MVA_Fall17V2_Iso_pass_wp80_isLoaded) {
    if (electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch != 0) {
      electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_Iso_pass_wp80_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_Iso_pass_wp80_;
}
const vector<float> &CMS5::photons_mass() {
  if (not photons_mass_isLoaded) {
    if (photons_mass_branch != 0) {
      photons_mass_branch->GetEntry(index);
    } else {
      printf("branch photons_mass_branch does not exist!\n");
      exit(1);
    }
    photons_mass_isLoaded = true;
  }
  return *photons_mass_;
}
const vector<unsigned short> &CMS5::electrons_id_cutBased_Fall17V2_Loose_Bits() {
  if (not electrons_id_cutBased_Fall17V2_Loose_Bits_isLoaded) {
    if (electrons_id_cutBased_Fall17V2_Loose_Bits_branch != 0) {
      electrons_id_cutBased_Fall17V2_Loose_Bits_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_cutBased_Fall17V2_Loose_Bits_branch does not exist!\n");
      exit(1);
    }
    electrons_id_cutBased_Fall17V2_Loose_Bits_isLoaded = true;
  }
  return *electrons_id_cutBased_Fall17V2_Loose_Bits_;
}
const vector<float> &CMS5::electrons_id_MVA_HZZRun2Legacy_Iso_Val() {
  if (not electrons_id_MVA_HZZRun2Legacy_Iso_Val_isLoaded) {
    if (electrons_id_MVA_HZZRun2Legacy_Iso_Val_branch != 0) {
      electrons_id_MVA_HZZRun2Legacy_Iso_Val_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_HZZRun2Legacy_Iso_Val_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_HZZRun2Legacy_Iso_Val_isLoaded = true;
  }
  return *electrons_id_MVA_HZZRun2Legacy_Iso_Val_;
}
const vector<float> &CMS5::photons_pt() {
  if (not photons_pt_isLoaded) {
    if (photons_pt_branch != 0) {
      photons_pt_branch->GetEntry(index);
    } else {
      printf("branch photons_pt_branch does not exist!\n");
      exit(1);
    }
    photons_pt_isLoaded = true;
  }
  return *photons_pt_;
}
const vector<bool> &CMS5::ak8jets_pass_tightId() {
  if (not ak8jets_pass_tightId_isLoaded) {
    if (ak8jets_pass_tightId_branch != 0) {
      ak8jets_pass_tightId_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_pass_tightId_branch does not exist!\n");
      exit(1);
    }
    ak8jets_pass_tightId_isLoaded = true;
  }
  return *ak8jets_pass_tightId_;
}
const float &CMS5::KFactor_QCD_NNLO_ggZZ_Sig_Nominal() {
  if (not KFactor_QCD_NNLO_ggZZ_Sig_Nominal_isLoaded) {
    if (KFactor_QCD_NNLO_ggZZ_Sig_Nominal_branch != 0) {
      KFactor_QCD_NNLO_ggZZ_Sig_Nominal_branch->GetEntry(index);
    } else {
      printf("branch KFactor_QCD_NNLO_ggZZ_Sig_Nominal_branch does not exist!\n");
      exit(1);
    }
    KFactor_QCD_NNLO_ggZZ_Sig_Nominal_isLoaded = true;
  }
  return KFactor_QCD_NNLO_ggZZ_Sig_Nominal_;
}
const bool &CMS5::metfilter_CSCTightHaloTrkMuUnvetoFilter() {
  if (not metfilter_CSCTightHaloTrkMuUnvetoFilter_isLoaded) {
    if (metfilter_CSCTightHaloTrkMuUnvetoFilter_branch != 0) {
      metfilter_CSCTightHaloTrkMuUnvetoFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_CSCTightHaloTrkMuUnvetoFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_CSCTightHaloTrkMuUnvetoFilter_isLoaded = true;
  }
  return metfilter_CSCTightHaloTrkMuUnvetoFilter_;
}
const vector<float> &CMS5::electrons_miniIso_comb_nofsr() {
  if (not electrons_miniIso_comb_nofsr_isLoaded) {
    if (electrons_miniIso_comb_nofsr_branch != 0) {
      electrons_miniIso_comb_nofsr_branch->GetEntry(index);
    } else {
      printf("branch electrons_miniIso_comb_nofsr_branch does not exist!\n");
      exit(1);
    }
    electrons_miniIso_comb_nofsr_isLoaded = true;
  }
  return *electrons_miniIso_comb_nofsr_;
}
const vector<float> &CMS5::muons_pull_dxdz_noArb_CSC() {
  if (not muons_pull_dxdz_noArb_CSC_isLoaded) {
    if (muons_pull_dxdz_noArb_CSC_branch != 0) {
      muons_pull_dxdz_noArb_CSC_branch->GetEntry(index);
    } else {
      printf("branch muons_pull_dxdz_noArb_CSC_branch does not exist!\n");
      exit(1);
    }
    muons_pull_dxdz_noArb_CSC_isLoaded = true;
  }
  return *muons_pull_dxdz_noArb_CSC_;
}
const bool &CMS5::metfilter_globalTightHalo2016Filter() {
  if (not metfilter_globalTightHalo2016Filter_isLoaded) {
    if (metfilter_globalTightHalo2016Filter_branch != 0) {
      metfilter_globalTightHalo2016Filter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_globalTightHalo2016Filter_branch does not exist!\n");
      exit(1);
    }
    metfilter_globalTightHalo2016Filter_isLoaded = true;
  }
  return metfilter_globalTightHalo2016Filter_;
}
const float &CMS5::p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM_;
}
const vector<bool> &CMS5::ak8jets_pass_leptonVetoId() {
  if (not ak8jets_pass_leptonVetoId_isLoaded) {
    if (ak8jets_pass_leptonVetoId_branch != 0) {
      ak8jets_pass_leptonVetoId_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_pass_leptonVetoId_branch does not exist!\n");
      exit(1);
    }
    ak8jets_pass_leptonVetoId_isLoaded = true;
  }
  return *ak8jets_pass_leptonVetoId_;
}
const vector<bool> &CMS5::ak4jets_pass_looseId() {
  if (not ak4jets_pass_looseId_isLoaded) {
    if (ak4jets_pass_looseId_branch != 0) {
      ak4jets_pass_looseId_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_pass_looseId_branch does not exist!\n");
      exit(1);
    }
    ak4jets_pass_looseId_isLoaded = true;
  }
  return *ak4jets_pass_looseId_;
}
const vector<float> &CMS5::triggerObjects_pt() {
  if (not triggerObjects_pt_isLoaded) {
    if (triggerObjects_pt_branch != 0) {
      triggerObjects_pt_branch->GetEntry(index);
    } else {
      printf("branch triggerObjects_pt_branch does not exist!\n");
      exit(1);
    }
    triggerObjects_pt_isLoaded = true;
  }
  return *triggerObjects_pt_;
}
const bool &CMS5::metfilter_globalSuperTightHalo2016Filter() {
  if (not metfilter_globalSuperTightHalo2016Filter_isLoaded) {
    if (metfilter_globalSuperTightHalo2016Filter_branch != 0) {
      metfilter_globalSuperTightHalo2016Filter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_globalSuperTightHalo2016Filter_branch does not exist!\n");
      exit(1);
    }
    metfilter_globalSuperTightHalo2016Filter_isLoaded = true;
  }
  return metfilter_globalSuperTightHalo2016Filter_;
}
const vector<float> &CMS5::muons_dxy_bestTrack_firstPV() {
  if (not muons_dxy_bestTrack_firstPV_isLoaded) {
    if (muons_dxy_bestTrack_firstPV_branch != 0) {
      muons_dxy_bestTrack_firstPV_branch->GetEntry(index);
    } else {
      printf("branch muons_dxy_bestTrack_firstPV_branch does not exist!\n");
      exit(1);
    }
    muons_dxy_bestTrack_firstPV_isLoaded = true;
  }
  return *muons_dxy_bestTrack_firstPV_;
}
const bool &CMS5::metfilter_HcalStripHaloFilter() {
  if (not metfilter_HcalStripHaloFilter_isLoaded) {
    if (metfilter_HcalStripHaloFilter_branch != 0) {
      metfilter_HcalStripHaloFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_HcalStripHaloFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_HcalStripHaloFilter_isLoaded = true;
  }
  return metfilter_HcalStripHaloFilter_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::electrons_miniIso_sum_neutral_nofsr_old() {
  if (not electrons_miniIso_sum_neutral_nofsr_old_isLoaded) {
    if (electrons_miniIso_sum_neutral_nofsr_old_branch != 0) {
      electrons_miniIso_sum_neutral_nofsr_old_branch->GetEntry(index);
    } else {
      printf("branch electrons_miniIso_sum_neutral_nofsr_old_branch does not exist!\n");
      exit(1);
    }
    electrons_miniIso_sum_neutral_nofsr_old_isLoaded = true;
  }
  return *electrons_miniIso_sum_neutral_nofsr_old_;
}
const vector<float> &CMS5::photons_scale_smear_corr_scale_totalUp() {
  if (not photons_scale_smear_corr_scale_totalUp_isLoaded) {
    if (photons_scale_smear_corr_scale_totalUp_branch != 0) {
      photons_scale_smear_corr_scale_totalUp_branch->GetEntry(index);
    } else {
      printf("branch photons_scale_smear_corr_scale_totalUp_branch does not exist!\n");
      exit(1);
    }
    photons_scale_smear_corr_scale_totalUp_isLoaded = true;
  }
  return *photons_scale_smear_corr_scale_totalUp_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::electrons_scale_smear_corr_scale_totalUp() {
  if (not electrons_scale_smear_corr_scale_totalUp_isLoaded) {
    if (electrons_scale_smear_corr_scale_totalUp_branch != 0) {
      electrons_scale_smear_corr_scale_totalUp_branch->GetEntry(index);
    } else {
      printf("branch electrons_scale_smear_corr_scale_totalUp_branch does not exist!\n");
      exit(1);
    }
    electrons_scale_smear_corr_scale_totalUp_isLoaded = true;
  }
  return *electrons_scale_smear_corr_scale_totalUp_;
}
const bool &CMS5::metfilter_trkPOG_manystripclus53X() {
  if (not metfilter_trkPOG_manystripclus53X_isLoaded) {
    if (metfilter_trkPOG_manystripclus53X_branch != 0) {
      metfilter_trkPOG_manystripclus53X_branch->GetEntry(index);
    } else {
      printf("branch metfilter_trkPOG_manystripclus53X_branch does not exist!\n");
      exit(1);
    }
    metfilter_trkPOG_manystripclus53X_isLoaded = true;
  }
  return metfilter_trkPOG_manystripclus53X_;
}
const vector<int> &CMS5::isotracks_id() {
  if (not isotracks_id_isLoaded) {
    if (isotracks_id_branch != 0) {
      isotracks_id_branch->GetEntry(index);
    } else {
      printf("branch isotracks_id_branch does not exist!\n");
      exit(1);
    }
    isotracks_id_isLoaded = true;
  }
  return *isotracks_id_;
}
const vector<float> &CMS5::ak4jets_JECNominal() {
  if (not ak4jets_JECNominal_isLoaded) {
    if (ak4jets_JECNominal_branch != 0) {
      ak4jets_JECNominal_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_JECNominal_branch does not exist!\n");
      exit(1);
    }
    ak4jets_JECNominal_isLoaded = true;
  }
  return *ak4jets_JECNominal_;
}
const float &CMS5::LHEweight_PDFVariation_Dn_NNPDF30() {
  if (not LHEweight_PDFVariation_Dn_NNPDF30_isLoaded) {
    if (LHEweight_PDFVariation_Dn_NNPDF30_branch != 0) {
      LHEweight_PDFVariation_Dn_NNPDF30_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_PDFVariation_Dn_NNPDF30_branch does not exist!\n");
      exit(1);
    }
    LHEweight_PDFVariation_Dn_NNPDF30_isLoaded = true;
  }
  return LHEweight_PDFVariation_Dn_NNPDF30_;
}
const vector<int> &CMS5::triggers_L1prescale() {
  if (not triggers_L1prescale_isLoaded) {
    if (triggers_L1prescale_branch != 0) {
      triggers_L1prescale_branch->GetEntry(index);
    } else {
      printf("branch triggers_L1prescale_branch does not exist!\n");
      exit(1);
    }
    triggers_L1prescale_isLoaded = true;
  }
  return *triggers_L1prescale_;
}
const vector<float> &CMS5::isotracks_dxy() {
  if (not isotracks_dxy_isLoaded) {
    if (isotracks_dxy_branch != 0) {
      isotracks_dxy_branch->GetEntry(index);
    } else {
      printf("branch isotracks_dxy_branch does not exist!\n");
      exit(1);
    }
    isotracks_dxy_isLoaded = true;
  }
  return *isotracks_dxy_;
}
const float &CMS5::pfmet_met_Raw() {
  if (not pfmet_met_Raw_isLoaded) {
    if (pfmet_met_Raw_branch != 0) {
      pfmet_met_Raw_branch->GetEntry(index);
    } else {
      printf("branch pfmet_met_Raw_branch does not exist!\n");
      exit(1);
    }
    pfmet_met_Raw_isLoaded = true;
  }
  return pfmet_met_Raw_;
}
const vector<bool> &CMS5::electrons_id_MVA_Fall17V2_Iso_pass_wp90() {
  if (not electrons_id_MVA_Fall17V2_Iso_pass_wp90_isLoaded) {
    if (electrons_id_MVA_Fall17V2_Iso_pass_wp90_branch != 0) {
      electrons_id_MVA_Fall17V2_Iso_pass_wp90_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_Iso_pass_wp90_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_Iso_pass_wp90_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_Iso_pass_wp90_;
}
const float &CMS5::LHEweight_QCDscale_muR0p5_muF0p5() {
  if (not LHEweight_QCDscale_muR0p5_muF0p5_isLoaded) {
    if (LHEweight_QCDscale_muR0p5_muF0p5_branch != 0) {
      LHEweight_QCDscale_muR0p5_muF0p5_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_QCDscale_muR0p5_muF0p5_branch does not exist!\n");
      exit(1);
    }
    LHEweight_QCDscale_muR0p5_muF0p5_isLoaded = true;
  }
  return LHEweight_QCDscale_muR0p5_muF0p5_;
}
const bool &CMS5::metfilter_EcalDeadCellBoundaryEnergyFilter() {
  if (not metfilter_EcalDeadCellBoundaryEnergyFilter_isLoaded) {
    if (metfilter_EcalDeadCellBoundaryEnergyFilter_branch != 0) {
      metfilter_EcalDeadCellBoundaryEnergyFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_EcalDeadCellBoundaryEnergyFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_EcalDeadCellBoundaryEnergyFilter_isLoaded = true;
  }
  return metfilter_EcalDeadCellBoundaryEnergyFilter_;
}
const float &CMS5::pfmet_metPhi_JECUp() {
  if (not pfmet_metPhi_JECUp_isLoaded) {
    if (pfmet_metPhi_JECUp_branch != 0) {
      pfmet_metPhi_JECUp_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metPhi_JECUp_branch does not exist!\n");
      exit(1);
    }
    pfmet_metPhi_JECUp_isLoaded = true;
  }
  return pfmet_metPhi_JECUp_;
}
const vector<float> &CMS5::muons_scale_smear_pt_corr_smear_totalUp() {
  if (not muons_scale_smear_pt_corr_smear_totalUp_isLoaded) {
    if (muons_scale_smear_pt_corr_smear_totalUp_branch != 0) {
      muons_scale_smear_pt_corr_smear_totalUp_branch->GetEntry(index);
    } else {
      printf("branch muons_scale_smear_pt_corr_smear_totalUp_branch does not exist!\n");
      exit(1);
    }
    muons_scale_smear_pt_corr_smear_totalUp_isLoaded = true;
  }
  return *muons_scale_smear_pt_corr_smear_totalUp_;
}
const vector<float> &CMS5::ak8jets_phi() {
  if (not ak8jets_phi_isLoaded) {
    if (ak8jets_phi_branch != 0) {
      ak8jets_phi_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_phi_branch does not exist!\n");
      exit(1);
    }
    ak8jets_phi_isLoaded = true;
  }
  return *ak8jets_phi_;
}
const float &CMS5::pfmet_met_JECDn() {
  if (not pfmet_met_JECDn_isLoaded) {
    if (pfmet_met_JECDn_branch != 0) {
      pfmet_met_JECDn_branch->GetEntry(index);
    } else {
      printf("branch pfmet_met_JECDn_branch does not exist!\n");
      exit(1);
    }
    pfmet_met_JECDn_isLoaded = true;
  }
  return pfmet_met_JECDn_;
}
const vector<bool> &CMS5::photons_hasPixelSeed() {
  if (not photons_hasPixelSeed_isLoaded) {
    if (photons_hasPixelSeed_branch != 0) {
      photons_hasPixelSeed_branch->GetEntry(index);
    } else {
      printf("branch photons_hasPixelSeed_branch does not exist!\n");
      exit(1);
    }
    photons_hasPixelSeed_isLoaded = true;
  }
  return *photons_hasPixelSeed_;
}
const float &CMS5::pfmet_metShift_py_JERDn() {
  if (not pfmet_metShift_py_JERDn_isLoaded) {
    if (pfmet_metShift_py_JERDn_branch != 0) {
      pfmet_metShift_py_JERDn_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metShift_py_JERDn_branch does not exist!\n");
      exit(1);
    }
    pfmet_metShift_py_JERDn_isLoaded = true;
  }
  return pfmet_metShift_py_JERDn_;
}
const float &CMS5::puppimet_metPhi_JECUp() {
  if (not puppimet_metPhi_JECUp_isLoaded) {
    if (puppimet_metPhi_JECUp_branch != 0) {
      puppimet_metPhi_JECUp_branch->GetEntry(index);
    } else {
      printf("branch puppimet_metPhi_JECUp_branch does not exist!\n");
      exit(1);
    }
    puppimet_metPhi_JECUp_isLoaded = true;
  }
  return puppimet_metPhi_JECUp_;
}
const vector<unsigned int> &CMS5::photons_id_MVA_Fall17V2_Cat() {
  if (not photons_id_MVA_Fall17V2_Cat_isLoaded) {
    if (photons_id_MVA_Fall17V2_Cat_branch != 0) {
      photons_id_MVA_Fall17V2_Cat_branch->GetEntry(index);
    } else {
      printf("branch photons_id_MVA_Fall17V2_Cat_branch does not exist!\n");
      exit(1);
    }
    photons_id_MVA_Fall17V2_Cat_isLoaded = true;
  }
  return *photons_id_MVA_Fall17V2_Cat_;
}
const vector<float> &CMS5::ak8jets_JECDn() {
  if (not ak8jets_JECDn_isLoaded) {
    if (ak8jets_JECDn_branch != 0) {
      ak8jets_JECDn_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_JECDn_branch does not exist!\n");
      exit(1);
    }
    ak8jets_JECDn_isLoaded = true;
  }
  return *ak8jets_JECDn_;
}
const vector<float> &CMS5::fsrcands_eta() {
  if (not fsrcands_eta_isLoaded) {
    if (fsrcands_eta_branch != 0) {
      fsrcands_eta_branch->GetEntry(index);
    } else {
      printf("branch fsrcands_eta_branch does not exist!\n");
      exit(1);
    }
    fsrcands_eta_isLoaded = true;
  }
  return *fsrcands_eta_;
}
const vector<bool> &CMS5::ak4jets_pass_puId() {
  if (not ak4jets_pass_puId_isLoaded) {
    if (ak4jets_pass_puId_branch != 0) {
      ak4jets_pass_puId_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_pass_puId_branch does not exist!\n");
      exit(1);
    }
    ak4jets_pass_puId_isLoaded = true;
  }
  return *ak4jets_pass_puId_;
}
const float &CMS5::alphaS() {
  if (not alphaS_isLoaded) {
    if (alphaS_branch != 0) {
      alphaS_branch->GetEntry(index);
    } else {
      printf("branch alphaS_branch does not exist!\n");
      exit(1);
    }
    alphaS_isLoaded = true;
  }
  return alphaS_;
}
const vector<bool> &CMS5::electrons_conv_vtx_flag() {
  if (not electrons_conv_vtx_flag_isLoaded) {
    if (electrons_conv_vtx_flag_branch != 0) {
      electrons_conv_vtx_flag_branch->GetEntry(index);
    } else {
      printf("branch electrons_conv_vtx_flag_branch does not exist!\n");
      exit(1);
    }
    electrons_conv_vtx_flag_isLoaded = true;
  }
  return *electrons_conv_vtx_flag_;
}
const vector<float> &CMS5::ak4jets_JECUp() {
  if (not ak4jets_JECUp_isLoaded) {
    if (ak4jets_JECUp_branch != 0) {
      ak4jets_JECUp_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_JECUp_branch does not exist!\n");
      exit(1);
    }
    ak4jets_JECUp_isLoaded = true;
  }
  return *ak4jets_JECUp_;
}
const vector<vector<unsigned int> > &CMS5::fsrcands_fsrMatch_muon_index_list() {
  if (not fsrcands_fsrMatch_muon_index_list_isLoaded) {
    if (fsrcands_fsrMatch_muon_index_list_branch != 0) {
      fsrcands_fsrMatch_muon_index_list_branch->GetEntry(index);
    } else {
      printf("branch fsrcands_fsrMatch_muon_index_list_branch does not exist!\n");
      exit(1);
    }
    fsrcands_fsrMatch_muon_index_list_isLoaded = true;
  }
  return *fsrcands_fsrMatch_muon_index_list_;
}
const vector<float> &CMS5::muons_pfIso03_sum_neutral_nofsr() {
  if (not muons_pfIso03_sum_neutral_nofsr_isLoaded) {
    if (muons_pfIso03_sum_neutral_nofsr_branch != 0) {
      muons_pfIso03_sum_neutral_nofsr_branch->GetEntry(index);
    } else {
      printf("branch muons_pfIso03_sum_neutral_nofsr_branch does not exist!\n");
      exit(1);
    }
    muons_pfIso03_sum_neutral_nofsr_isLoaded = true;
  }
  return *muons_pfIso03_sum_neutral_nofsr_;
}
const float &CMS5::p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM_;
}
const float &CMS5::LHEweight_QCDscale_muR1_muF0p5() {
  if (not LHEweight_QCDscale_muR1_muF0p5_isLoaded) {
    if (LHEweight_QCDscale_muR1_muF0p5_branch != 0) {
      LHEweight_QCDscale_muR1_muF0p5_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_QCDscale_muR1_muF0p5_branch does not exist!\n");
      exit(1);
    }
    LHEweight_QCDscale_muR1_muF0p5_isLoaded = true;
  }
  return LHEweight_QCDscale_muR1_muF0p5_;
}
const vector<float> &CMS5::muons_dz_bestTrack_firstPV() {
  if (not muons_dz_bestTrack_firstPV_isLoaded) {
    if (muons_dz_bestTrack_firstPV_branch != 0) {
      muons_dz_bestTrack_firstPV_branch->GetEntry(index);
    } else {
      printf("branch muons_dz_bestTrack_firstPV_branch does not exist!\n");
      exit(1);
    }
    muons_dz_bestTrack_firstPV_isLoaded = true;
  }
  return *muons_dz_bestTrack_firstPV_;
}
const float &CMS5::pfmet_sumEt_Nominal() {
  if (not pfmet_sumEt_Nominal_isLoaded) {
    if (pfmet_sumEt_Nominal_branch != 0) {
      pfmet_sumEt_Nominal_branch->GetEntry(index);
    } else {
      printf("branch pfmet_sumEt_Nominal_branch does not exist!\n");
      exit(1);
    }
    pfmet_sumEt_Nominal_isLoaded = true;
  }
  return pfmet_sumEt_Nominal_;
}
const vector<float> &CMS5::ak4jets_pt_resolution() {
  if (not ak4jets_pt_resolution_isLoaded) {
    if (ak4jets_pt_resolution_branch != 0) {
      ak4jets_pt_resolution_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_pt_resolution_branch does not exist!\n");
      exit(1);
    }
    ak4jets_pt_resolution_isLoaded = true;
  }
  return *ak4jets_pt_resolution_;
}
const vector<float> &CMS5::electrons_scale_smear_corr() {
  if (not electrons_scale_smear_corr_isLoaded) {
    if (electrons_scale_smear_corr_branch != 0) {
      electrons_scale_smear_corr_branch->GetEntry(index);
    } else {
      printf("branch electrons_scale_smear_corr_branch does not exist!\n");
      exit(1);
    }
    electrons_scale_smear_corr_isLoaded = true;
  }
  return *electrons_scale_smear_corr_;
}
const vector<float> &CMS5::isotracks_pfIso03_db() {
  if (not isotracks_pfIso03_db_isLoaded) {
    if (isotracks_pfIso03_db_branch != 0) {
      isotracks_pfIso03_db_branch->GetEntry(index);
    } else {
      printf("branch isotracks_pfIso03_db_branch does not exist!\n");
      exit(1);
    }
    isotracks_pfIso03_db_isLoaded = true;
  }
  return *isotracks_pfIso03_db_;
}
const bool &CMS5::metfilter_ecalBadCalibFilterUpdated() {
  if (not metfilter_ecalBadCalibFilterUpdated_isLoaded) {
    if (metfilter_ecalBadCalibFilterUpdated_branch != 0) {
      metfilter_ecalBadCalibFilterUpdated_branch->GetEntry(index);
    } else {
      printf("branch metfilter_ecalBadCalibFilterUpdated_branch does not exist!\n");
      exit(1);
    }
    metfilter_ecalBadCalibFilterUpdated_isLoaded = true;
  }
  return metfilter_ecalBadCalibFilterUpdated_;
}
const vector<short> &CMS5::lheparticles_status() {
  if (not lheparticles_status_isLoaded) {
    if (lheparticles_status_branch != 0) {
      lheparticles_status_branch->GetEntry(index);
    } else {
      printf("branch lheparticles_status_branch does not exist!\n");
      exit(1);
    }
    lheparticles_status_isLoaded = true;
  }
  return *lheparticles_status_;
}
const float &CMS5::LHEweight_QCDscale_muR2_muF0p5() {
  if (not LHEweight_QCDscale_muR2_muF0p5_isLoaded) {
    if (LHEweight_QCDscale_muR2_muF0p5_branch != 0) {
      LHEweight_QCDscale_muR2_muF0p5_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_QCDscale_muR2_muF0p5_branch does not exist!\n");
      exit(1);
    }
    LHEweight_QCDscale_muR2_muF0p5_isLoaded = true;
  }
  return LHEweight_QCDscale_muR2_muF0p5_;
}
const vector<float> &CMS5::isotracks_dzerr() {
  if (not isotracks_dzerr_isLoaded) {
    if (isotracks_dzerr_branch != 0) {
      isotracks_dzerr_branch->GetEntry(index);
    } else {
      printf("branch isotracks_dzerr_branch does not exist!\n");
      exit(1);
    }
    isotracks_dzerr_isLoaded = true;
  }
  return *isotracks_dzerr_;
}
const vector<float> &CMS5::ak8jets_eta() {
  if (not ak8jets_eta_isLoaded) {
    if (ak8jets_eta_branch != 0) {
      ak8jets_eta_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_eta_branch does not exist!\n");
      exit(1);
    }
    ak8jets_eta_isLoaded = true;
  }
  return *ak8jets_eta_;
}
const vector<float> &CMS5::ak4jets_JECL1Nominal() {
  if (not ak4jets_JECL1Nominal_isLoaded) {
    if (ak4jets_JECL1Nominal_branch != 0) {
      ak4jets_JECL1Nominal_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_JECL1Nominal_branch does not exist!\n");
      exit(1);
    }
    ak4jets_JECL1Nominal_isLoaded = true;
  }
  return *ak4jets_JECL1Nominal_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM_;
}
const float &CMS5::p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::lheparticles_px() {
  if (not lheparticles_px_isLoaded) {
    if (lheparticles_px_branch != 0) {
      lheparticles_px_branch->GetEntry(index);
    } else {
      printf("branch lheparticles_px_branch does not exist!\n");
      exit(1);
    }
    lheparticles_px_isLoaded = true;
  }
  return *lheparticles_px_;
}
const float &CMS5::pfmet_met_Nominal() {
  if (not pfmet_met_Nominal_isLoaded) {
    if (pfmet_met_Nominal_branch != 0) {
      pfmet_met_Nominal_branch->GetEntry(index);
    } else {
      printf("branch pfmet_met_Nominal_branch does not exist!\n");
      exit(1);
    }
    pfmet_met_Nominal_isLoaded = true;
  }
  return pfmet_met_Nominal_;
}
const vector<float> &CMS5::ak4jets_deepFlavourproblepb() {
  if (not ak4jets_deepFlavourproblepb_isLoaded) {
    if (ak4jets_deepFlavourproblepb_branch != 0) {
      ak4jets_deepFlavourproblepb_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_deepFlavourproblepb_branch does not exist!\n");
      exit(1);
    }
    ak4jets_deepFlavourproblepb_isLoaded = true;
  }
  return *ak4jets_deepFlavourproblepb_;
}
const vector<float> &CMS5::photons_pfNeutralHadronIso_EAcorr() {
  if (not photons_pfNeutralHadronIso_EAcorr_isLoaded) {
    if (photons_pfNeutralHadronIso_EAcorr_branch != 0) {
      photons_pfNeutralHadronIso_EAcorr_branch->GetEntry(index);
    } else {
      printf("branch photons_pfNeutralHadronIso_EAcorr_branch does not exist!\n");
      exit(1);
    }
    photons_pfNeutralHadronIso_EAcorr_isLoaded = true;
  }
  return *photons_pfNeutralHadronIso_EAcorr_;
}
const float &CMS5::p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::vtxs_pos_y() {
  if (not vtxs_pos_y_isLoaded) {
    if (vtxs_pos_y_branch != 0) {
      vtxs_pos_y_branch->GetEntry(index);
    } else {
      printf("branch vtxs_pos_y_branch does not exist!\n");
      exit(1);
    }
    vtxs_pos_y_isLoaded = true;
  }
  return *vtxs_pos_y_;
}
const vector<float> &CMS5::vtxs_pos_x() {
  if (not vtxs_pos_x_isLoaded) {
    if (vtxs_pos_x_branch != 0) {
      vtxs_pos_x_branch->GetEntry(index);
    } else {
      printf("branch vtxs_pos_x_branch does not exist!\n");
      exit(1);
    }
    vtxs_pos_x_isLoaded = true;
  }
  return *vtxs_pos_x_;
}
const vector<float> &CMS5::vtxs_pos_z() {
  if (not vtxs_pos_z_isLoaded) {
    if (vtxs_pos_z_branch != 0) {
      vtxs_pos_z_branch->GetEntry(index);
    } else {
      printf("branch vtxs_pos_z_branch does not exist!\n");
      exit(1);
    }
    vtxs_pos_z_isLoaded = true;
  }
  return *vtxs_pos_z_;
}
const vector<float> &CMS5::vtxs_pos_t() {
  if (not vtxs_pos_t_isLoaded) {
    if (vtxs_pos_t_branch != 0) {
      vtxs_pos_t_branch->GetEntry(index);
    } else {
      printf("branch vtxs_pos_t_branch does not exist!\n");
      exit(1);
    }
    vtxs_pos_t_isLoaded = true;
  }
  return *vtxs_pos_t_;
}
const float &CMS5::p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM_;
}
const float &CMS5::puppimet_metPhi_UnclusteredEnDn() {
  if (not puppimet_metPhi_UnclusteredEnDn_isLoaded) {
    if (puppimet_metPhi_UnclusteredEnDn_branch != 0) {
      puppimet_metPhi_UnclusteredEnDn_branch->GetEntry(index);
    } else {
      printf("branch puppimet_metPhi_UnclusteredEnDn_branch does not exist!\n");
      exit(1);
    }
    puppimet_metPhi_UnclusteredEnDn_isLoaded = true;
  }
  return puppimet_metPhi_UnclusteredEnDn_;
}
const vector<float> &CMS5::ak4jets_deepCSVprobudsg() {
  if (not ak4jets_deepCSVprobudsg_isLoaded) {
    if (ak4jets_deepCSVprobudsg_branch != 0) {
      ak4jets_deepCSVprobudsg_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_deepCSVprobudsg_branch does not exist!\n");
      exit(1);
    }
    ak4jets_deepCSVprobudsg_isLoaded = true;
  }
  return *ak4jets_deepCSVprobudsg_;
}
const vector<int> &CMS5::electrons_n_missing_inner_hits() {
  if (not electrons_n_missing_inner_hits_isLoaded) {
    if (electrons_n_missing_inner_hits_branch != 0) {
      electrons_n_missing_inner_hits_branch->GetEntry(index);
    } else {
      printf("branch electrons_n_missing_inner_hits_branch does not exist!\n");
      exit(1);
    }
    electrons_n_missing_inner_hits_isLoaded = true;
  }
  return *electrons_n_missing_inner_hits_;
}
const float &CMS5::xsecerr() {
  if (not xsecerr_isLoaded) {
    if (xsecerr_branch != 0) {
      xsecerr_branch->GetEntry(index);
    } else {
      printf("branch xsecerr_branch does not exist!\n");
      exit(1);
    }
    xsecerr_isLoaded = true;
  }
  return xsecerr_;
}
const vector<bool> &CMS5::photons_id_MVA_Fall17V2_pass_wp80() {
  if (not photons_id_MVA_Fall17V2_pass_wp80_isLoaded) {
    if (photons_id_MVA_Fall17V2_pass_wp80_branch != 0) {
      photons_id_MVA_Fall17V2_pass_wp80_branch->GetEntry(index);
    } else {
      printf("branch photons_id_MVA_Fall17V2_pass_wp80_branch does not exist!\n");
      exit(1);
    }
    photons_id_MVA_Fall17V2_pass_wp80_isLoaded = true;
  }
  return *photons_id_MVA_Fall17V2_pass_wp80_;
}
const float &CMS5::LHEweight_QCDscale_muR2_muF2() {
  if (not LHEweight_QCDscale_muR2_muF2_isLoaded) {
    if (LHEweight_QCDscale_muR2_muF2_branch != 0) {
      LHEweight_QCDscale_muR2_muF2_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_QCDscale_muR2_muF2_branch does not exist!\n");
      exit(1);
    }
    LHEweight_QCDscale_muR2_muF2_isLoaded = true;
  }
  return LHEweight_QCDscale_muR2_muF2_;
}
const float &CMS5::LHEweight_QCDscale_muR2_muF1() {
  if (not LHEweight_QCDscale_muR2_muF1_isLoaded) {
    if (LHEweight_QCDscale_muR2_muF1_branch != 0) {
      LHEweight_QCDscale_muR2_muF1_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_QCDscale_muR2_muF1_branch does not exist!\n");
      exit(1);
    }
    LHEweight_QCDscale_muR2_muF1_isLoaded = true;
  }
  return LHEweight_QCDscale_muR2_muF1_;
}
const vector<float> &CMS5::muons_mass() {
  if (not muons_mass_isLoaded) {
    if (muons_mass_branch != 0) {
      muons_mass_branch->GetEntry(index);
    } else {
      printf("branch muons_mass_branch does not exist!\n");
      exit(1);
    }
    muons_mass_isLoaded = true;
  }
  return *muons_mass_;
}
const vector<float> &CMS5::muons_miniIso_sum_neutral_nofsr() {
  if (not muons_miniIso_sum_neutral_nofsr_isLoaded) {
    if (muons_miniIso_sum_neutral_nofsr_branch != 0) {
      muons_miniIso_sum_neutral_nofsr_branch->GetEntry(index);
    } else {
      printf("branch muons_miniIso_sum_neutral_nofsr_branch does not exist!\n");
      exit(1);
    }
    muons_miniIso_sum_neutral_nofsr_isLoaded = true;
  }
  return *muons_miniIso_sum_neutral_nofsr_;
}
const vector<float> &CMS5::isotracks_phi() {
  if (not isotracks_phi_isLoaded) {
    if (isotracks_phi_branch != 0) {
      isotracks_phi_branch->GetEntry(index);
    } else {
      printf("branch isotracks_phi_branch does not exist!\n");
      exit(1);
    }
    isotracks_phi_isLoaded = true;
  }
  return *isotracks_phi_;
}
const vector<bool> &CMS5::photons_passElectronVeto() {
  if (not photons_passElectronVeto_isLoaded) {
    if (photons_passElectronVeto_branch != 0) {
      photons_passElectronVeto_branch->GetEntry(index);
    } else {
      printf("branch photons_passElectronVeto_branch does not exist!\n");
      exit(1);
    }
    photons_passElectronVeto_isLoaded = true;
  }
  return *photons_passElectronVeto_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM_;
}
const unsigned long long &CMS5::EventNumber() {
  if (not EventNumber_isLoaded) {
    if (EventNumber_branch != 0) {
      EventNumber_branch->GetEntry(index);
    } else {
      printf("branch EventNumber_branch does not exist!\n");
      exit(1);
    }
    EventNumber_isLoaded = true;
  }
  return EventNumber_;
}
const float &CMS5::p_Gen_GG_BKG_MCFM() {
  if (not p_Gen_GG_BKG_MCFM_isLoaded) {
    if (p_Gen_GG_BKG_MCFM_branch != 0) {
      p_Gen_GG_BKG_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BKG_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BKG_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BKG_MCFM_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM_;
}
const vector<float> &CMS5::ak4jets_JERNominal() {
  if (not ak4jets_JERNominal_isLoaded) {
    if (ak4jets_JERNominal_branch != 0) {
      ak4jets_JERNominal_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_JERNominal_branch does not exist!\n");
      exit(1);
    }
    ak4jets_JERNominal_isLoaded = true;
  }
  return *ak4jets_JERNominal_;
}
const vector<float> &CMS5::muons_scale_smear_pt_corr_scale_totalDn() {
  if (not muons_scale_smear_pt_corr_scale_totalDn_isLoaded) {
    if (muons_scale_smear_pt_corr_scale_totalDn_branch != 0) {
      muons_scale_smear_pt_corr_scale_totalDn_branch->GetEntry(index);
    } else {
      printf("branch muons_scale_smear_pt_corr_scale_totalDn_branch does not exist!\n");
      exit(1);
    }
    muons_scale_smear_pt_corr_scale_totalDn_isLoaded = true;
  }
  return *muons_scale_smear_pt_corr_scale_totalDn_;
}
const vector<float> &CMS5::ak8jets_JERNominal() {
  if (not ak8jets_JERNominal_isLoaded) {
    if (ak8jets_JERNominal_branch != 0) {
      ak8jets_JERNominal_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_JERNominal_branch does not exist!\n");
      exit(1);
    }
    ak8jets_JERNominal_isLoaded = true;
  }
  return *ak8jets_JERNominal_;
}
const vector<char> &CMS5::ak8jets_hadronFlavour() {
  if (not ak8jets_hadronFlavour_isLoaded) {
    if (ak8jets_hadronFlavour_branch != 0) {
      ak8jets_hadronFlavour_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_hadronFlavour_branch does not exist!\n");
      exit(1);
    }
    ak8jets_hadronFlavour_isLoaded = true;
  }
  return *ak8jets_hadronFlavour_;
}
const unsigned int &CMS5::vtxs_nvtxs_good() {
  if (not vtxs_nvtxs_good_isLoaded) {
    if (vtxs_nvtxs_good_branch != 0) {
      vtxs_nvtxs_good_branch->GetEntry(index);
    } else {
      printf("branch vtxs_nvtxs_good_branch does not exist!\n");
      exit(1);
    }
    vtxs_nvtxs_good_isLoaded = true;
  }
  return vtxs_nvtxs_good_;
}
const vector<float> &CMS5::ak4jets_mucands_sump4_py() {
  if (not ak4jets_mucands_sump4_py_isLoaded) {
    if (ak4jets_mucands_sump4_py_branch != 0) {
      ak4jets_mucands_sump4_py_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_mucands_sump4_py_branch does not exist!\n");
      exit(1);
    }
    ak4jets_mucands_sump4_py_isLoaded = true;
  }
  return *ak4jets_mucands_sump4_py_;
}
const vector<float> &CMS5::ak4jets_mucands_sump4_px() {
  if (not ak4jets_mucands_sump4_px_isLoaded) {
    if (ak4jets_mucands_sump4_px_branch != 0) {
      ak4jets_mucands_sump4_px_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_mucands_sump4_px_branch does not exist!\n");
      exit(1);
    }
    ak4jets_mucands_sump4_px_isLoaded = true;
  }
  return *ak4jets_mucands_sump4_px_;
}
const float &CMS5::pfmet_metShift_py_JERNominal() {
  if (not pfmet_metShift_py_JERNominal_isLoaded) {
    if (pfmet_metShift_py_JERNominal_branch != 0) {
      pfmet_metShift_py_JERNominal_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metShift_py_JERNominal_branch does not exist!\n");
      exit(1);
    }
    pfmet_metShift_py_JERNominal_isLoaded = true;
  }
  return pfmet_metShift_py_JERNominal_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::photons_scale_smear_corr_scale_totalDn() {
  if (not photons_scale_smear_corr_scale_totalDn_isLoaded) {
    if (photons_scale_smear_corr_scale_totalDn_branch != 0) {
      photons_scale_smear_corr_scale_totalDn_branch->GetEntry(index);
    } else {
      printf("branch photons_scale_smear_corr_scale_totalDn_branch does not exist!\n");
      exit(1);
    }
    photons_scale_smear_corr_scale_totalDn_isLoaded = true;
  }
  return *photons_scale_smear_corr_scale_totalDn_;
}
const float &CMS5::pfmet_metSignificance() {
  if (not pfmet_metSignificance_isLoaded) {
    if (pfmet_metSignificance_branch != 0) {
      pfmet_metSignificance_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metSignificance_branch does not exist!\n");
      exit(1);
    }
    pfmet_metSignificance_isLoaded = true;
  }
  return pfmet_metSignificance_;
}
const float &CMS5::puppimet_met_Nominal() {
  if (not puppimet_met_Nominal_isLoaded) {
    if (puppimet_met_Nominal_branch != 0) {
      puppimet_met_Nominal_branch->GetEntry(index);
    } else {
      printf("branch puppimet_met_Nominal_branch does not exist!\n");
      exit(1);
    }
    puppimet_met_Nominal_isLoaded = true;
  }
  return puppimet_met_Nominal_;
}
const vector<float> &CMS5::isotracks_miniIso_nh() {
  if (not isotracks_miniIso_nh_isLoaded) {
    if (isotracks_miniIso_nh_branch != 0) {
      isotracks_miniIso_nh_branch->GetEntry(index);
    } else {
      printf("branch isotracks_miniIso_nh_branch does not exist!\n");
      exit(1);
    }
    isotracks_miniIso_nh_isLoaded = true;
  }
  return *isotracks_miniIso_nh_;
}
const vector<int> &CMS5::triggers_HLTprescale() {
  if (not triggers_HLTprescale_isLoaded) {
    if (triggers_HLTprescale_branch != 0) {
      triggers_HLTprescale_branch->GetEntry(index);
    } else {
      printf("branch triggers_HLTprescale_branch does not exist!\n");
      exit(1);
    }
    triggers_HLTprescale_isLoaded = true;
  }
  return *triggers_HLTprescale_;
}
const vector<float> &CMS5::fsrcands_mass() {
  if (not fsrcands_mass_isLoaded) {
    if (fsrcands_mass_branch != 0) {
      fsrcands_mass_branch->GetEntry(index);
    } else {
      printf("branch fsrcands_mass_branch does not exist!\n");
      exit(1);
    }
    fsrcands_mass_isLoaded = true;
  }
  return *fsrcands_mass_;
}
const bool &CMS5::metfilter_BadPFMuonFilter() {
  if (not metfilter_BadPFMuonFilter_isLoaded) {
    if (metfilter_BadPFMuonFilter_branch != 0) {
      metfilter_BadPFMuonFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_BadPFMuonFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_BadPFMuonFilter_isLoaded = true;
  }
  return metfilter_BadPFMuonFilter_;
}
const float &CMS5::KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn() {
  if (not KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_isLoaded) {
    if (KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_branch != 0) {
      KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_branch->GetEntry(index);
    } else {
      printf("branch KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_branch does not exist!\n");
      exit(1);
    }
    KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_isLoaded = true;
  }
  return KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn_;
}
const vector<float> &CMS5::electrons_pfIso03_sum_neutral_nofsr() {
  if (not electrons_pfIso03_sum_neutral_nofsr_isLoaded) {
    if (electrons_pfIso03_sum_neutral_nofsr_branch != 0) {
      electrons_pfIso03_sum_neutral_nofsr_branch->GetEntry(index);
    } else {
      printf("branch electrons_pfIso03_sum_neutral_nofsr_branch does not exist!\n");
      exit(1);
    }
    electrons_pfIso03_sum_neutral_nofsr_isLoaded = true;
  }
  return *electrons_pfIso03_sum_neutral_nofsr_;
}
const vector<char> &CMS5::electrons_charge() {
  if (not electrons_charge_isLoaded) {
    if (electrons_charge_branch != 0) {
      electrons_charge_branch->GetEntry(index);
    } else {
      printf("branch electrons_charge_branch does not exist!\n");
      exit(1);
    }
    electrons_charge_isLoaded = true;
  }
  return *electrons_charge_;
}
const bool &CMS5::metfilter_trkPOGFilters() {
  if (not metfilter_trkPOGFilters_isLoaded) {
    if (metfilter_trkPOGFilters_branch != 0) {
      metfilter_trkPOGFilters_branch->GetEntry(index);
    } else {
      printf("branch metfilter_trkPOGFilters_branch does not exist!\n");
      exit(1);
    }
    metfilter_trkPOGFilters_isLoaded = true;
  }
  return metfilter_trkPOGFilters_;
}
const float &CMS5::PythiaWeight_fsr_muRsqrt2() {
  if (not PythiaWeight_fsr_muRsqrt2_isLoaded) {
    if (PythiaWeight_fsr_muRsqrt2_branch != 0) {
      PythiaWeight_fsr_muRsqrt2_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_fsr_muRsqrt2_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_fsr_muRsqrt2_isLoaded = true;
  }
  return PythiaWeight_fsr_muRsqrt2_;
}
const float &CMS5::PythiaWeight_isr_muR0p5() {
  if (not PythiaWeight_isr_muR0p5_isLoaded) {
    if (PythiaWeight_isr_muR0p5_branch != 0) {
      PythiaWeight_isr_muR0p5_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_isr_muR0p5_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_isr_muR0p5_isLoaded = true;
  }
  return PythiaWeight_isr_muR0p5_;
}
const float &CMS5::genmet_metPhi() {
  if (not genmet_metPhi_isLoaded) {
    if (genmet_metPhi_branch != 0) {
      genmet_metPhi_branch->GetEntry(index);
    } else {
      printf("branch genmet_metPhi_branch does not exist!\n");
      exit(1);
    }
    genmet_metPhi_isLoaded = true;
  }
  return genmet_metPhi_;
}
const int &CMS5::n_vtxs_PU() {
  if (not n_vtxs_PU_isLoaded) {
    if (n_vtxs_PU_branch != 0) {
      n_vtxs_PU_branch->GetEntry(index);
    } else {
      printf("branch n_vtxs_PU_branch does not exist!\n");
      exit(1);
    }
    n_vtxs_PU_isLoaded = true;
  }
  return n_vtxs_PU_;
}
const float &CMS5::PythiaWeight_isr_muRoneoversqrt2() {
  if (not PythiaWeight_isr_muRoneoversqrt2_isLoaded) {
    if (PythiaWeight_isr_muRoneoversqrt2_branch != 0) {
      PythiaWeight_isr_muRoneoversqrt2_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_isr_muRoneoversqrt2_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_isr_muRoneoversqrt2_isLoaded = true;
  }
  return PythiaWeight_isr_muRoneoversqrt2_;
}
const vector<unsigned char> &CMS5::electrons_id_MVA_Fall17V2_Iso_Cat() {
  if (not electrons_id_MVA_Fall17V2_Iso_Cat_isLoaded) {
    if (electrons_id_MVA_Fall17V2_Iso_Cat_branch != 0) {
      electrons_id_MVA_Fall17V2_Iso_Cat_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_Iso_Cat_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_Iso_Cat_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_Iso_Cat_;
}
const float &CMS5::p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::photons_eta() {
  if (not photons_eta_isLoaded) {
    if (photons_eta_branch != 0) {
      photons_eta_branch->GetEntry(index);
    } else {
      printf("branch photons_eta_branch does not exist!\n");
      exit(1);
    }
    photons_eta_isLoaded = true;
  }
  return *photons_eta_;
}
const vector<float> &CMS5::triggerObjects_eta() {
  if (not triggerObjects_eta_isLoaded) {
    if (triggerObjects_eta_branch != 0) {
      triggerObjects_eta_branch->GetEntry(index);
    } else {
      printf("branch triggerObjects_eta_branch does not exist!\n");
      exit(1);
    }
    triggerObjects_eta_isLoaded = true;
  }
  return *triggerObjects_eta_;
}
const float &CMS5::pfmet_metShift_py_JERUp() {
  if (not pfmet_metShift_py_JERUp_isLoaded) {
    if (pfmet_metShift_py_JERUp_branch != 0) {
      pfmet_metShift_py_JERUp_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metShift_py_JERUp_branch does not exist!\n");
      exit(1);
    }
    pfmet_metShift_py_JERUp_isLoaded = true;
  }
  return pfmet_metShift_py_JERUp_;
}
const vector<unsigned int> &CMS5::photons_id_cutBased_Fall17V2_Tight_Bits() {
  if (not photons_id_cutBased_Fall17V2_Tight_Bits_isLoaded) {
    if (photons_id_cutBased_Fall17V2_Tight_Bits_branch != 0) {
      photons_id_cutBased_Fall17V2_Tight_Bits_branch->GetEntry(index);
    } else {
      printf("branch photons_id_cutBased_Fall17V2_Tight_Bits_branch does not exist!\n");
      exit(1);
    }
    photons_id_cutBased_Fall17V2_Tight_Bits_isLoaded = true;
  }
  return *photons_id_cutBased_Fall17V2_Tight_Bits_;
}
const vector<float> &CMS5::ak8jets_axis1() {
  if (not ak8jets_axis1_isLoaded) {
    if (ak8jets_axis1_branch != 0) {
      ak8jets_axis1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_axis1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_axis1_isLoaded = true;
  }
  return *ak8jets_axis1_;
}
const vector<float> &CMS5::ak8jets_axis2() {
  if (not ak8jets_axis2_isLoaded) {
    if (ak8jets_axis2_branch != 0) {
      ak8jets_axis2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_axis2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_axis2_isLoaded = true;
  }
  return *ak8jets_axis2_;
}
const float &CMS5::LHEweight_AsMZ_Dn_NNPDF30() {
  if (not LHEweight_AsMZ_Dn_NNPDF30_isLoaded) {
    if (LHEweight_AsMZ_Dn_NNPDF30_branch != 0) {
      LHEweight_AsMZ_Dn_NNPDF30_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_AsMZ_Dn_NNPDF30_branch does not exist!\n");
      exit(1);
    }
    LHEweight_AsMZ_Dn_NNPDF30_isLoaded = true;
  }
  return LHEweight_AsMZ_Dn_NNPDF30_;
}
const float &CMS5::pThat() {
  if (not pThat_isLoaded) {
    if (pThat_branch != 0) {
      pThat_branch->GetEntry(index);
    } else {
      printf("branch pThat_branch does not exist!\n");
      exit(1);
    }
    pThat_isLoaded = true;
  }
  return pThat_;
}
const float &CMS5::LHEweight_QCDscale_muR0p5_muF2() {
  if (not LHEweight_QCDscale_muR0p5_muF2_isLoaded) {
    if (LHEweight_QCDscale_muR0p5_muF2_branch != 0) {
      LHEweight_QCDscale_muR0p5_muF2_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_QCDscale_muR0p5_muF2_branch does not exist!\n");
      exit(1);
    }
    LHEweight_QCDscale_muR0p5_muF2_isLoaded = true;
  }
  return LHEweight_QCDscale_muR0p5_muF2_;
}
const float &CMS5::KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn() {
  if (not KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_isLoaded) {
    if (KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_branch != 0) {
      KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_branch->GetEntry(index);
    } else {
      printf("branch KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_branch does not exist!\n");
      exit(1);
    }
    KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_isLoaded = true;
  }
  return KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn_;
}
const vector<float> &CMS5::isotracks_miniIso_ch() {
  if (not isotracks_miniIso_ch_isLoaded) {
    if (isotracks_miniIso_ch_branch != 0) {
      isotracks_miniIso_ch_branch->GetEntry(index);
    } else {
      printf("branch isotracks_miniIso_ch_branch does not exist!\n");
      exit(1);
    }
    isotracks_miniIso_ch_isLoaded = true;
  }
  return *isotracks_miniIso_ch_;
}
const vector<float> &CMS5::electrons_scale_smear_corr_scale_totalDn() {
  if (not electrons_scale_smear_corr_scale_totalDn_isLoaded) {
    if (electrons_scale_smear_corr_scale_totalDn_branch != 0) {
      electrons_scale_smear_corr_scale_totalDn_branch->GetEntry(index);
    } else {
      printf("branch electrons_scale_smear_corr_scale_totalDn_branch does not exist!\n");
      exit(1);
    }
    electrons_scale_smear_corr_scale_totalDn_isLoaded = true;
  }
  return *electrons_scale_smear_corr_scale_totalDn_;
}
const vector<float> &CMS5::electrons_pfIso03_sum_charged_nofsr() {
  if (not electrons_pfIso03_sum_charged_nofsr_isLoaded) {
    if (electrons_pfIso03_sum_charged_nofsr_branch != 0) {
      electrons_pfIso03_sum_charged_nofsr_branch->GetEntry(index);
    } else {
      printf("branch electrons_pfIso03_sum_charged_nofsr_branch does not exist!\n");
      exit(1);
    }
    electrons_pfIso03_sum_charged_nofsr_isLoaded = true;
  }
  return *electrons_pfIso03_sum_charged_nofsr_;
}
const bool &CMS5::metfilter_trackingFailureFilter() {
  if (not metfilter_trackingFailureFilter_isLoaded) {
    if (metfilter_trackingFailureFilter_branch != 0) {
      metfilter_trackingFailureFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_trackingFailureFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_trackingFailureFilter_isLoaded = true;
  }
  return metfilter_trackingFailureFilter_;
}
const vector<unsigned long> &CMS5::ak8jets_n_softdrop_subjets() {
  if (not ak8jets_n_softdrop_subjets_isLoaded) {
    if (ak8jets_n_softdrop_subjets_branch != 0) {
      ak8jets_n_softdrop_subjets_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_n_softdrop_subjets_branch does not exist!\n");
      exit(1);
    }
    ak8jets_n_softdrop_subjets_isLoaded = true;
  }
  return *ak8jets_n_softdrop_subjets_;
}
const float &CMS5::p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM_;
}
const float &CMS5::puppimet_sumEt_Raw() {
  if (not puppimet_sumEt_Raw_isLoaded) {
    if (puppimet_sumEt_Raw_branch != 0) {
      puppimet_sumEt_Raw_branch->GetEntry(index);
    } else {
      printf("branch puppimet_sumEt_Raw_branch does not exist!\n");
      exit(1);
    }
    puppimet_sumEt_Raw_isLoaded = true;
  }
  return puppimet_sumEt_Raw_;
}
const float &CMS5::KFactor_QCD_ggZZ_Sig_arg() {
  if (not KFactor_QCD_ggZZ_Sig_arg_isLoaded) {
    if (KFactor_QCD_ggZZ_Sig_arg_branch != 0) {
      KFactor_QCD_ggZZ_Sig_arg_branch->GetEntry(index);
    } else {
      printf("branch KFactor_QCD_ggZZ_Sig_arg_branch does not exist!\n");
      exit(1);
    }
    KFactor_QCD_ggZZ_Sig_arg_isLoaded = true;
  }
  return KFactor_QCD_ggZZ_Sig_arg_;
}
const vector<float> &CMS5::photons_phi() {
  if (not photons_phi_isLoaded) {
    if (photons_phi_branch != 0) {
      photons_phi_branch->GetEntry(index);
    } else {
      printf("branch photons_phi_branch does not exist!\n");
      exit(1);
    }
    photons_phi_isLoaded = true;
  }
  return *photons_phi_;
}
const float &CMS5::pfmet_metPhi_UnclusteredEnUp() {
  if (not pfmet_metPhi_UnclusteredEnUp_isLoaded) {
    if (pfmet_metPhi_UnclusteredEnUp_branch != 0) {
      pfmet_metPhi_UnclusteredEnUp_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metPhi_UnclusteredEnUp_branch does not exist!\n");
      exit(1);
    }
    pfmet_metPhi_UnclusteredEnUp_isLoaded = true;
  }
  return pfmet_metPhi_UnclusteredEnUp_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM_;
}
const vector<float> &CMS5::ak8jets_pt() {
  if (not ak8jets_pt_isLoaded) {
    if (ak8jets_pt_branch != 0) {
      ak8jets_pt_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_pt_branch does not exist!\n");
      exit(1);
    }
    ak8jets_pt_isLoaded = true;
  }
  return *ak8jets_pt_;
}
const vector<float> &CMS5::ak8jets_JECUp() {
  if (not ak8jets_JECUp_isLoaded) {
    if (ak8jets_JECUp_branch != 0) {
      ak8jets_JECUp_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_JECUp_branch does not exist!\n");
      exit(1);
    }
    ak8jets_JECUp_isLoaded = true;
  }
  return *ak8jets_JECUp_;
}
const vector<float> &CMS5::muons_scale_smear_pt_corr() {
  if (not muons_scale_smear_pt_corr_isLoaded) {
    if (muons_scale_smear_pt_corr_branch != 0) {
      muons_scale_smear_pt_corr_branch->GetEntry(index);
    } else {
      printf("branch muons_scale_smear_pt_corr_branch does not exist!\n");
      exit(1);
    }
    muons_scale_smear_pt_corr_isLoaded = true;
  }
  return *muons_scale_smear_pt_corr_;
}
const vector<float> &CMS5::vtxs_pos_dy() {
  if (not vtxs_pos_dy_isLoaded) {
    if (vtxs_pos_dy_branch != 0) {
      vtxs_pos_dy_branch->GetEntry(index);
    } else {
      printf("branch vtxs_pos_dy_branch does not exist!\n");
      exit(1);
    }
    vtxs_pos_dy_isLoaded = true;
  }
  return *vtxs_pos_dy_;
}
const vector<float> &CMS5::vtxs_pos_dt() {
  if (not vtxs_pos_dt_isLoaded) {
    if (vtxs_pos_dt_branch != 0) {
      vtxs_pos_dt_branch->GetEntry(index);
    } else {
      printf("branch vtxs_pos_dt_branch does not exist!\n");
      exit(1);
    }
    vtxs_pos_dt_isLoaded = true;
  }
  return *vtxs_pos_dt_;
}
const vector<float> &CMS5::vtxs_pos_dz() {
  if (not vtxs_pos_dz_isLoaded) {
    if (vtxs_pos_dz_branch != 0) {
      vtxs_pos_dz_branch->GetEntry(index);
    } else {
      printf("branch vtxs_pos_dz_branch does not exist!\n");
      exit(1);
    }
    vtxs_pos_dz_isLoaded = true;
  }
  return *vtxs_pos_dz_;
}
const vector<float> &CMS5::vtxs_pos_dx() {
  if (not vtxs_pos_dx_isLoaded) {
    if (vtxs_pos_dx_branch != 0) {
      vtxs_pos_dx_branch->GetEntry(index);
    } else {
      printf("branch vtxs_pos_dx_branch does not exist!\n");
      exit(1);
    }
    vtxs_pos_dx_isLoaded = true;
  }
  return *vtxs_pos_dx_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM_;
}
const float &CMS5::puppimet_met_Raw() {
  if (not puppimet_met_Raw_isLoaded) {
    if (puppimet_met_Raw_branch != 0) {
      puppimet_met_Raw_branch->GetEntry(index);
    } else {
      printf("branch puppimet_met_Raw_branch does not exist!\n");
      exit(1);
    }
    puppimet_met_Raw_isLoaded = true;
  }
  return puppimet_met_Raw_;
}
const vector<float> &CMS5::ak4jets_mass() {
  if (not ak4jets_mass_isLoaded) {
    if (ak4jets_mass_branch != 0) {
      ak4jets_mass_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_mass_branch does not exist!\n");
      exit(1);
    }
    ak4jets_mass_isLoaded = true;
  }
  return *ak4jets_mass_;
}
const vector<float> &CMS5::vtxs_ndof() {
  if (not vtxs_ndof_isLoaded) {
    if (vtxs_ndof_branch != 0) {
      vtxs_ndof_branch->GetEntry(index);
    } else {
      printf("branch vtxs_ndof_branch does not exist!\n");
      exit(1);
    }
    vtxs_ndof_isLoaded = true;
  }
  return *vtxs_ndof_;
}
const vector<float> &CMS5::ak8jets_JECNominal() {
  if (not ak8jets_JECNominal_isLoaded) {
    if (ak8jets_JECNominal_branch != 0) {
      ak8jets_JECNominal_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_JECNominal_branch does not exist!\n");
      exit(1);
    }
    ak8jets_JECNominal_isLoaded = true;
  }
  return *ak8jets_JECNominal_;
}
const float &CMS5::puppimet_metSignificance() {
  if (not puppimet_metSignificance_isLoaded) {
    if (puppimet_metSignificance_branch != 0) {
      puppimet_metSignificance_branch->GetEntry(index);
    } else {
      printf("branch puppimet_metSignificance_branch does not exist!\n");
      exit(1);
    }
    puppimet_metSignificance_isLoaded = true;
  }
  return puppimet_metSignificance_;
}
const vector<float> &CMS5::isotracks_dz() {
  if (not isotracks_dz_isLoaded) {
    if (isotracks_dz_branch != 0) {
      isotracks_dz_branch->GetEntry(index);
    } else {
      printf("branch isotracks_dz_branch does not exist!\n");
      exit(1);
    }
    isotracks_dz_isLoaded = true;
  }
  return *isotracks_dz_;
}
const bool &CMS5::metfilter_chargedHadronTrackResolutionFilter() {
  if (not metfilter_chargedHadronTrackResolutionFilter_isLoaded) {
    if (metfilter_chargedHadronTrackResolutionFilter_branch != 0) {
      metfilter_chargedHadronTrackResolutionFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_chargedHadronTrackResolutionFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_chargedHadronTrackResolutionFilter_isLoaded = true;
  }
  return metfilter_chargedHadronTrackResolutionFilter_;
}
const bool &CMS5::metfilter_EcalDeadCellTriggerPrimitiveFilter() {
  if (not metfilter_EcalDeadCellTriggerPrimitiveFilter_isLoaded) {
    if (metfilter_EcalDeadCellTriggerPrimitiveFilter_branch != 0) {
      metfilter_EcalDeadCellTriggerPrimitiveFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_EcalDeadCellTriggerPrimitiveFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_EcalDeadCellTriggerPrimitiveFilter_isLoaded = true;
  }
  return metfilter_EcalDeadCellTriggerPrimitiveFilter_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM() {
  if (not p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM_;
}
const vector<float> &CMS5::fsrcands_phi() {
  if (not fsrcands_phi_isLoaded) {
    if (fsrcands_phi_branch != 0) {
      fsrcands_phi_branch->GetEntry(index);
    } else {
      printf("branch fsrcands_phi_branch does not exist!\n");
      exit(1);
    }
    fsrcands_phi_isLoaded = true;
  }
  return *fsrcands_phi_;
}
const float &CMS5::PythiaWeight_isr_muR2() {
  if (not PythiaWeight_isr_muR2_isLoaded) {
    if (PythiaWeight_isr_muR2_branch != 0) {
      PythiaWeight_isr_muR2_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_isr_muR2_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_isr_muR2_isLoaded = true;
  }
  return PythiaWeight_isr_muR2_;
}
const vector<float> &CMS5::electrons_miniIso_comb_nofsr_old() {
  if (not electrons_miniIso_comb_nofsr_old_isLoaded) {
    if (electrons_miniIso_comb_nofsr_old_branch != 0) {
      electrons_miniIso_comb_nofsr_old_branch->GetEntry(index);
    } else {
      printf("branch electrons_miniIso_comb_nofsr_old_branch does not exist!\n");
      exit(1);
    }
    electrons_miniIso_comb_nofsr_old_isLoaded = true;
  }
  return *electrons_miniIso_comb_nofsr_old_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM_;
}
const vector<float> &CMS5::muons_scale_smear_pt_corr_smear_totalDn() {
  if (not muons_scale_smear_pt_corr_smear_totalDn_isLoaded) {
    if (muons_scale_smear_pt_corr_smear_totalDn_branch != 0) {
      muons_scale_smear_pt_corr_smear_totalDn_branch->GetEntry(index);
    } else {
      printf("branch muons_scale_smear_pt_corr_smear_totalDn_branch does not exist!\n");
      exit(1);
    }
    muons_scale_smear_pt_corr_smear_totalDn_isLoaded = true;
  }
  return *muons_scale_smear_pt_corr_smear_totalDn_;
}
const float &CMS5::PythiaWeight_isr_muR4() {
  if (not PythiaWeight_isr_muR4_isLoaded) {
    if (PythiaWeight_isr_muR4_branch != 0) {
      PythiaWeight_isr_muR4_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_isr_muR4_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_isr_muR4_isLoaded = true;
  }
  return PythiaWeight_isr_muR4_;
}
const vector<float> &CMS5::ak8jets_pt_resolution() {
  if (not ak8jets_pt_resolution_isLoaded) {
    if (ak8jets_pt_resolution_branch != 0) {
      ak8jets_pt_resolution_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_pt_resolution_branch does not exist!\n");
      exit(1);
    }
    ak8jets_pt_resolution_isLoaded = true;
  }
  return *ak8jets_pt_resolution_;
}
const vector<float> &CMS5::electrons_id_MVA_Fall17V2_Iso_Val() {
  if (not electrons_id_MVA_Fall17V2_Iso_Val_isLoaded) {
    if (electrons_id_MVA_Fall17V2_Iso_Val_branch != 0) {
      electrons_id_MVA_Fall17V2_Iso_Val_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_Iso_Val_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_Iso_Val_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_Iso_Val_;
}
const bool &CMS5::metfilter_hcalLaserEventFilter() {
  if (not metfilter_hcalLaserEventFilter_isLoaded) {
    if (metfilter_hcalLaserEventFilter_branch != 0) {
      metfilter_hcalLaserEventFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_hcalLaserEventFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_hcalLaserEventFilter_isLoaded = true;
  }
  return metfilter_hcalLaserEventFilter_;
}
const float &CMS5::KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp() {
  if (not KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_isLoaded) {
    if (KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_branch != 0) {
      KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_branch->GetEntry(index);
    } else {
      printf("branch KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_branch does not exist!\n");
      exit(1);
    }
    KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_isLoaded = true;
  }
  return KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp_;
}
const vector<bool> &CMS5::isotracks_is_lostTrack() {
  if (not isotracks_is_lostTrack_isLoaded) {
    if (isotracks_is_lostTrack_branch != 0) {
      isotracks_is_lostTrack_branch->GetEntry(index);
    } else {
      printf("branch isotracks_is_lostTrack_branch does not exist!\n");
      exit(1);
    }
    isotracks_is_lostTrack_isLoaded = true;
  }
  return *isotracks_is_lostTrack_;
}
const vector<float> &CMS5::electrons_pfIso04_comb_nofsr() {
  if (not electrons_pfIso04_comb_nofsr_isLoaded) {
    if (electrons_pfIso04_comb_nofsr_branch != 0) {
      electrons_pfIso04_comb_nofsr_branch->GetEntry(index);
    } else {
      printf("branch electrons_pfIso04_comb_nofsr_branch does not exist!\n");
      exit(1);
    }
    electrons_pfIso04_comb_nofsr_isLoaded = true;
  }
  return *electrons_pfIso04_comb_nofsr_;
}
const float &CMS5::LHEweight_PDFVariation_Up_default() {
  if (not LHEweight_PDFVariation_Up_default_isLoaded) {
    if (LHEweight_PDFVariation_Up_default_branch != 0) {
      LHEweight_PDFVariation_Up_default_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_PDFVariation_Up_default_branch does not exist!\n");
      exit(1);
    }
    LHEweight_PDFVariation_Up_default_isLoaded = true;
  }
  return LHEweight_PDFVariation_Up_default_;
}
const vector<vector<unsigned int> > &CMS5::fsrcands_fsrMatch_electron_index_list() {
  if (not fsrcands_fsrMatch_electron_index_list_isLoaded) {
    if (fsrcands_fsrMatch_electron_index_list_branch != 0) {
      fsrcands_fsrMatch_electron_index_list_branch->GetEntry(index);
    } else {
      printf("branch fsrcands_fsrMatch_electron_index_list_branch does not exist!\n");
      exit(1);
    }
    fsrcands_fsrMatch_electron_index_list_isLoaded = true;
  }
  return *fsrcands_fsrMatch_electron_index_list_;
}
const float &CMS5::n_true_int() {
  if (not n_true_int_isLoaded) {
    if (n_true_int_branch != 0) {
      n_true_int_branch->GetEntry(index);
    } else {
      printf("branch n_true_int_branch does not exist!\n");
      exit(1);
    }
    n_true_int_isLoaded = true;
  }
  return n_true_int_;
}
const unsigned int &CMS5::RunNumber() {
  if (not RunNumber_isLoaded) {
    if (RunNumber_branch != 0) {
      RunNumber_branch->GetEntry(index);
    } else {
      printf("branch RunNumber_branch does not exist!\n");
      exit(1);
    }
    RunNumber_isLoaded = true;
  }
  return RunNumber_;
}
const vector<unsigned short> &CMS5::electrons_id_cutBased_Fall17V2_Tight_Bits() {
  if (not electrons_id_cutBased_Fall17V2_Tight_Bits_isLoaded) {
    if (electrons_id_cutBased_Fall17V2_Tight_Bits_branch != 0) {
      electrons_id_cutBased_Fall17V2_Tight_Bits_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_cutBased_Fall17V2_Tight_Bits_branch does not exist!\n");
      exit(1);
    }
    electrons_id_cutBased_Fall17V2_Tight_Bits_isLoaded = true;
  }
  return *electrons_id_cutBased_Fall17V2_Tight_Bits_;
}
const vector<bool> &CMS5::ak4jets_pass_leptonVetoId() {
  if (not ak4jets_pass_leptonVetoId_isLoaded) {
    if (ak4jets_pass_leptonVetoId_branch != 0) {
      ak4jets_pass_leptonVetoId_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_pass_leptonVetoId_branch does not exist!\n");
      exit(1);
    }
    ak4jets_pass_leptonVetoId_isLoaded = true;
  }
  return *ak4jets_pass_leptonVetoId_;
}
const vector<float> &CMS5::electrons_pfIso04_comb_nofsr_old() {
  if (not electrons_pfIso04_comb_nofsr_old_isLoaded) {
    if (electrons_pfIso04_comb_nofsr_old_branch != 0) {
      electrons_pfIso04_comb_nofsr_old_branch->GetEntry(index);
    } else {
      printf("branch electrons_pfIso04_comb_nofsr_old_branch does not exist!\n");
      exit(1);
    }
    electrons_pfIso04_comb_nofsr_old_isLoaded = true;
  }
  return *electrons_pfIso04_comb_nofsr_old_;
}
const vector<float> &CMS5::isotracks_dxyerr() {
  if (not isotracks_dxyerr_isLoaded) {
    if (isotracks_dxyerr_branch != 0) {
      isotracks_dxyerr_branch->GetEntry(index);
    } else {
      printf("branch isotracks_dxyerr_branch does not exist!\n");
      exit(1);
    }
    isotracks_dxyerr_isLoaded = true;
  }
  return *isotracks_dxyerr_;
}
const float &CMS5::puppimet_metPhi_Raw() {
  if (not puppimet_metPhi_Raw_isLoaded) {
    if (puppimet_metPhi_Raw_branch != 0) {
      puppimet_metPhi_Raw_branch->GetEntry(index);
    } else {
      printf("branch puppimet_metPhi_Raw_branch does not exist!\n");
      exit(1);
    }
    puppimet_metPhi_Raw_isLoaded = true;
  }
  return puppimet_metPhi_Raw_;
}
const float &CMS5::PythiaWeight_fsr_muRoneoversqrt2() {
  if (not PythiaWeight_fsr_muRoneoversqrt2_isLoaded) {
    if (PythiaWeight_fsr_muRoneoversqrt2_branch != 0) {
      PythiaWeight_fsr_muRoneoversqrt2_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_fsr_muRoneoversqrt2_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_fsr_muRoneoversqrt2_isLoaded = true;
  }
  return PythiaWeight_fsr_muRoneoversqrt2_;
}
const vector<float> &CMS5::ak4jets_ptDistribution() {
  if (not ak4jets_ptDistribution_isLoaded) {
    if (ak4jets_ptDistribution_branch != 0) {
      ak4jets_ptDistribution_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_ptDistribution_branch does not exist!\n");
      exit(1);
    }
    ak4jets_ptDistribution_isLoaded = true;
  }
  return *ak4jets_ptDistribution_;
}
const vector<float> &CMS5::isotracks_eta() {
  if (not isotracks_eta_isLoaded) {
    if (isotracks_eta_branch != 0) {
      isotracks_eta_branch->GetEntry(index);
    } else {
      printf("branch isotracks_eta_branch does not exist!\n");
      exit(1);
    }
    isotracks_eta_isLoaded = true;
  }
  return *isotracks_eta_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM() {
  if (not p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM_;
}
const vector<bool> &CMS5::photons_id_MVA_Fall17V2_pass_wp90() {
  if (not photons_id_MVA_Fall17V2_pass_wp90_isLoaded) {
    if (photons_id_MVA_Fall17V2_pass_wp90_branch != 0) {
      photons_id_MVA_Fall17V2_pass_wp90_branch->GetEntry(index);
    } else {
      printf("branch photons_id_MVA_Fall17V2_pass_wp90_branch does not exist!\n");
      exit(1);
    }
    photons_id_MVA_Fall17V2_pass_wp90_isLoaded = true;
  }
  return *photons_id_MVA_Fall17V2_pass_wp90_;
}
const vector<vector<unsigned int> > &CMS5::fsrcands_photonVeto_index_list() {
  if (not fsrcands_photonVeto_index_list_isLoaded) {
    if (fsrcands_photonVeto_index_list_branch != 0) {
      fsrcands_photonVeto_index_list_branch->GetEntry(index);
    } else {
      printf("branch fsrcands_photonVeto_index_list_branch does not exist!\n");
      exit(1);
    }
    fsrcands_photonVeto_index_list_isLoaded = true;
  }
  return *fsrcands_photonVeto_index_list_;
}
const bool &CMS5::metfilter_eeBadScFilter() {
  if (not metfilter_eeBadScFilter_isLoaded) {
    if (metfilter_eeBadScFilter_branch != 0) {
      metfilter_eeBadScFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_eeBadScFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_eeBadScFilter_isLoaded = true;
  }
  return metfilter_eeBadScFilter_;
}
const float &CMS5::puppimet_metPhi_Nominal() {
  if (not puppimet_metPhi_Nominal_isLoaded) {
    if (puppimet_metPhi_Nominal_branch != 0) {
      puppimet_metPhi_Nominal_branch->GetEntry(index);
    } else {
      printf("branch puppimet_metPhi_Nominal_branch does not exist!\n");
      exit(1);
    }
    puppimet_metPhi_Nominal_isLoaded = true;
  }
  return puppimet_metPhi_Nominal_;
}
const vector<float> &CMS5::isotracks_pfIso03_nh() {
  if (not isotracks_pfIso03_nh_isLoaded) {
    if (isotracks_pfIso03_nh_branch != 0) {
      isotracks_pfIso03_nh_branch->GetEntry(index);
    } else {
      printf("branch isotracks_pfIso03_nh_branch does not exist!\n");
      exit(1);
    }
    isotracks_pfIso03_nh_isLoaded = true;
  }
  return *isotracks_pfIso03_nh_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::photons_scale_smear_corr_smear_totalUp() {
  if (not photons_scale_smear_corr_smear_totalUp_isLoaded) {
    if (photons_scale_smear_corr_smear_totalUp_branch != 0) {
      photons_scale_smear_corr_smear_totalUp_branch->GetEntry(index);
    } else {
      printf("branch photons_scale_smear_corr_smear_totalUp_branch does not exist!\n");
      exit(1);
    }
    photons_scale_smear_corr_smear_totalUp_isLoaded = true;
  }
  return *photons_scale_smear_corr_smear_totalUp_;
}
const bool &CMS5::metfilter_ecalBadCalibFilter() {
  if (not metfilter_ecalBadCalibFilter_isLoaded) {
    if (metfilter_ecalBadCalibFilter_branch != 0) {
      metfilter_ecalBadCalibFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_ecalBadCalibFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_ecalBadCalibFilter_isLoaded = true;
  }
  return metfilter_ecalBadCalibFilter_;
}
const vector<bool> &CMS5::electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ() {
  if (not electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_isLoaded) {
    if (electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_branch != 0) {
      electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_isLoaded = true;
  }
  return *electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_;
}
const vector<float> &CMS5::electrons_miniIso_sum_neutral_nofsr() {
  if (not electrons_miniIso_sum_neutral_nofsr_isLoaded) {
    if (electrons_miniIso_sum_neutral_nofsr_branch != 0) {
      electrons_miniIso_sum_neutral_nofsr_branch->GetEntry(index);
    } else {
      printf("branch electrons_miniIso_sum_neutral_nofsr_branch does not exist!\n");
      exit(1);
    }
    electrons_miniIso_sum_neutral_nofsr_isLoaded = true;
  }
  return *electrons_miniIso_sum_neutral_nofsr_;
}
const vector<char> &CMS5::muons_charge() {
  if (not muons_charge_isLoaded) {
    if (muons_charge_branch != 0) {
      muons_charge_branch->GetEntry(index);
    } else {
      printf("branch muons_charge_branch does not exist!\n");
      exit(1);
    }
    muons_charge_isLoaded = true;
  }
  return *muons_charge_;
}
const float &CMS5::pfmet_metShift_px_JERUp() {
  if (not pfmet_metShift_px_JERUp_isLoaded) {
    if (pfmet_metShift_px_JERUp_branch != 0) {
      pfmet_metShift_px_JERUp_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metShift_px_JERUp_branch does not exist!\n");
      exit(1);
    }
    pfmet_metShift_px_JERUp_isLoaded = true;
  }
  return pfmet_metShift_px_JERUp_;
}
const float &CMS5::event_rho() {
  if (not event_rho_isLoaded) {
    if (event_rho_branch != 0) {
      event_rho_branch->GetEntry(index);
    } else {
      printf("branch event_rho_branch does not exist!\n");
      exit(1);
    }
    event_rho_isLoaded = true;
  }
  return event_rho_;
}
const vector<char> &CMS5::ak4jets_hadronFlavour() {
  if (not ak4jets_hadronFlavour_isLoaded) {
    if (ak4jets_hadronFlavour_branch != 0) {
      ak4jets_hadronFlavour_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_hadronFlavour_branch does not exist!\n");
      exit(1);
    }
    ak4jets_hadronFlavour_isLoaded = true;
  }
  return *ak4jets_hadronFlavour_;
}
const float &CMS5::KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp() {
  if (not KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_isLoaded) {
    if (KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_branch != 0) {
      KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_branch->GetEntry(index);
    } else {
      printf("branch KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_branch does not exist!\n");
      exit(1);
    }
    KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_isLoaded = true;
  }
  return KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp_;
}
const float &CMS5::puppimet_sumEt_Nominal() {
  if (not puppimet_sumEt_Nominal_isLoaded) {
    if (puppimet_sumEt_Nominal_branch != 0) {
      puppimet_sumEt_Nominal_branch->GetEntry(index);
    } else {
      printf("branch puppimet_sumEt_Nominal_branch does not exist!\n");
      exit(1);
    }
    puppimet_sumEt_Nominal_isLoaded = true;
  }
  return puppimet_sumEt_Nominal_;
}
const vector<bool> &CMS5::electrons_id_MVA_Fall17V2_NoIso_pass_wp90() {
  if (not electrons_id_MVA_Fall17V2_NoIso_pass_wp90_isLoaded) {
    if (electrons_id_MVA_Fall17V2_NoIso_pass_wp90_branch != 0) {
      electrons_id_MVA_Fall17V2_NoIso_pass_wp90_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_NoIso_pass_wp90_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_NoIso_pass_wp90_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_NoIso_pass_wp90_;
}
const vector<unsigned char> &CMS5::electrons_id_MVA_Fall17V2_NoIso_Cat() {
  if (not electrons_id_MVA_Fall17V2_NoIso_Cat_isLoaded) {
    if (electrons_id_MVA_Fall17V2_NoIso_Cat_branch != 0) {
      electrons_id_MVA_Fall17V2_NoIso_Cat_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_NoIso_Cat_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_NoIso_Cat_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_NoIso_Cat_;
}
const float &CMS5::pfmet_sumEt_Raw() {
  if (not pfmet_sumEt_Raw_isLoaded) {
    if (pfmet_sumEt_Raw_branch != 0) {
      pfmet_sumEt_Raw_branch->GetEntry(index);
    } else {
      printf("branch pfmet_sumEt_Raw_branch does not exist!\n");
      exit(1);
    }
    pfmet_sumEt_Raw_isLoaded = true;
  }
  return pfmet_sumEt_Raw_;
}
const vector<float> &CMS5::photons_etaSC() {
  if (not photons_etaSC_isLoaded) {
    if (photons_etaSC_branch != 0) {
      photons_etaSC_branch->GetEntry(index);
    } else {
      printf("branch photons_etaSC_branch does not exist!\n");
      exit(1);
    }
    photons_etaSC_isLoaded = true;
  }
  return *photons_etaSC_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM_;
}
const float &CMS5::genHEPMCweight_default() {
  if (not genHEPMCweight_default_isLoaded) {
    if (genHEPMCweight_default_branch != 0) {
      genHEPMCweight_default_branch->GetEntry(index);
    } else {
      printf("branch genHEPMCweight_default_branch does not exist!\n");
      exit(1);
    }
    genHEPMCweight_default_isLoaded = true;
  }
  return genHEPMCweight_default_;
}
const float &CMS5::LHEweight_QCDscale_muR0p5_muF1() {
  if (not LHEweight_QCDscale_muR0p5_muF1_isLoaded) {
    if (LHEweight_QCDscale_muR0p5_muF1_branch != 0) {
      LHEweight_QCDscale_muR0p5_muF1_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_QCDscale_muR0p5_muF1_branch does not exist!\n");
      exit(1);
    }
    LHEweight_QCDscale_muR0p5_muF1_isLoaded = true;
  }
  return LHEweight_QCDscale_muR0p5_muF1_;
}
const vector<float> &CMS5::ak8jets_ptDistribution() {
  if (not ak8jets_ptDistribution_isLoaded) {
    if (ak8jets_ptDistribution_branch != 0) {
      ak8jets_ptDistribution_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_ptDistribution_branch does not exist!\n");
      exit(1);
    }
    ak8jets_ptDistribution_isLoaded = true;
  }
  return *ak8jets_ptDistribution_;
}
const vector<float> &CMS5::muons_pfIso04_sum_neutral_nofsr() {
  if (not muons_pfIso04_sum_neutral_nofsr_isLoaded) {
    if (muons_pfIso04_sum_neutral_nofsr_branch != 0) {
      muons_pfIso04_sum_neutral_nofsr_branch->GetEntry(index);
    } else {
      printf("branch muons_pfIso04_sum_neutral_nofsr_branch does not exist!\n");
      exit(1);
    }
    muons_pfIso04_sum_neutral_nofsr_isLoaded = true;
  }
  return *muons_pfIso04_sum_neutral_nofsr_;
}
const float &CMS5::KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn() {
  if (not KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_isLoaded) {
    if (KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_branch != 0) {
      KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_branch->GetEntry(index);
    } else {
      printf("branch KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_branch does not exist!\n");
      exit(1);
    }
    KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_isLoaded = true;
  }
  return KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn_;
}
const vector<int> &CMS5::lheparticles_mother0_index() {
  if (not lheparticles_mother0_index_isLoaded) {
    if (lheparticles_mother0_index_branch != 0) {
      lheparticles_mother0_index_branch->GetEntry(index);
    } else {
      printf("branch lheparticles_mother0_index_branch does not exist!\n");
      exit(1);
    }
    lheparticles_mother0_index_isLoaded = true;
  }
  return *lheparticles_mother0_index_;
}
const vector<char> &CMS5::isotracks_charge() {
  if (not isotracks_charge_isLoaded) {
    if (isotracks_charge_branch != 0) {
      isotracks_charge_branch->GetEntry(index);
    } else {
      printf("branch isotracks_charge_branch does not exist!\n");
      exit(1);
    }
    isotracks_charge_isLoaded = true;
  }
  return *isotracks_charge_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM_;
}
const bool &CMS5::metfilter_METFilters() {
  if (not metfilter_METFilters_isLoaded) {
    if (metfilter_METFilters_branch != 0) {
      metfilter_METFilters_branch->GetEntry(index);
    } else {
      printf("branch metfilter_METFilters_branch does not exist!\n");
      exit(1);
    }
    metfilter_METFilters_isLoaded = true;
  }
  return metfilter_METFilters_;
}
const float &CMS5::pfmet_calo_metPhi() {
  if (not pfmet_calo_metPhi_isLoaded) {
    if (pfmet_calo_metPhi_branch != 0) {
      pfmet_calo_metPhi_branch->GetEntry(index);
    } else {
      printf("branch pfmet_calo_metPhi_branch does not exist!\n");
      exit(1);
    }
    pfmet_calo_metPhi_isLoaded = true;
  }
  return pfmet_calo_metPhi_;
}
const float &CMS5::p_Gen_CPStoBWPropRewgt() {
  if (not p_Gen_CPStoBWPropRewgt_isLoaded) {
    if (p_Gen_CPStoBWPropRewgt_branch != 0) {
      p_Gen_CPStoBWPropRewgt_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_CPStoBWPropRewgt_branch does not exist!\n");
      exit(1);
    }
    p_Gen_CPStoBWPropRewgt_isLoaded = true;
  }
  return p_Gen_CPStoBWPropRewgt_;
}
const float &CMS5::puppimet_met_over_sqrtSumEt() {
  if (not puppimet_met_over_sqrtSumEt_isLoaded) {
    if (puppimet_met_over_sqrtSumEt_branch != 0) {
      puppimet_met_over_sqrtSumEt_branch->GetEntry(index);
    } else {
      printf("branch puppimet_met_over_sqrtSumEt_branch does not exist!\n");
      exit(1);
    }
    puppimet_met_over_sqrtSumEt_isLoaded = true;
  }
  return puppimet_met_over_sqrtSumEt_;
}
const vector<float> &CMS5::muons_phi() {
  if (not muons_phi_isLoaded) {
    if (muons_phi_branch != 0) {
      muons_phi_branch->GetEntry(index);
    } else {
      printf("branch muons_phi_branch does not exist!\n");
      exit(1);
    }
    muons_phi_isLoaded = true;
  }
  return *muons_phi_;
}
const float &CMS5::genHEPMCweight_NNPDF30() {
  if (not genHEPMCweight_NNPDF30_isLoaded) {
    if (genHEPMCweight_NNPDF30_branch != 0) {
      genHEPMCweight_NNPDF30_branch->GetEntry(index);
    } else {
      printf("branch genHEPMCweight_NNPDF30_branch does not exist!\n");
      exit(1);
    }
    genHEPMCweight_NNPDF30_isLoaded = true;
  }
  return genHEPMCweight_NNPDF30_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM_;
}
const vector<unsigned short> &CMS5::electrons_id_cutBased_Fall17V2_Medium_Bits() {
  if (not electrons_id_cutBased_Fall17V2_Medium_Bits_isLoaded) {
    if (electrons_id_cutBased_Fall17V2_Medium_Bits_branch != 0) {
      electrons_id_cutBased_Fall17V2_Medium_Bits_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_cutBased_Fall17V2_Medium_Bits_branch does not exist!\n");
      exit(1);
    }
    electrons_id_cutBased_Fall17V2_Medium_Bits_isLoaded = true;
  }
  return *electrons_id_cutBased_Fall17V2_Medium_Bits_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM_;
}
const bool &CMS5::metfilter_HBHENoiseFilter() {
  if (not metfilter_HBHENoiseFilter_isLoaded) {
    if (metfilter_HBHENoiseFilter_branch != 0) {
      metfilter_HBHENoiseFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_HBHENoiseFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_HBHENoiseFilter_isLoaded = true;
  }
  return metfilter_HBHENoiseFilter_;
}
const vector<float> &CMS5::ak4jets_deepFlavourprobc() {
  if (not ak4jets_deepFlavourprobc_isLoaded) {
    if (ak4jets_deepFlavourprobc_branch != 0) {
      ak4jets_deepFlavourprobc_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_deepFlavourprobc_branch does not exist!\n");
      exit(1);
    }
    ak4jets_deepFlavourprobc_isLoaded = true;
  }
  return *ak4jets_deepFlavourprobc_;
}
const vector<float> &CMS5::ak4jets_deepFlavourprobb() {
  if (not ak4jets_deepFlavourprobb_isLoaded) {
    if (ak4jets_deepFlavourprobb_branch != 0) {
      ak4jets_deepFlavourprobb_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_deepFlavourprobb_branch does not exist!\n");
      exit(1);
    }
    ak4jets_deepFlavourprobb_isLoaded = true;
  }
  return *ak4jets_deepFlavourprobb_;
}
const vector<float> &CMS5::ak4jets_deepFlavourprobg() {
  if (not ak4jets_deepFlavourprobg_isLoaded) {
    if (ak4jets_deepFlavourprobg_branch != 0) {
      ak4jets_deepFlavourprobg_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_deepFlavourprobg_branch does not exist!\n");
      exit(1);
    }
    ak4jets_deepFlavourprobg_isLoaded = true;
  }
  return *ak4jets_deepFlavourprobg_;
}
const float &CMS5::LHEweight_QCDscale_muR1_muF2() {
  if (not LHEweight_QCDscale_muR1_muF2_isLoaded) {
    if (LHEweight_QCDscale_muR1_muF2_branch != 0) {
      LHEweight_QCDscale_muR1_muF2_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_QCDscale_muR1_muF2_branch does not exist!\n");
      exit(1);
    }
    LHEweight_QCDscale_muR1_muF2_isLoaded = true;
  }
  return LHEweight_QCDscale_muR1_muF2_;
}
const float &CMS5::LHEweight_QCDscale_muR1_muF1() {
  if (not LHEweight_QCDscale_muR1_muF1_isLoaded) {
    if (LHEweight_QCDscale_muR1_muF1_branch != 0) {
      LHEweight_QCDscale_muR1_muF1_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_QCDscale_muR1_muF1_branch does not exist!\n");
      exit(1);
    }
    LHEweight_QCDscale_muR1_muF1_isLoaded = true;
  }
  return LHEweight_QCDscale_muR1_muF1_;
}
const bool &CMS5::metfilter_BadChargedCandidateFilter() {
  if (not metfilter_BadChargedCandidateFilter_isLoaded) {
    if (metfilter_BadChargedCandidateFilter_branch != 0) {
      metfilter_BadChargedCandidateFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_BadChargedCandidateFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_BadChargedCandidateFilter_isLoaded = true;
  }
  return metfilter_BadChargedCandidateFilter_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM_;
}
const float &CMS5::sumEt() {
  if (not sumEt_isLoaded) {
    if (sumEt_branch != 0) {
      sumEt_branch->GetEntry(index);
    } else {
      printf("branch sumEt_branch does not exist!\n");
      exit(1);
    }
    sumEt_isLoaded = true;
  }
  return sumEt_;
}
const unsigned int &CMS5::vtxs_nvtxs() {
  if (not vtxs_nvtxs_isLoaded) {
    if (vtxs_nvtxs_branch != 0) {
      vtxs_nvtxs_branch->GetEntry(index);
    } else {
      printf("branch vtxs_nvtxs_branch does not exist!\n");
      exit(1);
    }
    vtxs_nvtxs_isLoaded = true;
  }
  return vtxs_nvtxs_;
}
const vector<float> &CMS5::muons_miniIso_sum_charged_nofsr() {
  if (not muons_miniIso_sum_charged_nofsr_isLoaded) {
    if (muons_miniIso_sum_charged_nofsr_branch != 0) {
      muons_miniIso_sum_charged_nofsr_branch->GetEntry(index);
    } else {
      printf("branch muons_miniIso_sum_charged_nofsr_branch does not exist!\n");
      exit(1);
    }
    muons_miniIso_sum_charged_nofsr_isLoaded = true;
  }
  return *muons_miniIso_sum_charged_nofsr_;
}
const vector<unsigned int> &CMS5::muons_POG_selector_bits() {
  if (not muons_POG_selector_bits_isLoaded) {
    if (muons_POG_selector_bits_branch != 0) {
      muons_POG_selector_bits_branch->GetEntry(index);
    } else {
      printf("branch muons_POG_selector_bits_branch does not exist!\n");
      exit(1);
    }
    muons_POG_selector_bits_isLoaded = true;
  }
  return *muons_POG_selector_bits_;
}
const vector<float> &CMS5::muons_miniIso_comb_nofsr() {
  if (not muons_miniIso_comb_nofsr_isLoaded) {
    if (muons_miniIso_comb_nofsr_branch != 0) {
      muons_miniIso_comb_nofsr_branch->GetEntry(index);
    } else {
      printf("branch muons_miniIso_comb_nofsr_branch does not exist!\n");
      exit(1);
    }
    muons_miniIso_comb_nofsr_isLoaded = true;
  }
  return *muons_miniIso_comb_nofsr_;
}
const vector<float> &CMS5::photons_pfChargedHadronIso_EAcorr() {
  if (not photons_pfChargedHadronIso_EAcorr_isLoaded) {
    if (photons_pfChargedHadronIso_EAcorr_branch != 0) {
      photons_pfChargedHadronIso_EAcorr_branch->GetEntry(index);
    } else {
      printf("branch photons_pfChargedHadronIso_EAcorr_branch does not exist!\n");
      exit(1);
    }
    photons_pfChargedHadronIso_EAcorr_isLoaded = true;
  }
  return *photons_pfChargedHadronIso_EAcorr_;
}
const vector<float> &CMS5::isotracks_pfIso03_ch() {
  if (not isotracks_pfIso03_ch_isLoaded) {
    if (isotracks_pfIso03_ch_branch != 0) {
      isotracks_pfIso03_ch_branch->GetEntry(index);
    } else {
      printf("branch isotracks_pfIso03_ch_branch does not exist!\n");
      exit(1);
    }
    isotracks_pfIso03_ch_isLoaded = true;
  }
  return *isotracks_pfIso03_ch_;
}
const vector<float> &CMS5::electrons_phi() {
  if (not electrons_phi_isLoaded) {
    if (electrons_phi_branch != 0) {
      electrons_phi_branch->GetEntry(index);
    } else {
      printf("branch electrons_phi_branch does not exist!\n");
      exit(1);
    }
    electrons_phi_isLoaded = true;
  }
  return *electrons_phi_;
}
const float &CMS5::LHEweight_PDFVariation_Dn_default() {
  if (not LHEweight_PDFVariation_Dn_default_isLoaded) {
    if (LHEweight_PDFVariation_Dn_default_branch != 0) {
      LHEweight_PDFVariation_Dn_default_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_PDFVariation_Dn_default_branch does not exist!\n");
      exit(1);
    }
    LHEweight_PDFVariation_Dn_default_isLoaded = true;
  }
  return LHEweight_PDFVariation_Dn_default_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_;
}
const float &CMS5::pfmet_metPhi_UnclusteredEnDn() {
  if (not pfmet_metPhi_UnclusteredEnDn_isLoaded) {
    if (pfmet_metPhi_UnclusteredEnDn_branch != 0) {
      pfmet_metPhi_UnclusteredEnDn_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metPhi_UnclusteredEnDn_branch does not exist!\n");
      exit(1);
    }
    pfmet_metPhi_UnclusteredEnDn_isLoaded = true;
  }
  return pfmet_metPhi_UnclusteredEnDn_;
}
const vector<float> &CMS5::ak4jets_phi() {
  if (not ak4jets_phi_isLoaded) {
    if (ak4jets_phi_branch != 0) {
      ak4jets_phi_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_phi_branch does not exist!\n");
      exit(1);
    }
    ak4jets_phi_isLoaded = true;
  }
  return *ak4jets_phi_;
}
const vector<unsigned int> &CMS5::photons_id_cutBased_Fall17V2_Medium_Bits() {
  if (not photons_id_cutBased_Fall17V2_Medium_Bits_isLoaded) {
    if (photons_id_cutBased_Fall17V2_Medium_Bits_branch != 0) {
      photons_id_cutBased_Fall17V2_Medium_Bits_branch->GetEntry(index);
    } else {
      printf("branch photons_id_cutBased_Fall17V2_Medium_Bits_branch does not exist!\n");
      exit(1);
    }
    photons_id_cutBased_Fall17V2_Medium_Bits_isLoaded = true;
  }
  return *photons_id_cutBased_Fall17V2_Medium_Bits_;
}
const float &CMS5::p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM_;
}
const vector<bool> &CMS5::isotracks_lepOverlap() {
  if (not isotracks_lepOverlap_isLoaded) {
    if (isotracks_lepOverlap_branch != 0) {
      isotracks_lepOverlap_branch->GetEntry(index);
    } else {
      printf("branch isotracks_lepOverlap_branch does not exist!\n");
      exit(1);
    }
    isotracks_lepOverlap_isLoaded = true;
  }
  return *isotracks_lepOverlap_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM_;
}
const vector<float> &CMS5::muons_eta() {
  if (not muons_eta_isLoaded) {
    if (muons_eta_branch != 0) {
      muons_eta_branch->GetEntry(index);
    } else {
      printf("branch muons_eta_branch does not exist!\n");
      exit(1);
    }
    muons_eta_isLoaded = true;
  }
  return *muons_eta_;
}
const vector<bool> &CMS5::vtxs_is_valid() {
  if (not vtxs_is_valid_isLoaded) {
    if (vtxs_is_valid_branch != 0) {
      vtxs_is_valid_branch->GetEntry(index);
    } else {
      printf("branch vtxs_is_valid_branch does not exist!\n");
      exit(1);
    }
    vtxs_is_valid_isLoaded = true;
  }
  return *vtxs_is_valid_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::electrons_miniIso_sum_charged_nofsr() {
  if (not electrons_miniIso_sum_charged_nofsr_isLoaded) {
    if (electrons_miniIso_sum_charged_nofsr_branch != 0) {
      electrons_miniIso_sum_charged_nofsr_branch->GetEntry(index);
    } else {
      printf("branch electrons_miniIso_sum_charged_nofsr_branch does not exist!\n");
      exit(1);
    }
    electrons_miniIso_sum_charged_nofsr_isLoaded = true;
  }
  return *electrons_miniIso_sum_charged_nofsr_;
}
const vector<float> &CMS5::ak4jets_deepFlavourprobbb() {
  if (not ak4jets_deepFlavourprobbb_isLoaded) {
    if (ak4jets_deepFlavourprobbb_branch != 0) {
      ak4jets_deepFlavourprobbb_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_deepFlavourprobbb_branch does not exist!\n");
      exit(1);
    }
    ak4jets_deepFlavourprobbb_isLoaded = true;
  }
  return *ak4jets_deepFlavourprobbb_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM_;
}
const float &CMS5::LHEweight_AsMZ_Up_default() {
  if (not LHEweight_AsMZ_Up_default_isLoaded) {
    if (LHEweight_AsMZ_Up_default_branch != 0) {
      LHEweight_AsMZ_Up_default_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_AsMZ_Up_default_branch does not exist!\n");
      exit(1);
    }
    LHEweight_AsMZ_Up_default_isLoaded = true;
  }
  return LHEweight_AsMZ_Up_default_;
}
const vector<float> &CMS5::muons_miniIso_comb_nofsr_uncorrected() {
  if (not muons_miniIso_comb_nofsr_uncorrected_isLoaded) {
    if (muons_miniIso_comb_nofsr_uncorrected_branch != 0) {
      muons_miniIso_comb_nofsr_uncorrected_branch->GetEntry(index);
    } else {
      printf("branch muons_miniIso_comb_nofsr_uncorrected_branch does not exist!\n");
      exit(1);
    }
    muons_miniIso_comb_nofsr_uncorrected_isLoaded = true;
  }
  return *muons_miniIso_comb_nofsr_uncorrected_;
}
const bool &CMS5::metfilter_CSCTightHalo2015Filter() {
  if (not metfilter_CSCTightHalo2015Filter_isLoaded) {
    if (metfilter_CSCTightHalo2015Filter_branch != 0) {
      metfilter_CSCTightHalo2015Filter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_CSCTightHalo2015Filter_branch does not exist!\n");
      exit(1);
    }
    metfilter_CSCTightHalo2015Filter_isLoaded = true;
  }
  return metfilter_CSCTightHalo2015Filter_;
}
const float &CMS5::pfmet_metShift_px_JERDn() {
  if (not pfmet_metShift_px_JERDn_isLoaded) {
    if (pfmet_metShift_px_JERDn_branch != 0) {
      pfmet_metShift_px_JERDn_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metShift_px_JERDn_branch does not exist!\n");
      exit(1);
    }
    pfmet_metShift_px_JERDn_isLoaded = true;
  }
  return pfmet_metShift_px_JERDn_;
}
const vector<float> &CMS5::electrons_etaSC() {
  if (not electrons_etaSC_isLoaded) {
    if (electrons_etaSC_branch != 0) {
      electrons_etaSC_branch->GetEntry(index);
    } else {
      printf("branch electrons_etaSC_branch does not exist!\n");
      exit(1);
    }
    electrons_etaSC_isLoaded = true;
  }
  return *electrons_etaSC_;
}
const short &CMS5::n_shower_gluons_to_charm() {
  if (not n_shower_gluons_to_charm_isLoaded) {
    if (n_shower_gluons_to_charm_branch != 0) {
      n_shower_gluons_to_charm_branch->GetEntry(index);
    } else {
      printf("branch n_shower_gluons_to_charm_branch does not exist!\n");
      exit(1);
    }
    n_shower_gluons_to_charm_isLoaded = true;
  }
  return n_shower_gluons_to_charm_;
}
const float &CMS5::PythiaWeight_fsr_muR0p25() {
  if (not PythiaWeight_fsr_muR0p25_isLoaded) {
    if (PythiaWeight_fsr_muR0p25_branch != 0) {
      PythiaWeight_fsr_muR0p25_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_fsr_muR0p25_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_fsr_muR0p25_isLoaded = true;
  }
  return PythiaWeight_fsr_muR0p25_;
}
const float &CMS5::PythiaWeight_isr_muRsqrt2() {
  if (not PythiaWeight_isr_muRsqrt2_isLoaded) {
    if (PythiaWeight_isr_muRsqrt2_branch != 0) {
      PythiaWeight_isr_muRsqrt2_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_isr_muRsqrt2_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_isr_muRsqrt2_isLoaded = true;
  }
  return PythiaWeight_isr_muRsqrt2_;
}
const vector<float> &CMS5::ak4jets_deepFlavourprobuds() {
  if (not ak4jets_deepFlavourprobuds_isLoaded) {
    if (ak4jets_deepFlavourprobuds_branch != 0) {
      ak4jets_deepFlavourprobuds_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_deepFlavourprobuds_branch does not exist!\n");
      exit(1);
    }
    ak4jets_deepFlavourprobuds_isLoaded = true;
  }
  return *ak4jets_deepFlavourprobuds_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM_;
}
const float &CMS5::KFactor_QCD_NNLO_ggZZ_Sig_AsDn() {
  if (not KFactor_QCD_NNLO_ggZZ_Sig_AsDn_isLoaded) {
    if (KFactor_QCD_NNLO_ggZZ_Sig_AsDn_branch != 0) {
      KFactor_QCD_NNLO_ggZZ_Sig_AsDn_branch->GetEntry(index);
    } else {
      printf("branch KFactor_QCD_NNLO_ggZZ_Sig_AsDn_branch does not exist!\n");
      exit(1);
    }
    KFactor_QCD_NNLO_ggZZ_Sig_AsDn_isLoaded = true;
  }
  return KFactor_QCD_NNLO_ggZZ_Sig_AsDn_;
}
const vector<float> &CMS5::electrons_pfIso04_sum_neutral_nofsr() {
  if (not electrons_pfIso04_sum_neutral_nofsr_isLoaded) {
    if (electrons_pfIso04_sum_neutral_nofsr_branch != 0) {
      electrons_pfIso04_sum_neutral_nofsr_branch->GetEntry(index);
    } else {
      printf("branch electrons_pfIso04_sum_neutral_nofsr_branch does not exist!\n");
      exit(1);
    }
    electrons_pfIso04_sum_neutral_nofsr_isLoaded = true;
  }
  return *electrons_pfIso04_sum_neutral_nofsr_;
}
const vector<bool> &CMS5::muons_pass_muon_timing() {
  if (not muons_pass_muon_timing_isLoaded) {
    if (muons_pass_muon_timing_branch != 0) {
      muons_pass_muon_timing_branch->GetEntry(index);
    } else {
      printf("branch muons_pass_muon_timing_branch does not exist!\n");
      exit(1);
    }
    muons_pass_muon_timing_isLoaded = true;
  }
  return *muons_pass_muon_timing_;
}
const bool &CMS5::metfilter_ecalLaserCorrFilter() {
  if (not metfilter_ecalLaserCorrFilter_isLoaded) {
    if (metfilter_ecalLaserCorrFilter_branch != 0) {
      metfilter_ecalLaserCorrFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_ecalLaserCorrFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_ecalLaserCorrFilter_isLoaded = true;
  }
  return metfilter_ecalLaserCorrFilter_;
}
const bool &CMS5::metfilter_HBHENoiseIsoFilter() {
  if (not metfilter_HBHENoiseIsoFilter_isLoaded) {
    if (metfilter_HBHENoiseIsoFilter_branch != 0) {
      metfilter_HBHENoiseIsoFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_HBHENoiseIsoFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_HBHENoiseIsoFilter_isLoaded = true;
  }
  return metfilter_HBHENoiseIsoFilter_;
}
const vector<float> &CMS5::triggerObjects_mass() {
  if (not triggerObjects_mass_isLoaded) {
    if (triggerObjects_mass_branch != 0) {
      triggerObjects_mass_branch->GetEntry(index);
    } else {
      printf("branch triggerObjects_mass_branch does not exist!\n");
      exit(1);
    }
    triggerObjects_mass_isLoaded = true;
  }
  return *triggerObjects_mass_;
}
const float &CMS5::p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM_;
}
const float &CMS5::PythiaWeight_isr_muR0p25() {
  if (not PythiaWeight_isr_muR0p25_isLoaded) {
    if (PythiaWeight_isr_muR0p25_branch != 0) {
      PythiaWeight_isr_muR0p25_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_isr_muR0p25_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_isr_muR0p25_isLoaded = true;
  }
  return PythiaWeight_isr_muR0p25_;
}
const float &CMS5::genmet_met() {
  if (not genmet_met_isLoaded) {
    if (genmet_met_branch != 0) {
      genmet_met_branch->GetEntry(index);
    } else {
      printf("branch genmet_met_branch does not exist!\n");
      exit(1);
    }
    genmet_met_isLoaded = true;
  }
  return genmet_met_;
}
const vector<float> &CMS5::fsrcands_pt() {
  if (not fsrcands_pt_isLoaded) {
    if (fsrcands_pt_branch != 0) {
      fsrcands_pt_branch->GetEntry(index);
    } else {
      printf("branch fsrcands_pt_branch does not exist!\n");
      exit(1);
    }
    fsrcands_pt_isLoaded = true;
  }
  return *fsrcands_pt_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM_;
}
const vector<float> &CMS5::ak4jets_JERUp() {
  if (not ak4jets_JERUp_isLoaded) {
    if (ak4jets_JERUp_branch != 0) {
      ak4jets_JERUp_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_JERUp_branch does not exist!\n");
      exit(1);
    }
    ak4jets_JERUp_isLoaded = true;
  }
  return *ak4jets_JERUp_;
}
const vector<float> &CMS5::photons_id_MVA_Fall17V2_Val() {
  if (not photons_id_MVA_Fall17V2_Val_isLoaded) {
    if (photons_id_MVA_Fall17V2_Val_branch != 0) {
      photons_id_MVA_Fall17V2_Val_branch->GetEntry(index);
    } else {
      printf("branch photons_id_MVA_Fall17V2_Val_branch does not exist!\n");
      exit(1);
    }
    photons_id_MVA_Fall17V2_Val_isLoaded = true;
  }
  return *photons_id_MVA_Fall17V2_Val_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::ak4jets_axis1() {
  if (not ak4jets_axis1_isLoaded) {
    if (ak4jets_axis1_branch != 0) {
      ak4jets_axis1_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_axis1_branch does not exist!\n");
      exit(1);
    }
    ak4jets_axis1_isLoaded = true;
  }
  return *ak4jets_axis1_;
}
const vector<float> &CMS5::ak4jets_axis2() {
  if (not ak4jets_axis2_isLoaded) {
    if (ak4jets_axis2_branch != 0) {
      ak4jets_axis2_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_axis2_branch does not exist!\n");
      exit(1);
    }
    ak4jets_axis2_isLoaded = true;
  }
  return *ak4jets_axis2_;
}
const float &CMS5::puppimet_met_JECUp() {
  if (not puppimet_met_JECUp_isLoaded) {
    if (puppimet_met_JECUp_branch != 0) {
      puppimet_met_JECUp_branch->GetEntry(index);
    } else {
      printf("branch puppimet_met_JECUp_branch does not exist!\n");
      exit(1);
    }
    puppimet_met_JECUp_isLoaded = true;
  }
  return puppimet_met_JECUp_;
}
const vector<bool> &CMS5::electrons_id_MVA_Fall17V2_Iso_pass_wpLoose() {
  if (not electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_isLoaded) {
    if (electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_branch != 0) {
      electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::electrons_id_MVA_Fall17V2_NoIso_Val() {
  if (not electrons_id_MVA_Fall17V2_NoIso_Val_isLoaded) {
    if (electrons_id_MVA_Fall17V2_NoIso_Val_branch != 0) {
      electrons_id_MVA_Fall17V2_NoIso_Val_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_NoIso_Val_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_NoIso_Val_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_NoIso_Val_;
}
const float &CMS5::PythiaWeight_fsr_muR2() {
  if (not PythiaWeight_fsr_muR2_isLoaded) {
    if (PythiaWeight_fsr_muR2_branch != 0) {
      PythiaWeight_fsr_muR2_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_fsr_muR2_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_fsr_muR2_isLoaded = true;
  }
  return PythiaWeight_fsr_muR2_;
}
const vector<float> &CMS5::electrons_pfIso03_comb_nofsr_old() {
  if (not electrons_pfIso03_comb_nofsr_old_isLoaded) {
    if (electrons_pfIso03_comb_nofsr_old_branch != 0) {
      electrons_pfIso03_comb_nofsr_old_branch->GetEntry(index);
    } else {
      printf("branch electrons_pfIso03_comb_nofsr_old_branch does not exist!\n");
      exit(1);
    }
    electrons_pfIso03_comb_nofsr_old_isLoaded = true;
  }
  return *electrons_pfIso03_comb_nofsr_old_;
}
const float &CMS5::pfmet_met_over_sqrtSumEt() {
  if (not pfmet_met_over_sqrtSumEt_isLoaded) {
    if (pfmet_met_over_sqrtSumEt_branch != 0) {
      pfmet_met_over_sqrtSumEt_branch->GetEntry(index);
    } else {
      printf("branch pfmet_met_over_sqrtSumEt_branch does not exist!\n");
      exit(1);
    }
    pfmet_met_over_sqrtSumEt_isLoaded = true;
  }
  return pfmet_met_over_sqrtSumEt_;
}
const float &CMS5::PythiaWeight_fsr_muR4() {
  if (not PythiaWeight_fsr_muR4_isLoaded) {
    if (PythiaWeight_fsr_muR4_branch != 0) {
      PythiaWeight_fsr_muR4_branch->GetEntry(index);
    } else {
      printf("branch PythiaWeight_fsr_muR4_branch does not exist!\n");
      exit(1);
    }
    PythiaWeight_fsr_muR4_isLoaded = true;
  }
  return PythiaWeight_fsr_muR4_;
}
const vector<int> &CMS5::lheparticles_id() {
  if (not lheparticles_id_isLoaded) {
    if (lheparticles_id_branch != 0) {
      lheparticles_id_branch->GetEntry(index);
    } else {
      printf("branch lheparticles_id_branch does not exist!\n");
      exit(1);
    }
    lheparticles_id_isLoaded = true;
  }
  return *lheparticles_id_;
}
const float &CMS5::puppimet_met_UnclusteredEnDn() {
  if (not puppimet_met_UnclusteredEnDn_isLoaded) {
    if (puppimet_met_UnclusteredEnDn_branch != 0) {
      puppimet_met_UnclusteredEnDn_branch->GetEntry(index);
    } else {
      printf("branch puppimet_met_UnclusteredEnDn_branch does not exist!\n");
      exit(1);
    }
    puppimet_met_UnclusteredEnDn_isLoaded = true;
  }
  return puppimet_met_UnclusteredEnDn_;
}
const vector<float> &CMS5::electrons_pfIso04_sum_neutral_nofsr_old() {
  if (not electrons_pfIso04_sum_neutral_nofsr_old_isLoaded) {
    if (electrons_pfIso04_sum_neutral_nofsr_old_branch != 0) {
      electrons_pfIso04_sum_neutral_nofsr_old_branch->GetEntry(index);
    } else {
      printf("branch electrons_pfIso04_sum_neutral_nofsr_old_branch does not exist!\n");
      exit(1);
    }
    electrons_pfIso04_sum_neutral_nofsr_old_isLoaded = true;
  }
  return *electrons_pfIso04_sum_neutral_nofsr_old_;
}
const vector<bool> &CMS5::electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ() {
  if (not electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_isLoaded) {
    if (electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_branch != 0) {
      electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_branch does not exist!\n");
      exit(1);
    }
    electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_isLoaded = true;
  }
  return *electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_;
}
const vector<float> &CMS5::electrons_scale_smear_corr_smear_totalUp() {
  if (not electrons_scale_smear_corr_smear_totalUp_isLoaded) {
    if (electrons_scale_smear_corr_smear_totalUp_branch != 0) {
      electrons_scale_smear_corr_smear_totalUp_branch->GetEntry(index);
    } else {
      printf("branch electrons_scale_smear_corr_smear_totalUp_branch does not exist!\n");
      exit(1);
    }
    electrons_scale_smear_corr_smear_totalUp_isLoaded = true;
  }
  return *electrons_scale_smear_corr_smear_totalUp_;
}
const vector<float> &CMS5::isotracks_mass() {
  if (not isotracks_mass_isLoaded) {
    if (isotracks_mass_branch != 0) {
      isotracks_mass_branch->GetEntry(index);
    } else {
      printf("branch isotracks_mass_branch does not exist!\n");
      exit(1);
    }
    isotracks_mass_isLoaded = true;
  }
  return *isotracks_mass_;
}
const vector<bool> &CMS5::triggers_passTrigger() {
  if (not triggers_passTrigger_isLoaded) {
    if (triggers_passTrigger_branch != 0) {
      triggers_passTrigger_branch->GetEntry(index);
    } else {
      printf("branch triggers_passTrigger_branch does not exist!\n");
      exit(1);
    }
    triggers_passTrigger_isLoaded = true;
  }
  return *triggers_passTrigger_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM_;
}
const float &CMS5::pfmet_metPhi_Raw() {
  if (not pfmet_metPhi_Raw_isLoaded) {
    if (pfmet_metPhi_Raw_branch != 0) {
      pfmet_metPhi_Raw_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metPhi_Raw_branch does not exist!\n");
      exit(1);
    }
    pfmet_metPhi_Raw_isLoaded = true;
  }
  return pfmet_metPhi_Raw_;
}
const float &CMS5::LHEweight_PDFVariation_Up_NNPDF30() {
  if (not LHEweight_PDFVariation_Up_NNPDF30_isLoaded) {
    if (LHEweight_PDFVariation_Up_NNPDF30_branch != 0) {
      LHEweight_PDFVariation_Up_NNPDF30_branch->GetEntry(index);
    } else {
      printf("branch LHEweight_PDFVariation_Up_NNPDF30_branch does not exist!\n");
      exit(1);
    }
    LHEweight_PDFVariation_Up_NNPDF30_isLoaded = true;
  }
  return LHEweight_PDFVariation_Up_NNPDF30_;
}
const vector<float> &CMS5::electrons_pfIso03_sum_neutral_nofsr_old() {
  if (not electrons_pfIso03_sum_neutral_nofsr_old_isLoaded) {
    if (electrons_pfIso03_sum_neutral_nofsr_old_branch != 0) {
      electrons_pfIso03_sum_neutral_nofsr_old_branch->GetEntry(index);
    } else {
      printf("branch electrons_pfIso03_sum_neutral_nofsr_old_branch does not exist!\n");
      exit(1);
    }
    electrons_pfIso03_sum_neutral_nofsr_old_isLoaded = true;
  }
  return *electrons_pfIso03_sum_neutral_nofsr_old_;
}
const vector<float> &CMS5::photons_pfEMIso_EAcorr() {
  if (not photons_pfEMIso_EAcorr_isLoaded) {
    if (photons_pfEMIso_EAcorr_branch != 0) {
      photons_pfEMIso_EAcorr_branch->GetEntry(index);
    } else {
      printf("branch photons_pfEMIso_EAcorr_branch does not exist!\n");
      exit(1);
    }
    photons_pfEMIso_EAcorr_isLoaded = true;
  }
  return *photons_pfEMIso_EAcorr_;
}
const float &CMS5::p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM() {
  if (not p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_isLoaded) {
    if (p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_branch != 0) {
      p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM_;
}
const vector<float> &CMS5::ak8jets_JERUp() {
  if (not ak8jets_JERUp_isLoaded) {
    if (ak8jets_JERUp_branch != 0) {
      ak8jets_JERUp_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_JERUp_branch does not exist!\n");
      exit(1);
    }
    ak8jets_JERUp_isLoaded = true;
  }
  return *ak8jets_JERUp_;
}
const float &CMS5::p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM() {
  if (not p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_isLoaded) {
    if (p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_branch != 0) {
      p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_isLoaded = true;
  }
  return p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM_;
}
const bool &CMS5::metfilter_muonBadTrackFilter() {
  if (not metfilter_muonBadTrackFilter_isLoaded) {
    if (metfilter_muonBadTrackFilter_branch != 0) {
      metfilter_muonBadTrackFilter_branch->GetEntry(index);
    } else {
      printf("branch metfilter_muonBadTrackFilter_branch does not exist!\n");
      exit(1);
    }
    metfilter_muonBadTrackFilter_isLoaded = true;
  }
  return metfilter_muonBadTrackFilter_;
}
const vector<float> &CMS5::isotracks_miniIso_em() {
  if (not isotracks_miniIso_em_isLoaded) {
    if (isotracks_miniIso_em_branch != 0) {
      isotracks_miniIso_em_branch->GetEntry(index);
    } else {
      printf("branch isotracks_miniIso_em_branch does not exist!\n");
      exit(1);
    }
    isotracks_miniIso_em_isLoaded = true;
  }
  return *isotracks_miniIso_em_;
}
const vector<float> &CMS5::ak4jets_deepCSVprobb() {
  if (not ak4jets_deepCSVprobb_isLoaded) {
    if (ak4jets_deepCSVprobb_branch != 0) {
      ak4jets_deepCSVprobb_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_deepCSVprobb_branch does not exist!\n");
      exit(1);
    }
    ak4jets_deepCSVprobb_isLoaded = true;
  }
  return *ak4jets_deepCSVprobb_;
}
const vector<float> &CMS5::ak4jets_deepCSVprobc() {
  if (not ak4jets_deepCSVprobc_isLoaded) {
    if (ak4jets_deepCSVprobc_branch != 0) {
      ak4jets_deepCSVprobc_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_deepCSVprobc_branch does not exist!\n");
      exit(1);
    }
    ak4jets_deepCSVprobc_isLoaded = true;
  }
  return *ak4jets_deepCSVprobc_;
}
const vector<float> &CMS5::photons_scale_smear_corr_smear_totalDn() {
  if (not photons_scale_smear_corr_smear_totalDn_isLoaded) {
    if (photons_scale_smear_corr_smear_totalDn_branch != 0) {
      photons_scale_smear_corr_smear_totalDn_branch->GetEntry(index);
    } else {
      printf("branch photons_scale_smear_corr_smear_totalDn_branch does not exist!\n");
      exit(1);
    }
    photons_scale_smear_corr_smear_totalDn_isLoaded = true;
  }
  return *photons_scale_smear_corr_smear_totalDn_;
}
const float &CMS5::p_Gen_JJEW_BSI_ghv1_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1_1_MCFM_;
}
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_MCFM_;
}

void CMS5::progress( int nEventsTotal, int nEventsChain ){
  int period = 1000;
  if(nEventsTotal%1000 == 0) {
    if (isatty(1)) {
      if( ( nEventsChain - nEventsTotal ) > period ){
        float frac = (float)nEventsTotal/(nEventsChain*0.01);
        printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", frac);
        fflush(stdout);
      }
      else {
        printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", 100.);
        cout << endl;
      }
    }
  }
}
namespace tas {
  const vector<char> &ak8jets_partonFlavour() { return cms5.ak8jets_partonFlavour(); }
  const vector<int> &triggerObjects_type() { return cms5.triggerObjects_type(); }
  const vector<float> &electrons_eta() { return cms5.electrons_eta(); }
  const float &KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp() { return cms5.KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaUp(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza4_1_MCFM(); }
  const vector<vector<unsigned int> > &triggerObjects_associatedTriggers() { return cms5.triggerObjects_associatedTriggers(); }
  const vector<float> &electrons_pfIso04_sum_charged_nofsr() { return cms5.electrons_pfIso04_sum_charged_nofsr(); }
  const vector<float> &lheparticles_pz() { return cms5.lheparticles_pz(); }
  const vector<bool> &ak4jets_pass_tightId() { return cms5.ak4jets_pass_tightId(); }
  const vector<float> &lheparticles_py() { return cms5.lheparticles_py(); }
  const vector<unsigned short> &electrons_id_cutBased_Fall17V2_Veto_Bits() { return cms5.electrons_id_cutBased_Fall17V2_Veto_Bits(); }
  const float &pfmet_metPhi_Nominal() { return cms5.pfmet_metPhi_Nominal(); }
  const float &xsec() { return cms5.xsec(); }
  const float &pfmet_met_UnclusteredEnDn() { return cms5.pfmet_met_UnclusteredEnDn(); }
  const float &p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_ghg2_1_ghg4_1_ghz1_1_MCFM(); }
  const vector<float> &electrons_miniIso_comb_nofsr_uncorrected() { return cms5.electrons_miniIso_comb_nofsr_uncorrected(); }
  const float &p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTildeBot_1_ghz1_1_MCFM(); }
  const float &p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTopBot_1_ghza2_1_MCFM(); }
  const vector<bool> &isotracks_is_pfCand() { return cms5.isotracks_is_pfCand(); }
  const bool &metfilter_CSCTightHaloFilter() { return cms5.metfilter_CSCTightHaloFilter(); }
  const vector<float> &muons_pt() { return cms5.muons_pt(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose() { return cms5.electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose(); }
  const vector<float> &photons_scale_smear_corr() { return cms5.photons_scale_smear_corr(); }
  const float &LHEweight_AsMZ_Dn_default() { return cms5.LHEweight_AsMZ_Dn_default(); }
  const vector<float> &electrons_mass() { return cms5.electrons_mass(); }
  const float &pfmet_metPhi_JECDn() { return cms5.pfmet_metPhi_JECDn(); }
  const vector<float> &ak4jets_JERDn() { return cms5.ak4jets_JERDn(); }
  const float &xsec_lhe() { return cms5.xsec_lhe(); }
  const vector<char> &ak4jets_partonFlavour() { return cms5.ak4jets_partonFlavour(); }
  const vector<float> &ak4jets_eta() { return cms5.ak4jets_eta(); }
  const vector<float> &ak4jets_totalMultiplicity() { return cms5.ak4jets_totalMultiplicity(); }
  const float &puppimet_metPhi_JECDn() { return cms5.puppimet_metPhi_JECDn(); }
  const vector<float> &electrons_pt() { return cms5.electrons_pt(); }
  const float &PythiaWeight_fsr_muR0p5() { return cms5.PythiaWeight_fsr_muR0p5(); }
  const vector<float> &ak8jets_mass() { return cms5.ak8jets_mass(); }
  const float &KFactor_QCD_NNLO_ggZZ_Sig_AsUp() { return cms5.KFactor_QCD_NNLO_ggZZ_Sig_AsUp(); }
  const vector<float> &muons_pull_dxdz_noArb_DT() { return cms5.muons_pull_dxdz_noArb_DT(); }
  const vector<float> &ak8jets_totalMultiplicity() { return cms5.ak8jets_totalMultiplicity(); }
  const vector<bool> &ak8jets_pass_looseId() { return cms5.ak8jets_pass_looseId(); }
  const short &n_shower_gluons_to_bottom() { return cms5.n_shower_gluons_to_bottom(); }
  const float &p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaBot_1_ghg4_1_ghz1_1_MCFM(); }
  const vector<bool> &isotracks_fromPV() { return cms5.isotracks_fromPV(); }
  const vector<float> &ak4jets_pt() { return cms5.ak4jets_pt(); }
  const float &p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM(); }
  const vector<float> &lheparticles_E() { return cms5.lheparticles_E(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_NoIso_pass_wp80() { return cms5.electrons_id_MVA_Fall17V2_NoIso_pass_wp80(); }
  const vector<float> &isotracks_pfIso03_comb_nofsr() { return cms5.isotracks_pfIso03_comb_nofsr(); }
  const vector<bool> &vtxs_is_fake() { return cms5.vtxs_is_fake(); }
  const unsigned int &LuminosityBlock() { return cms5.LuminosityBlock(); }
  const vector<float> &ak8jets_JERDn() { return cms5.ak8jets_JERDn(); }
  const float &qscale() { return cms5.qscale(); }
  const float &p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_ghg4_1_ghz1_1_MCFM(); }
  const vector<float> &isotracks_miniIso_comb_nofsr() { return cms5.isotracks_miniIso_comb_nofsr(); }
  const vector<float> &muons_pfIso03_sum_charged_nofsr() { return cms5.muons_pfIso03_sum_charged_nofsr(); }
  const float &p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTildeBot_1_ghg4_1_ghz1_1_MCFM(); }
  const vector<unsigned char> &electrons_id_MVA_HZZRun2Legacy_Iso_Cat() { return cms5.electrons_id_MVA_HZZRun2Legacy_Iso_Cat(); }
  const vector<float> &isotracks_pfIso03_em() { return cms5.isotracks_pfIso03_em(); }
  const float &p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaBot_1_ghz1_1_MCFM(); }
  const vector<bool> &vtxs_is_good() { return cms5.vtxs_is_good(); }
  const vector<float> &electrons_scale_smear_corr_smear_totalDn() { return cms5.electrons_scale_smear_corr_smear_totalDn(); }
  const vector<float> &muons_pfIso04_comb_nofsr() { return cms5.muons_pfIso04_comb_nofsr(); }
  const float &LHECandMass() { return cms5.LHECandMass(); }
  const vector<vector<unsigned int> > &triggerObjects_passedTriggers() { return cms5.triggerObjects_passedTriggers(); }
  const bool &metfilter_goodVertices() { return cms5.metfilter_goodVertices(); }
  const vector<float> &muons_pfIso04_sum_charged_nofsr() { return cms5.muons_pfIso04_sum_charged_nofsr(); }
  const float &pfmet_met_JECUp() { return cms5.pfmet_met_JECUp(); }
  const vector<float> &ak4jets_JECDn() { return cms5.ak4jets_JECDn(); }
  const vector<float> &electrons_pfIso03_comb_nofsr() { return cms5.electrons_pfIso03_comb_nofsr(); }
  const vector<float> &photons_pfIso_comb() { return cms5.photons_pfIso_comb(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghza1prime2_1E4_MCFM(); }
  const bool &metfilter_trkPOG_toomanystripclus53X() { return cms5.metfilter_trkPOG_toomanystripclus53X(); }
  const vector<float> &triggerObjects_phi() { return cms5.triggerObjects_phi(); }
  const vector<float> &isotracks_pt() { return cms5.isotracks_pt(); }
  const vector<int> &lheparticles_mother1_index() { return cms5.lheparticles_mother1_index(); }
  const float &p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTopBot_1_ghza4_1_MCFM(); }
  const float &pfmet_calo_met() { return cms5.pfmet_calo_met(); }
  const vector<float> &muons_pfIso03_comb_nofsr() { return cms5.muons_pfIso03_comb_nofsr(); }
  const vector<float> &isotracks_miniIso_db() { return cms5.isotracks_miniIso_db(); }
  const bool &passCommonSkim() { return cms5.passCommonSkim(); }
  const vector<float> &muons_scale_smear_pt_corr_scale_totalUp() { return cms5.muons_scale_smear_pt_corr_scale_totalUp(); }
  const vector<bool> &isotracks_is_tightTrack() { return cms5.isotracks_is_tightTrack(); }
  const vector<unsigned int> &photons_id_cutBased_Fall17V2_Loose_Bits() { return cms5.photons_id_cutBased_Fall17V2_Loose_Bits(); }
  const vector<float> &ak4jets_deepCSVprobbb() { return cms5.ak4jets_deepCSVprobbb(); }
  const float &pfmet_metShift_px_JERNominal() { return cms5.pfmet_metShift_px_JERNominal(); }
  const bool &metfilter_trkPOG_logErrorTooManyClusters() { return cms5.metfilter_trkPOG_logErrorTooManyClusters(); }
  const float &pfmet_met_UnclusteredEnUp() { return cms5.pfmet_met_UnclusteredEnUp(); }
  const float &puppimet_met_UnclusteredEnUp() { return cms5.puppimet_met_UnclusteredEnUp(); }
  const float &puppimet_metPhi_UnclusteredEnUp() { return cms5.puppimet_metPhi_UnclusteredEnUp(); }
  const float &p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTop_1_ghz1_1_MCFM(); }
  const vector<bool> &isotracks_is_highPurityTrack() { return cms5.isotracks_is_highPurityTrack(); }
  const float &LHEweight_AsMZ_Up_NNPDF30() { return cms5.LHEweight_AsMZ_Up_NNPDF30(); }
  const vector<string> &triggers_name() { return cms5.triggers_name(); }
  const float &puppimet_met_JECDn() { return cms5.puppimet_met_JECDn(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_Iso_pass_wp80() { return cms5.electrons_id_MVA_Fall17V2_Iso_pass_wp80(); }
  const vector<float> &photons_mass() { return cms5.photons_mass(); }
  const vector<unsigned short> &electrons_id_cutBased_Fall17V2_Loose_Bits() { return cms5.electrons_id_cutBased_Fall17V2_Loose_Bits(); }
  const vector<float> &electrons_id_MVA_HZZRun2Legacy_Iso_Val() { return cms5.electrons_id_MVA_HZZRun2Legacy_Iso_Val(); }
  const vector<float> &photons_pt() { return cms5.photons_pt(); }
  const vector<bool> &ak8jets_pass_tightId() { return cms5.ak8jets_pass_tightId(); }
  const float &KFactor_QCD_NNLO_ggZZ_Sig_Nominal() { return cms5.KFactor_QCD_NNLO_ggZZ_Sig_Nominal(); }
  const bool &metfilter_CSCTightHaloTrkMuUnvetoFilter() { return cms5.metfilter_CSCTightHaloTrkMuUnvetoFilter(); }
  const vector<float> &electrons_miniIso_comb_nofsr() { return cms5.electrons_miniIso_comb_nofsr(); }
  const vector<float> &muons_pull_dxdz_noArb_CSC() { return cms5.muons_pull_dxdz_noArb_CSC(); }
  const bool &metfilter_globalTightHalo2016Filter() { return cms5.metfilter_globalTightHalo2016Filter(); }
  const float &p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_BSI_ghg2_1_ghz1_1_MCFM(); }
  const vector<bool> &ak8jets_pass_leptonVetoId() { return cms5.ak8jets_pass_leptonVetoId(); }
  const vector<bool> &ak4jets_pass_looseId() { return cms5.ak4jets_pass_looseId(); }
  const vector<float> &triggerObjects_pt() { return cms5.triggerObjects_pt(); }
  const bool &metfilter_globalSuperTightHalo2016Filter() { return cms5.metfilter_globalSuperTightHalo2016Filter(); }
  const vector<float> &muons_dxy_bestTrack_firstPV() { return cms5.muons_dxy_bestTrack_firstPV(); }
  const bool &metfilter_HcalStripHaloFilter() { return cms5.metfilter_HcalStripHaloFilter(); }
  const float &p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTop_1_ghg2_1_ghz1_1_MCFM(); }
  const vector<float> &electrons_miniIso_sum_neutral_nofsr_old() { return cms5.electrons_miniIso_sum_neutral_nofsr_old(); }
  const vector<float> &photons_scale_smear_corr_scale_totalUp() { return cms5.photons_scale_smear_corr_scale_totalUp(); }
  const float &p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTop_1_kappaTildeBot_1_ghz1_1_MCFM(); }
  const vector<float> &electrons_scale_smear_corr_scale_totalUp() { return cms5.electrons_scale_smear_corr_scale_totalUp(); }
  const bool &metfilter_trkPOG_manystripclus53X() { return cms5.metfilter_trkPOG_manystripclus53X(); }
  const vector<int> &isotracks_id() { return cms5.isotracks_id(); }
  const vector<float> &ak4jets_JECNominal() { return cms5.ak4jets_JECNominal(); }
  const float &LHEweight_PDFVariation_Dn_NNPDF30() { return cms5.LHEweight_PDFVariation_Dn_NNPDF30(); }
  const vector<int> &triggers_L1prescale() { return cms5.triggers_L1prescale(); }
  const vector<float> &isotracks_dxy() { return cms5.isotracks_dxy(); }
  const float &pfmet_met_Raw() { return cms5.pfmet_met_Raw(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_Iso_pass_wp90() { return cms5.electrons_id_MVA_Fall17V2_Iso_pass_wp90(); }
  const float &LHEweight_QCDscale_muR0p5_muF0p5() { return cms5.LHEweight_QCDscale_muR0p5_muF0p5(); }
  const bool &metfilter_EcalDeadCellBoundaryEnergyFilter() { return cms5.metfilter_EcalDeadCellBoundaryEnergyFilter(); }
  const float &pfmet_metPhi_JECUp() { return cms5.pfmet_metPhi_JECUp(); }
  const vector<float> &muons_scale_smear_pt_corr_smear_totalUp() { return cms5.muons_scale_smear_pt_corr_smear_totalUp(); }
  const vector<float> &ak8jets_phi() { return cms5.ak8jets_phi(); }
  const float &pfmet_met_JECDn() { return cms5.pfmet_met_JECDn(); }
  const vector<bool> &photons_hasPixelSeed() { return cms5.photons_hasPixelSeed(); }
  const float &pfmet_metShift_py_JERDn() { return cms5.pfmet_metShift_py_JERDn(); }
  const float &puppimet_metPhi_JECUp() { return cms5.puppimet_metPhi_JECUp(); }
  const vector<unsigned int> &photons_id_MVA_Fall17V2_Cat() { return cms5.photons_id_MVA_Fall17V2_Cat(); }
  const vector<float> &ak8jets_JECDn() { return cms5.ak8jets_JECDn(); }
  const vector<float> &fsrcands_eta() { return cms5.fsrcands_eta(); }
  const vector<bool> &ak4jets_pass_puId() { return cms5.ak4jets_pass_puId(); }
  const float &alphaS() { return cms5.alphaS(); }
  const vector<bool> &electrons_conv_vtx_flag() { return cms5.electrons_conv_vtx_flag(); }
  const vector<float> &ak4jets_JECUp() { return cms5.ak4jets_JECUp(); }
  const vector<vector<unsigned int> > &fsrcands_fsrMatch_muon_index_list() { return cms5.fsrcands_fsrMatch_muon_index_list(); }
  const vector<float> &muons_pfIso03_sum_neutral_nofsr() { return cms5.muons_pfIso03_sum_neutral_nofsr(); }
  const float &p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_ghg2_1_kappaTildeTop_1_ghz1_1_MCFM(); }
  const float &LHEweight_QCDscale_muR1_muF0p5() { return cms5.LHEweight_QCDscale_muR1_muF0p5(); }
  const vector<float> &muons_dz_bestTrack_firstPV() { return cms5.muons_dz_bestTrack_firstPV(); }
  const float &pfmet_sumEt_Nominal() { return cms5.pfmet_sumEt_Nominal(); }
  const vector<float> &ak4jets_pt_resolution() { return cms5.ak4jets_pt_resolution(); }
  const vector<float> &electrons_scale_smear_corr() { return cms5.electrons_scale_smear_corr(); }
  const vector<float> &isotracks_pfIso03_db() { return cms5.isotracks_pfIso03_db(); }
  const bool &metfilter_ecalBadCalibFilterUpdated() { return cms5.metfilter_ecalBadCalibFilterUpdated(); }
  const vector<short> &lheparticles_status() { return cms5.lheparticles_status(); }
  const float &LHEweight_QCDscale_muR2_muF0p5() { return cms5.LHEweight_QCDscale_muR2_muF0p5(); }
  const vector<float> &isotracks_dzerr() { return cms5.isotracks_dzerr(); }
  const vector<float> &ak8jets_eta() { return cms5.ak8jets_eta(); }
  const vector<float> &ak4jets_JECL1Nominal() { return cms5.ak4jets_JECL1Nominal(); }
  const float &p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTopBot_1_gha4_1_MCFM(); }
  const float &p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_BSI_ghg4_1_ghz1_1_MCFM(); }
  const vector<float> &lheparticles_px() { return cms5.lheparticles_px(); }
  const float &pfmet_met_Nominal() { return cms5.pfmet_met_Nominal(); }
  const vector<float> &ak4jets_deepFlavourproblepb() { return cms5.ak4jets_deepFlavourproblepb(); }
  const vector<float> &photons_pfNeutralHadronIso_EAcorr() { return cms5.photons_pfNeutralHadronIso_EAcorr(); }
  const float &p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaBot_1_kappaTildeBot_1_ghz1_1_MCFM(); }
  const vector<float> &vtxs_pos_y() { return cms5.vtxs_pos_y(); }
  const vector<float> &vtxs_pos_x() { return cms5.vtxs_pos_x(); }
  const vector<float> &vtxs_pos_z() { return cms5.vtxs_pos_z(); }
  const vector<float> &vtxs_pos_t() { return cms5.vtxs_pos_t(); }
  const float &p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_ghg2_1_ghz1_1_MCFM(); }
  const float &puppimet_metPhi_UnclusteredEnDn() { return cms5.puppimet_metPhi_UnclusteredEnDn(); }
  const vector<float> &ak4jets_deepCSVprobudsg() { return cms5.ak4jets_deepCSVprobudsg(); }
  const vector<int> &electrons_n_missing_inner_hits() { return cms5.electrons_n_missing_inner_hits(); }
  const float &xsecerr() { return cms5.xsecerr(); }
  const vector<bool> &photons_id_MVA_Fall17V2_pass_wp80() { return cms5.photons_id_MVA_Fall17V2_pass_wp80(); }
  const float &LHEweight_QCDscale_muR2_muF2() { return cms5.LHEweight_QCDscale_muR2_muF2(); }
  const float &LHEweight_QCDscale_muR2_muF1() { return cms5.LHEweight_QCDscale_muR2_muF1(); }
  const vector<float> &muons_mass() { return cms5.muons_mass(); }
  const vector<float> &muons_miniIso_sum_neutral_nofsr() { return cms5.muons_miniIso_sum_neutral_nofsr(); }
  const vector<float> &isotracks_phi() { return cms5.isotracks_phi(); }
  const vector<bool> &photons_passElectronVeto() { return cms5.photons_passElectronVeto(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1prime2_1E4_MCFM(); }
  const unsigned long long &EventNumber() { return cms5.EventNumber(); }
  const float &p_Gen_GG_BKG_MCFM() { return cms5.p_Gen_GG_BKG_MCFM(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz4_1_MCFM(); }
  const vector<float> &ak4jets_JERNominal() { return cms5.ak4jets_JERNominal(); }
  const vector<float> &muons_scale_smear_pt_corr_scale_totalDn() { return cms5.muons_scale_smear_pt_corr_scale_totalDn(); }
  const vector<float> &ak8jets_JERNominal() { return cms5.ak8jets_JERNominal(); }
  const vector<char> &ak8jets_hadronFlavour() { return cms5.ak8jets_hadronFlavour(); }
  const unsigned int &vtxs_nvtxs_good() { return cms5.vtxs_nvtxs_good(); }
  const vector<float> &ak4jets_mucands_sump4_py() { return cms5.ak4jets_mucands_sump4_py(); }
  const vector<float> &ak4jets_mucands_sump4_px() { return cms5.ak4jets_mucands_sump4_px(); }
  const float &pfmet_metShift_py_JERNominal() { return cms5.pfmet_metShift_py_JERNominal(); }
  const float &p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTildeBot_1_ghz1_1_MCFM(); }
  const vector<float> &photons_scale_smear_corr_scale_totalDn() { return cms5.photons_scale_smear_corr_scale_totalDn(); }
  const float &pfmet_metSignificance() { return cms5.pfmet_metSignificance(); }
  const float &puppimet_met_Nominal() { return cms5.puppimet_met_Nominal(); }
  const vector<float> &isotracks_miniIso_nh() { return cms5.isotracks_miniIso_nh(); }
  const vector<int> &triggers_HLTprescale() { return cms5.triggers_HLTprescale(); }
  const vector<float> &fsrcands_mass() { return cms5.fsrcands_mass(); }
  const bool &metfilter_BadPFMuonFilter() { return cms5.metfilter_BadPFMuonFilter(); }
  const float &KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn() { return cms5.KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleDn(); }
  const vector<float> &electrons_pfIso03_sum_neutral_nofsr() { return cms5.electrons_pfIso03_sum_neutral_nofsr(); }
  const vector<char> &electrons_charge() { return cms5.electrons_charge(); }
  const bool &metfilter_trkPOGFilters() { return cms5.metfilter_trkPOGFilters(); }
  const float &PythiaWeight_fsr_muRsqrt2() { return cms5.PythiaWeight_fsr_muRsqrt2(); }
  const float &PythiaWeight_isr_muR0p5() { return cms5.PythiaWeight_isr_muR0p5(); }
  const float &genmet_metPhi() { return cms5.genmet_metPhi(); }
  const int &n_vtxs_PU() { return cms5.n_vtxs_PU(); }
  const float &PythiaWeight_isr_muRoneoversqrt2() { return cms5.PythiaWeight_isr_muRoneoversqrt2(); }
  const vector<unsigned char> &electrons_id_MVA_Fall17V2_Iso_Cat() { return cms5.electrons_id_MVA_Fall17V2_Iso_Cat(); }
  const float &p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaBot_1_ghz1_1_MCFM(); }
  const vector<float> &photons_eta() { return cms5.photons_eta(); }
  const vector<float> &triggerObjects_eta() { return cms5.triggerObjects_eta(); }
  const float &pfmet_metShift_py_JERUp() { return cms5.pfmet_metShift_py_JERUp(); }
  const vector<unsigned int> &photons_id_cutBased_Fall17V2_Tight_Bits() { return cms5.photons_id_cutBased_Fall17V2_Tight_Bits(); }
  const vector<float> &ak8jets_axis1() { return cms5.ak8jets_axis1(); }
  const vector<float> &ak8jets_axis2() { return cms5.ak8jets_axis2(); }
  const float &LHEweight_AsMZ_Dn_NNPDF30() { return cms5.LHEweight_AsMZ_Dn_NNPDF30(); }
  const float &pThat() { return cms5.pThat(); }
  const float &LHEweight_QCDscale_muR0p5_muF2() { return cms5.LHEweight_QCDscale_muR0p5_muF2(); }
  const float &KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn() { return cms5.KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleDn(); }
  const vector<float> &isotracks_miniIso_ch() { return cms5.isotracks_miniIso_ch(); }
  const vector<float> &electrons_scale_smear_corr_scale_totalDn() { return cms5.electrons_scale_smear_corr_scale_totalDn(); }
  const vector<float> &electrons_pfIso03_sum_charged_nofsr() { return cms5.electrons_pfIso03_sum_charged_nofsr(); }
  const bool &metfilter_trackingFailureFilter() { return cms5.metfilter_trackingFailureFilter(); }
  const vector<unsigned long> &ak8jets_n_softdrop_subjets() { return cms5.ak8jets_n_softdrop_subjets(); }
  const float &p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_ghg2_1_kappaTildeBot_1_ghz1_1_MCFM(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_gha4_1_MCFM(); }
  const float &puppimet_sumEt_Raw() { return cms5.puppimet_sumEt_Raw(); }
  const float &KFactor_QCD_ggZZ_Sig_arg() { return cms5.KFactor_QCD_ggZZ_Sig_arg(); }
  const vector<float> &photons_phi() { return cms5.photons_phi(); }
  const float &pfmet_metPhi_UnclusteredEnUp() { return cms5.pfmet_metPhi_UnclusteredEnUp(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghza4_1_MCFM(); }
  const vector<float> &ak8jets_pt() { return cms5.ak8jets_pt(); }
  const vector<float> &ak8jets_JECUp() { return cms5.ak8jets_JECUp(); }
  const vector<float> &muons_scale_smear_pt_corr() { return cms5.muons_scale_smear_pt_corr(); }
  const vector<float> &vtxs_pos_dy() { return cms5.vtxs_pos_dy(); }
  const vector<float> &vtxs_pos_dt() { return cms5.vtxs_pos_dt(); }
  const vector<float> &vtxs_pos_dz() { return cms5.vtxs_pos_dz(); }
  const vector<float> &vtxs_pos_dx() { return cms5.vtxs_pos_dx(); }
  const float &p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTildeTop_1_ghz1_1_MCFM(); }
  const float &puppimet_met_Raw() { return cms5.puppimet_met_Raw(); }
  const vector<float> &ak4jets_mass() { return cms5.ak4jets_mass(); }
  const vector<float> &vtxs_ndof() { return cms5.vtxs_ndof(); }
  const vector<float> &ak8jets_JECNominal() { return cms5.ak8jets_JECNominal(); }
  const float &puppimet_metSignificance() { return cms5.puppimet_metSignificance(); }
  const vector<float> &isotracks_dz() { return cms5.isotracks_dz(); }
  const bool &metfilter_chargedHadronTrackResolutionFilter() { return cms5.metfilter_chargedHadronTrackResolutionFilter(); }
  const bool &metfilter_EcalDeadCellTriggerPrimitiveFilter() { return cms5.metfilter_EcalDeadCellTriggerPrimitiveFilter(); }
  const float &p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM() { return cms5.p_Gen_GG_BSI_kappaTopBot_1_ghz1prime2_1E4_MCFM(); }
  const vector<float> &fsrcands_phi() { return cms5.fsrcands_phi(); }
  const float &PythiaWeight_isr_muR2() { return cms5.PythiaWeight_isr_muR2(); }
  const vector<float> &electrons_miniIso_comb_nofsr_old() { return cms5.electrons_miniIso_comb_nofsr_old(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz1prime2_1E4_MCFM(); }
  const vector<float> &muons_scale_smear_pt_corr_smear_totalDn() { return cms5.muons_scale_smear_pt_corr_smear_totalDn(); }
  const float &PythiaWeight_isr_muR4() { return cms5.PythiaWeight_isr_muR4(); }
  const vector<float> &ak8jets_pt_resolution() { return cms5.ak8jets_pt_resolution(); }
  const vector<float> &electrons_id_MVA_Fall17V2_Iso_Val() { return cms5.electrons_id_MVA_Fall17V2_Iso_Val(); }
  const bool &metfilter_hcalLaserEventFilter() { return cms5.metfilter_hcalLaserEventFilter(); }
  const float &KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp() { return cms5.KFactor_QCD_NNLO_ggZZ_Sig_PDFScaleUp(); }
  const vector<bool> &isotracks_is_lostTrack() { return cms5.isotracks_is_lostTrack(); }
  const vector<float> &electrons_pfIso04_comb_nofsr() { return cms5.electrons_pfIso04_comb_nofsr(); }
  const float &LHEweight_PDFVariation_Up_default() { return cms5.LHEweight_PDFVariation_Up_default(); }
  const vector<vector<unsigned int> > &fsrcands_fsrMatch_electron_index_list() { return cms5.fsrcands_fsrMatch_electron_index_list(); }
  const float &n_true_int() { return cms5.n_true_int(); }
  const unsigned int &RunNumber() { return cms5.RunNumber(); }
  const vector<unsigned short> &electrons_id_cutBased_Fall17V2_Tight_Bits() { return cms5.electrons_id_cutBased_Fall17V2_Tight_Bits(); }
  const vector<bool> &ak4jets_pass_leptonVetoId() { return cms5.ak4jets_pass_leptonVetoId(); }
  const vector<float> &electrons_pfIso04_comb_nofsr_old() { return cms5.electrons_pfIso04_comb_nofsr_old(); }
  const vector<float> &isotracks_dxyerr() { return cms5.isotracks_dxyerr(); }
  const float &puppimet_metPhi_Raw() { return cms5.puppimet_metPhi_Raw(); }
  const float &PythiaWeight_fsr_muRoneoversqrt2() { return cms5.PythiaWeight_fsr_muRoneoversqrt2(); }
  const vector<float> &ak4jets_ptDistribution() { return cms5.ak4jets_ptDistribution(); }
  const vector<float> &isotracks_eta() { return cms5.isotracks_eta(); }
  const float &p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM() { return cms5.p_Gen_GG_BSI_kappaTopBot_1_ghza1prime2_1E4_MCFM(); }
  const vector<bool> &photons_id_MVA_Fall17V2_pass_wp90() { return cms5.photons_id_MVA_Fall17V2_pass_wp90(); }
  const vector<vector<unsigned int> > &fsrcands_photonVeto_index_list() { return cms5.fsrcands_photonVeto_index_list(); }
  const bool &metfilter_eeBadScFilter() { return cms5.metfilter_eeBadScFilter(); }
  const float &puppimet_metPhi_Nominal() { return cms5.puppimet_metPhi_Nominal(); }
  const vector<float> &isotracks_pfIso03_nh() { return cms5.isotracks_pfIso03_nh(); }
  const float &p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTop_1_ghz1_1_MCFM(); }
  const vector<float> &photons_scale_smear_corr_smear_totalUp() { return cms5.photons_scale_smear_corr_smear_totalUp(); }
  const bool &metfilter_ecalBadCalibFilter() { return cms5.metfilter_ecalBadCalibFilter(); }
  const vector<bool> &electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ() { return cms5.electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ(); }
  const vector<float> &electrons_miniIso_sum_neutral_nofsr() { return cms5.electrons_miniIso_sum_neutral_nofsr(); }
  const vector<char> &muons_charge() { return cms5.muons_charge(); }
  const float &pfmet_metShift_px_JERUp() { return cms5.pfmet_metShift_px_JERUp(); }
  const float &event_rho() { return cms5.event_rho(); }
  const vector<char> &ak4jets_hadronFlavour() { return cms5.ak4jets_hadronFlavour(); }
  const float &KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp() { return cms5.KFactor_QCD_NNLO_ggZZ_Sig_QCDScaleUp(); }
  const float &puppimet_sumEt_Nominal() { return cms5.puppimet_sumEt_Nominal(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_NoIso_pass_wp90() { return cms5.electrons_id_MVA_Fall17V2_NoIso_pass_wp90(); }
  const vector<unsigned char> &electrons_id_MVA_Fall17V2_NoIso_Cat() { return cms5.electrons_id_MVA_Fall17V2_NoIso_Cat(); }
  const float &pfmet_sumEt_Raw() { return cms5.pfmet_sumEt_Raw(); }
  const vector<float> &photons_etaSC() { return cms5.photons_etaSC(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghz2_1_MCFM(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha4_1_MCFM(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_gha2_1_MCFM(); }
  const float &genHEPMCweight_default() { return cms5.genHEPMCweight_default(); }
  const float &LHEweight_QCDscale_muR0p5_muF1() { return cms5.LHEweight_QCDscale_muR0p5_muF1(); }
  const vector<float> &ak8jets_ptDistribution() { return cms5.ak8jets_ptDistribution(); }
  const vector<float> &muons_pfIso04_sum_neutral_nofsr() { return cms5.muons_pfIso04_sum_neutral_nofsr(); }
  const float &KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn() { return cms5.KFactor_QCD_NNLO_ggZZ_Sig_PDFReplicaDn(); }
  const vector<int> &lheparticles_mother0_index() { return cms5.lheparticles_mother0_index(); }
  const vector<char> &isotracks_charge() { return cms5.isotracks_charge(); }
  const float &p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTopBot_1_ghz2_1_MCFM(); }
  const bool &metfilter_METFilters() { return cms5.metfilter_METFilters(); }
  const float &pfmet_calo_metPhi() { return cms5.pfmet_calo_metPhi(); }
  const float &p_Gen_CPStoBWPropRewgt() { return cms5.p_Gen_CPStoBWPropRewgt(); }
  const float &puppimet_met_over_sqrtSumEt() { return cms5.puppimet_met_over_sqrtSumEt(); }
  const vector<float> &muons_phi() { return cms5.muons_phi(); }
  const float &genHEPMCweight_NNPDF30() { return cms5.genHEPMCweight_NNPDF30(); }
  const float &p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTildeTop_1_ghz1_1_MCFM(); }
  const vector<unsigned short> &electrons_id_cutBased_Fall17V2_Medium_Bits() { return cms5.electrons_id_cutBased_Fall17V2_Medium_Bits(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza1prime2_1E4_MCFM(); }
  const bool &metfilter_HBHENoiseFilter() { return cms5.metfilter_HBHENoiseFilter(); }
  const vector<float> &ak4jets_deepFlavourprobc() { return cms5.ak4jets_deepFlavourprobc(); }
  const vector<float> &ak4jets_deepFlavourprobb() { return cms5.ak4jets_deepFlavourprobb(); }
  const vector<float> &ak4jets_deepFlavourprobg() { return cms5.ak4jets_deepFlavourprobg(); }
  const float &LHEweight_QCDscale_muR1_muF2() { return cms5.LHEweight_QCDscale_muR1_muF2(); }
  const float &LHEweight_QCDscale_muR1_muF1() { return cms5.LHEweight_QCDscale_muR1_muF1(); }
  const bool &metfilter_BadChargedCandidateFilter() { return cms5.metfilter_BadChargedCandidateFilter(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_gha2_1_MCFM(); }
  const float &sumEt() { return cms5.sumEt(); }
  const unsigned int &vtxs_nvtxs() { return cms5.vtxs_nvtxs(); }
  const vector<float> &muons_miniIso_sum_charged_nofsr() { return cms5.muons_miniIso_sum_charged_nofsr(); }
  const vector<unsigned int> &muons_POG_selector_bits() { return cms5.muons_POG_selector_bits(); }
  const vector<float> &muons_miniIso_comb_nofsr() { return cms5.muons_miniIso_comb_nofsr(); }
  const vector<float> &photons_pfChargedHadronIso_EAcorr() { return cms5.photons_pfChargedHadronIso_EAcorr(); }
  const vector<float> &isotracks_pfIso03_ch() { return cms5.isotracks_pfIso03_ch(); }
  const vector<float> &electrons_phi() { return cms5.electrons_phi(); }
  const float &LHEweight_PDFVariation_Dn_default() { return cms5.LHEweight_PDFVariation_Dn_default(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM(); }
  const float &pfmet_metPhi_UnclusteredEnDn() { return cms5.pfmet_metPhi_UnclusteredEnDn(); }
  const vector<float> &ak4jets_phi() { return cms5.ak4jets_phi(); }
  const vector<unsigned int> &photons_id_cutBased_Fall17V2_Medium_Bits() { return cms5.photons_id_cutBased_Fall17V2_Medium_Bits(); }
  const float &p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaBot_1_kappaTildeTop_1_ghz1_1_MCFM(); }
  const vector<bool> &isotracks_lepOverlap() { return cms5.isotracks_lepOverlap(); }
  const float &p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTopBot_1_gha2_1_MCFM(); }
  const vector<float> &muons_eta() { return cms5.muons_eta(); }
  const vector<bool> &vtxs_is_valid() { return cms5.vtxs_is_valid(); }
  const float &p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTop_1_kappaTildeTop_1_ghz1_1_MCFM(); }
  const vector<float> &electrons_miniIso_sum_charged_nofsr() { return cms5.electrons_miniIso_sum_charged_nofsr(); }
  const vector<float> &ak4jets_deepFlavourprobbb() { return cms5.ak4jets_deepFlavourprobbb(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz2_1_MCFM(); }
  const float &LHEweight_AsMZ_Up_default() { return cms5.LHEweight_AsMZ_Up_default(); }
  const vector<float> &muons_miniIso_comb_nofsr_uncorrected() { return cms5.muons_miniIso_comb_nofsr_uncorrected(); }
  const bool &metfilter_CSCTightHalo2015Filter() { return cms5.metfilter_CSCTightHalo2015Filter(); }
  const float &pfmet_metShift_px_JERDn() { return cms5.pfmet_metShift_px_JERDn(); }
  const vector<float> &electrons_etaSC() { return cms5.electrons_etaSC(); }
  const short &n_shower_gluons_to_charm() { return cms5.n_shower_gluons_to_charm(); }
  const float &PythiaWeight_fsr_muR0p25() { return cms5.PythiaWeight_fsr_muR0p25(); }
  const float &PythiaWeight_isr_muRsqrt2() { return cms5.PythiaWeight_isr_muRsqrt2(); }
  const vector<float> &ak4jets_deepFlavourprobuds() { return cms5.ak4jets_deepFlavourprobuds(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghza2_1_MCFM(); }
  const float &KFactor_QCD_NNLO_ggZZ_Sig_AsDn() { return cms5.KFactor_QCD_NNLO_ggZZ_Sig_AsDn(); }
  const vector<float> &electrons_pfIso04_sum_neutral_nofsr() { return cms5.electrons_pfIso04_sum_neutral_nofsr(); }
  const vector<bool> &muons_pass_muon_timing() { return cms5.muons_pass_muon_timing(); }
  const bool &metfilter_ecalLaserCorrFilter() { return cms5.metfilter_ecalLaserCorrFilter(); }
  const bool &metfilter_HBHENoiseIsoFilter() { return cms5.metfilter_HBHENoiseIsoFilter(); }
  const vector<float> &triggerObjects_mass() { return cms5.triggerObjects_mass(); }
  const float &p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaBot_1_ghg2_1_ghz1_1_MCFM(); }
  const float &PythiaWeight_isr_muR0p25() { return cms5.PythiaWeight_isr_muR0p25(); }
  const float &genmet_met() { return cms5.genmet_met(); }
  const vector<float> &fsrcands_pt() { return cms5.fsrcands_pt(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz4_1_MCFM(); }
  const vector<float> &ak4jets_JERUp() { return cms5.ak4jets_JERUp(); }
  const vector<float> &photons_id_MVA_Fall17V2_Val() { return cms5.photons_id_MVA_Fall17V2_Val(); }
  const float &p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTop_1_ghg4_1_ghz1_1_MCFM(); }
  const vector<float> &ak4jets_axis1() { return cms5.ak4jets_axis1(); }
  const vector<float> &ak4jets_axis2() { return cms5.ak4jets_axis2(); }
  const float &puppimet_met_JECUp() { return cms5.puppimet_met_JECUp(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_Iso_pass_wpLoose() { return cms5.electrons_id_MVA_Fall17V2_Iso_pass_wpLoose(); }
  const float &p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTildeTop_1_kappaTildeBot_1_ghz1_1_MCFM(); }
  const vector<float> &electrons_id_MVA_Fall17V2_NoIso_Val() { return cms5.electrons_id_MVA_Fall17V2_NoIso_Val(); }
  const float &PythiaWeight_fsr_muR2() { return cms5.PythiaWeight_fsr_muR2(); }
  const vector<float> &electrons_pfIso03_comb_nofsr_old() { return cms5.electrons_pfIso03_comb_nofsr_old(); }
  const float &pfmet_met_over_sqrtSumEt() { return cms5.pfmet_met_over_sqrtSumEt(); }
  const float &PythiaWeight_fsr_muR4() { return cms5.PythiaWeight_fsr_muR4(); }
  const vector<int> &lheparticles_id() { return cms5.lheparticles_id(); }
  const float &puppimet_met_UnclusteredEnDn() { return cms5.puppimet_met_UnclusteredEnDn(); }
  const vector<float> &electrons_pfIso04_sum_neutral_nofsr_old() { return cms5.electrons_pfIso04_sum_neutral_nofsr_old(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ() { return cms5.electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ(); }
  const vector<float> &electrons_scale_smear_corr_smear_totalUp() { return cms5.electrons_scale_smear_corr_smear_totalUp(); }
  const vector<float> &isotracks_mass() { return cms5.isotracks_mass(); }
  const vector<bool> &triggers_passTrigger() { return cms5.triggers_passTrigger(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_ghza2_1_MCFM(); }
  const float &pfmet_metPhi_Raw() { return cms5.pfmet_metPhi_Raw(); }
  const float &LHEweight_PDFVariation_Up_NNPDF30() { return cms5.LHEweight_PDFVariation_Up_NNPDF30(); }
  const vector<float> &electrons_pfIso03_sum_neutral_nofsr_old() { return cms5.electrons_pfIso03_sum_neutral_nofsr_old(); }
  const vector<float> &photons_pfEMIso_EAcorr() { return cms5.photons_pfEMIso_EAcorr(); }
  const float &p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTildeTop_1_ghg4_1_ghz1_1_MCFM(); }
  const vector<float> &ak8jets_JERUp() { return cms5.ak8jets_JERUp(); }
  const float &p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTopBot_1_ghz4_1_MCFM(); }
  const bool &metfilter_muonBadTrackFilter() { return cms5.metfilter_muonBadTrackFilter(); }
  const vector<float> &isotracks_miniIso_em() { return cms5.isotracks_miniIso_em(); }
  const vector<float> &ak4jets_deepCSVprobb() { return cms5.ak4jets_deepCSVprobb(); }
  const vector<float> &ak4jets_deepCSVprobc() { return cms5.ak4jets_deepCSVprobc(); }
  const vector<float> &photons_scale_smear_corr_smear_totalDn() { return cms5.photons_scale_smear_corr_smear_totalDn(); }
  const float &p_Gen_JJEW_BSI_ghv1_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_1_MCFM(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_MCFM(); }
}
