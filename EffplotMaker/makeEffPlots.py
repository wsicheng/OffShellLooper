#! /usr/bin/env python
# coding: utf-8
from __future__ import print_function, division

import os
import sys
import ROOT as r
import numpy as np
from math import sqrt

r.gROOT.SetBatch(1)
r.gStyle.SetOptStat(0)

def getTEfficiency(f, hn, ysuf="", folder="testGeneral", dim=''):
    if '_eta_pt' in hn: dim = '2d'

    hnum = f.Get("{}_num/hnum{}_{}".format(folder,dim,hn))
    hden = f.Get("{}_den/hden{}_{}".format(folder,dim,hn))

    if not hnum: print( " >> Cannot find "+"{}_num/hnum{}_{}".format(folder,dim,hn)+" !!" )
    if not hden: print( " >> Cannot find "+"{}_den/hden{}_{}".format(folder,dim,hn)+" !!" )
    
    heff = r.TEfficiency(hnum, hden)
    heff.SetName("heff"+ysuf+"_"+hn)
    heff.SetTitle(hn)

    return heff

def getRatio(f, hn, ysuf="", folder="testGeneral", dim='', iseff=False):
    hnum = f.Get("{}_num/hnum{}_{}".format(folder,dim,hn))
    hden = f.Get("{}_den/hden{}_{}".format(folder,dim,hn))
    if not hnum: print( " >> Cannot find "+"{}_num/hnum{}_{}".format(folder,dim,hn)+" !!" )
    if not hden: print( " >> Cannot find "+"{}_den/hden{}_{}".format(folder,dim,hn)+" !!" )

    hrat = hnum.Clone()
    # 
    if iseff:
        hrat.Divide(hnum, hden, 1, 1, "B")
    else:
        hrat.Divide(hnum, hden)

    return hrat

def fitEfficiency2D():
    f1 = r.TF1("f1", "[0]*TMath::Erf((x-[1])/[2])+[3]",  20, 200)
    f2 = r.TF1("f2", "[0]*TMath::Erf((x-[1])/[2])+[3]", 150, 550)

def printTextForHist(c1, hist, name):
    hist.SetMarkerSize(1.9)
    hist.GetXaxis().SetRangeUser(20,50)
    hist.GetYaxis().SetRangeUser(200,500)
    hist.Draw("text")
    c1.Print(name+".pdf")

def printEfficiencies(c1, effs, legnames, colors, savename, logx=False, ymax=1.2, rerange=True, legpos=[0.6,0.2,0.84,0.4]):
    first = True
    leg = r.TLegend(*legpos)
    if logx: c1.SetLogx()
    else: c1.SetLogx(0)
    for i, eff in enumerate(effs):
        if type(eff) == r.TEfficiency:
            heff = eff.GetCopyPassedHisto()
            heff.Divide(heff, eff.GetCopyTotalHisto(), 1, 1, "B")
        elif type(eff) == r.TH1D:
            heff = eff
        else:
            print( type(eff) )
            return
        heff.SetMarkerSize(1.4)
        heff.SetLineWidth(2)
        heff.SetMaximum(ymax)
        heff.SetMinimum(0)
        heff.SetTitle(savename)
        if first:
            heff.Draw()
            first = False
        else:
            heff.Draw("same")
        heff.SetLineColor(colors[i])
        leg.AddEntry(heff, legnames[i])
    leg.Draw()
    c1.Print("plots/"+savename+".pdf")
    c1.Print("plots/"+savename+".png")

def printEfficiency2D(c1, eff, name, logx=False, ymax=1, rerange=True):
    heff = eff.GetCopyPassedHisto()
    heff.Divide(heff, eff.GetCopyTotalHisto(), 1, 1, "B")
    heff.SetMarkerSize(1.4)
    if rerange:
        heff.GetXaxis().SetRangeUser(20,120)
        heff.GetYaxis().SetRangeUser(-2.5,2.5)
    heff.SetMaximum(ymax)
    heff.SetMinimum(0)
    if logx: c1.SetLogx()
    else: c1.SetLogx(0)
    heff.Draw("colz")
    heff.Draw("text same")
    c1.Print("plots/"+name+".pdf")
    c1.Print("plots/"+name+".png")

def makeIDEfficiencies():

    os.system('mkdir -p plots')

    f17 = r.TFile("../output/effstudy_skim2l_genpart2_Jan17/TT_2l2nu.root")

    c1 = r.TCanvas("c1", "c1", 800, 600)

    r.gStyle.SetPaintTextFormat("4.3f")
    # r.gStyle.SetPalette(r.kRainBow)
    # r.gStyle.SetPalette(r.kDeepSea)
    r.gStyle.SetPalette(r.kBrownCyan)

    idtypes_elec = ['cutbased_tight', 'cutbased_loose', 'MVAiso_wp80', 'MVAiso_wp90', 'MVAHZZ_wpHZZ', 'MVAnoiso_wp80_tightPFiso']
    idtype_color = [r.kBlack, r.kBlue, r.kRed, r.kOrange, r.kViolet, r.kTeal]

    # for fktyp in ['true', 'mfake', 'phfake', 'ofake']:
    #     effs_elpt = []
    #     effs_eleta = []
    #     for elid in idtypes_elec:
    #         hn_pt  = 'elec_{}_{}_pt'.format(elid, fktyp)
    #         hn_eta = 'elec_{}_{}_eta'.format(elid, fktyp)
    #         hn_2d  = 'elec_{}_{}_eta_pt'.format(elid, fktyp)

    #         effs_elpt.append( getTEfficiency(f17, hn_pt, '', 'effstudy') )
    #         effs_eleta.append( getTEfficiency(f17, hn_eta, '', 'effstudy') )
    #         eff2d = getTEfficiency(f17, hn_2d, '', 'effstudy', '2d')
    #         ymax = 1 if fktyp == 'true' else 0.2
    #         printEfficiency2D(c1, eff2d, hn_2d, logx=True, ymax=ymax)
                
    #     ymax = 1.1 if fktyp == 'true' else 0.2
    #     legpos = [0.6,0.2,0.84,0.4] if fktyp == 'true' or fktyp == 'mfake' else [0.4,0.68,0.64,0.88] 
    #     printEfficiencies(c1, effs_elpt,  idtypes_elec, idtype_color, 'elec_IDeff_{}_pt'.format(fktyp), ymax=ymax, logx=True, legpos=legpos)
    #     legpos = [0.6,0.16,0.84,0.36] if fktyp == 'true' else [0.4,0.68,0.64,0.88] 
    #     printEfficiencies(c1, effs_eleta, idtypes_elec, idtype_color, 'elec_IDeff_{}_eta'.format(fktyp), ymax=ymax, legpos=legpos)

    # idtypes_muon = ['CutBasedIdTight', 'CutBasedIdLoose', 'CutBasedIdMedium', 'CutBasedIdGlobalHighPt', 'CutBasedIdTrkHighPt', 'MiniIsoVeryTight',]
    # for fktyp in ['true', 'mfake', 'phfake', 'ofake']:
    #     effs_elpt = []
    #     effs_eleta = []
    #     for elid in idtypes_muon:
    #         hn_pt  = 'muon_{}_{}_pt'.format(elid, fktyp)
    #         hn_eta = 'muon_{}_{}_eta'.format(elid, fktyp)
    #         hn_2d  = 'muon_{}_{}_eta_pt'.format(elid, fktyp)

    #         effs_elpt.append( getTEfficiency(f17, hn_pt, '', 'effstudy') )
    #         effs_eleta.append( getTEfficiency(f17, hn_eta, '', 'effstudy') )
    #         eff2d = getTEfficiency(f17, hn_2d, '', 'effstudy', '2d')
    #         ymax = 1 if fktyp == 'true' else 0.2
    #         printEfficiency2D(c1, eff2d, hn_2d, logx=True, ymax=ymax)
                
    #     ymax = 1.1 if fktyp == 'true' else 0.2
    #     legpos = [0.6,0.2,0.84,0.4] if fktyp == 'true' else [0.64,0.68,0.88,0.88] 
    #     printEfficiencies(c1, effs_elpt,  idtypes_muon, idtype_color, 'muon_IDeff_{}_pt'.format(fktyp), ymax=ymax, logx=True, legpos=legpos)
    #     printEfficiencies(c1, effs_eleta, idtypes_muon, idtype_color, 'muon_IDeff_{}_eta'.format(fktyp), ymax=ymax, legpos=legpos)


    f17 = r.TFile("../output/gjets_v5_Jan22/gjets_htbinned.root")

    idtypes_photon = ['cutbased_tight', 'cutbased_loose', 'cutbased_id_tight', 'mvaID_WP80', 'mvaID_WP90', 'electronVeto']
    for fktyp in ['true', 'elfake', 'mfake', 'ofake']:
        effs_elpt = []
        effs_eleta = []
        for elid in idtypes_photon:
            hn_pt  = 'photon_{}_{}_pt'.format(elid, fktyp)
            hn_eta = 'photon_{}_{}_eta'.format(elid, fktyp)
            hn_2d  = 'photon_{}_{}_eta_pt'.format(elid, fktyp)

            effs_elpt.append( getTEfficiency(f17, hn_pt, '', 'effstudy') )
            effs_eleta.append( getTEfficiency(f17, hn_eta, '', 'effstudy') )
            eff2d = getTEfficiency(f17, hn_2d, '', 'effstudy', '2d')
            ymax = 1 if fktyp == 'true' else 0.2
            printEfficiency2D(c1, eff2d, hn_2d, logx=True, ymax=ymax)
                
        ymax = 1.1 if fktyp == 'true' or fktyp == 'elfake' else 0.2
        legpos = [0.6,0.36,0.84,0.56] if fktyp == 'true' or fktyp == 'ofake' else [0.64,0.68,0.88,0.88] 
        printEfficiencies(c1, effs_elpt,  idtypes_photon, idtype_color, 'photon_IDeff_{}_pt'.format(fktyp), ymax=ymax, logx=True, legpos=legpos)
        legpos = [0.4,0.48,0.64,0.68] if fktyp == 'true' or fktyp == 'elfake' else [0.4,0.68,0.64,0.88] 
        printEfficiencies(c1, effs_eleta, idtypes_photon, idtype_color, 'photon_IDeff_{}_eta'.format(fktyp), ymax=ymax, legpos=legpos)

    
def makeTrigEffs():
    f17 = r.TFile("../output/data18_phtrigtest_Mar18/egamma_2018AC.root")

    c1 = r.TCanvas("c1", "c1", 800, 600)

    photon_trigs = [ "HLT_Photon175_v", "HLT_Photon120_v", "HLT_Photon33_v", "HLT_Photon300_NoHE_v", 
                     "HLT_Photon50_R9Id90_HE10_IsoM_v", "HLT_Photon75_R9Id90_HE10_IsoM_v", "HLT_Photon90_R9Id90_HE10_IsoM_v",
                     "HLT_Photon120_R9Id90_HE10_IsoM_v", "HLT_Photon165_R9Id90_HE10_IsoM_v", ]
    idtype_color = [r.kBlack, r.kBlue, r.kRed, r.kOrange, r.kViolet, r.kTeal, r.kPink+1, r.kGreen+2, r.kCyan-3]

    scls_vs200 = []
    effs_vsEle = []
    scls_ve200 = []
    eff_ph200 = getRatio(f17, 'trigeff_HLT_Photon200_v', '', 'effstudy', iseff=True)
    for trig in photon_trigs:
        hn_vs200 = 'Photon200_vs_'+trig
        scls_vs200.append(getRatio(f17, hn_vs200, '', 'effstudy'))
        hn_vsEle = 'trigeff_'+trig
        effs_vsEle.append(getTEfficiency(f17, hn_vsEle, '', 'effstudy'))
        heff = getRatio(f17, hn_vsEle, '', 'effstudy')
        hrat = eff_ph200.Clone()
        hrat.Divide(eff_ph200, heff)
        scls_ve200.append(hrat)
        # (c1, effs, legnames, colors, savename, logx=False, ymax=1.2, rerange=True, legpos=[0.6,0.2,0.84,0.4]):

    legpos = [0.11,0.56,0.32,0.86]
    # c1.SetLogy()
    printEfficiencies(c1, scls_vs200, photon_trigs, idtype_color, 'photon_trigscale_vs200_photon_pt'.format(trig[:-2]), ymax=100, legpos=legpos)
    # printEfficiencies(c1, effs_vsEle, photon_trigs, idtype_color, 'photon_trigeffs_photon_pt'.format(trig[:-2]), ymax=1.1, legpos=legpos)
    # printEfficiencies(c1, scls_ve200, photon_trigs, idtype_color, 'photon_trigeffs_vs200_photon_pt'.format(trig[:-2]), ymax=800, legpos=legpos)
        

if __name__ == "__main__":
    makeTrigEffs()

