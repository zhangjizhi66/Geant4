// wuPrimaryGeneratorActionAll.cc --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 二 5月  9 10:31:02 2017 (+0800)
// Last-Updated: 一 5月  7 23:26:25 2018 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 11
// URL: http://wuhongyi.cn 

#include "wuPrimaryGeneratorActionAll.hh"

#include "G4SystemOfUnits.hh"
#include "G4PhysicalConstants.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

wuPrimaryGeneratorActionAll::wuPrimaryGeneratorActionAll()
  : G4VUserPrimaryGeneratorAction(),particleGun(NULL)
{
  particleGun = new G4ParticleGun(1);///*G4int n_particle*/
}

wuPrimaryGeneratorActionAll::~wuPrimaryGeneratorActionAll()
{
  if(particleGun)
    {
      delete particleGun;
      particleGun =NULL;
    }  
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void wuPrimaryGeneratorActionAll::GeneratePrimaries(G4Event* anEvent)
{
  G4ParticleTable* particleTable = G4ParticleTable::GetParticleTable();
  G4ParticleDefinition* pp = 0;

  // -------------------------
  
  //自定义带电粒子
  // G4int IonZ = 1;
  // G4int IonA = 1;
  // G4double IonEstar = 0.0; //exitition energy
  // G4double IonQ = 1;
  // G4cout<<"ion:Z-A-Q-E*"<<IonZ<<" "<<IonA<<" "<<IonQ<<" "<<IonEstar<<G4endl;
  // pp = particleTable->GetIonTable()->GetIon(IonZ, IonA, IonEstar);//4.10.01版本强制 G4IonTable.hh
  // particleGun->SetParticleCharge(IonQ);

  //Geant4已经定义的粒子
  pp = particleTable->FindParticle("gamma");

  // -------------------------
  
  if(pp)
    particleGun->SetParticleDefinition(pp);
  else
    G4cout<<"##Null pp in wuPrimaryGeneratorAction::SetParticleGun()"<<G4endl;

  
  //primary particle kinetic energy
  particleGun->SetParticleEnergy(2.0*MeV);


  // primary particle position
  G4double x = 0.;
  G4double y = 0.;
  G4double z = 0.;
  particleGun->SetParticlePosition(G4ThreeVector(x, y, z));


  // primary particle moving direction
  G4double  DirectRotX = 0.0*pi/180.*rad;
  G4double  DirectRotY = 0.0*pi/180.*rad;
  G4double  DirectRotZ = 0.0*pi/180.*rad;
  G4double theta;
  G4double RangeThetaPri = 180*pi/180.*rad;  // theta range
  G4double phi = G4UniformRand()*2.0*pi;    // phi range
  G4double rg = 1.0-cos(RangeThetaPri);
  theta = acos(1.0-G4UniformRand()*rg);
  G4double cosPX = sin(theta)*cos(phi);
  G4double cosPY = sin(theta)*sin(phi);
  G4double cosPZ = cos(theta);
  G4ThreeVector directPri(cosPX, cosPY, cosPZ);
  directPri.rotateX(DirectRotX);
  directPri.rotateY(DirectRotY);
  directPri.rotateZ(DirectRotZ);
  particleGun->SetParticleMomentumDirection(directPri);

  //这个调用一次设置一次粒子，一次模拟要同时发射多个不同粒子就得多次调用它
  particleGun->GeneratePrimaryVertex(anEvent);
  
  //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
  
  // G4ParticleTable* particleTable = G4ParticleTable::GetParticleTable();// return the pointer to G4ParticleTable object. G4ParticleTable is a "singleton" and can get its pointer by this function. At the first time of calling this function, the G4ParticleTable object is instantiated 
  // G4ParticleDefinition* pp = 0;
  // // ion 有以下几个设置方法，选择一个来设置即可
  // pp = particleTable->GetIonTable()->GetIon(/*G4int Z*/, /*G4int A*/, /*G4int lvl=0*/);//Z: Atomic Number   A: Atomic Mass (nn + np +nlambda)
  // pp = particleTable->GetIonTable()->GetIon(/*G4int Z*/, /*G4int A*/, /*G4int L*/, /*G4int lvl*/);//L: Number of Lmabda  E: Excitaion energy
  // pp = particleTable->GetIonTable()->GetIon(/*G4int Z*/, /*G4int A*/, /*G4double E*/, /*G4int J=0*/);//lvl:  Isomer Level 0: ground state)
  // pp = particleTable->GetIonTable()->GetIon(/*G4int Z*/, /*G4int A*/, /*G4int L*/, /*G4double E*/, /*G4int J=0*/);//J: Total Angular momentum (in unit of 1/2) : not used
  // // G4 内部定义好的粒子 如alpha nutron proton 等等,选择一个来设置即可
  // pp = particleTable->FindParticle(/*G4int  PDGEncoding*/ );// returns a pointer to the particle (0 if not contained)
  // pp = particleTable->FindParticle(/*const G4String &particle_name*/);// returns a pointer to the particle (0 if not contained)
  // pp = particleTable->FindParticle(/*const G4ParticleDefinition *particle*/);// returns a pointer to the particle (0 if not contained)
  // pp = particleTable->FindAntiParticle(/*G4int  PDGEncoding*/ );// returns a pointer to its anti-particle (0 if not contained)
  // pp = particleTable->FindAntiParticle(/*const G4String &particle_name*/);// returns a pointer to its anti-particle (0 if not contained)
  // pp = particleTable->FindAntiParticle(/*const G4ParticleDefinition *particle*/);// returns a pointer to its anti-particle (0 if not contained)
  
  // particleGun->SetParticleDefinition(/*G4ParticleDefinition * aParticleDefinition*/);
  // particleGun->SetParticleEnergy(/*G4double aKineticEnergy*/);
  // particleGun->SetParticleMomentum(/*G4double aMomentum*/);
  // particleGun->SetParticleMomentum(/*G4ParticleMomentum aMomentum*/);
  // particleGun->SetParticleMomentumDirection(/*G4ParticleMomentum aMomentumDirection*/);
  // particleGun->SetParticleCharge(/*G4double aCharge*/);
  // particleGun->SetParticlePolarization(/*G4ThreeVector aVal*/);
  // particleGun->SetNumberOfParticles(/*G4int i*/);
  // particleGun->SetParticlePosition(/*G4ThreeVector aPosition*/);
  // particleGun->SetParticleTime(/*G4double aTime*/);

  // particleGun->GeneratePrimaryVertex(anEvent);//这个调用一次设置一次粒子，一次模拟要同时发射多个不同粒子就得多次调用它

  
}


// 
// wuPrimaryGeneratorActionAll.cc ends here


