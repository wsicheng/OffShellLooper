#!/usr/bin/env python
from __future__ import print_function, division

import os, sys
from math import sqrt
import ROOT as r
# import numpy as np
# from utilities.errors import *
# from multiprocessing.dummy import Pool as ThreadPool

r.gROOT.SetBatch(1)
r.gStyle.SetOptStat('')

def moveOverFlowToLastBin1D(hist, newXmax=-1.0):
    nbin = hist.GetNbinsX();
    lastbin = nbin
    if newXmax > 0:
        lastbin = hist.GetXaxis().FindBin(newXmax) - 1

    if newXmax > 0 or hist.GetBinContent(nbin+1) > 0:
        err = r.Double();
        hist.SetBinContent(lastbin, hist.IntegralAndError(lastbin, -1, err));
        hist.SetBinError(lastbin, err);
        for ibin in range(lastbin+1, nbin+2):
            hist.SetBinContent(ibin, 0);
            hist.SetBinError(ibin, 0);

    if newXmax > 0:
        hist.GetXaxis().SetRangeUser(hist.GetXaxis().GetXmin(), newXmax)

    return hist


def DrawHeaderText(canvas, lumi=137.2, state="Preliminary"):
    tCMS = r.TLatex()
    tCMS.SetNDC(1)
    tCMS.SetTextFont(61)
    tCMS.SetTextAlign(11)
    tCMS.SetTextSize(0.0625)
    canvas.cd()
    tCMS.DrawLatex(canvas.GetLeftMargin(), 1.0-canvas.GetTopMargin()+0.012, "CMS")

    tplm = r.TLatex()
    tplm.SetNDC(1)
    tplm.SetTextFont(52)
    tplm.SetTextAlign(11)
    tplm.SetTextSize(0.048)
    canvas.cd()
    tplm.DrawLatex(canvas.GetLeftMargin()+0.110, 1.0-canvas.GetTopMargin()+0.012, state)

    if lumi:
        ttext = r.TLatex()
        ttext.SetNDC(1)
        ttext.SetTextFont(42)
        ttext.SetTextAlign(31)
        ttext.SetTextSize(0.048)
        canvas.cd()
        text = "{0} {1}^{{-1}} ({2} TeV)".format(lumi,"fb",13)
        ttext.DrawLatex(1.0-canvas.GetRightMargin()-0.01, 1.0-canvas.GetTopMargin()+0.012, text)



def makeSinglePlot():
    r.gStyle.SetOptStat('')
    r.gStyle.SetPadGridX(0)
    r.gStyle.SetPadGridY(0)
    r.gStyle.SetPadTickX(1)
    r.gStyle.SetPadTickY(1)
    r.gStyle.SetFrameBorderMode(0)

    f = r.TFile('output/skimph_trigpstest_Feb27/data18_phskim.root')
    h = f.Get('OffShell_gamma/h_gamma_pt_raw')

    c0 = r.TCanvas('c0', 'c0', 800, 600)

    mainPad = r.TPad('1', '1', 0.0, 0.00, 1.0, 0.99)

    r.SetOwnership(c0, False)
    r.SetOwnership(mainPad, False)

    mainPad.SetTopMargin(0.08)
    mainPad.SetLeftMargin(0.12)
    mainPad.SetRightMargin(0.05)
    mainPad.SetBottomMargin(0.15)
    mainPad.SetLogy()
    mainPad.Draw()

    mainPad.cd()

    h.SetTitle('')
    h.GetYaxis().SetTitle('Events')
    h.GetYaxis().SetTitleOffset(0.92)
    h.GetYaxis().SetTitleSize(0.052)
    h.GetYaxis().SetLabelSize(0.048)
    # h.GetYaxis().SetTickSize(0.015)
    # h.GetXaxis().SetTitleOffset(0.75)
    h.GetXaxis().SetTitleSize(0.052)
    h.GetXaxis().SetLabelSize(0.048)
    h.GetXaxis().SetTitle('p_{T} (leading photon) [GeV]')

    print( h.GetXaxis().GetLabelSize(), h.GetXaxis().GetTitleOffset())


    h.SetLineWidth(2)
    # h.SetMarkerSize(1.2)
    h.SetMarkerStyle(20)
    h.SetLineColor(r.kBlack)

    h.Draw()

    # leg = r.TLegend(0.72, 0.8, 0.91, 0.86 )
    # leg.AddEntry(h, 't#bar{t}#rightarrow 2#font[12]{l}2#nu')
    # leg.SetBorderSize(0)
    # leg.Draw()

    DrawHeaderText(mainPad, None, 'Preliminary')

    c0.Print('plots/h_photon_pt.pdf')


def plotDYComparePlots(hdir, hname='met', samp='', rebin=1, y2=None, newrange=None):

    # ffull = r.TFile('output/fullsamp_dyest10_Feb11/DY.root')
    # ffast = r.TFile('output/fullsamp_dyest10_Feb11/gjets.root')
    # ffull = r.TFile('output/fullsamp_dyest11_Mar2/DY.root')
    # ffast = r.TFile('output/fullsamp_dyest14_Mar2/gjets.root')
    # ffull = r.TFile('output/skim2l_dyest11_Mar3/DY.root')
    # ffast = r.TFile('output/skimph_dyest14_Mar3/gjets.root')
    # ffull = r.TFile('output/shear2l_sync4_Mar12/gjets_nanoAOD.root')
    # ffast = r.TFile('output/shear2l_sync4_Mar16/GJets_HT600ToInf.root')
    # ffull = r.TFile('output/shear2l_sync4_Mar16/samp16_sync4p1_Mar16/GJets_HT-600ToInf_0.root')
    # ffast = r.TFile('../cms4looper/output2/GJets_HT600toInf_all.root')
    # ffast = r.TFile('output/shear2l_dyest1_Mar19/DY.root')
    ffast = r.TFile('output/shear2l_dyest3_Mar19/DY.root')
    # ffull = r.TFile('output/shear2l_sync4_Mar16/samp16_sync4p1_Mar16/gjets.root')
    # ffast = r.TFile('../NanoLooper/output/samp18_dyest1_Mar18/gjets.root')
    ffull = r.TFile('../NanoLooper/output/shear2l_dyest2_Mar19/DYjets.root')
    # ffull = r.TFile('output/shear2l_wgt1_Mar13/GJets_HT600ToInf.root')
    # y2 = True
    # ffull = r.TFile('output/fullsamp_dyest8_Feb11/gjets.root')
    # ffast = r.TFile('output/fullsamp_dyest8_Feb11/gjets.root')
    # if y2: fy2 = r.TFile('output/skim2l_dyest11_Feb19/DY.root')
    # if y2: fy2 = r.TFile('output/fullsamp_dyest11_Feb27/gjets.root')
    sampsuf = '' if samp == '' else '_'+samp

    # hdir = 'hzz2l2nu'
    # hfull = ffull.Get('{0}{2}/h_{1}{2}'.format(hdir,hname,sampsuf))
    hfast = ffast.Get('{0}{2}/h_{1}{2}'.format(hdir,hname,sampsuf))
    # if y2: hy2 = fy2.Get('{0}{2}/h_{1}{2}'.format(hdir,hname,sampsuf))

    hfull = ffull.Get('{0}{2}/h_{1}{2}'.format('hzz2l2nu',hname,sampsuf))
    # hfull = ffull.Get('hzz2l2nu/h_lead_photon_pt_raw'.format(hname))

    # hfast = ffast.Get('OffShell/h_met_step2'.format(hname))
    # hfull = ffull.Get('hzz2l2nu/h_met_step0'.format(hname))

    # hfast = ffast.Get('hzz2l2nu/h_{}'.format(hname))
    # hfast = ffast.Get('OffShell/h_{}'.format(hname))
    # hfull = ffull.Get('hzz2l2nu/h_{}'.format(hname))
    # hfull = ffull.Get('OffShell/h_{}'.format(hname))

    # hfull = ffull.Get('{0}{2}/h_{1}_metlt50{2}'.format(hdir,hname,sampsuf))
    # hfast = ffast.Get('{0}{2}/h_{1}_metlt125{2}'.format(hdir,hname,sampsuf))
    # if y2: hy2 = fy2.Get('{0}{2}/h_{1}_metge125{2}'.format(hdir,hname,sampsuf))

    if not hfull: print( 'Cannot find {0}{2}/h_{1}{2} in {3}'.format(hdir,hname,sampsuf, 'ffull'))
    if not hfast: print( 'Cannot find {0}{2}/h_{1}{2} in {3}'.format(hdir,hname,sampsuf, 'ffast'))

    if rebin != 1:
        hfull.Rebin(rebin)
        hfast.Rebin(rebin)
        if y2: hy2.Rebin(rebin)

    setrange = True if type(newrange) == list and len(newrange) > 1 else False
    newmax = newrange[1] if setrange else -1
    moveOverFlowToLastBin1D(hfull,newmax)
    moveOverFlowToLastBin1D(hfast,newmax)
    if y2: moveOverFlowToLastBin1D(hy2,newmax)

    if setrange:
        hfull.GetXaxis().SetRangeUser(newrange[0], newrange[1])
        hfast.GetXaxis().SetRangeUser(newrange[0], newrange[1])
        if y2: hy2.GetXaxis().SetRangeUser(newrange[0], newrange[1])

    c0 = r.TCanvas('c0', 'c0', 800, 800)

    mainPad = r.TPad('1', '1', 0.0, 0.20, 1.0, 0.99)
    ratioPad = r.TPad('2', '2', 0.0, 0.02, 1.0, 0.24)

    r.SetOwnership(c0, False)
    r.SetOwnership(mainPad, False)
    r.SetOwnership(ratioPad, False)

    mainPad.SetTopMargin(0.08)
    mainPad.SetLeftMargin(0.12)
    mainPad.SetRightMargin(0.05)
    mainPad.SetBottomMargin(0.15)
    mainPad.SetLogy()
    mainPad.Draw()
    ratioPad.SetTopMargin(0.05)
    ratioPad.SetLeftMargin(0.12)
    ratioPad.SetRightMargin(0.05)
    ratioPad.SetBottomMargin(0.10)
    ratioPad.Draw()

    mainPad.cd()

    hfull.SetTitle('')
    hfull.GetYaxis().SetTitle('Events')
    hfull.GetYaxis().SetTitleOffset(0.75)
    hfull.GetYaxis().SetTitleSize(0.058)
    hfull.GetYaxis().SetTickSize(0.015)
    hfull.GetXaxis().SetTitleSize(0.04)

    hfull.SetLineWidth(2)
    hfast.SetLineWidth(2)
    if y2: hy2.SetLineWidth(2)

    hfull.SetMarkerSize(1.3)
    hfast.SetMarkerSize(1.3)
    if y2: hy2.SetMarkerSize(1.3)

    hfull.SetMarkerStyle(25)
    hfast.SetMarkerStyle(26)
    if y2: hy2.SetMarkerStyle(24)

    hfull.SetLineColor(r.kGreen+3)
    hfast.SetLineColor(r.kOrange+3)
    if y2: hy2.SetLineColor(r.kBlue)
    else: hfast.SetLineColor(r.kRed)

    scale = hfull.Integral()/hfast.Integral()
    hfast.Scale(hfull.Integral()/hfast.Integral())
    if y2: hy2.Scale(hfull.Integral()/hy2.Integral())

    hfull.Draw()
    hfast.Draw("same")
    if y2: hy2.Draw("same")


    leg = r.TLegend(0.54, 0.68, 0.92, 0.89)

    if 'mother' in hname:
        leg = r.TLegend(0.24, 0.68, 0.62, 0.89)
    elif 'Efrac' in hname:
        leg = r.TLegend(0.34, 0.18, 0.7, 0.39)
    elif 'n' == hname[0]:
        leg = r.TLegend(0.14, 0.18, 0.5, 0.39)


    if y2: 
        leg.AddEntry(hfull, 'DY MET < 50')
        leg.AddEntry(hfast, 'DY 50 < MET < 125')
        leg.AddEntry(hy2, 'DY MET > 125 ')
        # leg.AddEntry(hfull, '#gamma+jets MET < 50')
        # leg.AddEntry(hfast, '#gamma+jets 50 < MET < 125')
        # leg.AddEntry(hy2, '#gamma+jets MET > 125 ')
    else:
        leg.AddEntry(hfull, 'DY')
        leg.AddEntry(hfast, '#gamma+jets ')
        # leg.AddEntry(hfast, 'OffShell')
        # leg.AddEntry(hfull, 'NanoAOD')
        # leg.AddEntry(hfast, 'DY 2016')
        # leg.AddEntry(hfull, '2l skim '+samp)
        # leg.AddEntry(hfast, '#gamma skim '+samp)

    leg.Draw()

    atxt = r.TText();
    atxt.SetNDC();
    atxt.SetTextSize(0.04);
    # atxt.SetTextAlign(22);
    atxt.DrawText(0.56, 0.64, "scale (DY/gjets) = {0:.3f}".format(scale));

    selstr = ''
    if samp == 'eq0j': selstr = '0j'
    elif samp == 'eq1j': selstr = '1j'
    elif samp == 'eq2j': selstr = '2j'
    elif samp == 'geq1j': selstr = '#geq 1j'
    elif samp == 'geq2j': selstr = '#geq 2j'
    elif samp == 'vbf': selstr = 'VBF sel.'
    if not y2:
        atxt.DrawText(0.56, 0.60, selstr);

    # DrawHeaderText(mainPad, 35.9 if '16' in samp else 41.5 if '17' in samp else 59.7 if '18' in samp else 137)
    DrawHeaderText(mainPad, None, 'Simulation')

    ratioPad.cd()

    h_axis_ratio = r.TH1D('ratio_axis','', hfull.GetNbinsX(), hfull.GetXaxis().GetXmin(), hfull.GetXaxis().GetXmax())
    h_axis_ratio.GetYaxis().SetNdivisions(4)
    h_axis_ratio.GetYaxis().SetLabelSize(0.15)
    h_axis_ratio.GetYaxis().SetRangeUser(0, 2)
    h_axis_ratio.GetYaxis().SetTitle('Ratio')
    # h_axis_ratio.GetYaxis().SetTitle('#gamma+jets / DY')
    # h_axis_ratio.GetYaxis().SetTitle('cms4 / OS')
    h_axis_ratio.GetYaxis().SetTitleOffset(0.25)
    h_axis_ratio.GetYaxis().SetTitleSize(0.18)
    h_axis_ratio.GetYaxis().SetTickLength(0.01)
    h_axis_ratio.GetXaxis().SetTickLength(0.07)
    h_axis_ratio.GetXaxis().SetTitleSize(0.0)
    h_axis_ratio.GetXaxis().SetLabelSize(0.0)
    if setrange: h_axis_ratio.GetXaxis().SetRangeUser(newrange[0], newrange[1])
    h_axis_ratio.Draw('axis')

    line = r.TF1('line1', '1', hfull.GetXaxis().GetXmin(), hfull.GetXaxis().GetXmax())
    line.SetLineStyle(2)
    line.SetLineColor(r.kGray+2)
    line.Draw('same')

    rat = hfast.Clone('ratio_gjetsvsdy')
    rat.Divide(hfull)
    rat.Draw("same")

    if y2:
        rat2 = hy2.Clone('ratio_y2vsdy')
        rat2.Divide(hfull)
        # if setrange: rat2.GetXaxis().SetRangeUser(newrange[0], newrange[1])
        rat2.Draw("same")

    # printwegights = True
    # if printwegights:
    #     for i in range(1, rat.GetNbinsX()+1):
    #         # print( rat.GetBinLowEdge(i), rat.GetBinContent(i))
    #         ra = rat.GetBinContent(i)
    #         # print( "{0} {1:.3f}".format(rat.GetBinLowEdge(i), 1.0/ra if ra > 0 else 1.0) )
    #         print( "{0:.3f},".format(1.0/ra if ra > 0 else 1.0), end = '')
    #     print( "" )

    savename = 'plots/dyest_{}_{}{}.pdf'.format(hdir, hname, sampsuf)
    c0.SaveAs(savename)
    print( 'Plot generated as ', savename)
    c0.SaveAs(savename.replace('.pdf','.png'))
    # os.system('clp {}'.format(savename))


def makeDYtestPlots():
    # plotDYComparePlots('OffShell', 'met_Zpeak', 'eq0j', newrange=[0,400], rebin=2)
    # plotDYComparePlots('OffShell', 'met_Zpeak', 'geq1j', newrange=[0,400], rebin=2)
    # plotDYComparePlots('OffShell', 'met_Zpeak', 'vbf', newrange=[0,400], rebin=2)

    # plotDYComparePlots('OffShell', 'met_fullMET', 'eq0j', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_fullMET', 'eq1j', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_fullMET', 'eq2j', newrange=[0,250])
    # plotDYComparePlots('OffShell', 'boson_pt_fullMET', 'eq0j', newrange=[50,450], rebin=2)
    plotDYComparePlots('OffShell', 'boson_pt_fullMET', 'eq1j', newrange=[50,450], rebin=2)
    plotDYComparePlots('OffShell', 'boson_pt_fullMET', 'eq2j', newrange=[50,450], rebin=2)
    # plotDYComparePlots('OffShell', 'boson_eta_fullMET', 'eq0j', newrange=[50,450], rebin=2)
    plotDYComparePlots('OffShell', 'boson_eta_fullMET', 'eq1j', newrange=[50,450], rebin=2)
    plotDYComparePlots('OffShell', 'boson_eta_fullMET', 'eq2j', newrange=[50,450], rebin=2)

    plotDYComparePlots('OffShell', 'passed_steps', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_step0', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_step1', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_step2', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_step3', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_step4', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_step5', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_step6', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_step7', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'met_step8', '', newrange=[0,250])

    # plotDYComparePlots('OffShell', 'lead_photon_pt_raw', 'eq1j', newrange=[0,250])
    plotDYComparePlots('OffShell', 'preselec_steps', '')
    plotDYComparePlots('OffShell', 'preselec_met_step0', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'preselec_met_step1', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'preselec_met_step2', '', newrange=[0,250])
    plotDYComparePlots('OffShell', 'preselec_met_step3', '', newrange=[0,250])

    # plotDYComparePlots('OffShell_gamma', 'preselec_gammapt_step0', '', newrange=[0,250])
    # plotDYComparePlots('OffShell_gamma', 'preselec_gammapt_step1', '', newrange=[0,250])
    # plotDYComparePlots('OffShell_gamma', 'preselec_gammapt_step2', '', newrange=[0,250])
    # plotDYComparePlots('OffShell_gamma', 'preselec_gammapt_step3', '', newrange=[0,250])
    # plotDYComparePlots('OffShell_gamma', 'preselec_gammaeta_step0', '', newrange=[0,250])
    # plotDYComparePlots('OffShell_gamma', 'preselec_gammaeta_step1', '', newrange=[0,250])
    # plotDYComparePlots('OffShell_gamma', 'preselec_gammaeta_step2', '', newrange=[0,250])
    # plotDYComparePlots('OffShell_gamma', 'preselec_gammaeta_step3', '', newrange=[0,250])

    # plotDYComparePlots('OffShell', 'nphotons_raw', 'eq1j', newrange=[0,250])
    # plotDYComparePlots('OffShell', 'preselec_gpt_step0', 'eq1j', newrange=[0,250])
    # plotDYComparePlots('OffShell', 'preselec_gpt_step1', 'eq1j', newrange=[0,250])
    # plotDYComparePlots('OffShell', 'preselec_gpt_step2', 'eq1j', newrange=[0,250])
    # plotDYComparePlots('OffShell', 'preselec_gpt_step3', 'eq1j', newrange=[0,250])

    # plotDYComparePlots('OffShell', 'ptgamma', 'eq1j', newrange=[0,250])
    # plotDYComparePlots('OffShell', 'etagamma', 'eq1j', newrange=[0,250])


    # plotDYComparePlots('OffShell', 'nvtxs_good_fullMET', 'eq0j')
    # plotDYComparePlots('OffShell', 'nvtxs_good_fullMET', 'eq1j')
    # plotDYComparePlots('OffShell', 'nvtxs_good_fullMET', 'eq2j')

    # plotDYComparePlots('OffShell', 'met_fullMET', 'geq1j', newrange=[0,250])
    # plotDYComparePlots('OffShell', 'boson_pt_fullMET', 'geq1j', newrange=[50,450], rebin=2)
    # plotDYComparePlots('OffShell', 'nvtxs_good_fullMET', 'geq1j')

    # plotDYComparePlots('OffShell', 'boson_pt_Zpeak', newrange=[50,450], rebin=2)
    # plotDYComparePlots('OffShell', 'boson_pt_Zpeak', 'eq0j', newrange=[50,450], rebin=2)
    # plotDYComparePlots('OffShell', 'boson_pt_Zpeak', 'geq1j', newrange=[50,450], rebin=2)

    # plotDYComparePlots('OffShell', 'min_dphijmet_Zpeak', 'geq1j', newrange=[50,450], rebin=2)

    # plotDYComparePlots('OffShell', 'boson_pt', 'eq0j', newrange=[50,450], rebin=2)
    # plotDYComparePlots('OffShell', 'boson_pt', 'geq1j', newrange=[50,450], rebin=2)
    # plotDYComparePlots('OffShell', 'boson_pt', 'vbf', newrange=[50,450], rebin=2)

    # plotDYComparePlots('OffShell', 'nvtxs_good', 'eq0j')
    # plotDYComparePlots('OffShell', 'nvtxs_good', 'geq1j')
    # plotDYComparePlots('OffShell', 'nvtxs_good', 'vbf')

    # plotDYComparePlots('OffShell', 'nvtxs_good_Zpeak', 'eq0j')
    # plotDYComparePlots('OffShell', 'nvtxs_good_Zpeak', 'geq1j')
    # plotDYComparePlots('OffShell', 'nvtxs_good_Zpeak', 'vbf', newrange=[50,450])

    # plotDYComparePlots('OffShell', 'nvtxs_good_metlt125', 'eq0j')
    # plotDYComparePlots('OffShell', 'nvtxs_good_metlt125', 'geq1j')
    # plotDYComparePlots('OffShell', 'nvtxs_good_metlt125', 'vbf')

    # plotDYComparePlots('OffShell', 'boson_pt_metlt125', 'eq0j', newrange=[50,450], rebin=2)
    # plotDYComparePlots('OffShell', 'boson_pt_metlt125', 'eq1j', newrange=[50,450], rebin=2)
    # plotDYComparePlots('OffShell', 'boson_pt_metlt125', 'eq2j', newrange=[50,450], rebin=2)

    # plotDYComparePlots('OffShell', 'boson_pt_metge125', 'eq0j', newrange=[50,450], rebin=2)
    # plotDYComparePlots('OffShell', 'boson_pt_metge125', 'geq1j', newrange=[50,450], rebin=2)
    # plotDYComparePlots('OffShell', 'boson_pt_metge125', 'vbf', newrange=[50,450], rebin=2)

    # plotDYComparePlots('OffShell', 'boson_pt_fullMET', 'geq1j', newrange=[50,450], rebin=2)


    # plotDYComparePlots('OffShell', 'nvtxs_good', 'eq0j')
    # plotDYComparePlots('OffShell', 'nvtxs_good', 'geq1j')


if __name__ == '__main__':

    makeDYtestPlots()
    # makeSinglePlot()
    # plotDataMETinEMuCR(0, 'jet2pt')

