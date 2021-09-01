// wuActionInitialization.cc --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 二 5月 20 11:28:49 2014 (+0800)
// Last-Updated: 六 5月  5 15:36:56 2018 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 140
// URL: http://wuhongyi.cn 

#include "wuActionInitialization.hh"

#include "wuRunActionAll.hh"
#include "wuEventActionAll.hh"
#include "wuTrackingActionAll.hh"
#include "wuSteppingActionAll.hh"
#include "wuStackingActionAll.hh"
#include "wuPrimaryGeneratorActionAll.hh"


#include "G4Version.hh"

#if G4VERSION_NUMBER >= 1030
#include "G4MultiRunAction.hh"
#include "G4MultiEventAction.hh"
#include "G4MultiTrackingAction.hh"
#include "G4MultiSteppingAction.hh"
#endif

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

wuActionInitialization::wuActionInitialization()
 : G4VUserActionInitialization()
{

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

wuActionInitialization::~wuActionInitialization()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void wuActionInitialization::BuildForMaster() const
{


  

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void wuActionInitialization::Build() const
{
  //源的设置
  SetUserAction(new wuPrimaryGeneratorActionAll);

  
#if G4VERSION_NUMBER >= 1030
  
  G4MultiRunAction* actsRun = new G4MultiRunAction;
  G4MultiEventAction* actsEvent = new G4MultiEventAction;
  G4MultiTrackingAction* actsTrack = new G4MultiTrackingAction;
  G4MultiSteppingAction* actsStep = new G4MultiSteppingAction;
  
  //...0123456789876543210...0123456789876543210...

  actsRun->push_back(G4UserRunActionUPtr(new wuRunActionAll));
  actsEvent->push_back(G4UserEventActionUPtr(new wuEventActionAll));
  actsTrack->push_back(G4UserTrackingActionUPtr(new wuTrackingActionAll));
  actsStep->push_back(G4UserSteppingActionUPtr(new wuSteppingActionAll));
  
  SetUserAction(new wuStackingActionAll);


  //...0123456789876543210...0123456789876543210...
  
  SetUserAction(actsRun);
  SetUserAction(actsTrack);
  SetUserAction(actsEvent);
  SetUserAction(actsStep);
  
#else

  G4cout<<"It need G4VERSION_NUMBER >= 1030"<<G4endl;
  
#endif 

}  

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// 
// wuActionInitialization.cc ends here
