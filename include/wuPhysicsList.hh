// wuPhysicsList.hh --- 
// 
// Description: Coping from YushouSong,宋玉收.
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 四 5月 22 16:57:10 2014 (+0800)
// Last-Updated: 六 5月  5 16:04:46 2018 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 8
// URL: http://wuhongyi.cn 

#ifndef _WUPHYSICSLIST_H_
#define _WUPHYSICSLIST_H_

#include "globals.hh"
#include "G4VModularPhysicsList.hh"

// #include "CompileTimeConstraints.hh"
// #include "G4VPhysicsConstructor.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
class wuPhysicsList : public G4VModularPhysicsList
{
public:
  wuPhysicsList(G4int ver=1);
  virtual ~wuPhysicsList();

public:
  virtual void SetCuts();
  virtual void ConstructParticle();
  
// private:
//   enum {ok = CompileTimeConstraints::IsA<G4VModularPhysicsList, 
//   G4VModularPhysicsList>::ok };

};


#endif /* _WUPHYSICSLIST_H_ */
// 
// wuPhysicsList.hh ends here
