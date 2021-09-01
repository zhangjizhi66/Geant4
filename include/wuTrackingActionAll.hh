// wuTrackingActionAll.hh --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 一 5月  8 21:49:59 2017 (+0800)
// Last-Updated: 二 5月  9 10:27:22 2017 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 3
// URL: http://wuhongyi.cn 

#ifndef _WUTRACKINGACTIONALL_H_
#define _WUTRACKINGACTIONALL_H_

#include "G4UserTrackingAction.hh"
#include "G4Types.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

//   This class represents actions taken place by the user at 
//   the start/end point of processing one track. 

class wuTrackingActionAll : public G4UserTrackingAction
{
public:
  wuTrackingActionAll();
  virtual ~wuTrackingActionAll();

public:
  virtual void PreUserTrackingAction(const G4Track* aTrack);
  virtual void PostUserTrackingAction(const G4Track* aTrack);

};

// enum G4TrackStatus
// {
//   fAlive,             // Continue the tracking
//   fStopButAlive,      // Invoke active rest physics processes and kill the current track afterward
//   fStopAndKill,       // Kill the current track
//   fKillTrackAndSecondaries, // Kill the current track and also associated secondaries.
//   fSuspend,           // Suspend the current track
//   fPostponeToNextEvent // Postpones the tracking of thecurrent track to the next event.
// };

// enum G4ProcessType
// {
//   fNotDefined,
//   fTransportation,
//   fElectromagnetic,
//   fOptical,             
//   fHadronic,
//   fPhotolepton_hadron,
//   fDecay,
//   fGeneral,
//   fParameterisation,
//   fUserDefined,
//   fParallel,
//   fPhonon,
//   fUCN
// };



#endif /* _WUTRACKINGACTIONALL_H_ */
// 
// wuTrackingActionAll.hh ends here
