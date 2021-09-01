// wuRunActionAll.cc --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 一 5月  8 20:40:01 2017 (+0800)
// Last-Updated: 日 5月  6 21:39:42 2018 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 6
// URL: http://wuhongyi.cn 

#include "wuRunActionAll.hh"

#include "G4Run.hh"
#include "G4RunManager.hh"

#include "G4CsvAnalysisManager.hh"
#include "G4XmlAnalysisManager.hh"
#include "G4RootAnalysisManager.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

wuRunActionAll::wuRunActionAll()
{


}

wuRunActionAll::~wuRunActionAll()
{

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4Run* wuRunActionAll::GenerateRun()
{
  return 0;
}

void wuRunActionAll::BeginOfRunAction(const G4Run* /*aRun*/)
{
  analysisManager = G4RootAnalysisManager::Instance();
  // analysisManager = G4CsvAnalysisManager::Instance();
  // analysisManager = G4XmlAnalysisManager::Instance();

  analysisManager->SetVerboseLevel(1);
  analysisManager->CreateNtuple("t", "Geant4 data !");

  analysisManager->CreateNtupleIColumn("EventID");
  analysisManager->CreateNtupleIColumn("ParentID");
  analysisManager->CreateNtupleIColumn("TrackID");
  analysisManager->CreateNtupleIColumn("CurrentStepNumber");
  analysisManager->CreateNtupleSColumn("PName");
  analysisManager->CreateNtupleDColumn("TrackWeight");
  analysisManager->CreateNtupleSColumn("CreatorProcess");
  analysisManager->CreateNtupleDColumn("EDep");
  analysisManager->CreateNtupleDColumn("TrackLength");
  analysisManager->CreateNtupleDColumn("StepLength");
  analysisManager->CreateNtupleIColumn("TrackStatus");
  analysisManager->CreateNtupleDColumn("Mass");
  analysisManager->CreateNtupleDColumn("Charge");
  analysisManager->CreateNtupleDColumn("MagneticMoment");
  analysisManager->CreateNtupleSColumn("VolNamePre");
  analysisManager->CreateNtupleSColumn("VolNamePost");
  analysisManager->CreateNtupleDColumn("GlobalTimePre");
  analysisManager->CreateNtupleDColumn("GlobalTimePost");
  analysisManager->CreateNtupleDColumn("LocalTimePre");
  analysisManager->CreateNtupleDColumn("LocalTimePost");
  analysisManager->CreateNtupleDColumn("ProperTimePre");
  analysisManager->CreateNtupleDColumn("ProperTimePost");
  analysisManager->CreateNtupleIColumn("StepStatusPre");
  analysisManager->CreateNtupleIColumn("StepStatusPost");
  analysisManager->CreateNtupleDColumn("EkPre");
  analysisManager->CreateNtupleDColumn("EkPost");
  analysisManager->CreateNtupleDColumn("xPre");
  analysisManager->CreateNtupleDColumn("yPre");
  analysisManager->CreateNtupleDColumn("zPre");
  analysisManager->CreateNtupleDColumn("xPost");
  analysisManager->CreateNtupleDColumn("yPost");
  analysisManager->CreateNtupleDColumn("zPost");
  analysisManager->CreateNtupleDColumn("xMomentumDirectionPre");
  analysisManager->CreateNtupleDColumn("yMomentumDirectionPre");
  analysisManager->CreateNtupleDColumn("zMomentumDirectionPre");
  analysisManager->CreateNtupleDColumn("Velocitypre");
  analysisManager->CreateNtupleDColumn("xMomentumDirectionPost");
  analysisManager->CreateNtupleDColumn("yMomentumDirectionPost");
  analysisManager->CreateNtupleDColumn("zMomentumDirectionPost");
  analysisManager->CreateNtupleDColumn("Velocitypost");

  
  analysisManager->FinishNtuple();
  analysisManager->OpenFile("outputdata");//输出文件名
  
}

void wuRunActionAll::EndOfRunAction(const G4Run* /*aRun*/)
{
  analysisManager->Write();
  analysisManager->CloseFile();

}

// 
// wuRunActionAll.cc ends here
