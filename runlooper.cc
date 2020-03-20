#include <iostream>
#include <string>
#include "TChain.h"
#include "TString.h"
#include "TSystem.h"

using namespace std;

int ScanChain(TChain *ch, string sample, string outdir, double sumwgt = 1.0, string portion = "");  // Header for ScanChain.cc

TString parseArg(const TString& input, TString arg, const TString dfval="") {
  if (!arg.EndsWith("=")) arg += "=";
  if (input.Contains(arg)) {
    int sidx = input.Index(arg) + arg.Sizeof() - 1;
    int eidx = input.Index(",", sidx);
    if (eidx < 0) eidx = input.Sizeof();
    return input(sidx, eidx-sidx);
  } else {
    return dfval;
  }
}

int main(int argc, char** argv)
{

  if (argc < 4) {
    cout << "   Usage: runStopLooper <input_files> <sample> <output_dir> [sumwgt] [portion (i/n)]" << endl;
    return 1;
  }

  string infile_str(argv[1]);
  string sample(argv[2]);
  string output_dir(argv[3]);
  double sum_wgts(0.0);
  if (argc > 4) sum_wgts = stof(argv[4]);
  string portion;
  if (argc > 5) portion = string(argv[5]);
  string extrargs;
  if (argc > 6) extrargs = string(argv[6]);

  TChain *ch = new TChain("cms3ntuple/Events");
  // TString infile = Form("%s/%s*.root", input_dir.c_str(), sample.c_str());

  vector<TString> vecInFiles;
  TString filestr(infile_str);
  while (filestr.Contains(',')) {
    TString fn = filestr(0, filestr.Index(','));
    vecInFiles.push_back( fn );
    filestr.Remove(0, fn.Length()+1);
  }
  vecInFiles.push_back( filestr );

  for (TString file : vecInFiles) {
    cout << "[runHZZlooper] >> Adding file " << file << " to be process." << endl;
    ch->Add(file);
  }

  if (ch->GetEntries() == 0) {
    cout << "ERROR: no entries in chain. filenames were: " << infile_str << endl;
    return 2;
  }

  gSystem->Exec(Form("mkdir -p %s", output_dir.c_str()));

  // int nEvtSamp = (argc > 4)? stoi(nevt_samp) : -1;
  ScanChain(ch, sample, output_dir, sum_wgts, portion);

  return 0;
}
