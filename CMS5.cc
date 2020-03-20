#include "CMS5.h"
CMS5 cms5;

void CMS5::Init(TTree *tree) {
  tree->SetMakeClass(1);
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_); }
  }
  p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM") != 0) {
    p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch = tree->GetBranch("p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM");
    if (p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch) { p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch->SetAddress(&p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_); }
  }
  p_Gen_JJEW_SIG_ghza4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghza4_1_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghza4_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghza4_1_MCFM");
    if (p_Gen_JJEW_SIG_ghza4_1_MCFM_branch) { p_Gen_JJEW_SIG_ghza4_1_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghza4_1_MCFM_); }
  }
  ak8jets_partonFlavour_branch = 0;
  if (tree->GetBranch("ak8jets_partonFlavour") != 0) {
    ak8jets_partonFlavour_branch = tree->GetBranch("ak8jets_partonFlavour");
    if (ak8jets_partonFlavour_branch) { ak8jets_partonFlavour_branch->SetAddress(&ak8jets_partonFlavour_); }
  }
  p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_); }
  }
  electrons_eta_branch = 0;
  if (tree->GetBranch("electrons_eta") != 0) {
    electrons_eta_branch = tree->GetBranch("electrons_eta");
    if (electrons_eta_branch) { electrons_eta_branch->SetAddress(&electrons_eta_); }
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
  p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_); }
  }
  electrons_miniIso_comb_nofsr_uncorrected_branch = 0;
  if (tree->GetBranch("electrons_miniIso_comb_nofsr_uncorrected") != 0) {
    electrons_miniIso_comb_nofsr_uncorrected_branch = tree->GetBranch("electrons_miniIso_comb_nofsr_uncorrected");
    if (electrons_miniIso_comb_nofsr_uncorrected_branch) { electrons_miniIso_comb_nofsr_uncorrected_branch->SetAddress(&electrons_miniIso_comb_nofsr_uncorrected_); }
  }
  genparticles_isLastCopyBeforeFSR_branch = 0;
  if (tree->GetBranch("genparticles_isLastCopyBeforeFSR") != 0) {
    genparticles_isLastCopyBeforeFSR_branch = tree->GetBranch("genparticles_isLastCopyBeforeFSR");
    if (genparticles_isLastCopyBeforeFSR_branch) { genparticles_isLastCopyBeforeFSR_branch->SetAddress(&genparticles_isLastCopyBeforeFSR_); }
  }
  muons_pfIso04_comb_nofsr_branch = 0;
  if (tree->GetBranch("muons_pfIso04_comb_nofsr") != 0) {
    muons_pfIso04_comb_nofsr_branch = tree->GetBranch("muons_pfIso04_comb_nofsr");
    if (muons_pfIso04_comb_nofsr_branch) { muons_pfIso04_comb_nofsr_branch->SetAddress(&muons_pfIso04_comb_nofsr_); }
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
  muons_time_rpc_IPInOut_branch = 0;
  if (tree->GetBranch("muons_time_rpc_IPInOut") != 0) {
    muons_time_rpc_IPInOut_branch = tree->GetBranch("muons_time_rpc_IPInOut");
    if (muons_time_rpc_IPInOut_branch) { muons_time_rpc_IPInOut_branch->SetAddress(&muons_time_rpc_IPInOut_); }
  }
  muons_pt_branch = 0;
  if (tree->GetBranch("muons_pt") != 0) {
    muons_pt_branch = tree->GetBranch("muons_pt");
    if (muons_pt_branch) { muons_pt_branch->SetAddress(&muons_pt_); }
  }
  p_Gen_JJEW_SIG_gha4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_gha4_1_MCFM") != 0) {
    p_Gen_JJEW_SIG_gha4_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_gha4_1_MCFM");
    if (p_Gen_JJEW_SIG_gha4_1_MCFM_branch) { p_Gen_JJEW_SIG_gha4_1_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_gha4_1_MCFM_); }
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
  p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_); }
  }
  electrons_fid_mask_branch = 0;
  if (tree->GetBranch("electrons_fid_mask") != 0) {
    electrons_fid_mask_branch = tree->GetBranch("electrons_fid_mask");
    if (electrons_fid_mask_branch) { electrons_fid_mask_branch->SetAddress(&electrons_fid_mask_); }
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
  p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_); }
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
  genparticles_pt_branch = 0;
  if (tree->GetBranch("genparticles_pt") != 0) {
    genparticles_pt_branch = tree->GetBranch("genparticles_pt");
    if (genparticles_pt_branch) { genparticles_pt_branch->SetAddress(&genparticles_pt_); }
  }
  PythiaWeight_fsr_muR0p5_branch = 0;
  if (tree->GetBranch("PythiaWeight_fsr_muR0p5") != 0) {
    PythiaWeight_fsr_muR0p5_branch = tree->GetBranch("PythiaWeight_fsr_muR0p5");
    if (PythiaWeight_fsr_muR0p5_branch) { PythiaWeight_fsr_muR0p5_branch->SetAddress(&PythiaWeight_fsr_muR0p5_); }
  }
  genparticles_mom0_index_branch = 0;
  if (tree->GetBranch("genparticles_mom0_index") != 0) {
    genparticles_mom0_index_branch = tree->GetBranch("genparticles_mom0_index");
    if (genparticles_mom0_index_branch) { genparticles_mom0_index_branch->SetAddress(&genparticles_mom0_index_); }
  }
  p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM");
    if (p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_branch) { p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_); }
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
  p_Gen_JJEW_BKG_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BKG_MCFM") != 0) {
    p_Gen_JJEW_BKG_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BKG_MCFM");
    if (p_Gen_JJEW_BKG_MCFM_branch) { p_Gen_JJEW_BKG_MCFM_branch->SetAddress(&p_Gen_JJEW_BKG_MCFM_); }
  }
  p_Gen_JJEW_BSI_gha2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_gha2_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_gha2_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_gha2_1_MCFM");
    if (p_Gen_JJEW_BSI_gha2_1_MCFM_branch) { p_Gen_JJEW_BSI_gha2_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_gha2_1_MCFM_); }
  }
  isotracks_fromPV_branch = 0;
  if (tree->GetBranch("isotracks_fromPV") != 0) {
    isotracks_fromPV_branch = tree->GetBranch("isotracks_fromPV");
    if (isotracks_fromPV_branch) { isotracks_fromPV_branch->SetAddress(&isotracks_fromPV_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_); }
  }
  p_Gen_JJEW_BSI_ghv1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_1_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_1_MCFM_); }
  }
  muons_scale_smear_pt_corr_smear_totalUp_branch = 0;
  if (tree->GetBranch("muons_scale_smear_pt_corr_smear_totalUp") != 0) {
    muons_scale_smear_pt_corr_smear_totalUp_branch = tree->GetBranch("muons_scale_smear_pt_corr_smear_totalUp");
    if (muons_scale_smear_pt_corr_smear_totalUp_branch) { muons_scale_smear_pt_corr_smear_totalUp_branch->SetAddress(&muons_scale_smear_pt_corr_smear_totalUp_); }
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
  LuminosityBlock_branch = 0;
  if (tree->GetBranch("LuminosityBlock") != 0) {
    LuminosityBlock_branch = tree->GetBranch("LuminosityBlock");
    if (LuminosityBlock_branch) { LuminosityBlock_branch->SetAddress(&LuminosityBlock_); }
  }
  vtxs_nvtxs_branch = 0;
  if (tree->GetBranch("vtxs_nvtxs") != 0) {
    vtxs_nvtxs_branch = tree->GetBranch("vtxs_nvtxs");
    if (vtxs_nvtxs_branch) { vtxs_nvtxs_branch->SetAddress(&vtxs_nvtxs_); }
  }
  qscale_branch = 0;
  if (tree->GetBranch("qscale") != 0) {
    qscale_branch = tree->GetBranch("qscale");
    if (qscale_branch) { qscale_branch->SetAddress(&qscale_); }
  }
  p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_); }
  }
  muons_time_rpc_IPInOutError_branch = 0;
  if (tree->GetBranch("muons_time_rpc_IPInOutError") != 0) {
    muons_time_rpc_IPInOutError_branch = tree->GetBranch("muons_time_rpc_IPInOutError");
    if (muons_time_rpc_IPInOutError_branch) { muons_time_rpc_IPInOutError_branch->SetAddress(&muons_time_rpc_IPInOutError_); }
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
  p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_); }
  }
  electrons_id_cutBased_Fall17V1_Veto_Bits_branch = 0;
  if (tree->GetBranch("electrons_id_cutBased_Fall17V1_Veto_Bits") != 0) {
    electrons_id_cutBased_Fall17V1_Veto_Bits_branch = tree->GetBranch("electrons_id_cutBased_Fall17V1_Veto_Bits");
    if (electrons_id_cutBased_Fall17V1_Veto_Bits_branch) { electrons_id_cutBased_Fall17V1_Veto_Bits_branch->SetAddress(&electrons_id_cutBased_Fall17V1_Veto_Bits_); }
  }
  photons_n_associated_pfcands_branch = 0;
  if (tree->GetBranch("photons_n_associated_pfcands") != 0) {
    photons_n_associated_pfcands_branch = tree->GetBranch("photons_n_associated_pfcands");
    if (photons_n_associated_pfcands_branch) { photons_n_associated_pfcands_branch->SetAddress(&photons_n_associated_pfcands_); }
  }
  p_Gen_JJEW_SIG_ghv4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv4_1_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv4_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv4_1_MCFM");
    if (p_Gen_JJEW_SIG_ghv4_1_MCFM_branch) { p_Gen_JJEW_SIG_ghv4_1_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv4_1_MCFM_); }
  }
  electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_HZZRun2Legacy_Iso_Cat") != 0) {
    electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch = tree->GetBranch("electrons_id_MVA_HZZRun2Legacy_Iso_Cat");
    if (electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch) { electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch->SetAddress(&electrons_id_MVA_HZZRun2Legacy_Iso_Cat_); }
  }
  p_Gen_JJEW_SIG_ghv2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv2_1_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv2_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv2_1_MCFM");
    if (p_Gen_JJEW_SIG_ghv2_1_MCFM_branch) { p_Gen_JJEW_SIG_ghv2_1_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv2_1_MCFM_); }
  }
  vtxs_is_good_branch = 0;
  if (tree->GetBranch("vtxs_is_good") != 0) {
    vtxs_is_good_branch = tree->GetBranch("vtxs_is_good");
    if (vtxs_is_good_branch) { vtxs_is_good_branch->SetAddress(&vtxs_is_good_); }
  }
  puppimet_met_JERDn_branch = 0;
  if (tree->GetBranch("puppimet_met_JERDn") != 0) {
    puppimet_met_JERDn_branch = tree->GetBranch("puppimet_met_JERDn");
    if (puppimet_met_JERDn_branch) { puppimet_met_JERDn_branch->SetAddress(&puppimet_met_JERDn_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_); }
  }
  electrons_scale_smear_corr_smear_totalDn_branch = 0;
  if (tree->GetBranch("electrons_scale_smear_corr_smear_totalDn") != 0) {
    electrons_scale_smear_corr_smear_totalDn_branch = tree->GetBranch("electrons_scale_smear_corr_smear_totalDn");
    if (electrons_scale_smear_corr_smear_totalDn_branch) { electrons_scale_smear_corr_smear_totalDn_branch->SetAddress(&electrons_scale_smear_corr_smear_totalDn_); }
  }
  electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch = 0;
  if (tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_pass_wp80") != 0) {
    electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch = tree->GetBranch("electrons_id_MVA_Fall17V2_Iso_pass_wp80");
    if (electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch) { electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch->SetAddress(&electrons_id_MVA_Fall17V2_Iso_pass_wp80_); }
  }
  LHECandMass_branch = 0;
  if (tree->GetBranch("LHECandMass") != 0) {
    LHECandMass_branch = tree->GetBranch("LHECandMass");
    if (LHECandMass_branch) { LHECandMass_branch->SetAddress(&LHECandMass_); }
  }
  pfmet_met_JERDn_branch = 0;
  if (tree->GetBranch("pfmet_met_JERDn") != 0) {
    pfmet_met_JERDn_branch = tree->GetBranch("pfmet_met_JERDn");
    if (pfmet_met_JERDn_branch) { pfmet_met_JERDn_branch->SetAddress(&pfmet_met_JERDn_); }
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
  metfilter_trkPOG_toomanystripclus53X_branch = 0;
  if (tree->GetBranch("metfilter_trkPOG_toomanystripclus53X") != 0) {
    metfilter_trkPOG_toomanystripclus53X_branch = tree->GetBranch("metfilter_trkPOG_toomanystripclus53X");
    if (metfilter_trkPOG_toomanystripclus53X_branch) { metfilter_trkPOG_toomanystripclus53X_branch->SetAddress(&metfilter_trkPOG_toomanystripclus53X_); }
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
  ak8jets_n_mucands_branch = 0;
  if (tree->GetBranch("ak8jets_n_mucands") != 0) {
    ak8jets_n_mucands_branch = tree->GetBranch("ak8jets_n_mucands");
    if (ak8jets_n_mucands_branch) { ak8jets_n_mucands_branch->SetAddress(&ak8jets_n_mucands_); }
  }
  metfilter_trkPOG_logErrorTooManyClusters_branch = 0;
  if (tree->GetBranch("metfilter_trkPOG_logErrorTooManyClusters") != 0) {
    metfilter_trkPOG_logErrorTooManyClusters_branch = tree->GetBranch("metfilter_trkPOG_logErrorTooManyClusters");
    if (metfilter_trkPOG_logErrorTooManyClusters_branch) { metfilter_trkPOG_logErrorTooManyClusters_branch->SetAddress(&metfilter_trkPOG_logErrorTooManyClusters_); }
  }
  ak8jets_axis2_branch = 0;
  if (tree->GetBranch("ak8jets_axis2") != 0) {
    ak8jets_axis2_branch = tree->GetBranch("ak8jets_axis2");
    if (ak8jets_axis2_branch) { ak8jets_axis2_branch->SetAddress(&ak8jets_axis2_); }
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
  muons_miniIso_comb_nofsr_branch = 0;
  if (tree->GetBranch("muons_miniIso_comb_nofsr") != 0) {
    muons_miniIso_comb_nofsr_branch = tree->GetBranch("muons_miniIso_comb_nofsr");
    if (muons_miniIso_comb_nofsr_branch) { muons_miniIso_comb_nofsr_branch->SetAddress(&muons_miniIso_comb_nofsr_); }
  }
  electrons_id_cutBased_Fall17V2_Loose_Bits_branch = 0;
  if (tree->GetBranch("electrons_id_cutBased_Fall17V2_Loose_Bits") != 0) {
    electrons_id_cutBased_Fall17V2_Loose_Bits_branch = tree->GetBranch("electrons_id_cutBased_Fall17V2_Loose_Bits");
    if (electrons_id_cutBased_Fall17V2_Loose_Bits_branch) { electrons_id_cutBased_Fall17V2_Loose_Bits_branch->SetAddress(&electrons_id_cutBased_Fall17V2_Loose_Bits_); }
  }
  p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM");
    if (p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_branch) { p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_); }
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
  genparticles_status_branch = 0;
  if (tree->GetBranch("genparticles_status") != 0) {
    genparticles_status_branch = tree->GetBranch("genparticles_status");
    if (genparticles_status_branch) { genparticles_status_branch->SetAddress(&genparticles_status_); }
  }
  genparticles_fromHardProcessDecayed_branch = 0;
  if (tree->GetBranch("genparticles_fromHardProcessDecayed") != 0) {
    genparticles_fromHardProcessDecayed_branch = tree->GetBranch("genparticles_fromHardProcessDecayed");
    if (genparticles_fromHardProcessDecayed_branch) { genparticles_fromHardProcessDecayed_branch->SetAddress(&genparticles_fromHardProcessDecayed_); }
  }
  p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_); }
  }
  genparticles_isPromptDecayed_branch = 0;
  if (tree->GetBranch("genparticles_isPromptDecayed") != 0) {
    genparticles_isPromptDecayed_branch = tree->GetBranch("genparticles_isPromptDecayed");
    if (genparticles_isPromptDecayed_branch) { genparticles_isPromptDecayed_branch->SetAddress(&genparticles_isPromptDecayed_); }
  }
  ak4jets_pass_looseId_branch = 0;
  if (tree->GetBranch("ak4jets_pass_looseId") != 0) {
    ak4jets_pass_looseId_branch = tree->GetBranch("ak4jets_pass_looseId");
    if (ak4jets_pass_looseId_branch) { ak4jets_pass_looseId_branch->SetAddress(&ak4jets_pass_looseId_); }
  }
  metfilter_globalSuperTightHalo2016Filter_branch = 0;
  if (tree->GetBranch("metfilter_globalSuperTightHalo2016Filter") != 0) {
    metfilter_globalSuperTightHalo2016Filter_branch = tree->GetBranch("metfilter_globalSuperTightHalo2016Filter");
    if (metfilter_globalSuperTightHalo2016Filter_branch) { metfilter_globalSuperTightHalo2016Filter_branch->SetAddress(&metfilter_globalSuperTightHalo2016Filter_); }
  }
  muons_time_comb_IPInOut_branch = 0;
  if (tree->GetBranch("muons_time_comb_IPInOut") != 0) {
    muons_time_comb_IPInOut_branch = tree->GetBranch("muons_time_comb_IPInOut");
    if (muons_time_comb_IPInOut_branch) { muons_time_comb_IPInOut_branch->SetAddress(&muons_time_comb_IPInOut_); }
  }
  metfilter_ecalBadCalibFilterUpdated_branch = 0;
  if (tree->GetBranch("metfilter_ecalBadCalibFilterUpdated") != 0) {
    metfilter_ecalBadCalibFilterUpdated_branch = tree->GetBranch("metfilter_ecalBadCalibFilterUpdated");
    if (metfilter_ecalBadCalibFilterUpdated_branch) { metfilter_ecalBadCalibFilterUpdated_branch->SetAddress(&metfilter_ecalBadCalibFilterUpdated_); }
  }
  metfilter_HcalStripHaloFilter_branch = 0;
  if (tree->GetBranch("metfilter_HcalStripHaloFilter") != 0) {
    metfilter_HcalStripHaloFilter_branch = tree->GetBranch("metfilter_HcalStripHaloFilter");
    if (metfilter_HcalStripHaloFilter_branch) { metfilter_HcalStripHaloFilter_branch->SetAddress(&metfilter_HcalStripHaloFilter_); }
  }
  genHEPMCweight_default_branch = 0;
  if (tree->GetBranch("genHEPMCweight_default") != 0) {
    genHEPMCweight_default_branch = tree->GetBranch("genHEPMCweight_default");
    if (genHEPMCweight_default_branch) { genHEPMCweight_default_branch->SetAddress(&genHEPMCweight_default_); }
  }
  photons_scale_smear_corr_scale_totalUp_branch = 0;
  if (tree->GetBranch("photons_scale_smear_corr_scale_totalUp") != 0) {
    photons_scale_smear_corr_scale_totalUp_branch = tree->GetBranch("photons_scale_smear_corr_scale_totalUp");
    if (photons_scale_smear_corr_scale_totalUp_branch) { photons_scale_smear_corr_scale_totalUp_branch->SetAddress(&photons_scale_smear_corr_scale_totalUp_); }
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
  p_Gen_JJEW_BSI_gha4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_gha4_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_gha4_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_gha4_1_MCFM");
    if (p_Gen_JJEW_BSI_gha4_1_MCFM_branch) { p_Gen_JJEW_BSI_gha4_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_gha4_1_MCFM_); }
  }
  LHEweight_PDFVariation_Dn_NNPDF30_branch = 0;
  if (tree->GetBranch("LHEweight_PDFVariation_Dn_NNPDF30") != 0) {
    LHEweight_PDFVariation_Dn_NNPDF30_branch = tree->GetBranch("LHEweight_PDFVariation_Dn_NNPDF30");
    if (LHEweight_PDFVariation_Dn_NNPDF30_branch) { LHEweight_PDFVariation_Dn_NNPDF30_branch->SetAddress(&LHEweight_PDFVariation_Dn_NNPDF30_); }
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
  genparticles_mom1_index_branch = 0;
  if (tree->GetBranch("genparticles_mom1_index") != 0) {
    genparticles_mom1_index_branch = tree->GetBranch("genparticles_mom1_index");
    if (genparticles_mom1_index_branch) { genparticles_mom1_index_branch->SetAddress(&genparticles_mom1_index_); }
  }
  ak8jets_n_pfcands_branch = 0;
  if (tree->GetBranch("ak8jets_n_pfcands") != 0) {
    ak8jets_n_pfcands_branch = tree->GetBranch("ak8jets_n_pfcands");
    if (ak8jets_n_pfcands_branch) { ak8jets_n_pfcands_branch->SetAddress(&ak8jets_n_pfcands_); }
  }
  LHEweight_QCDscale_muR0p5_muF0p5_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR0p5_muF0p5") != 0) {
    LHEweight_QCDscale_muR0p5_muF0p5_branch = tree->GetBranch("LHEweight_QCDscale_muR0p5_muF0p5");
    if (LHEweight_QCDscale_muR0p5_muF0p5_branch) { LHEweight_QCDscale_muR0p5_muF0p5_branch->SetAddress(&LHEweight_QCDscale_muR0p5_muF0p5_); }
  }
  pfmet_met_JERUp_branch = 0;
  if (tree->GetBranch("pfmet_met_JERUp") != 0) {
    pfmet_met_JERUp_branch = tree->GetBranch("pfmet_met_JERUp");
    if (pfmet_met_JERUp_branch) { pfmet_met_JERUp_branch->SetAddress(&pfmet_met_JERUp_); }
  }
  metfilter_EcalDeadCellBoundaryEnergyFilter_branch = 0;
  if (tree->GetBranch("metfilter_EcalDeadCellBoundaryEnergyFilter") != 0) {
    metfilter_EcalDeadCellBoundaryEnergyFilter_branch = tree->GetBranch("metfilter_EcalDeadCellBoundaryEnergyFilter");
    if (metfilter_EcalDeadCellBoundaryEnergyFilter_branch) { metfilter_EcalDeadCellBoundaryEnergyFilter_branch->SetAddress(&metfilter_EcalDeadCellBoundaryEnergyFilter_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_); }
  }
  pfmet_metPhi_JECUp_branch = 0;
  if (tree->GetBranch("pfmet_metPhi_JECUp") != 0) {
    pfmet_metPhi_JECUp_branch = tree->GetBranch("pfmet_metPhi_JECUp");
    if (pfmet_metPhi_JECUp_branch) { pfmet_metPhi_JECUp_branch->SetAddress(&pfmet_metPhi_JECUp_); }
  }
  puppimet_metPhi_JERUp_branch = 0;
  if (tree->GetBranch("puppimet_metPhi_JERUp") != 0) {
    puppimet_metPhi_JERUp_branch = tree->GetBranch("puppimet_metPhi_JERUp");
    if (puppimet_metPhi_JERUp_branch) { puppimet_metPhi_JERUp_branch->SetAddress(&puppimet_metPhi_JERUp_); }
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
  muons_time_rpc_IPOutInError_branch = 0;
  if (tree->GetBranch("muons_time_rpc_IPOutInError") != 0) {
    muons_time_rpc_IPOutInError_branch = tree->GetBranch("muons_time_rpc_IPOutInError");
    if (muons_time_rpc_IPOutInError_branch) { muons_time_rpc_IPOutInError_branch->SetAddress(&muons_time_rpc_IPOutInError_); }
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
  ak4jets_n_pfcands_branch = 0;
  if (tree->GetBranch("ak4jets_n_pfcands") != 0) {
    ak4jets_n_pfcands_branch = tree->GetBranch("ak4jets_n_pfcands");
    if (ak4jets_n_pfcands_branch) { ak4jets_n_pfcands_branch->SetAddress(&ak4jets_n_pfcands_); }
  }
  p_Gen_JJEW_SIG_ghza2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghza2_1_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghza2_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghza2_1_MCFM");
    if (p_Gen_JJEW_SIG_ghza2_1_MCFM_branch) { p_Gen_JJEW_SIG_ghza2_1_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghza2_1_MCFM_); }
  }
  puppimet_met_JERUp_branch = 0;
  if (tree->GetBranch("puppimet_met_JERUp") != 0) {
    puppimet_met_JERUp_branch = tree->GetBranch("puppimet_met_JERUp");
    if (puppimet_met_JERUp_branch) { puppimet_met_JERUp_branch->SetAddress(&puppimet_met_JERUp_); }
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
  muons_time_comb_IPOutIn_branch = 0;
  if (tree->GetBranch("muons_time_comb_IPOutIn") != 0) {
    muons_time_comb_IPOutIn_branch = tree->GetBranch("muons_time_comb_IPOutIn");
    if (muons_time_comb_IPOutIn_branch) { muons_time_comb_IPOutIn_branch->SetAddress(&muons_time_comb_IPOutIn_); }
  }
  vtxs_is_fake_branch = 0;
  if (tree->GetBranch("vtxs_is_fake") != 0) {
    vtxs_is_fake_branch = tree->GetBranch("vtxs_is_fake");
    if (vtxs_is_fake_branch) { vtxs_is_fake_branch->SetAddress(&vtxs_is_fake_); }
  }
  p_Gen_JJEW_SIG_gha2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_gha2_1_MCFM") != 0) {
    p_Gen_JJEW_SIG_gha2_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_gha2_1_MCFM");
    if (p_Gen_JJEW_SIG_gha2_1_MCFM_branch) { p_Gen_JJEW_SIG_gha2_1_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_gha2_1_MCFM_); }
  }
  LHEweight_QCDscale_muR1_muF0p5_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR1_muF0p5") != 0) {
    LHEweight_QCDscale_muR1_muF0p5_branch = tree->GetBranch("LHEweight_QCDscale_muR1_muF0p5");
    if (LHEweight_QCDscale_muR1_muF0p5_branch) { LHEweight_QCDscale_muR1_muF0p5_branch->SetAddress(&LHEweight_QCDscale_muR1_muF0p5_); }
  }
  genparticles_phi_branch = 0;
  if (tree->GetBranch("genparticles_phi") != 0) {
    genparticles_phi_branch = tree->GetBranch("genparticles_phi");
    if (genparticles_phi_branch) { genparticles_phi_branch->SetAddress(&genparticles_phi_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_); }
  }
  pfmet_sumEt_Nominal_branch = 0;
  if (tree->GetBranch("pfmet_sumEt_Nominal") != 0) {
    pfmet_sumEt_Nominal_branch = tree->GetBranch("pfmet_sumEt_Nominal");
    if (pfmet_sumEt_Nominal_branch) { pfmet_sumEt_Nominal_branch->SetAddress(&pfmet_sumEt_Nominal_); }
  }
  metfilter_HBHENoiseFilter_branch = 0;
  if (tree->GetBranch("metfilter_HBHENoiseFilter") != 0) {
    metfilter_HBHENoiseFilter_branch = tree->GetBranch("metfilter_HBHENoiseFilter");
    if (metfilter_HBHENoiseFilter_branch) { metfilter_HBHENoiseFilter_branch->SetAddress(&metfilter_HBHENoiseFilter_); }
  }
  electrons_scale_smear_corr_branch = 0;
  if (tree->GetBranch("electrons_scale_smear_corr") != 0) {
    electrons_scale_smear_corr_branch = tree->GetBranch("electrons_scale_smear_corr");
    if (electrons_scale_smear_corr_branch) { electrons_scale_smear_corr_branch->SetAddress(&electrons_scale_smear_corr_); }
  }
  genparticles_isLastCopy_branch = 0;
  if (tree->GetBranch("genparticles_isLastCopy") != 0) {
    genparticles_isLastCopy_branch = tree->GetBranch("genparticles_isLastCopy");
    if (genparticles_isLastCopy_branch) { genparticles_isLastCopy_branch->SetAddress(&genparticles_isLastCopy_); }
  }
  lheparticles_status_branch = 0;
  if (tree->GetBranch("lheparticles_status") != 0) {
    lheparticles_status_branch = tree->GetBranch("lheparticles_status");
    if (lheparticles_status_branch) { lheparticles_status_branch->SetAddress(&lheparticles_status_); }
  }
  isotracks_nearestPFcand_id_branch = 0;
  if (tree->GetBranch("isotracks_nearestPFcand_id") != 0) {
    isotracks_nearestPFcand_id_branch = tree->GetBranch("isotracks_nearestPFcand_id");
    if (isotracks_nearestPFcand_id_branch) { isotracks_nearestPFcand_id_branch->SetAddress(&isotracks_nearestPFcand_id_); }
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
  genparticles_fromHardProcessBeforeFSR_branch = 0;
  if (tree->GetBranch("genparticles_fromHardProcessBeforeFSR") != 0) {
    genparticles_fromHardProcessBeforeFSR_branch = tree->GetBranch("genparticles_fromHardProcessBeforeFSR");
    if (genparticles_fromHardProcessBeforeFSR_branch) { genparticles_fromHardProcessBeforeFSR_branch->SetAddress(&genparticles_fromHardProcessBeforeFSR_); }
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
  p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_); }
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
  ak8jets_area_branch = 0;
  if (tree->GetBranch("ak8jets_area") != 0) {
    ak8jets_area_branch = tree->GetBranch("ak8jets_area");
    if (ak8jets_area_branch) { ak8jets_area_branch->SetAddress(&ak8jets_area_); }
  }
  genparticles_isDirectPromptTauDecayProductFinalState_branch = 0;
  if (tree->GetBranch("genparticles_isDirectPromptTauDecayProductFinalState") != 0) {
    genparticles_isDirectPromptTauDecayProductFinalState_branch = tree->GetBranch("genparticles_isDirectPromptTauDecayProductFinalState");
    if (genparticles_isDirectPromptTauDecayProductFinalState_branch) { genparticles_isDirectPromptTauDecayProductFinalState_branch->SetAddress(&genparticles_isDirectPromptTauDecayProductFinalState_); }
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
  muons_time_rpc_IPOutIn_branch = 0;
  if (tree->GetBranch("muons_time_rpc_IPOutIn") != 0) {
    muons_time_rpc_IPOutIn_branch = tree->GetBranch("muons_time_rpc_IPOutIn");
    if (muons_time_rpc_IPOutIn_branch) { muons_time_rpc_IPOutIn_branch->SetAddress(&muons_time_rpc_IPOutIn_); }
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
  EventNumber_branch = 0;
  if (tree->GetBranch("EventNumber") != 0) {
    EventNumber_branch = tree->GetBranch("EventNumber");
    if (EventNumber_branch) { EventNumber_branch->SetAddress(&EventNumber_); }
  }
  electrons_id_cutBased_Fall17V1_Tight_Bits_branch = 0;
  if (tree->GetBranch("electrons_id_cutBased_Fall17V1_Tight_Bits") != 0) {
    electrons_id_cutBased_Fall17V1_Tight_Bits_branch = tree->GetBranch("electrons_id_cutBased_Fall17V1_Tight_Bits");
    if (electrons_id_cutBased_Fall17V1_Tight_Bits_branch) { electrons_id_cutBased_Fall17V1_Tight_Bits_branch->SetAddress(&electrons_id_cutBased_Fall17V1_Tight_Bits_); }
  }
  p_Gen_JJEW_BSI_ghza2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghza2_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghza2_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghza2_1_MCFM");
    if (p_Gen_JJEW_BSI_ghza2_1_MCFM_branch) { p_Gen_JJEW_BSI_ghza2_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghza2_1_MCFM_); }
  }
  ak4jets_JERNominal_branch = 0;
  if (tree->GetBranch("ak4jets_JERNominal") != 0) {
    ak4jets_JERNominal_branch = tree->GetBranch("ak4jets_JERNominal");
    if (ak4jets_JERNominal_branch) { ak4jets_JERNominal_branch->SetAddress(&ak4jets_JERNominal_); }
  }
  electrons_n_associated_pfcands_branch = 0;
  if (tree->GetBranch("electrons_n_associated_pfcands") != 0) {
    electrons_n_associated_pfcands_branch = tree->GetBranch("electrons_n_associated_pfcands");
    if (electrons_n_associated_pfcands_branch) { electrons_n_associated_pfcands_branch->SetAddress(&electrons_n_associated_pfcands_); }
  }
  pfmet_metSignificance_branch = 0;
  if (tree->GetBranch("pfmet_metSignificance") != 0) {
    pfmet_metSignificance_branch = tree->GetBranch("pfmet_metSignificance");
    if (pfmet_metSignificance_branch) { pfmet_metSignificance_branch->SetAddress(&pfmet_metSignificance_); }
  }
  electrons_type_mask_branch = 0;
  if (tree->GetBranch("electrons_type_mask") != 0) {
    electrons_type_mask_branch = tree->GetBranch("electrons_type_mask");
    if (electrons_type_mask_branch) { electrons_type_mask_branch->SetAddress(&electrons_type_mask_); }
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
  photons_mass_branch = 0;
  if (tree->GetBranch("photons_mass") != 0) {
    photons_mass_branch = tree->GetBranch("photons_mass");
    if (photons_mass_branch) { photons_mass_branch->SetAddress(&photons_mass_); }
  }
  photons_scale_smear_corr_scale_totalDn_branch = 0;
  if (tree->GetBranch("photons_scale_smear_corr_scale_totalDn") != 0) {
    photons_scale_smear_corr_scale_totalDn_branch = tree->GetBranch("photons_scale_smear_corr_scale_totalDn");
    if (photons_scale_smear_corr_scale_totalDn_branch) { photons_scale_smear_corr_scale_totalDn_branch->SetAddress(&photons_scale_smear_corr_scale_totalDn_); }
  }
  p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_); }
  }
  puppimet_met_Nominal_branch = 0;
  if (tree->GetBranch("puppimet_met_Nominal") != 0) {
    puppimet_met_Nominal_branch = tree->GetBranch("puppimet_met_Nominal");
    if (puppimet_met_Nominal_branch) { puppimet_met_Nominal_branch->SetAddress(&puppimet_met_Nominal_); }
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
  electrons_pfIso03_sum_neutral_nofsr_branch = 0;
  if (tree->GetBranch("electrons_pfIso03_sum_neutral_nofsr") != 0) {
    electrons_pfIso03_sum_neutral_nofsr_branch = tree->GetBranch("electrons_pfIso03_sum_neutral_nofsr");
    if (electrons_pfIso03_sum_neutral_nofsr_branch) { electrons_pfIso03_sum_neutral_nofsr_branch->SetAddress(&electrons_pfIso03_sum_neutral_nofsr_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_); }
  }
  ak8jets_mass_branch = 0;
  if (tree->GetBranch("ak8jets_mass") != 0) {
    ak8jets_mass_branch = tree->GetBranch("ak8jets_mass");
    if (ak8jets_mass_branch) { ak8jets_mass_branch->SetAddress(&ak8jets_mass_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_); }
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
  isotracks_nearestPFcand_deltaR_branch = 0;
  if (tree->GetBranch("isotracks_nearestPFcand_deltaR") != 0) {
    isotracks_nearestPFcand_deltaR_branch = tree->GetBranch("isotracks_nearestPFcand_deltaR");
    if (isotracks_nearestPFcand_deltaR_branch) { isotracks_nearestPFcand_deltaR_branch->SetAddress(&isotracks_nearestPFcand_deltaR_); }
  }
  photons_eta_branch = 0;
  if (tree->GetBranch("photons_eta") != 0) {
    photons_eta_branch = tree->GetBranch("photons_eta");
    if (photons_eta_branch) { photons_eta_branch->SetAddress(&photons_eta_); }
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
  pfmet_metPhi_JERUp_branch = 0;
  if (tree->GetBranch("pfmet_metPhi_JERUp") != 0) {
    pfmet_metPhi_JERUp_branch = tree->GetBranch("pfmet_metPhi_JERUp");
    if (pfmet_metPhi_JERUp_branch) { pfmet_metPhi_JERUp_branch->SetAddress(&pfmet_metPhi_JERUp_); }
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
  muons_scale_smear_pt_corr_branch = 0;
  if (tree->GetBranch("muons_scale_smear_pt_corr") != 0) {
    muons_scale_smear_pt_corr_branch = tree->GetBranch("muons_scale_smear_pt_corr");
    if (muons_scale_smear_pt_corr_branch) { muons_scale_smear_pt_corr_branch->SetAddress(&muons_scale_smear_pt_corr_); }
  }
  triggers_L1prescale_branch = 0;
  if (tree->GetBranch("triggers_L1prescale") != 0) {
    triggers_L1prescale_branch = tree->GetBranch("triggers_L1prescale");
    if (triggers_L1prescale_branch) { triggers_L1prescale_branch->SetAddress(&triggers_L1prescale_); }
  }
  isotracks_miniIso_ch_branch = 0;
  if (tree->GetBranch("isotracks_miniIso_ch") != 0) {
    isotracks_miniIso_ch_branch = tree->GetBranch("isotracks_miniIso_ch");
    if (isotracks_miniIso_ch_branch) { isotracks_miniIso_ch_branch->SetAddress(&isotracks_miniIso_ch_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_); }
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
  muons_time_comb_ndof_branch = 0;
  if (tree->GetBranch("muons_time_comb_ndof") != 0) {
    muons_time_comb_ndof_branch = tree->GetBranch("muons_time_comb_ndof");
    if (muons_time_comb_ndof_branch) { muons_time_comb_ndof_branch->SetAddress(&muons_time_comb_ndof_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_); }
  }
  p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM");
    if (p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_branch) { p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_); }
  }
  puppimet_metPhi_JERDn_branch = 0;
  if (tree->GetBranch("puppimet_metPhi_JERDn") != 0) {
    puppimet_metPhi_JERDn_branch = tree->GetBranch("puppimet_metPhi_JERDn");
    if (puppimet_metPhi_JERDn_branch) { puppimet_metPhi_JERDn_branch->SetAddress(&puppimet_metPhi_JERDn_); }
  }
  puppimet_sumEt_Raw_branch = 0;
  if (tree->GetBranch("puppimet_sumEt_Raw") != 0) {
    puppimet_sumEt_Raw_branch = tree->GetBranch("puppimet_sumEt_Raw");
    if (puppimet_sumEt_Raw_branch) { puppimet_sumEt_Raw_branch->SetAddress(&puppimet_sumEt_Raw_); }
  }
  photons_phi_branch = 0;
  if (tree->GetBranch("photons_phi") != 0) {
    photons_phi_branch = tree->GetBranch("photons_phi");
    if (photons_phi_branch) { photons_phi_branch->SetAddress(&photons_phi_); }
  }
  triggers_HLTprescale_branch = 0;
  if (tree->GetBranch("triggers_HLTprescale") != 0) {
    triggers_HLTprescale_branch = tree->GetBranch("triggers_HLTprescale");
    if (triggers_HLTprescale_branch) { triggers_HLTprescale_branch->SetAddress(&triggers_HLTprescale_); }
  }
  metfilter_trkPOGFilters_branch = 0;
  if (tree->GetBranch("metfilter_trkPOGFilters") != 0) {
    metfilter_trkPOGFilters_branch = tree->GetBranch("metfilter_trkPOGFilters");
    if (metfilter_trkPOGFilters_branch) { metfilter_trkPOGFilters_branch->SetAddress(&metfilter_trkPOGFilters_); }
  }
  ak8jets_pt_branch = 0;
  if (tree->GetBranch("ak8jets_pt") != 0) {
    ak8jets_pt_branch = tree->GetBranch("ak8jets_pt");
    if (ak8jets_pt_branch) { ak8jets_pt_branch->SetAddress(&ak8jets_pt_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_); }
  }
  ak8jets_JECUp_branch = 0;
  if (tree->GetBranch("ak8jets_JECUp") != 0) {
    ak8jets_JECUp_branch = tree->GetBranch("ak8jets_JECUp");
    if (ak8jets_JECUp_branch) { ak8jets_JECUp_branch->SetAddress(&ak8jets_JECUp_); }
  }
  ak8jets_ptDistribution_branch = 0;
  if (tree->GetBranch("ak8jets_ptDistribution") != 0) {
    ak8jets_ptDistribution_branch = tree->GetBranch("ak8jets_ptDistribution");
    if (ak8jets_ptDistribution_branch) { ak8jets_ptDistribution_branch->SetAddress(&ak8jets_ptDistribution_); }
  }
  genparticles_id_branch = 0;
  if (tree->GetBranch("genparticles_id") != 0) {
    genparticles_id_branch = tree->GetBranch("genparticles_id");
    if (genparticles_id_branch) { genparticles_id_branch->SetAddress(&genparticles_id_); }
  }
  electrons_associated_pfcands_sum_sc_pt_branch = 0;
  if (tree->GetBranch("electrons_associated_pfcands_sum_sc_pt") != 0) {
    electrons_associated_pfcands_sum_sc_pt_branch = tree->GetBranch("electrons_associated_pfcands_sum_sc_pt");
    if (electrons_associated_pfcands_sum_sc_pt_branch) { electrons_associated_pfcands_sum_sc_pt_branch->SetAddress(&electrons_associated_pfcands_sum_sc_pt_); }
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
  vtxs_pos_dy_branch = 0;
  if (tree->GetBranch("vtxs_pos_dy") != 0) {
    vtxs_pos_dy_branch = tree->GetBranch("vtxs_pos_dy");
    if (vtxs_pos_dy_branch) { vtxs_pos_dy_branch->SetAddress(&vtxs_pos_dy_); }
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
  muons_time_rpc_ndof_branch = 0;
  if (tree->GetBranch("muons_time_rpc_ndof") != 0) {
    muons_time_rpc_ndof_branch = tree->GetBranch("muons_time_rpc_ndof");
    if (muons_time_rpc_ndof_branch) { muons_time_rpc_ndof_branch->SetAddress(&muons_time_rpc_ndof_); }
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
  p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_); }
  }
  p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM");
    if (p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_branch) { p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_); }
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
  p_Gen_JJEW_BSI_ghv2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv2_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv2_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv2_1_MCFM");
    if (p_Gen_JJEW_BSI_ghv2_1_MCFM_branch) { p_Gen_JJEW_BSI_ghv2_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv2_1_MCFM_); }
  }
  ak4jets_pt_branch = 0;
  if (tree->GetBranch("ak4jets_pt") != 0) {
    ak4jets_pt_branch = tree->GetBranch("ak4jets_pt");
    if (ak4jets_pt_branch) { ak4jets_pt_branch->SetAddress(&ak4jets_pt_); }
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
  lheparticles_E_branch = 0;
  if (tree->GetBranch("lheparticles_E") != 0) {
    lheparticles_E_branch = tree->GetBranch("lheparticles_E");
    if (lheparticles_E_branch) { lheparticles_E_branch->SetAddress(&lheparticles_E_); }
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
  p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_); }
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
  genparticles_isDirectHardProcessTauDecayProductFinalState_branch = 0;
  if (tree->GetBranch("genparticles_isDirectHardProcessTauDecayProductFinalState") != 0) {
    genparticles_isDirectHardProcessTauDecayProductFinalState_branch = tree->GetBranch("genparticles_isDirectHardProcessTauDecayProductFinalState");
    if (genparticles_isDirectHardProcessTauDecayProductFinalState_branch) { genparticles_isDirectHardProcessTauDecayProductFinalState_branch->SetAddress(&genparticles_isDirectHardProcessTauDecayProductFinalState_); }
  }
  isotracks_eta_branch = 0;
  if (tree->GetBranch("isotracks_eta") != 0) {
    isotracks_eta_branch = tree->GetBranch("isotracks_eta");
    if (isotracks_eta_branch) { isotracks_eta_branch->SetAddress(&isotracks_eta_); }
  }
  p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_); }
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
  photons_scale_smear_corr_smear_totalUp_branch = 0;
  if (tree->GetBranch("photons_scale_smear_corr_smear_totalUp") != 0) {
    photons_scale_smear_corr_smear_totalUp_branch = tree->GetBranch("photons_scale_smear_corr_smear_totalUp");
    if (photons_scale_smear_corr_smear_totalUp_branch) { photons_scale_smear_corr_smear_totalUp_branch->SetAddress(&photons_scale_smear_corr_smear_totalUp_); }
  }
  ak4jets_n_mucands_branch = 0;
  if (tree->GetBranch("ak4jets_n_mucands") != 0) {
    ak4jets_n_mucands_branch = tree->GetBranch("ak4jets_n_mucands");
    if (ak4jets_n_mucands_branch) { ak4jets_n_mucands_branch->SetAddress(&ak4jets_n_mucands_); }
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
  genparticles_is_packed_branch = 0;
  if (tree->GetBranch("genparticles_is_packed") != 0) {
    genparticles_is_packed_branch = tree->GetBranch("genparticles_is_packed");
    if (genparticles_is_packed_branch) { genparticles_is_packed_branch->SetAddress(&genparticles_is_packed_); }
  }
  genparticles_isHardProcess_branch = 0;
  if (tree->GetBranch("genparticles_isHardProcess") != 0) {
    genparticles_isHardProcess_branch = tree->GetBranch("genparticles_isHardProcess");
    if (genparticles_isHardProcess_branch) { genparticles_isHardProcess_branch->SetAddress(&genparticles_isHardProcess_); }
  }
  muons_scale_smear_pt_corr_scale_totalDn_branch = 0;
  if (tree->GetBranch("muons_scale_smear_pt_corr_scale_totalDn") != 0) {
    muons_scale_smear_pt_corr_scale_totalDn_branch = tree->GetBranch("muons_scale_smear_pt_corr_scale_totalDn");
    if (muons_scale_smear_pt_corr_scale_totalDn_branch) { muons_scale_smear_pt_corr_scale_totalDn_branch->SetAddress(&muons_scale_smear_pt_corr_scale_totalDn_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_); }
  }
  event_rho_branch = 0;
  if (tree->GetBranch("event_rho") != 0) {
    event_rho_branch = tree->GetBranch("event_rho");
    if (event_rho_branch) { event_rho_branch->SetAddress(&event_rho_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_); }
  }
  ak4jets_hadronFlavour_branch = 0;
  if (tree->GetBranch("ak4jets_hadronFlavour") != 0) {
    ak4jets_hadronFlavour_branch = tree->GetBranch("ak4jets_hadronFlavour");
    if (ak4jets_hadronFlavour_branch) { ak4jets_hadronFlavour_branch->SetAddress(&ak4jets_hadronFlavour_); }
  }
  ak4jets_pt_resolution_branch = 0;
  if (tree->GetBranch("ak4jets_pt_resolution") != 0) {
    ak4jets_pt_resolution_branch = tree->GetBranch("ak4jets_pt_resolution");
    if (ak4jets_pt_resolution_branch) { ak4jets_pt_resolution_branch->SetAddress(&ak4jets_pt_resolution_); }
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
  ak8jets_JERNominal_branch = 0;
  if (tree->GetBranch("ak8jets_JERNominal") != 0) {
    ak8jets_JERNominal_branch = tree->GetBranch("ak8jets_JERNominal");
    if (ak8jets_JERNominal_branch) { ak8jets_JERNominal_branch->SetAddress(&ak8jets_JERNominal_); }
  }
  genparticles_mass_branch = 0;
  if (tree->GetBranch("genparticles_mass") != 0) {
    genparticles_mass_branch = tree->GetBranch("genparticles_mass");
    if (genparticles_mass_branch) { genparticles_mass_branch->SetAddress(&genparticles_mass_); }
  }
  electrons_id_cutBased_Fall17V1_Loose_Bits_branch = 0;
  if (tree->GetBranch("electrons_id_cutBased_Fall17V1_Loose_Bits") != 0) {
    electrons_id_cutBased_Fall17V1_Loose_Bits_branch = tree->GetBranch("electrons_id_cutBased_Fall17V1_Loose_Bits");
    if (electrons_id_cutBased_Fall17V1_Loose_Bits_branch) { electrons_id_cutBased_Fall17V1_Loose_Bits_branch->SetAddress(&electrons_id_cutBased_Fall17V1_Loose_Bits_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_MCFM_); }
  }
  LHEweight_QCDscale_muR0p5_muF1_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR0p5_muF1") != 0) {
    LHEweight_QCDscale_muR0p5_muF1_branch = tree->GetBranch("LHEweight_QCDscale_muR0p5_muF1");
    if (LHEweight_QCDscale_muR0p5_muF1_branch) { LHEweight_QCDscale_muR0p5_muF1_branch->SetAddress(&LHEweight_QCDscale_muR0p5_muF1_); }
  }
  LHEweight_QCDscale_muR0p5_muF2_branch = 0;
  if (tree->GetBranch("LHEweight_QCDscale_muR0p5_muF2") != 0) {
    LHEweight_QCDscale_muR0p5_muF2_branch = tree->GetBranch("LHEweight_QCDscale_muR0p5_muF2");
    if (LHEweight_QCDscale_muR0p5_muF2_branch) { LHEweight_QCDscale_muR0p5_muF2_branch->SetAddress(&LHEweight_QCDscale_muR0p5_muF2_); }
  }
  muons_pfIso04_sum_neutral_nofsr_branch = 0;
  if (tree->GetBranch("muons_pfIso04_sum_neutral_nofsr") != 0) {
    muons_pfIso04_sum_neutral_nofsr_branch = tree->GetBranch("muons_pfIso04_sum_neutral_nofsr");
    if (muons_pfIso04_sum_neutral_nofsr_branch) { muons_pfIso04_sum_neutral_nofsr_branch->SetAddress(&muons_pfIso04_sum_neutral_nofsr_); }
  }
  lheparticles_mother0_index_branch = 0;
  if (tree->GetBranch("lheparticles_mother0_index") != 0) {
    lheparticles_mother0_index_branch = tree->GetBranch("lheparticles_mother0_index");
    if (lheparticles_mother0_index_branch) { lheparticles_mother0_index_branch->SetAddress(&lheparticles_mother0_index_); }
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
  muons_time_comb_IPInOutError_branch = 0;
  if (tree->GetBranch("muons_time_comb_IPInOutError") != 0) {
    muons_time_comb_IPInOutError_branch = tree->GetBranch("muons_time_comb_IPInOutError");
    if (muons_time_comb_IPInOutError_branch) { muons_time_comb_IPInOutError_branch->SetAddress(&muons_time_comb_IPInOutError_); }
  }
  genHEPMCweight_NNPDF30_branch = 0;
  if (tree->GetBranch("genHEPMCweight_NNPDF30") != 0) {
    genHEPMCweight_NNPDF30_branch = tree->GetBranch("genHEPMCweight_NNPDF30");
    if (genHEPMCweight_NNPDF30_branch) { genHEPMCweight_NNPDF30_branch->SetAddress(&genHEPMCweight_NNPDF30_); }
  }
  electrons_id_cutBased_Fall17V2_Medium_Bits_branch = 0;
  if (tree->GetBranch("electrons_id_cutBased_Fall17V2_Medium_Bits") != 0) {
    electrons_id_cutBased_Fall17V2_Medium_Bits_branch = tree->GetBranch("electrons_id_cutBased_Fall17V2_Medium_Bits");
    if (electrons_id_cutBased_Fall17V2_Medium_Bits_branch) { electrons_id_cutBased_Fall17V2_Medium_Bits_branch->SetAddress(&electrons_id_cutBased_Fall17V2_Medium_Bits_); }
  }
  pfmet_metPhi_JERDn_branch = 0;
  if (tree->GetBranch("pfmet_metPhi_JERDn") != 0) {
    pfmet_metPhi_JERDn_branch = tree->GetBranch("pfmet_metPhi_JERDn");
    if (pfmet_metPhi_JERDn_branch) { pfmet_metPhi_JERDn_branch->SetAddress(&pfmet_metPhi_JERDn_); }
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
  sumEt_branch = 0;
  if (tree->GetBranch("sumEt") != 0) {
    sumEt_branch = tree->GetBranch("sumEt");
    if (sumEt_branch) { sumEt_branch->SetAddress(&sumEt_); }
  }
  ak8jets_JERDn_branch = 0;
  if (tree->GetBranch("ak8jets_JERDn") != 0) {
    ak8jets_JERDn_branch = tree->GetBranch("ak8jets_JERDn");
    if (ak8jets_JERDn_branch) { ak8jets_JERDn_branch->SetAddress(&ak8jets_JERDn_); }
  }
  p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_); }
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
  photons_pfChargedHadronIso_EAcorr_branch = 0;
  if (tree->GetBranch("photons_pfChargedHadronIso_EAcorr") != 0) {
    photons_pfChargedHadronIso_EAcorr_branch = tree->GetBranch("photons_pfChargedHadronIso_EAcorr");
    if (photons_pfChargedHadronIso_EAcorr_branch) { photons_pfChargedHadronIso_EAcorr_branch->SetAddress(&photons_pfChargedHadronIso_EAcorr_); }
  }
  p_Gen_JJEW_BSI_ghv4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv4_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv4_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv4_1_MCFM");
    if (p_Gen_JJEW_BSI_ghv4_1_MCFM_branch) { p_Gen_JJEW_BSI_ghv4_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv4_1_MCFM_); }
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
  p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_); }
  }
  LHEweight_PDFVariation_Dn_default_branch = 0;
  if (tree->GetBranch("LHEweight_PDFVariation_Dn_default") != 0) {
    LHEweight_PDFVariation_Dn_default_branch = tree->GetBranch("LHEweight_PDFVariation_Dn_default");
    if (LHEweight_PDFVariation_Dn_default_branch) { LHEweight_PDFVariation_Dn_default_branch->SetAddress(&LHEweight_PDFVariation_Dn_default_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_); }
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
  ak4jets_area_branch = 0;
  if (tree->GetBranch("ak4jets_area") != 0) {
    ak4jets_area_branch = tree->GetBranch("ak4jets_area");
    if (ak4jets_area_branch) { ak4jets_area_branch->SetAddress(&ak4jets_area_); }
  }
  electrons_charge_branch = 0;
  if (tree->GetBranch("electrons_charge") != 0) {
    electrons_charge_branch = tree->GetBranch("electrons_charge");
    if (electrons_charge_branch) { electrons_charge_branch->SetAddress(&electrons_charge_); }
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
  p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_); }
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
  genparticles_isPromptFinalState_branch = 0;
  if (tree->GetBranch("genparticles_isPromptFinalState") != 0) {
    genparticles_isPromptFinalState_branch = tree->GetBranch("genparticles_isPromptFinalState");
    if (genparticles_isPromptFinalState_branch) { genparticles_isPromptFinalState_branch->SetAddress(&genparticles_isPromptFinalState_); }
  }
  muons_time_comb_IPOutInError_branch = 0;
  if (tree->GetBranch("muons_time_comb_IPOutInError") != 0) {
    muons_time_comb_IPOutInError_branch = tree->GetBranch("muons_time_comb_IPOutInError");
    if (muons_time_comb_IPOutInError_branch) { muons_time_comb_IPOutInError_branch->SetAddress(&muons_time_comb_IPOutInError_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_); }
  }
  electrons_etaSC_branch = 0;
  if (tree->GetBranch("electrons_etaSC") != 0) {
    electrons_etaSC_branch = tree->GetBranch("electrons_etaSC");
    if (electrons_etaSC_branch) { electrons_etaSC_branch->SetAddress(&electrons_etaSC_); }
  }
  p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_); }
  }
  photons_associated_pfcands_sum_sc_pt_branch = 0;
  if (tree->GetBranch("photons_associated_pfcands_sum_sc_pt") != 0) {
    photons_associated_pfcands_sum_sc_pt_branch = tree->GetBranch("photons_associated_pfcands_sum_sc_pt");
    if (photons_associated_pfcands_sum_sc_pt_branch) { photons_associated_pfcands_sum_sc_pt_branch->SetAddress(&photons_associated_pfcands_sum_sc_pt_); }
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
  p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM");
    if (p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_branch) { p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_); }
  }
  electrons_pfIso04_sum_neutral_nofsr_branch = 0;
  if (tree->GetBranch("electrons_pfIso04_sum_neutral_nofsr") != 0) {
    electrons_pfIso04_sum_neutral_nofsr_branch = tree->GetBranch("electrons_pfIso04_sum_neutral_nofsr");
    if (electrons_pfIso04_sum_neutral_nofsr_branch) { electrons_pfIso04_sum_neutral_nofsr_branch->SetAddress(&electrons_pfIso04_sum_neutral_nofsr_); }
  }
  metfilter_ecalLaserCorrFilter_branch = 0;
  if (tree->GetBranch("metfilter_ecalLaserCorrFilter") != 0) {
    metfilter_ecalLaserCorrFilter_branch = tree->GetBranch("metfilter_ecalLaserCorrFilter");
    if (metfilter_ecalLaserCorrFilter_branch) { metfilter_ecalLaserCorrFilter_branch->SetAddress(&metfilter_ecalLaserCorrFilter_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_); }
  }
  metfilter_HBHENoiseIsoFilter_branch = 0;
  if (tree->GetBranch("metfilter_HBHENoiseIsoFilter") != 0) {
    metfilter_HBHENoiseIsoFilter_branch = tree->GetBranch("metfilter_HBHENoiseIsoFilter");
    if (metfilter_HBHENoiseIsoFilter_branch) { metfilter_HBHENoiseIsoFilter_branch->SetAddress(&metfilter_HBHENoiseIsoFilter_); }
  }
  p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM") != 0) {
    p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_branch = tree->GetBranch("p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM");
    if (p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_branch) { p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_branch->SetAddress(&p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_); }
  }
  p_Gen_JJEW_BSI_ghza4_1_MCFM_branch = 0;
  if (tree->GetBranch("p_Gen_JJEW_BSI_ghza4_1_MCFM") != 0) {
    p_Gen_JJEW_BSI_ghza4_1_MCFM_branch = tree->GetBranch("p_Gen_JJEW_BSI_ghza4_1_MCFM");
    if (p_Gen_JJEW_BSI_ghza4_1_MCFM_branch) { p_Gen_JJEW_BSI_ghza4_1_MCFM_branch->SetAddress(&p_Gen_JJEW_BSI_ghza4_1_MCFM_); }
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
  genparticles_fromHardProcessFinalState_branch = 0;
  if (tree->GetBranch("genparticles_fromHardProcessFinalState") != 0) {
    genparticles_fromHardProcessFinalState_branch = tree->GetBranch("genparticles_fromHardProcessFinalState");
    if (genparticles_fromHardProcessFinalState_branch) { genparticles_fromHardProcessFinalState_branch->SetAddress(&genparticles_fromHardProcessFinalState_); }
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
  genparticles_eta_branch = 0;
  if (tree->GetBranch("genparticles_eta") != 0) {
    genparticles_eta_branch = tree->GetBranch("genparticles_eta");
    if (genparticles_eta_branch) { genparticles_eta_branch->SetAddress(&genparticles_eta_); }
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
  photons_pfEMIso_EAcorr_branch = 0;
  if (tree->GetBranch("photons_pfEMIso_EAcorr") != 0) {
    photons_pfEMIso_EAcorr_branch = tree->GetBranch("photons_pfEMIso_EAcorr");
    if (photons_pfEMIso_EAcorr_branch) { photons_pfEMIso_EAcorr_branch->SetAddress(&photons_pfEMIso_EAcorr_); }
  }
  ak8jets_JERUp_branch = 0;
  if (tree->GetBranch("ak8jets_JERUp") != 0) {
    ak8jets_JERUp_branch = tree->GetBranch("ak8jets_JERUp");
    if (ak8jets_JERUp_branch) { ak8jets_JERUp_branch->SetAddress(&ak8jets_JERUp_); }
  }
  electrons_id_cutBased_Fall17V1_Medium_Bits_branch = 0;
  if (tree->GetBranch("electrons_id_cutBased_Fall17V1_Medium_Bits") != 0) {
    electrons_id_cutBased_Fall17V1_Medium_Bits_branch = tree->GetBranch("electrons_id_cutBased_Fall17V1_Medium_Bits");
    if (electrons_id_cutBased_Fall17V1_Medium_Bits_branch) { electrons_id_cutBased_Fall17V1_Medium_Bits_branch->SetAddress(&electrons_id_cutBased_Fall17V1_Medium_Bits_); }
  }
  lheparticles_px_branch = 0;
  if (tree->GetBranch("lheparticles_px") != 0) {
    lheparticles_px_branch = tree->GetBranch("lheparticles_px");
    if (lheparticles_px_branch) { lheparticles_px_branch->SetAddress(&lheparticles_px_); }
  }
  metfilter_muonBadTrackFilter_branch = 0;
  if (tree->GetBranch("metfilter_muonBadTrackFilter") != 0) {
    metfilter_muonBadTrackFilter_branch = tree->GetBranch("metfilter_muonBadTrackFilter");
    if (metfilter_muonBadTrackFilter_branch) { metfilter_muonBadTrackFilter_branch->SetAddress(&metfilter_muonBadTrackFilter_); }
  }
  photons_scale_smear_corr_smear_totalDn_branch = 0;
  if (tree->GetBranch("photons_scale_smear_corr_smear_totalDn") != 0) {
    photons_scale_smear_corr_smear_totalDn_branch = tree->GetBranch("photons_scale_smear_corr_smear_totalDn");
    if (photons_scale_smear_corr_smear_totalDn_branch) { photons_scale_smear_corr_smear_totalDn_branch->SetAddress(&photons_scale_smear_corr_smear_totalDn_); }
  }
  tree->SetMakeClass(0);
}
void CMS5::GetEntry(unsigned int idx) {
  index = idx;
  p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_isLoaded = false;
  p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_isLoaded = false;
  p_Gen_JJEW_SIG_ghza4_1_MCFM_isLoaded = false;
  ak8jets_partonFlavour_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_isLoaded = false;
  electrons_eta_isLoaded = false;
  electrons_pfIso04_sum_charged_nofsr_isLoaded = false;
  lheparticles_pz_isLoaded = false;
  ak4jets_pass_tightId_isLoaded = false;
  lheparticles_py_isLoaded = false;
  electrons_id_cutBased_Fall17V2_Veto_Bits_isLoaded = false;
  pfmet_metPhi_Nominal_isLoaded = false;
  xsec_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_isLoaded = false;
  electrons_miniIso_comb_nofsr_uncorrected_isLoaded = false;
  genparticles_isLastCopyBeforeFSR_isLoaded = false;
  muons_pfIso04_comb_nofsr_isLoaded = false;
  isotracks_is_pfCand_isLoaded = false;
  metfilter_CSCTightHaloFilter_isLoaded = false;
  muons_time_rpc_IPInOut_isLoaded = false;
  muons_pt_isLoaded = false;
  p_Gen_JJEW_SIG_gha4_1_MCFM_isLoaded = false;
  electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_isLoaded = false;
  photons_scale_smear_corr_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_isLoaded = false;
  electrons_fid_mask_isLoaded = false;
  LHEweight_AsMZ_Dn_default_isLoaded = false;
  electrons_mass_isLoaded = false;
  pfmet_metPhi_JECDn_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_isLoaded = false;
  ak4jets_JERDn_isLoaded = false;
  xsec_lhe_isLoaded = false;
  ak4jets_partonFlavour_isLoaded = false;
  ak4jets_eta_isLoaded = false;
  ak4jets_totalMultiplicity_isLoaded = false;
  puppimet_metPhi_JECDn_isLoaded = false;
  electrons_pt_isLoaded = false;
  genparticles_pt_isLoaded = false;
  PythiaWeight_fsr_muR0p5_isLoaded = false;
  genparticles_mom0_index_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_isLoaded = false;
  muons_pull_dxdz_noArb_DT_isLoaded = false;
  ak8jets_totalMultiplicity_isLoaded = false;
  p_Gen_JJEW_BKG_MCFM_isLoaded = false;
  p_Gen_JJEW_BSI_gha2_1_MCFM_isLoaded = false;
  isotracks_fromPV_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_1_MCFM_isLoaded = false;
  muons_scale_smear_pt_corr_smear_totalUp_isLoaded = false;
  electrons_id_MVA_Fall17V2_NoIso_pass_wp80_isLoaded = false;
  isotracks_pfIso03_comb_nofsr_isLoaded = false;
  LuminosityBlock_isLoaded = false;
  vtxs_nvtxs_isLoaded = false;
  qscale_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_isLoaded = false;
  muons_time_rpc_IPInOutError_isLoaded = false;
  isotracks_miniIso_comb_nofsr_isLoaded = false;
  muons_pfIso03_sum_charged_nofsr_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_isLoaded = false;
  electrons_id_cutBased_Fall17V1_Veto_Bits_isLoaded = false;
  photons_n_associated_pfcands_isLoaded = false;
  p_Gen_JJEW_SIG_ghv4_1_MCFM_isLoaded = false;
  electrons_id_MVA_HZZRun2Legacy_Iso_Cat_isLoaded = false;
  p_Gen_JJEW_SIG_ghv2_1_MCFM_isLoaded = false;
  vtxs_is_good_isLoaded = false;
  puppimet_met_JERDn_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_isLoaded = false;
  electrons_scale_smear_corr_smear_totalDn_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_pass_wp80_isLoaded = false;
  LHECandMass_isLoaded = false;
  pfmet_met_JERDn_isLoaded = false;
  metfilter_goodVertices_isLoaded = false;
  muons_pfIso04_sum_charged_nofsr_isLoaded = false;
  pfmet_met_JECUp_isLoaded = false;
  ak4jets_JECDn_isLoaded = false;
  electrons_pfIso03_comb_nofsr_isLoaded = false;
  photons_pfIso_comb_isLoaded = false;
  metfilter_trkPOG_toomanystripclus53X_isLoaded = false;
  isotracks_pt_isLoaded = false;
  lheparticles_mother1_index_isLoaded = false;
  pfmet_calo_met_isLoaded = false;
  muons_pfIso03_comb_nofsr_isLoaded = false;
  passCommonSkim_isLoaded = false;
  muons_scale_smear_pt_corr_scale_totalUp_isLoaded = false;
  isotracks_is_tightTrack_isLoaded = false;
  photons_id_cutBased_Fall17V2_Loose_Bits_isLoaded = false;
  ak8jets_n_mucands_isLoaded = false;
  metfilter_trkPOG_logErrorTooManyClusters_isLoaded = false;
  ak8jets_axis2_isLoaded = false;
  isotracks_is_highPurityTrack_isLoaded = false;
  LHEweight_AsMZ_Up_NNPDF30_isLoaded = false;
  triggers_name_isLoaded = false;
  puppimet_met_JECDn_isLoaded = false;
  muons_miniIso_comb_nofsr_isLoaded = false;
  electrons_id_cutBased_Fall17V2_Loose_Bits_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_isLoaded = false;
  electrons_id_MVA_HZZRun2Legacy_Iso_Val_isLoaded = false;
  photons_pt_isLoaded = false;
  metfilter_CSCTightHaloTrkMuUnvetoFilter_isLoaded = false;
  electrons_miniIso_comb_nofsr_isLoaded = false;
  muons_pull_dxdz_noArb_CSC_isLoaded = false;
  metfilter_globalTightHalo2016Filter_isLoaded = false;
  genparticles_status_isLoaded = false;
  genparticles_fromHardProcessDecayed_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_isLoaded = false;
  genparticles_isPromptDecayed_isLoaded = false;
  ak4jets_pass_looseId_isLoaded = false;
  metfilter_globalSuperTightHalo2016Filter_isLoaded = false;
  muons_time_comb_IPInOut_isLoaded = false;
  metfilter_ecalBadCalibFilterUpdated_isLoaded = false;
  metfilter_HcalStripHaloFilter_isLoaded = false;
  genHEPMCweight_default_isLoaded = false;
  photons_scale_smear_corr_scale_totalUp_isLoaded = false;
  electrons_scale_smear_corr_scale_totalUp_isLoaded = false;
  metfilter_trkPOG_manystripclus53X_isLoaded = false;
  isotracks_id_isLoaded = false;
  ak4jets_JECNominal_isLoaded = false;
  p_Gen_JJEW_BSI_gha4_1_MCFM_isLoaded = false;
  LHEweight_PDFVariation_Dn_NNPDF30_isLoaded = false;
  isotracks_dxy_isLoaded = false;
  pfmet_met_Raw_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_pass_wp90_isLoaded = false;
  genparticles_mom1_index_isLoaded = false;
  ak8jets_n_pfcands_isLoaded = false;
  LHEweight_QCDscale_muR0p5_muF0p5_isLoaded = false;
  pfmet_met_JERUp_isLoaded = false;
  metfilter_EcalDeadCellBoundaryEnergyFilter_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_isLoaded = false;
  pfmet_metPhi_JECUp_isLoaded = false;
  puppimet_metPhi_JERUp_isLoaded = false;
  ak8jets_phi_isLoaded = false;
  pfmet_met_JECDn_isLoaded = false;
  photons_hasPixelSeed_isLoaded = false;
  muons_time_rpc_IPOutInError_isLoaded = false;
  puppimet_metPhi_JECUp_isLoaded = false;
  photons_id_MVA_Fall17V2_Cat_isLoaded = false;
  ak8jets_JECDn_isLoaded = false;
  fsrcands_eta_isLoaded = false;
  ak4jets_pass_puId_isLoaded = false;
  alphaS_isLoaded = false;
  ak4jets_n_pfcands_isLoaded = false;
  p_Gen_JJEW_SIG_ghza2_1_MCFM_isLoaded = false;
  puppimet_met_JERUp_isLoaded = false;
  ak4jets_JECUp_isLoaded = false;
  fsrcands_fsrMatch_muon_index_list_isLoaded = false;
  muons_pfIso03_sum_neutral_nofsr_isLoaded = false;
  muons_time_comb_IPOutIn_isLoaded = false;
  vtxs_is_fake_isLoaded = false;
  p_Gen_JJEW_SIG_gha2_1_MCFM_isLoaded = false;
  LHEweight_QCDscale_muR1_muF0p5_isLoaded = false;
  genparticles_phi_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_isLoaded = false;
  pfmet_sumEt_Nominal_isLoaded = false;
  metfilter_HBHENoiseFilter_isLoaded = false;
  electrons_scale_smear_corr_isLoaded = false;
  genparticles_isLastCopy_isLoaded = false;
  lheparticles_status_isLoaded = false;
  isotracks_nearestPFcand_id_isLoaded = false;
  LHEweight_QCDscale_muR2_muF0p5_isLoaded = false;
  isotracks_dzerr_isLoaded = false;
  ak8jets_eta_isLoaded = false;
  genparticles_fromHardProcessBeforeFSR_isLoaded = false;
  pfmet_met_Nominal_isLoaded = false;
  ak4jets_deepFlavourproblepb_isLoaded = false;
  photons_pfNeutralHadronIso_EAcorr_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_isLoaded = false;
  vtxs_pos_y_isLoaded = false;
  vtxs_pos_x_isLoaded = false;
  vtxs_pos_z_isLoaded = false;
  vtxs_pos_t_isLoaded = false;
  ak8jets_area_isLoaded = false;
  genparticles_isDirectPromptTauDecayProductFinalState_isLoaded = false;
  xsecerr_isLoaded = false;
  photons_id_MVA_Fall17V2_pass_wp80_isLoaded = false;
  muons_time_rpc_IPOutIn_isLoaded = false;
  LHEweight_QCDscale_muR2_muF2_isLoaded = false;
  LHEweight_QCDscale_muR2_muF1_isLoaded = false;
  muons_mass_isLoaded = false;
  muons_miniIso_sum_neutral_nofsr_isLoaded = false;
  isotracks_phi_isLoaded = false;
  photons_passElectronVeto_isLoaded = false;
  EventNumber_isLoaded = false;
  electrons_id_cutBased_Fall17V1_Tight_Bits_isLoaded = false;
  p_Gen_JJEW_BSI_ghza2_1_MCFM_isLoaded = false;
  ak4jets_JERNominal_isLoaded = false;
  electrons_n_associated_pfcands_isLoaded = false;
  pfmet_metSignificance_isLoaded = false;
  electrons_type_mask_isLoaded = false;
  ak8jets_hadronFlavour_isLoaded = false;
  vtxs_nvtxs_good_isLoaded = false;
  photons_mass_isLoaded = false;
  photons_scale_smear_corr_scale_totalDn_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_isLoaded = false;
  puppimet_met_Nominal_isLoaded = false;
  fsrcands_mass_isLoaded = false;
  metfilter_BadPFMuonFilter_isLoaded = false;
  electrons_pfIso03_sum_neutral_nofsr_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_isLoaded = false;
  ak8jets_mass_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_isLoaded = false;
  PythiaWeight_fsr_muRsqrt2_isLoaded = false;
  PythiaWeight_isr_muR0p5_isLoaded = false;
  genmet_metPhi_isLoaded = false;
  n_vtxs_PU_isLoaded = false;
  PythiaWeight_isr_muRoneoversqrt2_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_Cat_isLoaded = false;
  isotracks_nearestPFcand_deltaR_isLoaded = false;
  photons_eta_isLoaded = false;
  photons_id_cutBased_Fall17V2_Tight_Bits_isLoaded = false;
  ak8jets_axis1_isLoaded = false;
  pfmet_metPhi_JERUp_isLoaded = false;
  LHEweight_AsMZ_Dn_NNPDF30_isLoaded = false;
  pThat_isLoaded = false;
  muons_scale_smear_pt_corr_isLoaded = false;
  triggers_L1prescale_isLoaded = false;
  isotracks_miniIso_ch_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_isLoaded = false;
  electrons_scale_smear_corr_scale_totalDn_isLoaded = false;
  electrons_pfIso03_sum_charged_nofsr_isLoaded = false;
  metfilter_trackingFailureFilter_isLoaded = false;
  ak8jets_n_softdrop_subjets_isLoaded = false;
  muons_time_comb_ndof_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_isLoaded = false;
  p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_isLoaded = false;
  puppimet_metPhi_JERDn_isLoaded = false;
  puppimet_sumEt_Raw_isLoaded = false;
  photons_phi_isLoaded = false;
  triggers_HLTprescale_isLoaded = false;
  metfilter_trkPOGFilters_isLoaded = false;
  ak8jets_pt_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_isLoaded = false;
  ak8jets_JECUp_isLoaded = false;
  ak8jets_ptDistribution_isLoaded = false;
  genparticles_id_isLoaded = false;
  electrons_associated_pfcands_sum_sc_pt_isLoaded = false;
  vtxs_pos_dt_isLoaded = false;
  vtxs_pos_dz_isLoaded = false;
  vtxs_pos_dx_isLoaded = false;
  vtxs_pos_dy_isLoaded = false;
  puppimet_met_Raw_isLoaded = false;
  ak4jets_mass_isLoaded = false;
  vtxs_ndof_isLoaded = false;
  muons_time_rpc_ndof_isLoaded = false;
  ak8jets_JECNominal_isLoaded = false;
  puppimet_metSignificance_isLoaded = false;
  isotracks_dz_isLoaded = false;
  metfilter_chargedHadronTrackResolutionFilter_isLoaded = false;
  metfilter_EcalDeadCellTriggerPrimitiveFilter_isLoaded = false;
  fsrcands_phi_isLoaded = false;
  PythiaWeight_isr_muR2_isLoaded = false;
  muons_scale_smear_pt_corr_smear_totalDn_isLoaded = false;
  PythiaWeight_isr_muR4_isLoaded = false;
  ak8jets_pt_resolution_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_Val_isLoaded = false;
  metfilter_hcalLaserEventFilter_isLoaded = false;
  isotracks_is_lostTrack_isLoaded = false;
  electrons_pfIso04_comb_nofsr_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_isLoaded = false;
  p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_isLoaded = false;
  LHEweight_PDFVariation_Up_default_isLoaded = false;
  fsrcands_fsrMatch_electron_index_list_isLoaded = false;
  n_true_int_isLoaded = false;
  p_Gen_JJEW_BSI_ghv2_1_MCFM_isLoaded = false;
  ak4jets_pt_isLoaded = false;
  RunNumber_isLoaded = false;
  electrons_id_cutBased_Fall17V2_Tight_Bits_isLoaded = false;
  ak4jets_pass_leptonVetoId_isLoaded = false;
  lheparticles_E_isLoaded = false;
  isotracks_dxyerr_isLoaded = false;
  puppimet_metPhi_Raw_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_isLoaded = false;
  PythiaWeight_fsr_muRoneoversqrt2_isLoaded = false;
  ak4jets_ptDistribution_isLoaded = false;
  genparticles_isDirectHardProcessTauDecayProductFinalState_isLoaded = false;
  isotracks_eta_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_isLoaded = false;
  photons_id_MVA_Fall17V2_pass_wp90_isLoaded = false;
  fsrcands_photonVeto_index_list_isLoaded = false;
  metfilter_eeBadScFilter_isLoaded = false;
  puppimet_metPhi_Nominal_isLoaded = false;
  photons_scale_smear_corr_smear_totalUp_isLoaded = false;
  ak4jets_n_mucands_isLoaded = false;
  metfilter_ecalBadCalibFilter_isLoaded = false;
  electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_isLoaded = false;
  electrons_miniIso_sum_neutral_nofsr_isLoaded = false;
  muons_charge_isLoaded = false;
  genparticles_is_packed_isLoaded = false;
  genparticles_isHardProcess_isLoaded = false;
  muons_scale_smear_pt_corr_scale_totalDn_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_isLoaded = false;
  event_rho_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_isLoaded = false;
  ak4jets_hadronFlavour_isLoaded = false;
  ak4jets_pt_resolution_isLoaded = false;
  puppimet_sumEt_Nominal_isLoaded = false;
  electrons_id_MVA_Fall17V2_NoIso_pass_wp90_isLoaded = false;
  electrons_id_MVA_Fall17V2_NoIso_Cat_isLoaded = false;
  pfmet_sumEt_Raw_isLoaded = false;
  ak8jets_JERNominal_isLoaded = false;
  genparticles_mass_isLoaded = false;
  electrons_id_cutBased_Fall17V1_Loose_Bits_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_MCFM_isLoaded = false;
  LHEweight_QCDscale_muR0p5_muF1_isLoaded = false;
  LHEweight_QCDscale_muR0p5_muF2_isLoaded = false;
  muons_pfIso04_sum_neutral_nofsr_isLoaded = false;
  lheparticles_mother0_index_isLoaded = false;
  metfilter_METFilters_isLoaded = false;
  pfmet_calo_metPhi_isLoaded = false;
  p_Gen_CPStoBWPropRewgt_isLoaded = false;
  puppimet_met_over_sqrtSumEt_isLoaded = false;
  muons_phi_isLoaded = false;
  muons_time_comb_IPInOutError_isLoaded = false;
  genHEPMCweight_NNPDF30_isLoaded = false;
  electrons_id_cutBased_Fall17V2_Medium_Bits_isLoaded = false;
  pfmet_metPhi_JERDn_isLoaded = false;
  ak4jets_deepFlavourprobc_isLoaded = false;
  ak4jets_deepFlavourprobb_isLoaded = false;
  ak4jets_deepFlavourprobg_isLoaded = false;
  LHEweight_QCDscale_muR1_muF2_isLoaded = false;
  LHEweight_QCDscale_muR1_muF1_isLoaded = false;
  metfilter_BadChargedCandidateFilter_isLoaded = false;
  sumEt_isLoaded = false;
  ak8jets_JERDn_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_isLoaded = false;
  muons_miniIso_sum_charged_nofsr_isLoaded = false;
  muons_POG_selector_bits_isLoaded = false;
  photons_pfChargedHadronIso_EAcorr_isLoaded = false;
  p_Gen_JJEW_BSI_ghv4_1_MCFM_isLoaded = false;
  isotracks_pfIso03_ch_isLoaded = false;
  electrons_phi_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_isLoaded = false;
  LHEweight_PDFVariation_Dn_default_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_isLoaded = false;
  ak4jets_phi_isLoaded = false;
  photons_id_cutBased_Fall17V2_Medium_Bits_isLoaded = false;
  ak4jets_area_isLoaded = false;
  electrons_charge_isLoaded = false;
  muons_eta_isLoaded = false;
  vtxs_is_valid_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_isLoaded = false;
  electrons_miniIso_sum_charged_nofsr_isLoaded = false;
  ak4jets_deepFlavourprobbb_isLoaded = false;
  LHEweight_AsMZ_Up_default_isLoaded = false;
  muons_miniIso_comb_nofsr_uncorrected_isLoaded = false;
  metfilter_CSCTightHalo2015Filter_isLoaded = false;
  genparticles_isPromptFinalState_isLoaded = false;
  muons_time_comb_IPOutInError_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_isLoaded = false;
  electrons_etaSC_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_isLoaded = false;
  photons_associated_pfcands_sum_sc_pt_isLoaded = false;
  PythiaWeight_fsr_muR0p25_isLoaded = false;
  PythiaWeight_isr_muRsqrt2_isLoaded = false;
  ak4jets_deepFlavourprobuds_isLoaded = false;
  p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_isLoaded = false;
  electrons_pfIso04_sum_neutral_nofsr_isLoaded = false;
  metfilter_ecalLaserCorrFilter_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_isLoaded = false;
  metfilter_HBHENoiseIsoFilter_isLoaded = false;
  p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_isLoaded = false;
  p_Gen_JJEW_BSI_ghza4_1_MCFM_isLoaded = false;
  PythiaWeight_isr_muR0p25_isLoaded = false;
  genmet_met_isLoaded = false;
  fsrcands_pt_isLoaded = false;
  genparticles_fromHardProcessFinalState_isLoaded = false;
  ak4jets_JERUp_isLoaded = false;
  photons_id_MVA_Fall17V2_Val_isLoaded = false;
  genparticles_eta_isLoaded = false;
  ak4jets_axis1_isLoaded = false;
  ak4jets_axis2_isLoaded = false;
  puppimet_met_JECUp_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_isLoaded = false;
  electrons_id_MVA_Fall17V2_NoIso_Val_isLoaded = false;
  PythiaWeight_fsr_muR2_isLoaded = false;
  pfmet_met_over_sqrtSumEt_isLoaded = false;
  PythiaWeight_fsr_muR4_isLoaded = false;
  lheparticles_id_isLoaded = false;
  electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_isLoaded = false;
  electrons_scale_smear_corr_smear_totalUp_isLoaded = false;
  isotracks_mass_isLoaded = false;
  triggers_passTrigger_isLoaded = false;
  pfmet_metPhi_Raw_isLoaded = false;
  LHEweight_PDFVariation_Up_NNPDF30_isLoaded = false;
  photons_pfEMIso_EAcorr_isLoaded = false;
  ak8jets_JERUp_isLoaded = false;
  electrons_id_cutBased_Fall17V1_Medium_Bits_isLoaded = false;
  lheparticles_px_isLoaded = false;
  metfilter_muonBadTrackFilter_isLoaded = false;
  photons_scale_smear_corr_smear_totalDn_isLoaded = false;
}
void CMS5::LoadAllBranches() {
  if (p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM();
  if (p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM_branch != 0) p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM();
  if (p_Gen_JJEW_SIG_ghza4_1_MCFM_branch != 0) p_Gen_JJEW_SIG_ghza4_1_MCFM();
  if (ak8jets_partonFlavour_branch != 0) ak8jets_partonFlavour();
  if (p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM();
  if (electrons_eta_branch != 0) electrons_eta();
  if (electrons_pfIso04_sum_charged_nofsr_branch != 0) electrons_pfIso04_sum_charged_nofsr();
  if (lheparticles_pz_branch != 0) lheparticles_pz();
  if (ak4jets_pass_tightId_branch != 0) ak4jets_pass_tightId();
  if (lheparticles_py_branch != 0) lheparticles_py();
  if (electrons_id_cutBased_Fall17V2_Veto_Bits_branch != 0) electrons_id_cutBased_Fall17V2_Veto_Bits();
  if (pfmet_metPhi_Nominal_branch != 0) pfmet_metPhi_Nominal();
  if (xsec_branch != 0) xsec();
  if (p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM();
  if (electrons_miniIso_comb_nofsr_uncorrected_branch != 0) electrons_miniIso_comb_nofsr_uncorrected();
  if (genparticles_isLastCopyBeforeFSR_branch != 0) genparticles_isLastCopyBeforeFSR();
  if (muons_pfIso04_comb_nofsr_branch != 0) muons_pfIso04_comb_nofsr();
  if (isotracks_is_pfCand_branch != 0) isotracks_is_pfCand();
  if (metfilter_CSCTightHaloFilter_branch != 0) metfilter_CSCTightHaloFilter();
  if (muons_time_rpc_IPInOut_branch != 0) muons_time_rpc_IPInOut();
  if (muons_pt_branch != 0) muons_pt();
  if (p_Gen_JJEW_SIG_gha4_1_MCFM_branch != 0) p_Gen_JJEW_SIG_gha4_1_MCFM();
  if (electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose_branch != 0) electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose();
  if (photons_scale_smear_corr_branch != 0) photons_scale_smear_corr();
  if (p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM();
  if (electrons_fid_mask_branch != 0) electrons_fid_mask();
  if (LHEweight_AsMZ_Dn_default_branch != 0) LHEweight_AsMZ_Dn_default();
  if (electrons_mass_branch != 0) electrons_mass();
  if (pfmet_metPhi_JECDn_branch != 0) pfmet_metPhi_JECDn();
  if (p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM();
  if (ak4jets_JERDn_branch != 0) ak4jets_JERDn();
  if (xsec_lhe_branch != 0) xsec_lhe();
  if (ak4jets_partonFlavour_branch != 0) ak4jets_partonFlavour();
  if (ak4jets_eta_branch != 0) ak4jets_eta();
  if (ak4jets_totalMultiplicity_branch != 0) ak4jets_totalMultiplicity();
  if (puppimet_metPhi_JECDn_branch != 0) puppimet_metPhi_JECDn();
  if (electrons_pt_branch != 0) electrons_pt();
  if (genparticles_pt_branch != 0) genparticles_pt();
  if (PythiaWeight_fsr_muR0p5_branch != 0) PythiaWeight_fsr_muR0p5();
  if (genparticles_mom0_index_branch != 0) genparticles_mom0_index();
  if (p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM();
  if (muons_pull_dxdz_noArb_DT_branch != 0) muons_pull_dxdz_noArb_DT();
  if (ak8jets_totalMultiplicity_branch != 0) ak8jets_totalMultiplicity();
  if (p_Gen_JJEW_BKG_MCFM_branch != 0) p_Gen_JJEW_BKG_MCFM();
  if (p_Gen_JJEW_BSI_gha2_1_MCFM_branch != 0) p_Gen_JJEW_BSI_gha2_1_MCFM();
  if (isotracks_fromPV_branch != 0) isotracks_fromPV();
  if (p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM();
  if (p_Gen_JJEW_BSI_ghv1_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_1_MCFM();
  if (muons_scale_smear_pt_corr_smear_totalUp_branch != 0) muons_scale_smear_pt_corr_smear_totalUp();
  if (electrons_id_MVA_Fall17V2_NoIso_pass_wp80_branch != 0) electrons_id_MVA_Fall17V2_NoIso_pass_wp80();
  if (isotracks_pfIso03_comb_nofsr_branch != 0) isotracks_pfIso03_comb_nofsr();
  if (LuminosityBlock_branch != 0) LuminosityBlock();
  if (vtxs_nvtxs_branch != 0) vtxs_nvtxs();
  if (qscale_branch != 0) qscale();
  if (p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM();
  if (muons_time_rpc_IPInOutError_branch != 0) muons_time_rpc_IPInOutError();
  if (isotracks_miniIso_comb_nofsr_branch != 0) isotracks_miniIso_comb_nofsr();
  if (muons_pfIso03_sum_charged_nofsr_branch != 0) muons_pfIso03_sum_charged_nofsr();
  if (p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM();
  if (electrons_id_cutBased_Fall17V1_Veto_Bits_branch != 0) electrons_id_cutBased_Fall17V1_Veto_Bits();
  if (photons_n_associated_pfcands_branch != 0) photons_n_associated_pfcands();
  if (p_Gen_JJEW_SIG_ghv4_1_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv4_1_MCFM();
  if (electrons_id_MVA_HZZRun2Legacy_Iso_Cat_branch != 0) electrons_id_MVA_HZZRun2Legacy_Iso_Cat();
  if (p_Gen_JJEW_SIG_ghv2_1_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv2_1_MCFM();
  if (vtxs_is_good_branch != 0) vtxs_is_good();
  if (puppimet_met_JERDn_branch != 0) puppimet_met_JERDn();
  if (p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM();
  if (electrons_scale_smear_corr_smear_totalDn_branch != 0) electrons_scale_smear_corr_smear_totalDn();
  if (electrons_id_MVA_Fall17V2_Iso_pass_wp80_branch != 0) electrons_id_MVA_Fall17V2_Iso_pass_wp80();
  if (LHECandMass_branch != 0) LHECandMass();
  if (pfmet_met_JERDn_branch != 0) pfmet_met_JERDn();
  if (metfilter_goodVertices_branch != 0) metfilter_goodVertices();
  if (muons_pfIso04_sum_charged_nofsr_branch != 0) muons_pfIso04_sum_charged_nofsr();
  if (pfmet_met_JECUp_branch != 0) pfmet_met_JECUp();
  if (ak4jets_JECDn_branch != 0) ak4jets_JECDn();
  if (electrons_pfIso03_comb_nofsr_branch != 0) electrons_pfIso03_comb_nofsr();
  if (photons_pfIso_comb_branch != 0) photons_pfIso_comb();
  if (metfilter_trkPOG_toomanystripclus53X_branch != 0) metfilter_trkPOG_toomanystripclus53X();
  if (isotracks_pt_branch != 0) isotracks_pt();
  if (lheparticles_mother1_index_branch != 0) lheparticles_mother1_index();
  if (pfmet_calo_met_branch != 0) pfmet_calo_met();
  if (muons_pfIso03_comb_nofsr_branch != 0) muons_pfIso03_comb_nofsr();
  if (passCommonSkim_branch != 0) passCommonSkim();
  if (muons_scale_smear_pt_corr_scale_totalUp_branch != 0) muons_scale_smear_pt_corr_scale_totalUp();
  if (isotracks_is_tightTrack_branch != 0) isotracks_is_tightTrack();
  if (photons_id_cutBased_Fall17V2_Loose_Bits_branch != 0) photons_id_cutBased_Fall17V2_Loose_Bits();
  if (ak8jets_n_mucands_branch != 0) ak8jets_n_mucands();
  if (metfilter_trkPOG_logErrorTooManyClusters_branch != 0) metfilter_trkPOG_logErrorTooManyClusters();
  if (ak8jets_axis2_branch != 0) ak8jets_axis2();
  if (isotracks_is_highPurityTrack_branch != 0) isotracks_is_highPurityTrack();
  if (LHEweight_AsMZ_Up_NNPDF30_branch != 0) LHEweight_AsMZ_Up_NNPDF30();
  if (triggers_name_branch != 0) triggers_name();
  if (puppimet_met_JECDn_branch != 0) puppimet_met_JECDn();
  if (muons_miniIso_comb_nofsr_branch != 0) muons_miniIso_comb_nofsr();
  if (electrons_id_cutBased_Fall17V2_Loose_Bits_branch != 0) electrons_id_cutBased_Fall17V2_Loose_Bits();
  if (p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM();
  if (electrons_id_MVA_HZZRun2Legacy_Iso_Val_branch != 0) electrons_id_MVA_HZZRun2Legacy_Iso_Val();
  if (photons_pt_branch != 0) photons_pt();
  if (metfilter_CSCTightHaloTrkMuUnvetoFilter_branch != 0) metfilter_CSCTightHaloTrkMuUnvetoFilter();
  if (electrons_miniIso_comb_nofsr_branch != 0) electrons_miniIso_comb_nofsr();
  if (muons_pull_dxdz_noArb_CSC_branch != 0) muons_pull_dxdz_noArb_CSC();
  if (metfilter_globalTightHalo2016Filter_branch != 0) metfilter_globalTightHalo2016Filter();
  if (genparticles_status_branch != 0) genparticles_status();
  if (genparticles_fromHardProcessDecayed_branch != 0) genparticles_fromHardProcessDecayed();
  if (p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM();
  if (genparticles_isPromptDecayed_branch != 0) genparticles_isPromptDecayed();
  if (ak4jets_pass_looseId_branch != 0) ak4jets_pass_looseId();
  if (metfilter_globalSuperTightHalo2016Filter_branch != 0) metfilter_globalSuperTightHalo2016Filter();
  if (muons_time_comb_IPInOut_branch != 0) muons_time_comb_IPInOut();
  if (metfilter_ecalBadCalibFilterUpdated_branch != 0) metfilter_ecalBadCalibFilterUpdated();
  if (metfilter_HcalStripHaloFilter_branch != 0) metfilter_HcalStripHaloFilter();
  if (genHEPMCweight_default_branch != 0) genHEPMCweight_default();
  if (photons_scale_smear_corr_scale_totalUp_branch != 0) photons_scale_smear_corr_scale_totalUp();
  if (electrons_scale_smear_corr_scale_totalUp_branch != 0) electrons_scale_smear_corr_scale_totalUp();
  if (metfilter_trkPOG_manystripclus53X_branch != 0) metfilter_trkPOG_manystripclus53X();
  if (isotracks_id_branch != 0) isotracks_id();
  if (ak4jets_JECNominal_branch != 0) ak4jets_JECNominal();
  if (p_Gen_JJEW_BSI_gha4_1_MCFM_branch != 0) p_Gen_JJEW_BSI_gha4_1_MCFM();
  if (LHEweight_PDFVariation_Dn_NNPDF30_branch != 0) LHEweight_PDFVariation_Dn_NNPDF30();
  if (isotracks_dxy_branch != 0) isotracks_dxy();
  if (pfmet_met_Raw_branch != 0) pfmet_met_Raw();
  if (electrons_id_MVA_Fall17V2_Iso_pass_wp90_branch != 0) electrons_id_MVA_Fall17V2_Iso_pass_wp90();
  if (genparticles_mom1_index_branch != 0) genparticles_mom1_index();
  if (ak8jets_n_pfcands_branch != 0) ak8jets_n_pfcands();
  if (LHEweight_QCDscale_muR0p5_muF0p5_branch != 0) LHEweight_QCDscale_muR0p5_muF0p5();
  if (pfmet_met_JERUp_branch != 0) pfmet_met_JERUp();
  if (metfilter_EcalDeadCellBoundaryEnergyFilter_branch != 0) metfilter_EcalDeadCellBoundaryEnergyFilter();
  if (p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM();
  if (pfmet_metPhi_JECUp_branch != 0) pfmet_metPhi_JECUp();
  if (puppimet_metPhi_JERUp_branch != 0) puppimet_metPhi_JERUp();
  if (ak8jets_phi_branch != 0) ak8jets_phi();
  if (pfmet_met_JECDn_branch != 0) pfmet_met_JECDn();
  if (photons_hasPixelSeed_branch != 0) photons_hasPixelSeed();
  if (muons_time_rpc_IPOutInError_branch != 0) muons_time_rpc_IPOutInError();
  if (puppimet_metPhi_JECUp_branch != 0) puppimet_metPhi_JECUp();
  if (photons_id_MVA_Fall17V2_Cat_branch != 0) photons_id_MVA_Fall17V2_Cat();
  if (ak8jets_JECDn_branch != 0) ak8jets_JECDn();
  if (fsrcands_eta_branch != 0) fsrcands_eta();
  if (ak4jets_pass_puId_branch != 0) ak4jets_pass_puId();
  if (alphaS_branch != 0) alphaS();
  if (ak4jets_n_pfcands_branch != 0) ak4jets_n_pfcands();
  if (p_Gen_JJEW_SIG_ghza2_1_MCFM_branch != 0) p_Gen_JJEW_SIG_ghza2_1_MCFM();
  if (puppimet_met_JERUp_branch != 0) puppimet_met_JERUp();
  if (ak4jets_JECUp_branch != 0) ak4jets_JECUp();
  if (fsrcands_fsrMatch_muon_index_list_branch != 0) fsrcands_fsrMatch_muon_index_list();
  if (muons_pfIso03_sum_neutral_nofsr_branch != 0) muons_pfIso03_sum_neutral_nofsr();
  if (muons_time_comb_IPOutIn_branch != 0) muons_time_comb_IPOutIn();
  if (vtxs_is_fake_branch != 0) vtxs_is_fake();
  if (p_Gen_JJEW_SIG_gha2_1_MCFM_branch != 0) p_Gen_JJEW_SIG_gha2_1_MCFM();
  if (LHEweight_QCDscale_muR1_muF0p5_branch != 0) LHEweight_QCDscale_muR1_muF0p5();
  if (genparticles_phi_branch != 0) genparticles_phi();
  if (p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM();
  if (pfmet_sumEt_Nominal_branch != 0) pfmet_sumEt_Nominal();
  if (metfilter_HBHENoiseFilter_branch != 0) metfilter_HBHENoiseFilter();
  if (electrons_scale_smear_corr_branch != 0) electrons_scale_smear_corr();
  if (genparticles_isLastCopy_branch != 0) genparticles_isLastCopy();
  if (lheparticles_status_branch != 0) lheparticles_status();
  if (isotracks_nearestPFcand_id_branch != 0) isotracks_nearestPFcand_id();
  if (LHEweight_QCDscale_muR2_muF0p5_branch != 0) LHEweight_QCDscale_muR2_muF0p5();
  if (isotracks_dzerr_branch != 0) isotracks_dzerr();
  if (ak8jets_eta_branch != 0) ak8jets_eta();
  if (genparticles_fromHardProcessBeforeFSR_branch != 0) genparticles_fromHardProcessBeforeFSR();
  if (pfmet_met_Nominal_branch != 0) pfmet_met_Nominal();
  if (ak4jets_deepFlavourproblepb_branch != 0) ak4jets_deepFlavourproblepb();
  if (photons_pfNeutralHadronIso_EAcorr_branch != 0) photons_pfNeutralHadronIso_EAcorr();
  if (p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM();
  if (vtxs_pos_y_branch != 0) vtxs_pos_y();
  if (vtxs_pos_x_branch != 0) vtxs_pos_x();
  if (vtxs_pos_z_branch != 0) vtxs_pos_z();
  if (vtxs_pos_t_branch != 0) vtxs_pos_t();
  if (ak8jets_area_branch != 0) ak8jets_area();
  if (genparticles_isDirectPromptTauDecayProductFinalState_branch != 0) genparticles_isDirectPromptTauDecayProductFinalState();
  if (xsecerr_branch != 0) xsecerr();
  if (photons_id_MVA_Fall17V2_pass_wp80_branch != 0) photons_id_MVA_Fall17V2_pass_wp80();
  if (muons_time_rpc_IPOutIn_branch != 0) muons_time_rpc_IPOutIn();
  if (LHEweight_QCDscale_muR2_muF2_branch != 0) LHEweight_QCDscale_muR2_muF2();
  if (LHEweight_QCDscale_muR2_muF1_branch != 0) LHEweight_QCDscale_muR2_muF1();
  if (muons_mass_branch != 0) muons_mass();
  if (muons_miniIso_sum_neutral_nofsr_branch != 0) muons_miniIso_sum_neutral_nofsr();
  if (isotracks_phi_branch != 0) isotracks_phi();
  if (photons_passElectronVeto_branch != 0) photons_passElectronVeto();
  if (EventNumber_branch != 0) EventNumber();
  if (electrons_id_cutBased_Fall17V1_Tight_Bits_branch != 0) electrons_id_cutBased_Fall17V1_Tight_Bits();
  if (p_Gen_JJEW_BSI_ghza2_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghza2_1_MCFM();
  if (ak4jets_JERNominal_branch != 0) ak4jets_JERNominal();
  if (electrons_n_associated_pfcands_branch != 0) electrons_n_associated_pfcands();
  if (pfmet_metSignificance_branch != 0) pfmet_metSignificance();
  if (electrons_type_mask_branch != 0) electrons_type_mask();
  if (ak8jets_hadronFlavour_branch != 0) ak8jets_hadronFlavour();
  if (vtxs_nvtxs_good_branch != 0) vtxs_nvtxs_good();
  if (photons_mass_branch != 0) photons_mass();
  if (photons_scale_smear_corr_scale_totalDn_branch != 0) photons_scale_smear_corr_scale_totalDn();
  if (p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM();
  if (puppimet_met_Nominal_branch != 0) puppimet_met_Nominal();
  if (fsrcands_mass_branch != 0) fsrcands_mass();
  if (metfilter_BadPFMuonFilter_branch != 0) metfilter_BadPFMuonFilter();
  if (electrons_pfIso03_sum_neutral_nofsr_branch != 0) electrons_pfIso03_sum_neutral_nofsr();
  if (p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM();
  if (ak8jets_mass_branch != 0) ak8jets_mass();
  if (p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM();
  if (PythiaWeight_fsr_muRsqrt2_branch != 0) PythiaWeight_fsr_muRsqrt2();
  if (PythiaWeight_isr_muR0p5_branch != 0) PythiaWeight_isr_muR0p5();
  if (genmet_metPhi_branch != 0) genmet_metPhi();
  if (n_vtxs_PU_branch != 0) n_vtxs_PU();
  if (PythiaWeight_isr_muRoneoversqrt2_branch != 0) PythiaWeight_isr_muRoneoversqrt2();
  if (electrons_id_MVA_Fall17V2_Iso_Cat_branch != 0) electrons_id_MVA_Fall17V2_Iso_Cat();
  if (isotracks_nearestPFcand_deltaR_branch != 0) isotracks_nearestPFcand_deltaR();
  if (photons_eta_branch != 0) photons_eta();
  if (photons_id_cutBased_Fall17V2_Tight_Bits_branch != 0) photons_id_cutBased_Fall17V2_Tight_Bits();
  if (ak8jets_axis1_branch != 0) ak8jets_axis1();
  if (pfmet_metPhi_JERUp_branch != 0) pfmet_metPhi_JERUp();
  if (LHEweight_AsMZ_Dn_NNPDF30_branch != 0) LHEweight_AsMZ_Dn_NNPDF30();
  if (pThat_branch != 0) pThat();
  if (muons_scale_smear_pt_corr_branch != 0) muons_scale_smear_pt_corr();
  if (triggers_L1prescale_branch != 0) triggers_L1prescale();
  if (isotracks_miniIso_ch_branch != 0) isotracks_miniIso_ch();
  if (p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM();
  if (electrons_scale_smear_corr_scale_totalDn_branch != 0) electrons_scale_smear_corr_scale_totalDn();
  if (electrons_pfIso03_sum_charged_nofsr_branch != 0) electrons_pfIso03_sum_charged_nofsr();
  if (metfilter_trackingFailureFilter_branch != 0) metfilter_trackingFailureFilter();
  if (ak8jets_n_softdrop_subjets_branch != 0) ak8jets_n_softdrop_subjets();
  if (muons_time_comb_ndof_branch != 0) muons_time_comb_ndof();
  if (p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM();
  if (p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_branch != 0) p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM();
  if (puppimet_metPhi_JERDn_branch != 0) puppimet_metPhi_JERDn();
  if (puppimet_sumEt_Raw_branch != 0) puppimet_sumEt_Raw();
  if (photons_phi_branch != 0) photons_phi();
  if (triggers_HLTprescale_branch != 0) triggers_HLTprescale();
  if (metfilter_trkPOGFilters_branch != 0) metfilter_trkPOGFilters();
  if (ak8jets_pt_branch != 0) ak8jets_pt();
  if (p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM();
  if (ak8jets_JECUp_branch != 0) ak8jets_JECUp();
  if (ak8jets_ptDistribution_branch != 0) ak8jets_ptDistribution();
  if (genparticles_id_branch != 0) genparticles_id();
  if (electrons_associated_pfcands_sum_sc_pt_branch != 0) electrons_associated_pfcands_sum_sc_pt();
  if (vtxs_pos_dt_branch != 0) vtxs_pos_dt();
  if (vtxs_pos_dz_branch != 0) vtxs_pos_dz();
  if (vtxs_pos_dx_branch != 0) vtxs_pos_dx();
  if (vtxs_pos_dy_branch != 0) vtxs_pos_dy();
  if (puppimet_met_Raw_branch != 0) puppimet_met_Raw();
  if (ak4jets_mass_branch != 0) ak4jets_mass();
  if (vtxs_ndof_branch != 0) vtxs_ndof();
  if (muons_time_rpc_ndof_branch != 0) muons_time_rpc_ndof();
  if (ak8jets_JECNominal_branch != 0) ak8jets_JECNominal();
  if (puppimet_metSignificance_branch != 0) puppimet_metSignificance();
  if (isotracks_dz_branch != 0) isotracks_dz();
  if (metfilter_chargedHadronTrackResolutionFilter_branch != 0) metfilter_chargedHadronTrackResolutionFilter();
  if (metfilter_EcalDeadCellTriggerPrimitiveFilter_branch != 0) metfilter_EcalDeadCellTriggerPrimitiveFilter();
  if (fsrcands_phi_branch != 0) fsrcands_phi();
  if (PythiaWeight_isr_muR2_branch != 0) PythiaWeight_isr_muR2();
  if (muons_scale_smear_pt_corr_smear_totalDn_branch != 0) muons_scale_smear_pt_corr_smear_totalDn();
  if (PythiaWeight_isr_muR4_branch != 0) PythiaWeight_isr_muR4();
  if (ak8jets_pt_resolution_branch != 0) ak8jets_pt_resolution();
  if (electrons_id_MVA_Fall17V2_Iso_Val_branch != 0) electrons_id_MVA_Fall17V2_Iso_Val();
  if (metfilter_hcalLaserEventFilter_branch != 0) metfilter_hcalLaserEventFilter();
  if (isotracks_is_lostTrack_branch != 0) isotracks_is_lostTrack();
  if (electrons_pfIso04_comb_nofsr_branch != 0) electrons_pfIso04_comb_nofsr();
  if (p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM();
  if (p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_branch != 0) p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM();
  if (LHEweight_PDFVariation_Up_default_branch != 0) LHEweight_PDFVariation_Up_default();
  if (fsrcands_fsrMatch_electron_index_list_branch != 0) fsrcands_fsrMatch_electron_index_list();
  if (n_true_int_branch != 0) n_true_int();
  if (p_Gen_JJEW_BSI_ghv2_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv2_1_MCFM();
  if (ak4jets_pt_branch != 0) ak4jets_pt();
  if (RunNumber_branch != 0) RunNumber();
  if (electrons_id_cutBased_Fall17V2_Tight_Bits_branch != 0) electrons_id_cutBased_Fall17V2_Tight_Bits();
  if (ak4jets_pass_leptonVetoId_branch != 0) ak4jets_pass_leptonVetoId();
  if (lheparticles_E_branch != 0) lheparticles_E();
  if (isotracks_dxyerr_branch != 0) isotracks_dxyerr();
  if (puppimet_metPhi_Raw_branch != 0) puppimet_metPhi_Raw();
  if (p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM();
  if (PythiaWeight_fsr_muRoneoversqrt2_branch != 0) PythiaWeight_fsr_muRoneoversqrt2();
  if (ak4jets_ptDistribution_branch != 0) ak4jets_ptDistribution();
  if (genparticles_isDirectHardProcessTauDecayProductFinalState_branch != 0) genparticles_isDirectHardProcessTauDecayProductFinalState();
  if (isotracks_eta_branch != 0) isotracks_eta();
  if (p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM();
  if (photons_id_MVA_Fall17V2_pass_wp90_branch != 0) photons_id_MVA_Fall17V2_pass_wp90();
  if (fsrcands_photonVeto_index_list_branch != 0) fsrcands_photonVeto_index_list();
  if (metfilter_eeBadScFilter_branch != 0) metfilter_eeBadScFilter();
  if (puppimet_metPhi_Nominal_branch != 0) puppimet_metPhi_Nominal();
  if (photons_scale_smear_corr_smear_totalUp_branch != 0) photons_scale_smear_corr_smear_totalUp();
  if (ak4jets_n_mucands_branch != 0) ak4jets_n_mucands();
  if (metfilter_ecalBadCalibFilter_branch != 0) metfilter_ecalBadCalibFilter();
  if (electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ_branch != 0) electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ();
  if (electrons_miniIso_sum_neutral_nofsr_branch != 0) electrons_miniIso_sum_neutral_nofsr();
  if (muons_charge_branch != 0) muons_charge();
  if (genparticles_is_packed_branch != 0) genparticles_is_packed();
  if (genparticles_isHardProcess_branch != 0) genparticles_isHardProcess();
  if (muons_scale_smear_pt_corr_scale_totalDn_branch != 0) muons_scale_smear_pt_corr_scale_totalDn();
  if (p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM();
  if (event_rho_branch != 0) event_rho();
  if (p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM();
  if (ak4jets_hadronFlavour_branch != 0) ak4jets_hadronFlavour();
  if (ak4jets_pt_resolution_branch != 0) ak4jets_pt_resolution();
  if (puppimet_sumEt_Nominal_branch != 0) puppimet_sumEt_Nominal();
  if (electrons_id_MVA_Fall17V2_NoIso_pass_wp90_branch != 0) electrons_id_MVA_Fall17V2_NoIso_pass_wp90();
  if (electrons_id_MVA_Fall17V2_NoIso_Cat_branch != 0) electrons_id_MVA_Fall17V2_NoIso_Cat();
  if (pfmet_sumEt_Raw_branch != 0) pfmet_sumEt_Raw();
  if (ak8jets_JERNominal_branch != 0) ak8jets_JERNominal();
  if (genparticles_mass_branch != 0) genparticles_mass();
  if (electrons_id_cutBased_Fall17V1_Loose_Bits_branch != 0) electrons_id_cutBased_Fall17V1_Loose_Bits();
  if (p_Gen_JJEW_SIG_ghv1_1_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_MCFM();
  if (LHEweight_QCDscale_muR0p5_muF1_branch != 0) LHEweight_QCDscale_muR0p5_muF1();
  if (LHEweight_QCDscale_muR0p5_muF2_branch != 0) LHEweight_QCDscale_muR0p5_muF2();
  if (muons_pfIso04_sum_neutral_nofsr_branch != 0) muons_pfIso04_sum_neutral_nofsr();
  if (lheparticles_mother0_index_branch != 0) lheparticles_mother0_index();
  if (metfilter_METFilters_branch != 0) metfilter_METFilters();
  if (pfmet_calo_metPhi_branch != 0) pfmet_calo_metPhi();
  if (p_Gen_CPStoBWPropRewgt_branch != 0) p_Gen_CPStoBWPropRewgt();
  if (puppimet_met_over_sqrtSumEt_branch != 0) puppimet_met_over_sqrtSumEt();
  if (muons_phi_branch != 0) muons_phi();
  if (muons_time_comb_IPInOutError_branch != 0) muons_time_comb_IPInOutError();
  if (genHEPMCweight_NNPDF30_branch != 0) genHEPMCweight_NNPDF30();
  if (electrons_id_cutBased_Fall17V2_Medium_Bits_branch != 0) electrons_id_cutBased_Fall17V2_Medium_Bits();
  if (pfmet_metPhi_JERDn_branch != 0) pfmet_metPhi_JERDn();
  if (ak4jets_deepFlavourprobc_branch != 0) ak4jets_deepFlavourprobc();
  if (ak4jets_deepFlavourprobb_branch != 0) ak4jets_deepFlavourprobb();
  if (ak4jets_deepFlavourprobg_branch != 0) ak4jets_deepFlavourprobg();
  if (LHEweight_QCDscale_muR1_muF2_branch != 0) LHEweight_QCDscale_muR1_muF2();
  if (LHEweight_QCDscale_muR1_muF1_branch != 0) LHEweight_QCDscale_muR1_muF1();
  if (metfilter_BadChargedCandidateFilter_branch != 0) metfilter_BadChargedCandidateFilter();
  if (sumEt_branch != 0) sumEt();
  if (ak8jets_JERDn_branch != 0) ak8jets_JERDn();
  if (p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM();
  if (muons_miniIso_sum_charged_nofsr_branch != 0) muons_miniIso_sum_charged_nofsr();
  if (muons_POG_selector_bits_branch != 0) muons_POG_selector_bits();
  if (photons_pfChargedHadronIso_EAcorr_branch != 0) photons_pfChargedHadronIso_EAcorr();
  if (p_Gen_JJEW_BSI_ghv4_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv4_1_MCFM();
  if (isotracks_pfIso03_ch_branch != 0) isotracks_pfIso03_ch();
  if (electrons_phi_branch != 0) electrons_phi();
  if (p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM();
  if (LHEweight_PDFVariation_Dn_default_branch != 0) LHEweight_PDFVariation_Dn_default();
  if (p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM();
  if (ak4jets_phi_branch != 0) ak4jets_phi();
  if (photons_id_cutBased_Fall17V2_Medium_Bits_branch != 0) photons_id_cutBased_Fall17V2_Medium_Bits();
  if (ak4jets_area_branch != 0) ak4jets_area();
  if (electrons_charge_branch != 0) electrons_charge();
  if (muons_eta_branch != 0) muons_eta();
  if (vtxs_is_valid_branch != 0) vtxs_is_valid();
  if (p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM();
  if (electrons_miniIso_sum_charged_nofsr_branch != 0) electrons_miniIso_sum_charged_nofsr();
  if (ak4jets_deepFlavourprobbb_branch != 0) ak4jets_deepFlavourprobbb();
  if (LHEweight_AsMZ_Up_default_branch != 0) LHEweight_AsMZ_Up_default();
  if (muons_miniIso_comb_nofsr_uncorrected_branch != 0) muons_miniIso_comb_nofsr_uncorrected();
  if (metfilter_CSCTightHalo2015Filter_branch != 0) metfilter_CSCTightHalo2015Filter();
  if (genparticles_isPromptFinalState_branch != 0) genparticles_isPromptFinalState();
  if (muons_time_comb_IPOutInError_branch != 0) muons_time_comb_IPOutInError();
  if (p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM();
  if (electrons_etaSC_branch != 0) electrons_etaSC();
  if (p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM();
  if (photons_associated_pfcands_sum_sc_pt_branch != 0) photons_associated_pfcands_sum_sc_pt();
  if (PythiaWeight_fsr_muR0p25_branch != 0) PythiaWeight_fsr_muR0p25();
  if (PythiaWeight_isr_muRsqrt2_branch != 0) PythiaWeight_isr_muRsqrt2();
  if (ak4jets_deepFlavourprobuds_branch != 0) ak4jets_deepFlavourprobuds();
  if (p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_branch != 0) p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM();
  if (p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM();
  if (electrons_pfIso04_sum_neutral_nofsr_branch != 0) electrons_pfIso04_sum_neutral_nofsr();
  if (metfilter_ecalLaserCorrFilter_branch != 0) metfilter_ecalLaserCorrFilter();
  if (p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM();
  if (metfilter_HBHENoiseIsoFilter_branch != 0) metfilter_HBHENoiseIsoFilter();
  if (p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_branch != 0) p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM();
  if (p_Gen_JJEW_BSI_ghza4_1_MCFM_branch != 0) p_Gen_JJEW_BSI_ghza4_1_MCFM();
  if (PythiaWeight_isr_muR0p25_branch != 0) PythiaWeight_isr_muR0p25();
  if (genmet_met_branch != 0) genmet_met();
  if (fsrcands_pt_branch != 0) fsrcands_pt();
  if (genparticles_fromHardProcessFinalState_branch != 0) genparticles_fromHardProcessFinalState();
  if (ak4jets_JERUp_branch != 0) ak4jets_JERUp();
  if (photons_id_MVA_Fall17V2_Val_branch != 0) photons_id_MVA_Fall17V2_Val();
  if (genparticles_eta_branch != 0) genparticles_eta();
  if (ak4jets_axis1_branch != 0) ak4jets_axis1();
  if (ak4jets_axis2_branch != 0) ak4jets_axis2();
  if (puppimet_met_JECUp_branch != 0) puppimet_met_JECUp();
  if (electrons_id_MVA_Fall17V2_Iso_pass_wpLoose_branch != 0) electrons_id_MVA_Fall17V2_Iso_pass_wpLoose();
  if (electrons_id_MVA_Fall17V2_NoIso_Val_branch != 0) electrons_id_MVA_Fall17V2_NoIso_Val();
  if (PythiaWeight_fsr_muR2_branch != 0) PythiaWeight_fsr_muR2();
  if (pfmet_met_over_sqrtSumEt_branch != 0) pfmet_met_over_sqrtSumEt();
  if (PythiaWeight_fsr_muR4_branch != 0) PythiaWeight_fsr_muR4();
  if (lheparticles_id_branch != 0) lheparticles_id();
  if (electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ_branch != 0) electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ();
  if (electrons_scale_smear_corr_smear_totalUp_branch != 0) electrons_scale_smear_corr_smear_totalUp();
  if (isotracks_mass_branch != 0) isotracks_mass();
  if (triggers_passTrigger_branch != 0) triggers_passTrigger();
  if (pfmet_metPhi_Raw_branch != 0) pfmet_metPhi_Raw();
  if (LHEweight_PDFVariation_Up_NNPDF30_branch != 0) LHEweight_PDFVariation_Up_NNPDF30();
  if (photons_pfEMIso_EAcorr_branch != 0) photons_pfEMIso_EAcorr();
  if (ak8jets_JERUp_branch != 0) ak8jets_JERUp();
  if (electrons_id_cutBased_Fall17V1_Medium_Bits_branch != 0) electrons_id_cutBased_Fall17V1_Medium_Bits();
  if (lheparticles_px_branch != 0) lheparticles_px();
  if (metfilter_muonBadTrackFilter_branch != 0) metfilter_muonBadTrackFilter();
  if (photons_scale_smear_corr_smear_totalDn_branch != 0) photons_scale_smear_corr_smear_totalDn();
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
const float &CMS5::p_Gen_JJEW_SIG_ghza4_1_MCFM() {
  if (not p_Gen_JJEW_SIG_ghza4_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghza4_1_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghza4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghza4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghza4_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghza4_1_MCFM_;
}
const vector<int> &CMS5::ak8jets_partonFlavour() {
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
const float &CMS5::p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM_;
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
const vector<unsigned int> &CMS5::electrons_id_cutBased_Fall17V2_Veto_Bits() {
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM_;
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
const vector<bool> &CMS5::genparticles_isLastCopyBeforeFSR() {
  if (not genparticles_isLastCopyBeforeFSR_isLoaded) {
    if (genparticles_isLastCopyBeforeFSR_branch != 0) {
      genparticles_isLastCopyBeforeFSR_branch->GetEntry(index);
    } else {
      printf("branch genparticles_isLastCopyBeforeFSR_branch does not exist!\n");
      exit(1);
    }
    genparticles_isLastCopyBeforeFSR_isLoaded = true;
  }
  return *genparticles_isLastCopyBeforeFSR_;
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
const vector<float> &CMS5::muons_time_rpc_IPInOut() {
  if (not muons_time_rpc_IPInOut_isLoaded) {
    if (muons_time_rpc_IPInOut_branch != 0) {
      muons_time_rpc_IPInOut_branch->GetEntry(index);
    } else {
      printf("branch muons_time_rpc_IPInOut_branch does not exist!\n");
      exit(1);
    }
    muons_time_rpc_IPInOut_isLoaded = true;
  }
  return *muons_time_rpc_IPInOut_;
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
const float &CMS5::p_Gen_JJEW_SIG_gha4_1_MCFM() {
  if (not p_Gen_JJEW_SIG_gha4_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_gha4_1_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_gha4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_gha4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_gha4_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_gha4_1_MCFM_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM_;
}
const vector<unsigned int> &CMS5::electrons_fid_mask() {
  if (not electrons_fid_mask_isLoaded) {
    if (electrons_fid_mask_branch != 0) {
      electrons_fid_mask_branch->GetEntry(index);
    } else {
      printf("branch electrons_fid_mask_branch does not exist!\n");
      exit(1);
    }
    electrons_fid_mask_isLoaded = true;
  }
  return *electrons_fid_mask_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM_;
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
const vector<int> &CMS5::ak4jets_partonFlavour() {
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
const vector<float> &CMS5::genparticles_pt() {
  if (not genparticles_pt_isLoaded) {
    if (genparticles_pt_branch != 0) {
      genparticles_pt_branch->GetEntry(index);
    } else {
      printf("branch genparticles_pt_branch does not exist!\n");
      exit(1);
    }
    genparticles_pt_isLoaded = true;
  }
  return *genparticles_pt_;
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
const vector<int> &CMS5::genparticles_mom0_index() {
  if (not genparticles_mom0_index_isLoaded) {
    if (genparticles_mom0_index_branch != 0) {
      genparticles_mom0_index_branch->GetEntry(index);
    } else {
      printf("branch genparticles_mom0_index_branch does not exist!\n");
      exit(1);
    }
    genparticles_mom0_index_isLoaded = true;
  }
  return *genparticles_mom0_index_;
}
const float &CMS5::p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM_;
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
const float &CMS5::p_Gen_JJEW_BKG_MCFM() {
  if (not p_Gen_JJEW_BKG_MCFM_isLoaded) {
    if (p_Gen_JJEW_BKG_MCFM_branch != 0) {
      p_Gen_JJEW_BKG_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BKG_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BKG_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BKG_MCFM_;
}
const float &CMS5::p_Gen_JJEW_BSI_gha2_1_MCFM() {
  if (not p_Gen_JJEW_BSI_gha2_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_gha2_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_gha2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_gha2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_gha2_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_gha2_1_MCFM_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM_;
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
const float &CMS5::p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM_;
}
const vector<float> &CMS5::muons_time_rpc_IPInOutError() {
  if (not muons_time_rpc_IPInOutError_isLoaded) {
    if (muons_time_rpc_IPInOutError_branch != 0) {
      muons_time_rpc_IPInOutError_branch->GetEntry(index);
    } else {
      printf("branch muons_time_rpc_IPInOutError_branch does not exist!\n");
      exit(1);
    }
    muons_time_rpc_IPInOutError_isLoaded = true;
  }
  return *muons_time_rpc_IPInOutError_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM_;
}
const vector<unsigned int> &CMS5::electrons_id_cutBased_Fall17V1_Veto_Bits() {
  if (not electrons_id_cutBased_Fall17V1_Veto_Bits_isLoaded) {
    if (electrons_id_cutBased_Fall17V1_Veto_Bits_branch != 0) {
      electrons_id_cutBased_Fall17V1_Veto_Bits_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_cutBased_Fall17V1_Veto_Bits_branch does not exist!\n");
      exit(1);
    }
    electrons_id_cutBased_Fall17V1_Veto_Bits_isLoaded = true;
  }
  return *electrons_id_cutBased_Fall17V1_Veto_Bits_;
}
const vector<unsigned int> &CMS5::photons_n_associated_pfcands() {
  if (not photons_n_associated_pfcands_isLoaded) {
    if (photons_n_associated_pfcands_branch != 0) {
      photons_n_associated_pfcands_branch->GetEntry(index);
    } else {
      printf("branch photons_n_associated_pfcands_branch does not exist!\n");
      exit(1);
    }
    photons_n_associated_pfcands_isLoaded = true;
  }
  return *photons_n_associated_pfcands_;
}
const float &CMS5::p_Gen_JJEW_SIG_ghv4_1_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv4_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv4_1_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv4_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv4_1_MCFM_;
}
const vector<unsigned int> &CMS5::electrons_id_MVA_HZZRun2Legacy_Iso_Cat() {
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
const float &CMS5::p_Gen_JJEW_SIG_ghv2_1_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv2_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv2_1_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv2_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv2_1_MCFM_;
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
const float &CMS5::puppimet_met_JERDn() {
  if (not puppimet_met_JERDn_isLoaded) {
    if (puppimet_met_JERDn_branch != 0) {
      puppimet_met_JERDn_branch->GetEntry(index);
    } else {
      printf("branch puppimet_met_JERDn_branch does not exist!\n");
      exit(1);
    }
    puppimet_met_JERDn_isLoaded = true;
  }
  return puppimet_met_JERDn_;
}
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM_;
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
const float &CMS5::pfmet_met_JERDn() {
  if (not pfmet_met_JERDn_isLoaded) {
    if (pfmet_met_JERDn_branch != 0) {
      pfmet_met_JERDn_branch->GetEntry(index);
    } else {
      printf("branch pfmet_met_JERDn_branch does not exist!\n");
      exit(1);
    }
    pfmet_met_JERDn_isLoaded = true;
  }
  return pfmet_met_JERDn_;
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
const vector<unsigned long> &CMS5::ak8jets_n_mucands() {
  if (not ak8jets_n_mucands_isLoaded) {
    if (ak8jets_n_mucands_branch != 0) {
      ak8jets_n_mucands_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_n_mucands_branch does not exist!\n");
      exit(1);
    }
    ak8jets_n_mucands_isLoaded = true;
  }
  return *ak8jets_n_mucands_;
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
const vector<unsigned int> &CMS5::electrons_id_cutBased_Fall17V2_Loose_Bits() {
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
const float &CMS5::p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM_;
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
const vector<int> &CMS5::genparticles_status() {
  if (not genparticles_status_isLoaded) {
    if (genparticles_status_branch != 0) {
      genparticles_status_branch->GetEntry(index);
    } else {
      printf("branch genparticles_status_branch does not exist!\n");
      exit(1);
    }
    genparticles_status_isLoaded = true;
  }
  return *genparticles_status_;
}
const vector<bool> &CMS5::genparticles_fromHardProcessDecayed() {
  if (not genparticles_fromHardProcessDecayed_isLoaded) {
    if (genparticles_fromHardProcessDecayed_branch != 0) {
      genparticles_fromHardProcessDecayed_branch->GetEntry(index);
    } else {
      printf("branch genparticles_fromHardProcessDecayed_branch does not exist!\n");
      exit(1);
    }
    genparticles_fromHardProcessDecayed_isLoaded = true;
  }
  return *genparticles_fromHardProcessDecayed_;
}
const float &CMS5::p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM_;
}
const vector<bool> &CMS5::genparticles_isPromptDecayed() {
  if (not genparticles_isPromptDecayed_isLoaded) {
    if (genparticles_isPromptDecayed_branch != 0) {
      genparticles_isPromptDecayed_branch->GetEntry(index);
    } else {
      printf("branch genparticles_isPromptDecayed_branch does not exist!\n");
      exit(1);
    }
    genparticles_isPromptDecayed_isLoaded = true;
  }
  return *genparticles_isPromptDecayed_;
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
const vector<float> &CMS5::muons_time_comb_IPInOut() {
  if (not muons_time_comb_IPInOut_isLoaded) {
    if (muons_time_comb_IPInOut_branch != 0) {
      muons_time_comb_IPInOut_branch->GetEntry(index);
    } else {
      printf("branch muons_time_comb_IPInOut_branch does not exist!\n");
      exit(1);
    }
    muons_time_comb_IPInOut_isLoaded = true;
  }
  return *muons_time_comb_IPInOut_;
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
const float &CMS5::p_Gen_JJEW_BSI_gha4_1_MCFM() {
  if (not p_Gen_JJEW_BSI_gha4_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_gha4_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_gha4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_gha4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_gha4_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_gha4_1_MCFM_;
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
const vector<int> &CMS5::genparticles_mom1_index() {
  if (not genparticles_mom1_index_isLoaded) {
    if (genparticles_mom1_index_branch != 0) {
      genparticles_mom1_index_branch->GetEntry(index);
    } else {
      printf("branch genparticles_mom1_index_branch does not exist!\n");
      exit(1);
    }
    genparticles_mom1_index_isLoaded = true;
  }
  return *genparticles_mom1_index_;
}
const vector<unsigned long> &CMS5::ak8jets_n_pfcands() {
  if (not ak8jets_n_pfcands_isLoaded) {
    if (ak8jets_n_pfcands_branch != 0) {
      ak8jets_n_pfcands_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_n_pfcands_branch does not exist!\n");
      exit(1);
    }
    ak8jets_n_pfcands_isLoaded = true;
  }
  return *ak8jets_n_pfcands_;
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
const float &CMS5::pfmet_met_JERUp() {
  if (not pfmet_met_JERUp_isLoaded) {
    if (pfmet_met_JERUp_branch != 0) {
      pfmet_met_JERUp_branch->GetEntry(index);
    } else {
      printf("branch pfmet_met_JERUp_branch does not exist!\n");
      exit(1);
    }
    pfmet_met_JERUp_isLoaded = true;
  }
  return pfmet_met_JERUp_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM_;
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
const float &CMS5::puppimet_metPhi_JERUp() {
  if (not puppimet_metPhi_JERUp_isLoaded) {
    if (puppimet_metPhi_JERUp_branch != 0) {
      puppimet_metPhi_JERUp_branch->GetEntry(index);
    } else {
      printf("branch puppimet_metPhi_JERUp_branch does not exist!\n");
      exit(1);
    }
    puppimet_metPhi_JERUp_isLoaded = true;
  }
  return puppimet_metPhi_JERUp_;
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
const vector<float> &CMS5::muons_time_rpc_IPOutInError() {
  if (not muons_time_rpc_IPOutInError_isLoaded) {
    if (muons_time_rpc_IPOutInError_branch != 0) {
      muons_time_rpc_IPOutInError_branch->GetEntry(index);
    } else {
      printf("branch muons_time_rpc_IPOutInError_branch does not exist!\n");
      exit(1);
    }
    muons_time_rpc_IPOutInError_isLoaded = true;
  }
  return *muons_time_rpc_IPOutInError_;
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
const vector<unsigned long> &CMS5::ak4jets_n_pfcands() {
  if (not ak4jets_n_pfcands_isLoaded) {
    if (ak4jets_n_pfcands_branch != 0) {
      ak4jets_n_pfcands_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_n_pfcands_branch does not exist!\n");
      exit(1);
    }
    ak4jets_n_pfcands_isLoaded = true;
  }
  return *ak4jets_n_pfcands_;
}
const float &CMS5::p_Gen_JJEW_SIG_ghza2_1_MCFM() {
  if (not p_Gen_JJEW_SIG_ghza2_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghza2_1_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghza2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghza2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghza2_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghza2_1_MCFM_;
}
const float &CMS5::puppimet_met_JERUp() {
  if (not puppimet_met_JERUp_isLoaded) {
    if (puppimet_met_JERUp_branch != 0) {
      puppimet_met_JERUp_branch->GetEntry(index);
    } else {
      printf("branch puppimet_met_JERUp_branch does not exist!\n");
      exit(1);
    }
    puppimet_met_JERUp_isLoaded = true;
  }
  return puppimet_met_JERUp_;
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
const vector<float> &CMS5::muons_time_comb_IPOutIn() {
  if (not muons_time_comb_IPOutIn_isLoaded) {
    if (muons_time_comb_IPOutIn_branch != 0) {
      muons_time_comb_IPOutIn_branch->GetEntry(index);
    } else {
      printf("branch muons_time_comb_IPOutIn_branch does not exist!\n");
      exit(1);
    }
    muons_time_comb_IPOutIn_isLoaded = true;
  }
  return *muons_time_comb_IPOutIn_;
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
const float &CMS5::p_Gen_JJEW_SIG_gha2_1_MCFM() {
  if (not p_Gen_JJEW_SIG_gha2_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_gha2_1_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_gha2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_gha2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_gha2_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_gha2_1_MCFM_;
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
const vector<float> &CMS5::genparticles_phi() {
  if (not genparticles_phi_isLoaded) {
    if (genparticles_phi_branch != 0) {
      genparticles_phi_branch->GetEntry(index);
    } else {
      printf("branch genparticles_phi_branch does not exist!\n");
      exit(1);
    }
    genparticles_phi_isLoaded = true;
  }
  return *genparticles_phi_;
}
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM_;
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
const vector<bool> &CMS5::genparticles_isLastCopy() {
  if (not genparticles_isLastCopy_isLoaded) {
    if (genparticles_isLastCopy_branch != 0) {
      genparticles_isLastCopy_branch->GetEntry(index);
    } else {
      printf("branch genparticles_isLastCopy_branch does not exist!\n");
      exit(1);
    }
    genparticles_isLastCopy_isLoaded = true;
  }
  return *genparticles_isLastCopy_;
}
const vector<int> &CMS5::lheparticles_status() {
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
const vector<int> &CMS5::isotracks_nearestPFcand_id() {
  if (not isotracks_nearestPFcand_id_isLoaded) {
    if (isotracks_nearestPFcand_id_branch != 0) {
      isotracks_nearestPFcand_id_branch->GetEntry(index);
    } else {
      printf("branch isotracks_nearestPFcand_id_branch does not exist!\n");
      exit(1);
    }
    isotracks_nearestPFcand_id_isLoaded = true;
  }
  return *isotracks_nearestPFcand_id_;
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
const vector<bool> &CMS5::genparticles_fromHardProcessBeforeFSR() {
  if (not genparticles_fromHardProcessBeforeFSR_isLoaded) {
    if (genparticles_fromHardProcessBeforeFSR_branch != 0) {
      genparticles_fromHardProcessBeforeFSR_branch->GetEntry(index);
    } else {
      printf("branch genparticles_fromHardProcessBeforeFSR_branch does not exist!\n");
      exit(1);
    }
    genparticles_fromHardProcessBeforeFSR_isLoaded = true;
  }
  return *genparticles_fromHardProcessBeforeFSR_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM_;
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
const vector<float> &CMS5::ak8jets_area() {
  if (not ak8jets_area_isLoaded) {
    if (ak8jets_area_branch != 0) {
      ak8jets_area_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_area_branch does not exist!\n");
      exit(1);
    }
    ak8jets_area_isLoaded = true;
  }
  return *ak8jets_area_;
}
const vector<bool> &CMS5::genparticles_isDirectPromptTauDecayProductFinalState() {
  if (not genparticles_isDirectPromptTauDecayProductFinalState_isLoaded) {
    if (genparticles_isDirectPromptTauDecayProductFinalState_branch != 0) {
      genparticles_isDirectPromptTauDecayProductFinalState_branch->GetEntry(index);
    } else {
      printf("branch genparticles_isDirectPromptTauDecayProductFinalState_branch does not exist!\n");
      exit(1);
    }
    genparticles_isDirectPromptTauDecayProductFinalState_isLoaded = true;
  }
  return *genparticles_isDirectPromptTauDecayProductFinalState_;
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
const vector<float> &CMS5::muons_time_rpc_IPOutIn() {
  if (not muons_time_rpc_IPOutIn_isLoaded) {
    if (muons_time_rpc_IPOutIn_branch != 0) {
      muons_time_rpc_IPOutIn_branch->GetEntry(index);
    } else {
      printf("branch muons_time_rpc_IPOutIn_branch does not exist!\n");
      exit(1);
    }
    muons_time_rpc_IPOutIn_isLoaded = true;
  }
  return *muons_time_rpc_IPOutIn_;
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
const vector<unsigned int> &CMS5::electrons_id_cutBased_Fall17V1_Tight_Bits() {
  if (not electrons_id_cutBased_Fall17V1_Tight_Bits_isLoaded) {
    if (electrons_id_cutBased_Fall17V1_Tight_Bits_branch != 0) {
      electrons_id_cutBased_Fall17V1_Tight_Bits_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_cutBased_Fall17V1_Tight_Bits_branch does not exist!\n");
      exit(1);
    }
    electrons_id_cutBased_Fall17V1_Tight_Bits_isLoaded = true;
  }
  return *electrons_id_cutBased_Fall17V1_Tight_Bits_;
}
const float &CMS5::p_Gen_JJEW_BSI_ghza2_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghza2_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghza2_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghza2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghza2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghza2_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghza2_1_MCFM_;
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
const vector<unsigned int> &CMS5::electrons_n_associated_pfcands() {
  if (not electrons_n_associated_pfcands_isLoaded) {
    if (electrons_n_associated_pfcands_branch != 0) {
      electrons_n_associated_pfcands_branch->GetEntry(index);
    } else {
      printf("branch electrons_n_associated_pfcands_branch does not exist!\n");
      exit(1);
    }
    electrons_n_associated_pfcands_isLoaded = true;
  }
  return *electrons_n_associated_pfcands_;
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
const vector<unsigned int> &CMS5::electrons_type_mask() {
  if (not electrons_type_mask_isLoaded) {
    if (electrons_type_mask_branch != 0) {
      electrons_type_mask_branch->GetEntry(index);
    } else {
      printf("branch electrons_type_mask_branch does not exist!\n");
      exit(1);
    }
    electrons_type_mask_isLoaded = true;
  }
  return *electrons_type_mask_;
}
const vector<int> &CMS5::ak8jets_hadronFlavour() {
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
const float &CMS5::p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM_;
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
const vector<unsigned int> &CMS5::electrons_id_MVA_Fall17V2_Iso_Cat() {
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
const vector<float> &CMS5::isotracks_nearestPFcand_deltaR() {
  if (not isotracks_nearestPFcand_deltaR_isLoaded) {
    if (isotracks_nearestPFcand_deltaR_branch != 0) {
      isotracks_nearestPFcand_deltaR_branch->GetEntry(index);
    } else {
      printf("branch isotracks_nearestPFcand_deltaR_branch does not exist!\n");
      exit(1);
    }
    isotracks_nearestPFcand_deltaR_isLoaded = true;
  }
  return *isotracks_nearestPFcand_deltaR_;
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
const float &CMS5::pfmet_metPhi_JERUp() {
  if (not pfmet_metPhi_JERUp_isLoaded) {
    if (pfmet_metPhi_JERUp_branch != 0) {
      pfmet_metPhi_JERUp_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metPhi_JERUp_branch does not exist!\n");
      exit(1);
    }
    pfmet_metPhi_JERUp_isLoaded = true;
  }
  return pfmet_metPhi_JERUp_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM_;
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
const vector<int> &CMS5::muons_time_comb_ndof() {
  if (not muons_time_comb_ndof_isLoaded) {
    if (muons_time_comb_ndof_branch != 0) {
      muons_time_comb_ndof_branch->GetEntry(index);
    } else {
      printf("branch muons_time_comb_ndof_branch does not exist!\n");
      exit(1);
    }
    muons_time_comb_ndof_isLoaded = true;
  }
  return *muons_time_comb_ndof_;
}
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM_;
}
const float &CMS5::p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM() {
  if (not p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM_;
}
const float &CMS5::puppimet_metPhi_JERDn() {
  if (not puppimet_metPhi_JERDn_isLoaded) {
    if (puppimet_metPhi_JERDn_branch != 0) {
      puppimet_metPhi_JERDn_branch->GetEntry(index);
    } else {
      printf("branch puppimet_metPhi_JERDn_branch does not exist!\n");
      exit(1);
    }
    puppimet_metPhi_JERDn_isLoaded = true;
  }
  return puppimet_metPhi_JERDn_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM_;
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
const vector<int> &CMS5::genparticles_id() {
  if (not genparticles_id_isLoaded) {
    if (genparticles_id_branch != 0) {
      genparticles_id_branch->GetEntry(index);
    } else {
      printf("branch genparticles_id_branch does not exist!\n");
      exit(1);
    }
    genparticles_id_isLoaded = true;
  }
  return *genparticles_id_;
}
const vector<float> &CMS5::electrons_associated_pfcands_sum_sc_pt() {
  if (not electrons_associated_pfcands_sum_sc_pt_isLoaded) {
    if (electrons_associated_pfcands_sum_sc_pt_branch != 0) {
      electrons_associated_pfcands_sum_sc_pt_branch->GetEntry(index);
    } else {
      printf("branch electrons_associated_pfcands_sum_sc_pt_branch does not exist!\n");
      exit(1);
    }
    electrons_associated_pfcands_sum_sc_pt_isLoaded = true;
  }
  return *electrons_associated_pfcands_sum_sc_pt_;
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
const vector<int> &CMS5::muons_time_rpc_ndof() {
  if (not muons_time_rpc_ndof_isLoaded) {
    if (muons_time_rpc_ndof_branch != 0) {
      muons_time_rpc_ndof_branch->GetEntry(index);
    } else {
      printf("branch muons_time_rpc_ndof_branch does not exist!\n");
      exit(1);
    }
    muons_time_rpc_ndof_isLoaded = true;
  }
  return *muons_time_rpc_ndof_;
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
const float &CMS5::p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM_;
}
const float &CMS5::p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM() {
  if (not p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM_;
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
const float &CMS5::p_Gen_JJEW_BSI_ghv2_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv2_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv2_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv2_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv2_1_MCFM_;
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
const vector<unsigned int> &CMS5::electrons_id_cutBased_Fall17V2_Tight_Bits() {
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM_;
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
const vector<bool> &CMS5::genparticles_isDirectHardProcessTauDecayProductFinalState() {
  if (not genparticles_isDirectHardProcessTauDecayProductFinalState_isLoaded) {
    if (genparticles_isDirectHardProcessTauDecayProductFinalState_branch != 0) {
      genparticles_isDirectHardProcessTauDecayProductFinalState_branch->GetEntry(index);
    } else {
      printf("branch genparticles_isDirectHardProcessTauDecayProductFinalState_branch does not exist!\n");
      exit(1);
    }
    genparticles_isDirectHardProcessTauDecayProductFinalState_isLoaded = true;
  }
  return *genparticles_isDirectHardProcessTauDecayProductFinalState_;
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
const float &CMS5::p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM_;
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
const vector<unsigned long> &CMS5::ak4jets_n_mucands() {
  if (not ak4jets_n_mucands_isLoaded) {
    if (ak4jets_n_mucands_branch != 0) {
      ak4jets_n_mucands_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_n_mucands_branch does not exist!\n");
      exit(1);
    }
    ak4jets_n_mucands_isLoaded = true;
  }
  return *ak4jets_n_mucands_;
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
const vector<int> &CMS5::muons_charge() {
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
const vector<bool> &CMS5::genparticles_is_packed() {
  if (not genparticles_is_packed_isLoaded) {
    if (genparticles_is_packed_branch != 0) {
      genparticles_is_packed_branch->GetEntry(index);
    } else {
      printf("branch genparticles_is_packed_branch does not exist!\n");
      exit(1);
    }
    genparticles_is_packed_isLoaded = true;
  }
  return *genparticles_is_packed_;
}
const vector<bool> &CMS5::genparticles_isHardProcess() {
  if (not genparticles_isHardProcess_isLoaded) {
    if (genparticles_isHardProcess_branch != 0) {
      genparticles_isHardProcess_branch->GetEntry(index);
    } else {
      printf("branch genparticles_isHardProcess_branch does not exist!\n");
      exit(1);
    }
    genparticles_isHardProcess_isLoaded = true;
  }
  return *genparticles_isHardProcess_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM_;
}
const vector<int> &CMS5::ak4jets_hadronFlavour() {
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
const vector<unsigned int> &CMS5::electrons_id_MVA_Fall17V2_NoIso_Cat() {
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
const vector<float> &CMS5::genparticles_mass() {
  if (not genparticles_mass_isLoaded) {
    if (genparticles_mass_branch != 0) {
      genparticles_mass_branch->GetEntry(index);
    } else {
      printf("branch genparticles_mass_branch does not exist!\n");
      exit(1);
    }
    genparticles_mass_isLoaded = true;
  }
  return *genparticles_mass_;
}
const vector<unsigned int> &CMS5::electrons_id_cutBased_Fall17V1_Loose_Bits() {
  if (not electrons_id_cutBased_Fall17V1_Loose_Bits_isLoaded) {
    if (electrons_id_cutBased_Fall17V1_Loose_Bits_branch != 0) {
      electrons_id_cutBased_Fall17V1_Loose_Bits_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_cutBased_Fall17V1_Loose_Bits_branch does not exist!\n");
      exit(1);
    }
    electrons_id_cutBased_Fall17V1_Loose_Bits_isLoaded = true;
  }
  return *electrons_id_cutBased_Fall17V1_Loose_Bits_;
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
const vector<float> &CMS5::muons_time_comb_IPInOutError() {
  if (not muons_time_comb_IPInOutError_isLoaded) {
    if (muons_time_comb_IPInOutError_branch != 0) {
      muons_time_comb_IPInOutError_branch->GetEntry(index);
    } else {
      printf("branch muons_time_comb_IPInOutError_branch does not exist!\n");
      exit(1);
    }
    muons_time_comb_IPInOutError_isLoaded = true;
  }
  return *muons_time_comb_IPInOutError_;
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
const vector<unsigned int> &CMS5::electrons_id_cutBased_Fall17V2_Medium_Bits() {
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
const float &CMS5::pfmet_metPhi_JERDn() {
  if (not pfmet_metPhi_JERDn_isLoaded) {
    if (pfmet_metPhi_JERDn_branch != 0) {
      pfmet_metPhi_JERDn_branch->GetEntry(index);
    } else {
      printf("branch pfmet_metPhi_JERDn_branch does not exist!\n");
      exit(1);
    }
    pfmet_metPhi_JERDn_isLoaded = true;
  }
  return pfmet_metPhi_JERDn_;
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
const float &CMS5::p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM_;
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
const float &CMS5::p_Gen_JJEW_BSI_ghv4_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv4_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv4_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv4_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv4_1_MCFM_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM_;
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
const vector<float> &CMS5::ak4jets_area() {
  if (not ak4jets_area_isLoaded) {
    if (ak4jets_area_branch != 0) {
      ak4jets_area_branch->GetEntry(index);
    } else {
      printf("branch ak4jets_area_branch does not exist!\n");
      exit(1);
    }
    ak4jets_area_isLoaded = true;
  }
  return *ak4jets_area_;
}
const vector<int> &CMS5::electrons_charge() {
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM_;
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
const vector<bool> &CMS5::genparticles_isPromptFinalState() {
  if (not genparticles_isPromptFinalState_isLoaded) {
    if (genparticles_isPromptFinalState_branch != 0) {
      genparticles_isPromptFinalState_branch->GetEntry(index);
    } else {
      printf("branch genparticles_isPromptFinalState_branch does not exist!\n");
      exit(1);
    }
    genparticles_isPromptFinalState_isLoaded = true;
  }
  return *genparticles_isPromptFinalState_;
}
const vector<float> &CMS5::muons_time_comb_IPOutInError() {
  if (not muons_time_comb_IPOutInError_isLoaded) {
    if (muons_time_comb_IPOutInError_branch != 0) {
      muons_time_comb_IPOutInError_branch->GetEntry(index);
    } else {
      printf("branch muons_time_comb_IPOutInError_branch does not exist!\n");
      exit(1);
    }
    muons_time_comb_IPOutInError_isLoaded = true;
  }
  return *muons_time_comb_IPOutInError_;
}
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM_;
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
const float &CMS5::p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM_;
}
const vector<float> &CMS5::photons_associated_pfcands_sum_sc_pt() {
  if (not photons_associated_pfcands_sum_sc_pt_isLoaded) {
    if (photons_associated_pfcands_sum_sc_pt_branch != 0) {
      photons_associated_pfcands_sum_sc_pt_branch->GetEntry(index);
    } else {
      printf("branch photons_associated_pfcands_sum_sc_pt_branch does not exist!\n");
      exit(1);
    }
    photons_associated_pfcands_sum_sc_pt_isLoaded = true;
  }
  return *photons_associated_pfcands_sum_sc_pt_;
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
const float &CMS5::p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM() {
  if (not p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM_;
}
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM_;
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
const float &CMS5::p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM() {
  if (not p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_isLoaded) {
    if (p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_branch != 0) {
      p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM_;
}
const float &CMS5::p_Gen_JJEW_BSI_ghza4_1_MCFM() {
  if (not p_Gen_JJEW_BSI_ghza4_1_MCFM_isLoaded) {
    if (p_Gen_JJEW_BSI_ghza4_1_MCFM_branch != 0) {
      p_Gen_JJEW_BSI_ghza4_1_MCFM_branch->GetEntry(index);
    } else {
      printf("branch p_Gen_JJEW_BSI_ghza4_1_MCFM_branch does not exist!\n");
      exit(1);
    }
    p_Gen_JJEW_BSI_ghza4_1_MCFM_isLoaded = true;
  }
  return p_Gen_JJEW_BSI_ghza4_1_MCFM_;
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
const vector<bool> &CMS5::genparticles_fromHardProcessFinalState() {
  if (not genparticles_fromHardProcessFinalState_isLoaded) {
    if (genparticles_fromHardProcessFinalState_branch != 0) {
      genparticles_fromHardProcessFinalState_branch->GetEntry(index);
    } else {
      printf("branch genparticles_fromHardProcessFinalState_branch does not exist!\n");
      exit(1);
    }
    genparticles_fromHardProcessFinalState_isLoaded = true;
  }
  return *genparticles_fromHardProcessFinalState_;
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
const vector<float> &CMS5::genparticles_eta() {
  if (not genparticles_eta_isLoaded) {
    if (genparticles_eta_branch != 0) {
      genparticles_eta_branch->GetEntry(index);
    } else {
      printf("branch genparticles_eta_branch does not exist!\n");
      exit(1);
    }
    genparticles_eta_isLoaded = true;
  }
  return *genparticles_eta_;
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
const vector<unsigned int> &CMS5::electrons_id_cutBased_Fall17V1_Medium_Bits() {
  if (not electrons_id_cutBased_Fall17V1_Medium_Bits_isLoaded) {
    if (electrons_id_cutBased_Fall17V1_Medium_Bits_branch != 0) {
      electrons_id_cutBased_Fall17V1_Medium_Bits_branch->GetEntry(index);
    } else {
      printf("branch electrons_id_cutBased_Fall17V1_Medium_Bits_branch does not exist!\n");
      exit(1);
    }
    electrons_id_cutBased_Fall17V1_Medium_Bits_isLoaded = true;
  }
  return *electrons_id_cutBased_Fall17V1_Medium_Bits_;
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
  const float &p_Gen_JJEW_SIG_ghza4_1_MCFM() { return cms5.p_Gen_JJEW_SIG_ghza4_1_MCFM(); }
  const vector<int> &ak8jets_partonFlavour() { return cms5.ak8jets_partonFlavour(); }
  const float &p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_1_ghv2_1_MCFM(); }
  const vector<float> &electrons_eta() { return cms5.electrons_eta(); }
  const vector<float> &electrons_pfIso04_sum_charged_nofsr() { return cms5.electrons_pfIso04_sum_charged_nofsr(); }
  const vector<float> &lheparticles_pz() { return cms5.lheparticles_pz(); }
  const vector<bool> &ak4jets_pass_tightId() { return cms5.ak4jets_pass_tightId(); }
  const vector<float> &lheparticles_py() { return cms5.lheparticles_py(); }
  const vector<unsigned int> &electrons_id_cutBased_Fall17V2_Veto_Bits() { return cms5.electrons_id_cutBased_Fall17V2_Veto_Bits(); }
  const float &pfmet_metPhi_Nominal() { return cms5.pfmet_metPhi_Nominal(); }
  const float &xsec() { return cms5.xsec(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_gha4_0p75_MCFM(); }
  const vector<float> &electrons_miniIso_comb_nofsr_uncorrected() { return cms5.electrons_miniIso_comb_nofsr_uncorrected(); }
  const vector<bool> &genparticles_isLastCopyBeforeFSR() { return cms5.genparticles_isLastCopyBeforeFSR(); }
  const vector<float> &muons_pfIso04_comb_nofsr() { return cms5.muons_pfIso04_comb_nofsr(); }
  const vector<bool> &isotracks_is_pfCand() { return cms5.isotracks_is_pfCand(); }
  const bool &metfilter_CSCTightHaloFilter() { return cms5.metfilter_CSCTightHaloFilter(); }
  const vector<float> &muons_time_rpc_IPInOut() { return cms5.muons_time_rpc_IPInOut(); }
  const vector<float> &muons_pt() { return cms5.muons_pt(); }
  const float &p_Gen_JJEW_SIG_gha4_1_MCFM() { return cms5.p_Gen_JJEW_SIG_gha4_1_MCFM(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose() { return cms5.electrons_id_MVA_Fall17V2_NoIso_pass_wpLoose(); }
  const vector<float> &photons_scale_smear_corr() { return cms5.photons_scale_smear_corr(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghv2_0p5_MCFM(); }
  const vector<unsigned int> &electrons_fid_mask() { return cms5.electrons_fid_mask(); }
  const float &LHEweight_AsMZ_Dn_default() { return cms5.LHEweight_AsMZ_Dn_default(); }
  const vector<float> &electrons_mass() { return cms5.electrons_mass(); }
  const float &pfmet_metPhi_JECDn() { return cms5.pfmet_metPhi_JECDn(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghv4_0p5_MCFM(); }
  const vector<float> &ak4jets_JERDn() { return cms5.ak4jets_JERDn(); }
  const float &xsec_lhe() { return cms5.xsec_lhe(); }
  const vector<int> &ak4jets_partonFlavour() { return cms5.ak4jets_partonFlavour(); }
  const vector<float> &ak4jets_eta() { return cms5.ak4jets_eta(); }
  const vector<float> &ak4jets_totalMultiplicity() { return cms5.ak4jets_totalMultiplicity(); }
  const float &puppimet_metPhi_JECDn() { return cms5.puppimet_metPhi_JECDn(); }
  const vector<float> &electrons_pt() { return cms5.electrons_pt(); }
  const vector<float> &genparticles_pt() { return cms5.genparticles_pt(); }
  const float &PythiaWeight_fsr_muR0p5() { return cms5.PythiaWeight_fsr_muR0p5(); }
  const vector<int> &genparticles_mom0_index() { return cms5.genparticles_mom0_index(); }
  const float &p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1prime2_1E4_MCFM(); }
  const vector<float> &muons_pull_dxdz_noArb_DT() { return cms5.muons_pull_dxdz_noArb_DT(); }
  const vector<float> &ak8jets_totalMultiplicity() { return cms5.ak8jets_totalMultiplicity(); }
  const float &p_Gen_JJEW_BKG_MCFM() { return cms5.p_Gen_JJEW_BKG_MCFM(); }
  const float &p_Gen_JJEW_BSI_gha2_1_MCFM() { return cms5.p_Gen_JJEW_BSI_gha2_1_MCFM(); }
  const vector<bool> &isotracks_fromPV() { return cms5.isotracks_fromPV(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_gha4_0p5_MCFM(); }
  const float &p_Gen_JJEW_BSI_ghv1_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_1_MCFM(); }
  const vector<float> &muons_scale_smear_pt_corr_smear_totalUp() { return cms5.muons_scale_smear_pt_corr_smear_totalUp(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_NoIso_pass_wp80() { return cms5.electrons_id_MVA_Fall17V2_NoIso_pass_wp80(); }
  const vector<float> &isotracks_pfIso03_comb_nofsr() { return cms5.isotracks_pfIso03_comb_nofsr(); }
  const unsigned int &LuminosityBlock() { return cms5.LuminosityBlock(); }
  const unsigned int &vtxs_nvtxs() { return cms5.vtxs_nvtxs(); }
  const float &qscale() { return cms5.qscale(); }
  const float &p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_1_ghza4_1_MCFM(); }
  const vector<float> &muons_time_rpc_IPInOutError() { return cms5.muons_time_rpc_IPInOutError(); }
  const vector<float> &isotracks_miniIso_comb_nofsr() { return cms5.isotracks_miniIso_comb_nofsr(); }
  const vector<float> &muons_pfIso03_sum_charged_nofsr() { return cms5.muons_pfIso03_sum_charged_nofsr(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghv4_0p25_MCFM(); }
  const vector<unsigned int> &electrons_id_cutBased_Fall17V1_Veto_Bits() { return cms5.electrons_id_cutBased_Fall17V1_Veto_Bits(); }
  const vector<unsigned int> &photons_n_associated_pfcands() { return cms5.photons_n_associated_pfcands(); }
  const float &p_Gen_JJEW_SIG_ghv4_1_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv4_1_MCFM(); }
  const vector<unsigned int> &electrons_id_MVA_HZZRun2Legacy_Iso_Cat() { return cms5.electrons_id_MVA_HZZRun2Legacy_Iso_Cat(); }
  const float &p_Gen_JJEW_SIG_ghv2_1_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv2_1_MCFM(); }
  const vector<bool> &vtxs_is_good() { return cms5.vtxs_is_good(); }
  const float &puppimet_met_JERDn() { return cms5.puppimet_met_JERDn(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_75E2_MCFM(); }
  const vector<float> &electrons_scale_smear_corr_smear_totalDn() { return cms5.electrons_scale_smear_corr_smear_totalDn(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_Iso_pass_wp80() { return cms5.electrons_id_MVA_Fall17V2_Iso_pass_wp80(); }
  const float &LHECandMass() { return cms5.LHECandMass(); }
  const float &pfmet_met_JERDn() { return cms5.pfmet_met_JERDn(); }
  const bool &metfilter_goodVertices() { return cms5.metfilter_goodVertices(); }
  const vector<float> &muons_pfIso04_sum_charged_nofsr() { return cms5.muons_pfIso04_sum_charged_nofsr(); }
  const float &pfmet_met_JECUp() { return cms5.pfmet_met_JECUp(); }
  const vector<float> &ak4jets_JECDn() { return cms5.ak4jets_JECDn(); }
  const vector<float> &electrons_pfIso03_comb_nofsr() { return cms5.electrons_pfIso03_comb_nofsr(); }
  const vector<float> &photons_pfIso_comb() { return cms5.photons_pfIso_comb(); }
  const bool &metfilter_trkPOG_toomanystripclus53X() { return cms5.metfilter_trkPOG_toomanystripclus53X(); }
  const vector<float> &isotracks_pt() { return cms5.isotracks_pt(); }
  const vector<int> &lheparticles_mother1_index() { return cms5.lheparticles_mother1_index(); }
  const float &pfmet_calo_met() { return cms5.pfmet_calo_met(); }
  const vector<float> &muons_pfIso03_comb_nofsr() { return cms5.muons_pfIso03_comb_nofsr(); }
  const bool &passCommonSkim() { return cms5.passCommonSkim(); }
  const vector<float> &muons_scale_smear_pt_corr_scale_totalUp() { return cms5.muons_scale_smear_pt_corr_scale_totalUp(); }
  const vector<bool> &isotracks_is_tightTrack() { return cms5.isotracks_is_tightTrack(); }
  const vector<unsigned int> &photons_id_cutBased_Fall17V2_Loose_Bits() { return cms5.photons_id_cutBased_Fall17V2_Loose_Bits(); }
  const vector<unsigned long> &ak8jets_n_mucands() { return cms5.ak8jets_n_mucands(); }
  const bool &metfilter_trkPOG_logErrorTooManyClusters() { return cms5.metfilter_trkPOG_logErrorTooManyClusters(); }
  const vector<float> &ak8jets_axis2() { return cms5.ak8jets_axis2(); }
  const vector<bool> &isotracks_is_highPurityTrack() { return cms5.isotracks_is_highPurityTrack(); }
  const float &LHEweight_AsMZ_Up_NNPDF30() { return cms5.LHEweight_AsMZ_Up_NNPDF30(); }
  const vector<string> &triggers_name() { return cms5.triggers_name(); }
  const float &puppimet_met_JECDn() { return cms5.puppimet_met_JECDn(); }
  const vector<float> &muons_miniIso_comb_nofsr() { return cms5.muons_miniIso_comb_nofsr(); }
  const vector<unsigned int> &electrons_id_cutBased_Fall17V2_Loose_Bits() { return cms5.electrons_id_cutBased_Fall17V2_Loose_Bits(); }
  const float &p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1prime2_1E4_MCFM(); }
  const vector<float> &electrons_id_MVA_HZZRun2Legacy_Iso_Val() { return cms5.electrons_id_MVA_HZZRun2Legacy_Iso_Val(); }
  const vector<float> &photons_pt() { return cms5.photons_pt(); }
  const bool &metfilter_CSCTightHaloTrkMuUnvetoFilter() { return cms5.metfilter_CSCTightHaloTrkMuUnvetoFilter(); }
  const vector<float> &electrons_miniIso_comb_nofsr() { return cms5.electrons_miniIso_comb_nofsr(); }
  const vector<float> &muons_pull_dxdz_noArb_CSC() { return cms5.muons_pull_dxdz_noArb_CSC(); }
  const bool &metfilter_globalTightHalo2016Filter() { return cms5.metfilter_globalTightHalo2016Filter(); }
  const vector<int> &genparticles_status() { return cms5.genparticles_status(); }
  const vector<bool> &genparticles_fromHardProcessDecayed() { return cms5.genparticles_fromHardProcessDecayed(); }
  const float &p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_1_ghv4_1_MCFM(); }
  const vector<bool> &genparticles_isPromptDecayed() { return cms5.genparticles_isPromptDecayed(); }
  const vector<bool> &ak4jets_pass_looseId() { return cms5.ak4jets_pass_looseId(); }
  const bool &metfilter_globalSuperTightHalo2016Filter() { return cms5.metfilter_globalSuperTightHalo2016Filter(); }
  const vector<float> &muons_time_comb_IPInOut() { return cms5.muons_time_comb_IPInOut(); }
  const bool &metfilter_ecalBadCalibFilterUpdated() { return cms5.metfilter_ecalBadCalibFilterUpdated(); }
  const bool &metfilter_HcalStripHaloFilter() { return cms5.metfilter_HcalStripHaloFilter(); }
  const float &genHEPMCweight_default() { return cms5.genHEPMCweight_default(); }
  const vector<float> &photons_scale_smear_corr_scale_totalUp() { return cms5.photons_scale_smear_corr_scale_totalUp(); }
  const vector<float> &electrons_scale_smear_corr_scale_totalUp() { return cms5.electrons_scale_smear_corr_scale_totalUp(); }
  const bool &metfilter_trkPOG_manystripclus53X() { return cms5.metfilter_trkPOG_manystripclus53X(); }
  const vector<int> &isotracks_id() { return cms5.isotracks_id(); }
  const vector<float> &ak4jets_JECNominal() { return cms5.ak4jets_JECNominal(); }
  const float &p_Gen_JJEW_BSI_gha4_1_MCFM() { return cms5.p_Gen_JJEW_BSI_gha4_1_MCFM(); }
  const float &LHEweight_PDFVariation_Dn_NNPDF30() { return cms5.LHEweight_PDFVariation_Dn_NNPDF30(); }
  const vector<float> &isotracks_dxy() { return cms5.isotracks_dxy(); }
  const float &pfmet_met_Raw() { return cms5.pfmet_met_Raw(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_Iso_pass_wp90() { return cms5.electrons_id_MVA_Fall17V2_Iso_pass_wp90(); }
  const vector<int> &genparticles_mom1_index() { return cms5.genparticles_mom1_index(); }
  const vector<unsigned long> &ak8jets_n_pfcands() { return cms5.ak8jets_n_pfcands(); }
  const float &LHEweight_QCDscale_muR0p5_muF0p5() { return cms5.LHEweight_QCDscale_muR0p5_muF0p5(); }
  const float &pfmet_met_JERUp() { return cms5.pfmet_met_JERUp(); }
  const bool &metfilter_EcalDeadCellBoundaryEnergyFilter() { return cms5.metfilter_EcalDeadCellBoundaryEnergyFilter(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghv2_0p25_MCFM(); }
  const float &pfmet_metPhi_JECUp() { return cms5.pfmet_metPhi_JECUp(); }
  const float &puppimet_metPhi_JERUp() { return cms5.puppimet_metPhi_JERUp(); }
  const vector<float> &ak8jets_phi() { return cms5.ak8jets_phi(); }
  const float &pfmet_met_JECDn() { return cms5.pfmet_met_JECDn(); }
  const vector<bool> &photons_hasPixelSeed() { return cms5.photons_hasPixelSeed(); }
  const vector<float> &muons_time_rpc_IPOutInError() { return cms5.muons_time_rpc_IPOutInError(); }
  const float &puppimet_metPhi_JECUp() { return cms5.puppimet_metPhi_JECUp(); }
  const vector<unsigned int> &photons_id_MVA_Fall17V2_Cat() { return cms5.photons_id_MVA_Fall17V2_Cat(); }
  const vector<float> &ak8jets_JECDn() { return cms5.ak8jets_JECDn(); }
  const vector<float> &fsrcands_eta() { return cms5.fsrcands_eta(); }
  const vector<bool> &ak4jets_pass_puId() { return cms5.ak4jets_pass_puId(); }
  const float &alphaS() { return cms5.alphaS(); }
  const vector<unsigned long> &ak4jets_n_pfcands() { return cms5.ak4jets_n_pfcands(); }
  const float &p_Gen_JJEW_SIG_ghza2_1_MCFM() { return cms5.p_Gen_JJEW_SIG_ghza2_1_MCFM(); }
  const float &puppimet_met_JERUp() { return cms5.puppimet_met_JERUp(); }
  const vector<float> &ak4jets_JECUp() { return cms5.ak4jets_JECUp(); }
  const vector<vector<unsigned int> > &fsrcands_fsrMatch_muon_index_list() { return cms5.fsrcands_fsrMatch_muon_index_list(); }
  const vector<float> &muons_pfIso03_sum_neutral_nofsr() { return cms5.muons_pfIso03_sum_neutral_nofsr(); }
  const vector<float> &muons_time_comb_IPOutIn() { return cms5.muons_time_comb_IPOutIn(); }
  const vector<bool> &vtxs_is_fake() { return cms5.vtxs_is_fake(); }
  const float &p_Gen_JJEW_SIG_gha2_1_MCFM() { return cms5.p_Gen_JJEW_SIG_gha2_1_MCFM(); }
  const float &LHEweight_QCDscale_muR1_muF0p5() { return cms5.LHEweight_QCDscale_muR1_muF0p5(); }
  const vector<float> &genparticles_phi() { return cms5.genparticles_phi(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghza4_0p5_MCFM(); }
  const float &pfmet_sumEt_Nominal() { return cms5.pfmet_sumEt_Nominal(); }
  const bool &metfilter_HBHENoiseFilter() { return cms5.metfilter_HBHENoiseFilter(); }
  const vector<float> &electrons_scale_smear_corr() { return cms5.electrons_scale_smear_corr(); }
  const vector<bool> &genparticles_isLastCopy() { return cms5.genparticles_isLastCopy(); }
  const vector<int> &lheparticles_status() { return cms5.lheparticles_status(); }
  const vector<int> &isotracks_nearestPFcand_id() { return cms5.isotracks_nearestPFcand_id(); }
  const float &LHEweight_QCDscale_muR2_muF0p5() { return cms5.LHEweight_QCDscale_muR2_muF0p5(); }
  const vector<float> &isotracks_dzerr() { return cms5.isotracks_dzerr(); }
  const vector<float> &ak8jets_eta() { return cms5.ak8jets_eta(); }
  const vector<bool> &genparticles_fromHardProcessBeforeFSR() { return cms5.genparticles_fromHardProcessBeforeFSR(); }
  const float &pfmet_met_Nominal() { return cms5.pfmet_met_Nominal(); }
  const vector<float> &ak4jets_deepFlavourproblepb() { return cms5.ak4jets_deepFlavourproblepb(); }
  const vector<float> &photons_pfNeutralHadronIso_EAcorr() { return cms5.photons_pfNeutralHadronIso_EAcorr(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_50E2_MCFM(); }
  const vector<float> &vtxs_pos_y() { return cms5.vtxs_pos_y(); }
  const vector<float> &vtxs_pos_x() { return cms5.vtxs_pos_x(); }
  const vector<float> &vtxs_pos_z() { return cms5.vtxs_pos_z(); }
  const vector<float> &vtxs_pos_t() { return cms5.vtxs_pos_t(); }
  const vector<float> &ak8jets_area() { return cms5.ak8jets_area(); }
  const vector<bool> &genparticles_isDirectPromptTauDecayProductFinalState() { return cms5.genparticles_isDirectPromptTauDecayProductFinalState(); }
  const float &xsecerr() { return cms5.xsecerr(); }
  const vector<bool> &photons_id_MVA_Fall17V2_pass_wp80() { return cms5.photons_id_MVA_Fall17V2_pass_wp80(); }
  const vector<float> &muons_time_rpc_IPOutIn() { return cms5.muons_time_rpc_IPOutIn(); }
  const float &LHEweight_QCDscale_muR2_muF2() { return cms5.LHEweight_QCDscale_muR2_muF2(); }
  const float &LHEweight_QCDscale_muR2_muF1() { return cms5.LHEweight_QCDscale_muR2_muF1(); }
  const vector<float> &muons_mass() { return cms5.muons_mass(); }
  const vector<float> &muons_miniIso_sum_neutral_nofsr() { return cms5.muons_miniIso_sum_neutral_nofsr(); }
  const vector<float> &isotracks_phi() { return cms5.isotracks_phi(); }
  const vector<bool> &photons_passElectronVeto() { return cms5.photons_passElectronVeto(); }
  const unsigned long long &EventNumber() { return cms5.EventNumber(); }
  const vector<unsigned int> &electrons_id_cutBased_Fall17V1_Tight_Bits() { return cms5.electrons_id_cutBased_Fall17V1_Tight_Bits(); }
  const float &p_Gen_JJEW_BSI_ghza2_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghza2_1_MCFM(); }
  const vector<float> &ak4jets_JERNominal() { return cms5.ak4jets_JERNominal(); }
  const vector<unsigned int> &electrons_n_associated_pfcands() { return cms5.electrons_n_associated_pfcands(); }
  const float &pfmet_metSignificance() { return cms5.pfmet_metSignificance(); }
  const vector<unsigned int> &electrons_type_mask() { return cms5.electrons_type_mask(); }
  const vector<int> &ak8jets_hadronFlavour() { return cms5.ak8jets_hadronFlavour(); }
  const unsigned int &vtxs_nvtxs_good() { return cms5.vtxs_nvtxs_good(); }
  const vector<float> &photons_mass() { return cms5.photons_mass(); }
  const vector<float> &photons_scale_smear_corr_scale_totalDn() { return cms5.photons_scale_smear_corr_scale_totalDn(); }
  const float &p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_0p5_0p5i_MCFM(); }
  const float &puppimet_met_Nominal() { return cms5.puppimet_met_Nominal(); }
  const vector<float> &fsrcands_mass() { return cms5.fsrcands_mass(); }
  const bool &metfilter_BadPFMuonFilter() { return cms5.metfilter_BadPFMuonFilter(); }
  const vector<float> &electrons_pfIso03_sum_neutral_nofsr() { return cms5.electrons_pfIso03_sum_neutral_nofsr(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghv1prime2_25E2_MCFM(); }
  const vector<float> &ak8jets_mass() { return cms5.ak8jets_mass(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghza2_0p25_MCFM(); }
  const float &PythiaWeight_fsr_muRsqrt2() { return cms5.PythiaWeight_fsr_muRsqrt2(); }
  const float &PythiaWeight_isr_muR0p5() { return cms5.PythiaWeight_isr_muR0p5(); }
  const float &genmet_metPhi() { return cms5.genmet_metPhi(); }
  const int &n_vtxs_PU() { return cms5.n_vtxs_PU(); }
  const float &PythiaWeight_isr_muRoneoversqrt2() { return cms5.PythiaWeight_isr_muRoneoversqrt2(); }
  const vector<unsigned int> &electrons_id_MVA_Fall17V2_Iso_Cat() { return cms5.electrons_id_MVA_Fall17V2_Iso_Cat(); }
  const vector<float> &isotracks_nearestPFcand_deltaR() { return cms5.isotracks_nearestPFcand_deltaR(); }
  const vector<float> &photons_eta() { return cms5.photons_eta(); }
  const vector<unsigned int> &photons_id_cutBased_Fall17V2_Tight_Bits() { return cms5.photons_id_cutBased_Fall17V2_Tight_Bits(); }
  const vector<float> &ak8jets_axis1() { return cms5.ak8jets_axis1(); }
  const float &pfmet_metPhi_JERUp() { return cms5.pfmet_metPhi_JERUp(); }
  const float &LHEweight_AsMZ_Dn_NNPDF30() { return cms5.LHEweight_AsMZ_Dn_NNPDF30(); }
  const float &pThat() { return cms5.pThat(); }
  const vector<float> &muons_scale_smear_pt_corr() { return cms5.muons_scale_smear_pt_corr(); }
  const vector<int> &triggers_L1prescale() { return cms5.triggers_L1prescale(); }
  const vector<float> &isotracks_miniIso_ch() { return cms5.isotracks_miniIso_ch(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghv4_0p75_MCFM(); }
  const vector<float> &electrons_scale_smear_corr_scale_totalDn() { return cms5.electrons_scale_smear_corr_scale_totalDn(); }
  const vector<float> &electrons_pfIso03_sum_charged_nofsr() { return cms5.electrons_pfIso03_sum_charged_nofsr(); }
  const bool &metfilter_trackingFailureFilter() { return cms5.metfilter_trackingFailureFilter(); }
  const vector<unsigned long> &ak8jets_n_softdrop_subjets() { return cms5.ak8jets_n_softdrop_subjets(); }
  const vector<int> &muons_time_comb_ndof() { return cms5.muons_time_comb_ndof(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_75E2_MCFM(); }
  const float &p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM() { return cms5.p_Gen_JJEW_BSI_ghza1prime2_1E4_MCFM(); }
  const float &puppimet_metPhi_JERDn() { return cms5.puppimet_metPhi_JERDn(); }
  const float &puppimet_sumEt_Raw() { return cms5.puppimet_sumEt_Raw(); }
  const vector<float> &photons_phi() { return cms5.photons_phi(); }
  const vector<int> &triggers_HLTprescale() { return cms5.triggers_HLTprescale(); }
  const bool &metfilter_trkPOGFilters() { return cms5.metfilter_trkPOGFilters(); }
  const vector<float> &ak8jets_pt() { return cms5.ak8jets_pt(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_50E2_MCFM(); }
  const vector<float> &ak8jets_JECUp() { return cms5.ak8jets_JECUp(); }
  const vector<float> &ak8jets_ptDistribution() { return cms5.ak8jets_ptDistribution(); }
  const vector<int> &genparticles_id() { return cms5.genparticles_id(); }
  const vector<float> &electrons_associated_pfcands_sum_sc_pt() { return cms5.electrons_associated_pfcands_sum_sc_pt(); }
  const vector<float> &vtxs_pos_dt() { return cms5.vtxs_pos_dt(); }
  const vector<float> &vtxs_pos_dz() { return cms5.vtxs_pos_dz(); }
  const vector<float> &vtxs_pos_dx() { return cms5.vtxs_pos_dx(); }
  const vector<float> &vtxs_pos_dy() { return cms5.vtxs_pos_dy(); }
  const float &puppimet_met_Raw() { return cms5.puppimet_met_Raw(); }
  const vector<float> &ak4jets_mass() { return cms5.ak4jets_mass(); }
  const vector<float> &vtxs_ndof() { return cms5.vtxs_ndof(); }
  const vector<int> &muons_time_rpc_ndof() { return cms5.muons_time_rpc_ndof(); }
  const vector<float> &ak8jets_JECNominal() { return cms5.ak8jets_JECNominal(); }
  const float &puppimet_metSignificance() { return cms5.puppimet_metSignificance(); }
  const vector<float> &isotracks_dz() { return cms5.isotracks_dz(); }
  const bool &metfilter_chargedHadronTrackResolutionFilter() { return cms5.metfilter_chargedHadronTrackResolutionFilter(); }
  const bool &metfilter_EcalDeadCellTriggerPrimitiveFilter() { return cms5.metfilter_EcalDeadCellTriggerPrimitiveFilter(); }
  const vector<float> &fsrcands_phi() { return cms5.fsrcands_phi(); }
  const float &PythiaWeight_isr_muR2() { return cms5.PythiaWeight_isr_muR2(); }
  const vector<float> &muons_scale_smear_pt_corr_smear_totalDn() { return cms5.muons_scale_smear_pt_corr_smear_totalDn(); }
  const float &PythiaWeight_isr_muR4() { return cms5.PythiaWeight_isr_muR4(); }
  const vector<float> &ak8jets_pt_resolution() { return cms5.ak8jets_pt_resolution(); }
  const vector<float> &electrons_id_MVA_Fall17V2_Iso_Val() { return cms5.electrons_id_MVA_Fall17V2_Iso_Val(); }
  const bool &metfilter_hcalLaserEventFilter() { return cms5.metfilter_hcalLaserEventFilter(); }
  const vector<bool> &isotracks_is_lostTrack() { return cms5.isotracks_is_lostTrack(); }
  const vector<float> &electrons_pfIso04_comb_nofsr() { return cms5.electrons_pfIso04_comb_nofsr(); }
  const float &p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_1_gha2_1_MCFM(); }
  const float &p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM() { return cms5.p_Gen_JJEW_SIG_ghza1prime2_1E4_MCFM(); }
  const float &LHEweight_PDFVariation_Up_default() { return cms5.LHEweight_PDFVariation_Up_default(); }
  const vector<vector<unsigned int> > &fsrcands_fsrMatch_electron_index_list() { return cms5.fsrcands_fsrMatch_electron_index_list(); }
  const float &n_true_int() { return cms5.n_true_int(); }
  const float &p_Gen_JJEW_BSI_ghv2_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv2_1_MCFM(); }
  const vector<float> &ak4jets_pt() { return cms5.ak4jets_pt(); }
  const unsigned int &RunNumber() { return cms5.RunNumber(); }
  const vector<unsigned int> &electrons_id_cutBased_Fall17V2_Tight_Bits() { return cms5.electrons_id_cutBased_Fall17V2_Tight_Bits(); }
  const vector<bool> &ak4jets_pass_leptonVetoId() { return cms5.ak4jets_pass_leptonVetoId(); }
  const vector<float> &lheparticles_E() { return cms5.lheparticles_E(); }
  const vector<float> &isotracks_dxyerr() { return cms5.isotracks_dxyerr(); }
  const float &puppimet_metPhi_Raw() { return cms5.puppimet_metPhi_Raw(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_gha2_0p75_MCFM(); }
  const float &PythiaWeight_fsr_muRoneoversqrt2() { return cms5.PythiaWeight_fsr_muRoneoversqrt2(); }
  const vector<float> &ak4jets_ptDistribution() { return cms5.ak4jets_ptDistribution(); }
  const vector<bool> &genparticles_isDirectHardProcessTauDecayProductFinalState() { return cms5.genparticles_isDirectHardProcessTauDecayProductFinalState(); }
  const vector<float> &isotracks_eta() { return cms5.isotracks_eta(); }
  const float &p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_1_ghza2_1_MCFM(); }
  const vector<bool> &photons_id_MVA_Fall17V2_pass_wp90() { return cms5.photons_id_MVA_Fall17V2_pass_wp90(); }
  const vector<vector<unsigned int> > &fsrcands_photonVeto_index_list() { return cms5.fsrcands_photonVeto_index_list(); }
  const bool &metfilter_eeBadScFilter() { return cms5.metfilter_eeBadScFilter(); }
  const float &puppimet_metPhi_Nominal() { return cms5.puppimet_metPhi_Nominal(); }
  const vector<float> &photons_scale_smear_corr_smear_totalUp() { return cms5.photons_scale_smear_corr_smear_totalUp(); }
  const vector<unsigned long> &ak4jets_n_mucands() { return cms5.ak4jets_n_mucands(); }
  const bool &metfilter_ecalBadCalibFilter() { return cms5.metfilter_ecalBadCalibFilter(); }
  const vector<bool> &electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ() { return cms5.electrons_id_MVA_HZZRun2Legacy_Iso_pass_wpHZZ(); }
  const vector<float> &electrons_miniIso_sum_neutral_nofsr() { return cms5.electrons_miniIso_sum_neutral_nofsr(); }
  const vector<int> &muons_charge() { return cms5.muons_charge(); }
  const vector<bool> &genparticles_is_packed() { return cms5.genparticles_is_packed(); }
  const vector<bool> &genparticles_isHardProcess() { return cms5.genparticles_isHardProcess(); }
  const vector<float> &muons_scale_smear_pt_corr_scale_totalDn() { return cms5.muons_scale_smear_pt_corr_scale_totalDn(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghza2_0p5_MCFM(); }
  const float &event_rho() { return cms5.event_rho(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghv2_0p75_MCFM(); }
  const vector<int> &ak4jets_hadronFlavour() { return cms5.ak4jets_hadronFlavour(); }
  const vector<float> &ak4jets_pt_resolution() { return cms5.ak4jets_pt_resolution(); }
  const float &puppimet_sumEt_Nominal() { return cms5.puppimet_sumEt_Nominal(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_NoIso_pass_wp90() { return cms5.electrons_id_MVA_Fall17V2_NoIso_pass_wp90(); }
  const vector<unsigned int> &electrons_id_MVA_Fall17V2_NoIso_Cat() { return cms5.electrons_id_MVA_Fall17V2_NoIso_Cat(); }
  const float &pfmet_sumEt_Raw() { return cms5.pfmet_sumEt_Raw(); }
  const vector<float> &ak8jets_JERNominal() { return cms5.ak8jets_JERNominal(); }
  const vector<float> &genparticles_mass() { return cms5.genparticles_mass(); }
  const vector<unsigned int> &electrons_id_cutBased_Fall17V1_Loose_Bits() { return cms5.electrons_id_cutBased_Fall17V1_Loose_Bits(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_MCFM(); }
  const float &LHEweight_QCDscale_muR0p5_muF1() { return cms5.LHEweight_QCDscale_muR0p5_muF1(); }
  const float &LHEweight_QCDscale_muR0p5_muF2() { return cms5.LHEweight_QCDscale_muR0p5_muF2(); }
  const vector<float> &muons_pfIso04_sum_neutral_nofsr() { return cms5.muons_pfIso04_sum_neutral_nofsr(); }
  const vector<int> &lheparticles_mother0_index() { return cms5.lheparticles_mother0_index(); }
  const bool &metfilter_METFilters() { return cms5.metfilter_METFilters(); }
  const float &pfmet_calo_metPhi() { return cms5.pfmet_calo_metPhi(); }
  const float &p_Gen_CPStoBWPropRewgt() { return cms5.p_Gen_CPStoBWPropRewgt(); }
  const float &puppimet_met_over_sqrtSumEt() { return cms5.puppimet_met_over_sqrtSumEt(); }
  const vector<float> &muons_phi() { return cms5.muons_phi(); }
  const vector<float> &muons_time_comb_IPInOutError() { return cms5.muons_time_comb_IPInOutError(); }
  const float &genHEPMCweight_NNPDF30() { return cms5.genHEPMCweight_NNPDF30(); }
  const vector<unsigned int> &electrons_id_cutBased_Fall17V2_Medium_Bits() { return cms5.electrons_id_cutBased_Fall17V2_Medium_Bits(); }
  const float &pfmet_metPhi_JERDn() { return cms5.pfmet_metPhi_JERDn(); }
  const vector<float> &ak4jets_deepFlavourprobc() { return cms5.ak4jets_deepFlavourprobc(); }
  const vector<float> &ak4jets_deepFlavourprobb() { return cms5.ak4jets_deepFlavourprobb(); }
  const vector<float> &ak4jets_deepFlavourprobg() { return cms5.ak4jets_deepFlavourprobg(); }
  const float &LHEweight_QCDscale_muR1_muF2() { return cms5.LHEweight_QCDscale_muR1_muF2(); }
  const float &LHEweight_QCDscale_muR1_muF1() { return cms5.LHEweight_QCDscale_muR1_muF1(); }
  const bool &metfilter_BadChargedCandidateFilter() { return cms5.metfilter_BadChargedCandidateFilter(); }
  const float &sumEt() { return cms5.sumEt(); }
  const vector<float> &ak8jets_JERDn() { return cms5.ak8jets_JERDn(); }
  const float &p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_1_gha4_1_MCFM(); }
  const vector<float> &muons_miniIso_sum_charged_nofsr() { return cms5.muons_miniIso_sum_charged_nofsr(); }
  const vector<unsigned int> &muons_POG_selector_bits() { return cms5.muons_POG_selector_bits(); }
  const vector<float> &photons_pfChargedHadronIso_EAcorr() { return cms5.photons_pfChargedHadronIso_EAcorr(); }
  const float &p_Gen_JJEW_BSI_ghv4_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv4_1_MCFM(); }
  const vector<float> &isotracks_pfIso03_ch() { return cms5.isotracks_pfIso03_ch(); }
  const vector<float> &electrons_phi() { return cms5.electrons_phi(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_gha2_0p25_MCFM(); }
  const float &LHEweight_PDFVariation_Dn_default() { return cms5.LHEweight_PDFVariation_Dn_default(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghza1prime2_25E2_MCFM(); }
  const vector<float> &ak4jets_phi() { return cms5.ak4jets_phi(); }
  const vector<unsigned int> &photons_id_cutBased_Fall17V2_Medium_Bits() { return cms5.photons_id_cutBased_Fall17V2_Medium_Bits(); }
  const vector<float> &ak4jets_area() { return cms5.ak4jets_area(); }
  const vector<int> &electrons_charge() { return cms5.electrons_charge(); }
  const vector<float> &muons_eta() { return cms5.muons_eta(); }
  const vector<bool> &vtxs_is_valid() { return cms5.vtxs_is_valid(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghza2_0p75_MCFM(); }
  const vector<float> &electrons_miniIso_sum_charged_nofsr() { return cms5.electrons_miniIso_sum_charged_nofsr(); }
  const vector<float> &ak4jets_deepFlavourprobbb() { return cms5.ak4jets_deepFlavourprobbb(); }
  const float &LHEweight_AsMZ_Up_default() { return cms5.LHEweight_AsMZ_Up_default(); }
  const vector<float> &muons_miniIso_comb_nofsr_uncorrected() { return cms5.muons_miniIso_comb_nofsr_uncorrected(); }
  const bool &metfilter_CSCTightHalo2015Filter() { return cms5.metfilter_CSCTightHalo2015Filter(); }
  const vector<bool> &genparticles_isPromptFinalState() { return cms5.genparticles_isPromptFinalState(); }
  const vector<float> &muons_time_comb_IPOutInError() { return cms5.muons_time_comb_IPOutInError(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_gha2_0p5_MCFM(); }
  const vector<float> &electrons_etaSC() { return cms5.electrons_etaSC(); }
  const float &p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_1_ghv1prime2_1E4_MCFM(); }
  const vector<float> &photons_associated_pfcands_sum_sc_pt() { return cms5.photons_associated_pfcands_sum_sc_pt(); }
  const float &PythiaWeight_fsr_muR0p25() { return cms5.PythiaWeight_fsr_muR0p25(); }
  const float &PythiaWeight_isr_muRsqrt2() { return cms5.PythiaWeight_isr_muRsqrt2(); }
  const vector<float> &ak4jets_deepFlavourprobuds() { return cms5.ak4jets_deepFlavourprobuds(); }
  const float &p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM() { return cms5.p_Gen_JJEW_BSI_ghv1_1_ghza1prime2_1E4_MCFM(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_gha4_0p25_MCFM(); }
  const vector<float> &electrons_pfIso04_sum_neutral_nofsr() { return cms5.electrons_pfIso04_sum_neutral_nofsr(); }
  const bool &metfilter_ecalLaserCorrFilter() { return cms5.metfilter_ecalLaserCorrFilter(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghza4_0p25_MCFM(); }
  const bool &metfilter_HBHENoiseIsoFilter() { return cms5.metfilter_HBHENoiseIsoFilter(); }
  const float &p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM() { return cms5.p_Gen_JJEW_SIG_ghv1_1_ghza4_0p75_MCFM(); }
  const float &p_Gen_JJEW_BSI_ghza4_1_MCFM() { return cms5.p_Gen_JJEW_BSI_ghza4_1_MCFM(); }
  const float &PythiaWeight_isr_muR0p25() { return cms5.PythiaWeight_isr_muR0p25(); }
  const float &genmet_met() { return cms5.genmet_met(); }
  const vector<float> &fsrcands_pt() { return cms5.fsrcands_pt(); }
  const vector<bool> &genparticles_fromHardProcessFinalState() { return cms5.genparticles_fromHardProcessFinalState(); }
  const vector<float> &ak4jets_JERUp() { return cms5.ak4jets_JERUp(); }
  const vector<float> &photons_id_MVA_Fall17V2_Val() { return cms5.photons_id_MVA_Fall17V2_Val(); }
  const vector<float> &genparticles_eta() { return cms5.genparticles_eta(); }
  const vector<float> &ak4jets_axis1() { return cms5.ak4jets_axis1(); }
  const vector<float> &ak4jets_axis2() { return cms5.ak4jets_axis2(); }
  const float &puppimet_met_JECUp() { return cms5.puppimet_met_JECUp(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_Iso_pass_wpLoose() { return cms5.electrons_id_MVA_Fall17V2_Iso_pass_wpLoose(); }
  const vector<float> &electrons_id_MVA_Fall17V2_NoIso_Val() { return cms5.electrons_id_MVA_Fall17V2_NoIso_Val(); }
  const float &PythiaWeight_fsr_muR2() { return cms5.PythiaWeight_fsr_muR2(); }
  const float &pfmet_met_over_sqrtSumEt() { return cms5.pfmet_met_over_sqrtSumEt(); }
  const float &PythiaWeight_fsr_muR4() { return cms5.PythiaWeight_fsr_muR4(); }
  const vector<int> &lheparticles_id() { return cms5.lheparticles_id(); }
  const vector<bool> &electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ() { return cms5.electrons_id_MVA_Fall17V2_Iso_pass_wpHZZ(); }
  const vector<float> &electrons_scale_smear_corr_smear_totalUp() { return cms5.electrons_scale_smear_corr_smear_totalUp(); }
  const vector<float> &isotracks_mass() { return cms5.isotracks_mass(); }
  const vector<bool> &triggers_passTrigger() { return cms5.triggers_passTrigger(); }
  const float &pfmet_metPhi_Raw() { return cms5.pfmet_metPhi_Raw(); }
  const float &LHEweight_PDFVariation_Up_NNPDF30() { return cms5.LHEweight_PDFVariation_Up_NNPDF30(); }
  const vector<float> &photons_pfEMIso_EAcorr() { return cms5.photons_pfEMIso_EAcorr(); }
  const vector<float> &ak8jets_JERUp() { return cms5.ak8jets_JERUp(); }
  const vector<unsigned int> &electrons_id_cutBased_Fall17V1_Medium_Bits() { return cms5.electrons_id_cutBased_Fall17V1_Medium_Bits(); }
  const vector<float> &lheparticles_px() { return cms5.lheparticles_px(); }
  const bool &metfilter_muonBadTrackFilter() { return cms5.metfilter_muonBadTrackFilter(); }
  const vector<float> &photons_scale_smear_corr_smear_totalDn() { return cms5.photons_scale_smear_corr_smear_totalDn(); }
  const float &p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_SIG_kappaTopBot_1_ghz1_1_MCFM(); }
  const float &p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM() { return cms5.p_Gen_GG_BSI_kappaTopBot_1_ghz1_1_MCFM(); }
}
