// wuSteppingActionAll.cc --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 二 5月  9 08:49:31 2017 (+0800)
// Last-Updated: 一 5月  7 22:13:41 2018 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 11
// URL: http://wuhongyi.cn 

#include "wuSteppingActionAll.hh"
#include "G4TrackVector.hh"
#include "G4SteppingManager.hh"

#include "G4CsvAnalysisManager.hh"
#include "G4XmlAnalysisManager.hh"
#include "G4RootAnalysisManager.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
wuSteppingActionAll::wuSteppingActionAll()
  : G4UserSteppingAction()
{
  analysisManager = G4RootAnalysisManager::Instance();
  // analysisManager = G4CsvAnalysisManager::Instance();
  // analysisManager = G4XmlAnalysisManager::Instance();
}

wuSteppingActionAll::~wuSteppingActionAll()
{

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void wuSteppingActionAll::UserSteppingAction(const G4Step* step)
{
  // Collect data step by step

  // Information in G4Step includes:
  // Pointers to PreStep and PostStepPoint
  // Geometrical step length (step length before the correction of multiple scattering)
  // True step length (step length after the correction of multiple scattering)
  // Increment of position and time between PreStepPoint and PostStepPoint
  // Increment of momentum and energy between PreStepPoint and PostStepPoint. (Note: to get the en-
  // ergy deposited in the step, you cannot use this 'Delta energy'. You have to use 'Total energy deposit' as below.)
  // Pointer to G4Track
  // Total energy deposited during the step - this is the sum of
  // • the energy deposited by the energy loss process, and
  // • the energy lost by secondaries which have NOT been generated because each of their energies was below
  // the cut threshold
  // Energy deposited not by ionization during the step
  // Secondary tracks created during tracking for the current track.
  // • NOTE: all secondaries are included. NOT only secondaries created in the CURRENT step.
  
  // step->GetTrack();//G4Track*
  // step->GetPreStepPoint();//G4StepPoint*
  // step->GetPostStepPoint();//G4StepPoint*
  // // Before the end of the AlongStepDoIt loop,StepLength keeps the initial value which is determined by the shortest geometrical Step proposed by a physics process. After finishing the AlongStepDoIt, it will be set equal to 'StepLength' in G4Step. 
  // step->GetStepLength();//G4double
  // step->GetTotalEnergyDeposit();//G4double    total energy deposit 
  // step->GetNonIonizingEnergyDeposit();//G4double    total non-ionizing energy deposit 
  // step->GetControlFlag();//G4SteppingControl    cotrole flag for stepping
  // step->GetDeltaPosition();//G4ThreeVector
  // step->GetDeltaTime();//G4double


  // Information in G4StepPoint (PreStepPoint and PostStepPoint) includes:
  // (x, y, z, t)
  // (px, py, pz, Ek)
  // Momentum direction (unit vector)
  // Pointers to physical volumes
  // Safety
  // Beta, gamma
  // Polarization
  // Step status
  // Pointer to the physics process which defined the current step and its DoIt type
  // Pointer to the physics process which defined the previous step and its DoIt type
  // Total track length
  // Global time (time since the current event began)
  // Local time (time since the current track began)
  // Proper time
  
  // steppoint->GetPosition();//G4ThreeVector&
  // steppoint->GetGlobalTime();//G4double    Time since the event in which the track belongs is created.
  // steppoint->GetLocalTime();//G4double    Time since the track is created.
  // steppoint->GetProperTime();//G4double    Proper time of the particle.
  // steppoint->GetMomentumDirection();//G4ThreeVector&
  // steppoint->GetMomentum();//G4ThreeVector    Total momentum of the track
  // steppoint->GetTotalEnergy();//G4double    Total energy of the track
  // steppoint->GetKineticEnergy();//G4double    Kinetic Energy of the track
  // steppoint->GetVelocity();//G4double
  // steppoint->GetBeta();//G4double    Velocity of the track in unit of c(light velocity)
  // steppoint->GetGamma();//G4double    Gamma factor (1/sqrt[1-beta*beta]) of the track
  // steppoint->GetPhysicalVolume();//G4VPhysicalVolume*
  // steppoint->GetTouchable();//G4VTouchable*
  // steppoint->GetTouchableHandle();//G4TouchableHandle&
  // steppoint->GetMaterial();//G4Material*
  // steppoint->GetMaterialCutsCouple();//G4MaterialCutsCouple*
  // steppoint->GetSensitiveDetector();//G4VSensitiveDetector*
  // steppoint->GetSafety();//G4double
  // steppoint->GetPolarization();//G4ThreeVector&
  // steppoint->GetStepStatus();//G4StepStatus
  // steppoint->GetProcessDefinedStep();//G4VProcess*    If the pointer is 0, this means the Step is defined by the user defined limit in the current volume.
  // steppoint->GetMass();//G4double
  // steppoint->GetCharge();//G4double
  // steppoint->GetMagneticMoment();//G4double
  // steppoint->GetWeight();//G4double


  // G4SteppingManager 类中有很多函数
  // G4SteppingManager* steppingManager = fpSteppingManager;
  // G4TrackVector* fSecondary = steppingManager->GetfSecondary();
  // for(size_t lp1 = 0;lp1 < (*fSecondary).size(); lp1++)
  //   {
  //     std::cout<<lp1<<std::endl;
  //   }

  //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......


  // energy deposit
  EDep = step->GetTotalEnergyDeposit();


  // step length
  StepLength = 0.;
  if ( step->GetTrack()->GetDefinition()->GetPDGCharge() != 0. )
    {
      StepLength = step->GetStepLength();
    }
  
  G4Track* aTrack = step->GetTrack();//获取数据接口
  G4ParticleDefinition* theparticle = aTrack->GetDefinition();
  PName = theparticle->GetParticleName();
  

  const G4DynamicParticle* dyParticle = aTrack->GetDynamicParticle();//获取数据接口

  EventID = G4EventManager::GetEventManager()->GetConstCurrentEvent()->GetEventID();
  TrackID = aTrack->GetTrackID();
  ParentID = aTrack->GetParentID();
  CurrentStepNumber = aTrack->GetCurrentStepNumber();
  TrackLength = aTrack->GetTrackLength();
  TrackStatus = aTrack->GetTrackStatus();


  G4StepPoint* preStepPoint = step->GetPreStepPoint();//获取数据接口
  G4StepPoint* postStepPoint = step->GetPostStepPoint();//获取数据接口

  // G4LogicalVolume
  preStepVolume = preStepPoint->GetPhysicalVolume()->GetLogicalVolume();
  if(postStepPoint->GetPhysicalVolume())//判断是否在world外
    postStepVolume = postStepPoint->GetPhysicalVolume()->GetLogicalVolume();


  // Dynamical data of the particle
  Mass = preStepPoint->GetMass();
  Charge = preStepPoint->GetCharge();
  MagneticMoment = preStepPoint->GetMagneticMoment();
  TrackWeight = preStepPoint->GetWeight(); 


  PosPre = preStepPoint->GetPosition();
  EkPre = preStepPoint->GetKineticEnergy();
  GlobalTimePre = preStepPoint->GetGlobalTime();
  LocalTimePre = preStepPoint->GetLocalTime();
  VelocityPre = preStepPoint->GetVelocity();
  MomentumDirectionPre = preStepPoint->GetMomentumDirection();
  VolNamePre = preStepPoint->GetPhysicalVolume()->GetName();
  StepStatusPre = preStepPoint->GetStepStatus();
  ProperTimePre = preStepPoint->GetProperTime();


  const G4VProcess* pcr = aTrack->GetCreatorProcess();
  if(pcr) CreatorProcess = pcr->GetProcessName();
  else CreatorProcess = "##";
  

  PosPost = postStepPoint->GetPosition();
  EkPost = postStepPoint->GetKineticEnergy();
  GlobalTimePost = postStepPoint->GetGlobalTime();
  LocalTimePost = postStepPoint->GetLocalTime();
  VelocityPost = postStepPoint->GetVelocity();
  MomentumDirectionPost = postStepPoint->GetMomentumDirection();
  if(postStepPoint->GetPhysicalVolume()) VolNamePost=postStepPoint->GetPhysicalVolume()->GetName();//判断是否在world外
  else VolNamePost = "**";

  StepStatusPost = postStepPoint->GetStepStatus();
  ProperTimePost = postStepPoint->GetProperTime();

  
  //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
  
  analysisManager->FillNtupleIColumn(0, EventID);
  analysisManager->FillNtupleIColumn(1, ParentID);
  analysisManager->FillNtupleIColumn(2, TrackID);
  analysisManager->FillNtupleIColumn(3, CurrentStepNumber);
  analysisManager->FillNtupleSColumn(4, PName);
  analysisManager->FillNtupleDColumn(5, TrackWeight);
  analysisManager->FillNtupleSColumn(6, CreatorProcess);
  analysisManager->FillNtupleDColumn(7, EDep);
  analysisManager->FillNtupleDColumn(8, TrackLength);
  analysisManager->FillNtupleDColumn(9, StepLength);
  analysisManager->FillNtupleIColumn(10, TrackStatus);
  analysisManager->FillNtupleDColumn(11, Mass);
  analysisManager->FillNtupleDColumn(12, Charge);
  analysisManager->FillNtupleDColumn(13, MagneticMoment);
  analysisManager->FillNtupleSColumn(14, VolNamePre);
  analysisManager->FillNtupleSColumn(15, VolNamePost);
  analysisManager->FillNtupleDColumn(16, GlobalTimePre);
  analysisManager->FillNtupleDColumn(17, GlobalTimePost);
  analysisManager->FillNtupleDColumn(18, LocalTimePre);
  analysisManager->FillNtupleDColumn(19, LocalTimePost);
  analysisManager->FillNtupleDColumn(20, ProperTimePre);
  analysisManager->FillNtupleDColumn(21, ProperTimePost);
  analysisManager->FillNtupleIColumn(22, StepStatusPre);
  analysisManager->FillNtupleIColumn(23, StepStatusPost);
  analysisManager->FillNtupleDColumn(24, EkPre);
  analysisManager->FillNtupleDColumn(25, EkPost);
  analysisManager->FillNtupleDColumn(26, PosPre.x());
  analysisManager->FillNtupleDColumn(27, PosPre.y());
  analysisManager->FillNtupleDColumn(28, PosPre.z());
  analysisManager->FillNtupleDColumn(29, PosPost.x());
  analysisManager->FillNtupleDColumn(30, PosPost.y());
  analysisManager->FillNtupleDColumn(31, PosPost.z());
  analysisManager->FillNtupleDColumn(32, MomentumDirectionPre.x());
  analysisManager->FillNtupleDColumn(33, MomentumDirectionPre.y());
  analysisManager->FillNtupleDColumn(34, MomentumDirectionPre.z());
  analysisManager->FillNtupleDColumn(35, VelocityPre);
  analysisManager->FillNtupleDColumn(36, MomentumDirectionPost.x());
  analysisManager->FillNtupleDColumn(37, MomentumDirectionPost.y());
  analysisManager->FillNtupleDColumn(38, MomentumDirectionPost.z());
  analysisManager->FillNtupleDColumn(39, VelocityPost);


  analysisManager->AddNtupleRow();  //相当于 Fill
}


// 
// wuSteppingActionAll.cc ends here
