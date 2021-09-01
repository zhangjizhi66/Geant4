// wuDetectorConstruction.hh --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 四 5月 22 16:45:21 2014 (+0800)
// Last-Updated: 一 5月  7 21:46:04 2018 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 28
// URL: http://wuhongyi.cn 

#ifndef _WUDETECTORCONSTRUCTION_H_
#define _WUDETECTORCONSTRUCTION_H_


#include "G4TransportationManager.hh"
#include "G4PropagatorInField.hh"
#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"
#include "G4SDManager.hh"

// GDML parser include，可视化界面几何体颜色设置用
#include "G4GDMLParser.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// class description:
//
//  This is the abstract base class of the user's mandatory initialization class
// for detector setup. It has only one pure virtual method Construct() which is
// invoked by G4RunManager when it's Initialize() method is invoked.
//  The Construct() method must return the G4VPhysicalVolume pointer which represents
// the world volume.
//
class G4VPhysicalVolume;
class G4LogicalVolume;
class G4VisAttributes;

class wuDetectorConstruction: public G4VUserDetectorConstruction
{
public:
  wuDetectorConstruction();
  virtual ~wuDetectorConstruction();

public:
  virtual G4VPhysicalVolume* Construct();
  virtual void ConstructSDandField();
  //This method is used in multi-threaded applications to build
  //per-worker non-shared objects: SensitiveDetectors and Field managers

private:
  // methods
  void DefineMaterials();
  G4VPhysicalVolume* DefineVolumes();

  void BuildSensitiveDetector(G4LogicalVolume* lv);//

private: 
  G4bool checkOverlaps; // Option to switch on/off checking of volumes overlaps

  std::vector<G4VisAttributes*> fVisAttributes;//可视化界面几何体颜色设置用

  G4LogicalVolume* logicWorld;
  G4VPhysicalVolume* physWorld;

  G4LogicalVolume* logicDSSD;
  G4VPhysicalVolume* physDSSD;
  G4LogicalVolume* logicClover;
  G4VPhysicalVolume* physClover;
  
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// G4LogicalVolume *lv;
// // The solid and material pointer must be non null. The parameters for field, detector and user limits are optional. The volume also enters itself into the logical volume Store.
// lv = new G4LogicalVolume(G4VSolid* pSolid, G4Material* pMaterial, const G4String& name, G4FieldManager* pFieldMgr=0, G4VSensitiveDetector* pSDetector=0, G4UserLimits* pULimits=0, G4bool optimise=true);
// lv->GetName();//G4String&    Returns the name of the logical volume.
// lv->SetName(/*const G4String& pName*/);//Sets the name of the logical volume.
// lv->GetNoDaughters();//G4int    Returns the number of daughters (0 to n).
// lv->GetDaughter(/*const G4int i*/);//G4VPhysicalVolume*    Returns the ith daughter. Note numbering starts from 0, and no bounds checking is performed.
// lv->AddDaughter(/*G4VPhysicalVolume* p*/);//Adds the volume p as a daughter of the current logical volume.
// lv->IsDaughter(/*const G4VPhysicalVolume* p*/);//G4bool    Returns true if the volume p is a daughter of the current logical volume.
// lv->IsAncestor(/*const G4VPhysicalVolume* p*/);//G4bool    Returns true if the volume p is part of the hierarchy of volumes established by the current logical volume. Scans recursively the volume tree.
// lv->RemoveDaughter(/*const G4VPhysicalVolume* p*/);//Removes the volume p from the List of daughter of the current logical volume.
// lv->ClearDaughters();//Clears the list of daughters. Used by the phys-volume store when the geometry tree is cleared, since modified at run-time.
// lv->TotalVolumeEntities();//G4int    Returns the total number of physical volumes (replicated or placed) in the tree represented by the current logical volume.
// lv->CharacteriseDaughters();//EVolume    Characterise the daughters of this logical volume.
// lv->GetSolid();//G4VSolid*    Gets the current solid.
// lv->SetSolid(/*G4VSolid *pSolid*/);//Sets the current solid.
// lv->GetMaterial();//G4Material*
// lv->SetMaterial(/*G4Material *pMaterial*/);
// lv->GetFieldManager();//G4FieldManager*
// lv->SetFieldManager(/*G4FieldManager *pFieldMgr*/, /*G4bool forceToAllDaughters*/);//Sets FieldManager and propagates it: i) only to daughters with G4FieldManager = 0, if forceToAllDaughters=false. ii) to all daughters, if forceToAllDaughters=true
// lv->GetSensitiveDetector();//G4VSensitiveDetector*
// lv->SetSensitiveDetector(/*G4VSensitiveDetector *pSDetector*/);//Sets SensitiveDetector (can be 0).
// lv->GetUserLimits();//G4UserLimits*
// lv->SetUserLimits(/*G4UserLimits *pULimits*/);
// lv->GetVoxelHeader();//G4SmartVoxelHeader*
// lv->SetVoxelHeader(/*G4SmartVoxelHeader *pVoxel*/);
// lv->GetSmartless();//G4double    Gets user defined optimisation quality.
// lv->SetSmartless(/*G4double s*/);//Sets user defined optimisation quality.
// lv->IsToOptimise();//G4bool    Replies if geometry optimisation (voxelisation) is to be applied for this volume hierarchy.
// lv->SetOptimisation(/*G4bool optim*/);//Specifies if to apply or not geometry optimisation to this volume hierarchy. Note that for parameterised volumes in the hierarchy, optimisation is always applied. 
// lv->IsRootRegion();//G4bool    Replies if the logical volume represents a root region or not.
// lv->SetRegionRootFlag(/*G4bool rreg*/);//Sets/unsets the volume as a root region for cuts.
// lv->IsRegion();//G4bool    Replies if the logical volume is part of a cuts region or not.
// lv->SetRegion(/*G4Region* reg*/);//Sets/unsets the volume as cuts region.
// lv->GetRegion();//G4Region*    Return the region to which the volume belongs, if any.
// lv->PropagateRegion();//Propagates region pointer to daughters.
// lv->GetVisAttributes();//G4VisAttributes*    Gets visualization attributes.
// lv->SetVisAttributes(/*const G4VisAttributes* pVA*/);//Sets visualization attributes.
// lv->SetVisAttributes(/*const G4VisAttributes& VA*/);// A copy of 'VA' on the heap will be made in the case the call with a const reference is used.
// lv->GetFastSimulationManager();//G4FastSimulationManager*    Gets current FastSimulationManager pointer if exists, otherwise null.
// lv->SetBiasWeight(G4double w);//
// lv->GetBiasWeight();//G4double

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// G4VPhysicalVolume* phys;
// // Initialise a single volume, positioned in a frame which is rotated by *pRot and traslated by tlate, relative to the coordinate system of the mother volume pMotherLogical.
// // If pRot=0 the volume is unrotated with respect to its mother.
// // The physical volume is added to the mother's logical volume.
// // Arguments particular to G4PVPlacement:
// //   pMany Currently NOT used. For future use to identify if the volume is meant to be considered an overlapping structure, or not.
// //   pCopyNo should be set to 0 for the first volume of a given type.
// //   pSurfChk if true activates check for overlaps with existing volumes.
// // This is a very natural way of defining a physical volume, and is especially useful when creating subdetectors: the mother volumes are not placed until a later stage of the assembly program.
// phys = new G4PVPlacement(G4RotationMatrix *pRot, const G4ThreeVector &tlate, G4LogicalVolume *pCurrentLogical, const G4String& pName, G4LogicalVolume *pMotherLogical, G4bool pMany, G4int  pCopyNo, G4bool pSurfChk=false);
// // Additional constructor, which expects a G4Transform3D that represents the direct rotation and translation of the solid (NOT of the frame).  
// // The G4Transform3D argument should be constructed by:
// //  i) First rotating it to align the solid to the system of reference of its mother volume *pMotherLogical, and 
// // ii) Then placing the solid at the location Transform3D.getTranslation(), with respect to the origin of the system of coordinates of the mother volume.  
// phys = new G4PVPlacement(const G4Transform3D &Transform3D, G4LogicalVolume *pCurrentLogical, const G4String& pName, G4LogicalVolume *pMotherLogical, G4bool pMany, G4int pCopyNo, G4bool pSurfChk=false);

// // Return the rotation/translation of the Object relative to the mother.
// phys->GetObjectRotation();//G4RotationMatrix*
// phys->GetObjectRotationValue();//G4RotationMatrix
// phys->GetObjectTranslation();//G4ThreeVector

// // Return the rotation/translation of the Frame used to position this volume in its mother volume (opposite of object rot/trans).
// phys->GetFrameRotation();//G4RotationMatrix*
// phys->GetFrameTranslation();//G4ThreeVector

// phys->GetLogicalVolume();//G4LogicalVolume*    Return the associated logical volume.
// phys->SetLogicalVolume(/*G4LogicalVolume *pLogical*/);//Set the logical volume. Must not be called when geometry closed.
// phys->GetMotherLogical();//G4LogicalVolume*    Return the current mother logical volume pointer.
// phys->SetMotherLogical(/*G4LogicalVolume *pMother*/);//Set the mother logical volume. Must not be called when geometry closed.
// phys->GetName();//G4String&
// phys->SetName(/*const G4String& pName*/);
// phys->VolumeType();//EVolume    Characterise the `type' of volume - normal/replicated/parameterised.
// phys->GetMultiplicity();//G4int    Returns number of object entities (1 for normal placements, n for replicas or parameterised).
// phys->GetCopyNo();//G4int
// phys->SetCopyNo(/*G4int CopyNo*/);
// // Verifies if the placed volume is overlapping with existing daughters or with the mother volume. Provides default resolution for the number of points to be generated and verified.
// // A tolerance for the precision of the overlap check can be specified, by default it is set to maximum precision.
// // Reports a maximum of overlaps errors according to parameter in input.
// // Returns true if the volume is overlapping.
// phys->CheckOverlaps(G4int res=1000, G4double tol=0., G4bool verbose=true, G4int maxErr=1);//G4bool

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// G4Region* region = new G4Region(/*const G4String& name*/);
// // Add/remove root logical volumes and set/reset their daughters flags as regions. They also recompute the materials list for the region.
// region->AddRootLogicalVolume(/*G4LogicalVolume* lv*/);
// region->RemoveRootLogicalVolume(/*G4LogicalVolume* lv*/, /*G4bool scan=true*/);
// region->SetName(/*const G4String& name*/);
// region->GetName();//G4String&
// // Accessors to flag identifying if a region has been modified (and still cuts needs to be computed) or not.
// region->RegionModified(/*G4bool flag*/);
// region->IsModified();//G4bool
// region->SetProductionCuts(/*G4ProductionCuts* cut*/);
// region->GetProductionCuts();//G4ProductionCuts*
// region->GetNumberOfMaterials();//size_t
// region->GetNumberOfRootVolumes();//size_t
// region->SetUserInformation(/*G4VUserRegionInformation* ui*/);
// region->GetUserInformation();//G4VUserRegionInformation*
// region->SetUserLimits(/*G4UserLimits* ul*/);
// region->GetUserLimits();//G4UserLimits*
// // Set and Get methods for G4FastSimulationManager. The root logical volume that has the region with G4FastSimulationManager becomes an envelope of fast simulation.
// region->SetFastSimulationManager(/*G4FastSimulationManager* fsm*/);
// region->GetFastSimulationManager();//G4FastSimulationManager*
// region->ClearFastSimulationManager();//Set G4FastSimulationManager pointer to the one for the parent region if it exists. Otherwise set to null.
// // Set and Get methods for G4FieldManager. The region with assigned field-manager sets the field to the geometrical area associated with it; priority is anyhow given to local fields eventually set to logical volumes.
// region->SetFieldManager(/*G4FieldManager* fm*/);
// region->GetFieldManager();//G4FieldManager* 
// // Get method for the world physical volume which this region belongs to. A valid pointer will be assigned by G4RunManagerKernel through G4RegionStore when the geometry is to be closed. Thus, this pointer may be incorrect at PreInit and Idle state. If the pointer is null at the proper state, this particular region does not belong to any world (maybe not assigned to any volume, etc.).
// region->GetWorldPhysical();//G4VPhysicalVolume*
// region->SetWorld(/*G4VPhysicalVolume* wp*/);//Set the world physical volume if this region belongs to this world. If wp is null, reset the pointer.
// region->BelongsTo(/*G4VPhysicalVolume* thePhys*/);//G4bool    Returns whether this region belongs to the given physical volume (recursively scanned to the bottom of the hierarchy).
// region->GetParentRegion(/*G4bool& unique*/);//G4Region*    Returns a region that contains this region. Otherwise null returned. Flag 'unique' is true if there is only one parent region containing the current region.
// region->SetRegionalSteppingAction(/*G4UserSteppingAction* rusa*/);
// region->GetRegionalSteppingAction();//G4UserSteppingAction*

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif /* _WUDETECTORCONSTRUCTION_H_ */
// 
// wuDetectorConstruction.hh ends here
