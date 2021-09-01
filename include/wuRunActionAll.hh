// wuRunActionAll.hh --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 一 5月  8 20:36:01 2017 (+0800)
// Last-Updated: 日 5月  6 21:18:20 2018 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 2
// URL: http://wuhongyi.cn 

#ifndef _WURUNACTIONALL_H_
#define _WURUNACTIONALL_H_

//  The user's concrete class derived from this class must be set to
// G4RunManager via G4RunManager::SetUserAction() method.

#include "G4UserRunAction.hh"
#include "globals.hh"
#include <cstring>
#include "G4ios.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
class G4VAnalysisManager;
class G4Run;

class wuRunActionAll : public G4UserRunAction
{
public:
  wuRunActionAll();
  virtual ~wuRunActionAll();

public:
  // The user can override the following method to instanciate his/her own
  // concrete Run class. G4Run has a virtual method RecordEvent, so that
  // the user can store any information useful to him/her with event statistics.
  //    virtual G4Run* GenerateRun();  
  virtual G4Run* GenerateRun();

  //  This is the base class of a user's action class which defines the
  // user's action at the begining and the end of each run. The user can
  // override the following two methods but the user should not change 
  // any of the contents of G4Run object.  
  virtual void BeginOfRunAction(const G4Run* aRun);
  virtual void EndOfRunAction(const G4Run* aRun);


private:
  G4VAnalysisManager* analysisManager;
  
};

#endif /* _WURUNACTIONALL_H_ */
// 
// wuRunActionAll.hh ends here
