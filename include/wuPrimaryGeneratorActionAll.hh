// wuPrimaryGeneratorActionAll.hh --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 二 5月  9 10:31:46 2017 (+0800)
// Last-Updated: 二 5月  9 12:32:04 2017 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 3
// URL: http://wuhongyi.cn 

#ifndef _WUPRIMARYGENERATORACTIONALL_H_
#define _WUPRIMARYGENERATORACTIONALL_H_

#include "G4VUserPrimaryGeneratorAction.hh"
#include "globals.hh"
#include "G4ios.hh"
#include "Randomize.hh"//随机数这里产生
#include "G4Event.hh"
#include "G4ParticleGun.hh"
#include "G4ParticleTable.hh"
#include "G4IonTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4ParticleMomentum.hh"
#include "G4ThreeVector.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// This is the base class of the user's mandatory action class for primary vertex/particle generation.
// This class  GeneratePrimaries() which is invoked from G4RunManager during the event loop.
//  Note that this class is NOT intended for generating primary vertex/particle
// by itself. This class should 
//  - have one or more G4VPrimaryGenerator concrete classes such as G4ParticleGun 
//  - set/change properties of generator(s)
//  - pass G4Event object so that the generator(s) can generate primaries.

class wuPrimaryGeneratorActionAll : public G4VUserPrimaryGeneratorAction
{
public:
  wuPrimaryGeneratorActionAll();
  virtual ~wuPrimaryGeneratorActionAll();


public:

  // Creates a primary vertex at the given point and put primary particles to it.
  //   SetParticleDefinition should be called first.  
  //   By using SetParticleMomentum(), both particle_momentum_direction and
  //   particle_energy(Kinetic Energy) are set.
  virtual void GeneratePrimaries(G4Event* anEvent);//将G4PrimaryVertex压入G4Event


  // user define
private:
  G4ParticleGun* particleGun;//继承G4VPrimaryGenerator
  
};

#endif /* _WUPRIMARYGENERATORACTIONALL_H_ */
// 
// wuPrimaryGeneratorActionAll.hh ends here
