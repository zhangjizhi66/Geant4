// wuStackingActionAll.cc --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 一 5月  8 22:51:26 2017 (+0800)
// Last-Updated: 一 5月  8 23:08:06 2017 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 4
// URL: http://wuhongyi.cn 

#include "wuStackingActionAll.hh"

#include "G4Track.hh"
#include "G4ios.hh"
#include "G4ParticleTable.hh"
#include "globals.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

wuStackingActionAll::wuStackingActionAll()
  : G4UserStackingAction()
{

}

wuStackingActionAll::~wuStackingActionAll()
{

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4ClassificationOfNewTrack wuStackingActionAll::ClassifyNewTrack(const G4Track* /*aTrack*/)
{


  return fUrgent;
}

void wuStackingActionAll::NewStage()
{

}
  
void wuStackingActionAll::PrepareNewEvent()
{

}
  
// 
// wuStackingActionAll.cc ends here
