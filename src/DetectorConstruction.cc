
#include "DetectorConstruction.hh"

#include "G4RunManager.hh"
#include "G4NistManager.hh"
#include "G4Material.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"//继承G4VPhysicalVolume
#include "G4UnitsTable.hh"
#include "G4SystemOfUnits.hh"
#include "G4PhysicalConstants.hh"
#include "G4UserLimits.hh"
#include "G4AutoDelete.hh"
#include "G4VisAttributes.hh"
#include "G4Colour.hh"
#include "G4Region.hh"
#include "G4RegionStore.hh"

#include "G4PSEnergyDeposit3D.hh"
#include "G4PSNofStep3D.hh"
#include "G4PSCellFlux3D.hh"
#include "G4PSPassageCellFlux3D.hh"
#include "G4PSFlatSurfaceFlux3D.hh"
#include "G4PSFlatSurfaceCurrent3D.hh"
#include "G4SDParticleWithEnergyFilter.hh"
#include "G4SDParticleFilter.hh"
#include "G4SDChargedFilter.hh"
#include "G4SDNeutralFilter.hh"

#include "G4Box.hh"
#include "G4Cons.hh"
#include "G4CutTubs.hh"
#include "G4Orb.hh"
#include "G4Para.hh"
#include "G4Sphere.hh"
#include "G4Torus.hh"
#include "G4Trap.hh"
#include "G4Trd.hh"
#include "G4Tubs.hh"

DetectorConstruction::DetectorConstruction() : G4VUserDetectorConstruction(),checkOverlaps(true),fVisAttributes(),logicWorld(0)
{}

DetectorConstruction::~DetectorConstruction()
{
  //释放可视化界面的颜色设置变量
  for (G4int i=0; i<G4int(fVisAttributes.size()); i++) 
      delete fVisAttributes[i];
}

G4VPhysicalVolume* DetectorConstruction::Construct()
{
  DefineMaterials();
  return DefineVolumes();
}

void DetectorConstruction::ConstructSDandField()
{
  //快速添加SD
  // BuildSensitiveDetector(logicWorld);
}

void DetectorConstruction::DefineMaterials()
{ 
  //在这里先定义所有可能用到的材料
  // Get nist material manager
  G4NistManager* nist = G4NistManager::Instance();
  
  //调用G4自身定义好的材料
  nist->FindOrBuildMaterial("G4_Galactic");//
  nist->FindOrBuildMaterial("G4_Ge");//
  // nist->FindOrBuildMaterial("G4_Pu");
  // nist->FindOrBuildMaterial("G4_H");
  // nist->FindOrBuildMaterial("G4_Al");
  // nist->FindOrBuildMaterial("G4_lH2");//
  // nist->FindOrBuildMaterial("G4_lN2");//
  // nist->FindOrBuildMaterial("G4_lO2");//
  // nist->FindOrBuildMaterial("G4_lAr");//Liquid argon
  // nist->FindOrBuildMaterial("G4_Be");
  // nist->FindOrBuildMaterial("G4_WATER");
  // nist->FindOrBuildMaterial("G4_WATER_VAPOR");//水蒸气
  // nist->FindOrBuildMaterial("G4_POLYETHYLENE");//聚乙烯
  // nist->FindOrBuildMaterial("G4_BGO");//
  // nist->FindOrBuildMaterial("G4_CARBON_DIOXIDE");//二氧化碳
  // nist->FindOrBuildMaterial("G4_LEAD_OXIDE");//氧化铅
  // nist->FindOrBuildMaterial("G4_MYLAR");//mylar膜
  // nist->FindOrBuildMaterial("G4_PLEXIGLASS");//有机玻璃
  // nist->FindOrBuildMaterial("G4_STAINLESS-STEEL");//不锈钢
  // nist->FindOrBuildMaterial("G4_LUCITE");//透明合成树脂(有机玻璃)
  // nist->FindOrBuildMaterial("G4_CONCRETE");//混凝土
  // nist->FindOrBuildMaterial("G4_GRAPHITE");//石墨
  // nist->FindOrBuildMaterial("G4_SILICON_DIOXIDE");//二氧化硅
  // nist->FindOrBuildMaterial("G4_RUBBER_NATURAL");//天然橡胶
  // nist->FindOrBuildMaterial("G4_PbWO4");//
  // nist->FindOrBuildMaterial("G4_URANIUM_OXIDE");//氧化铀 
  // nist->FindOrBuildMaterial("G4_URANIUM_MONOCARBIDE");//碳化铀
  // nist->FindOrBuildMaterial("G4_URANIUM_DICARBIDE");//二碳化铀
  
  // // elements
  // G4Element* H = nist->FindOrBuildElement("H",false);//1
  // G4Element* Li = nist->FindOrBuildElement("Li",false);//3
  // G4Element* C = nist->FindOrBuildElement("C",false);//6
  // G4Element* N = nist->FindOrBuildElement("N",false);//7
  // G4Element* O = nist->FindOrBuildElement("O",false);//8
  // G4Element* Mg = nist->FindOrBuildElement("Mg",false);//12
  // G4Element* Al = nist->FindOrBuildElement("Al",false);//13
  // G4Element* Si = nist->FindOrBuildElement("Si",false);//14
  // G4Element* P = nist->FindOrBuildElement("P",false);//15
  // G4Element* S =  nist->FindOrBuildElement("S",false);//16
  // G4Element* Cr = nist->FindOrBuildElement("Cr",false);//24
  // G4Element* Mn = nist->FindOrBuildElement("Mn",false);//25
  // G4Element* Fe = nist->FindOrBuildElement("Fe",false);//26
  // G4Element* Ni = nist->FindOrBuildElement("Ni",false);//28
  // G4Element* I = nist->FindOrBuildElement("I",false);//53
  // G4Element* Cs = nist->FindOrBuildElement("Cs",false);//55
  // G4Element* Ce = nist->FindOrBuildElement("Ce",false);//58

  // G4Isotope* U4 = new G4Isotope("U234",92,234,234.02*g/mole);
  // G4Isotope* U5 = new G4Isotope("U235",92,235,235.01*g/mole);
  // G4Isotope* U6 = new G4Isotope("U236",92,236,236.04*g/mole);
  // G4Isotope* U8 = new G4Isotope("U238",92,238,238.03*g/mole);
  // G4Element* HEU58 = new G4Element("Highly-enriched Uranium 58", "HEU58", 2);
  // HEU58->AddIsotope(U5, 0.93);
  // HEU58->AddIsotope(U8, 0.07);

  // G4Element* HEU4568 = new G4Element("Highly-enriched Uranium 4568","HEU4568",4);
  // HEU4568->AddIsotope(U4,0.0097);
  // HEU4568->AddIsotope(U5,0.9315);
  // HEU4568->AddIsotope(U6,0.0024);
  // HEU4568->AddIsotope(U8,0.0564);
  
  //---------------------------------------------------------------------------------

  // //Scintillator(BC408) 塑闪 
  // G4Material* BC408 = new G4Material("BC408", 1.032*g/cm3, 2);
  // BC408->AddElement(H, 11);BC408->AddElement(C, 10);
  // // BC408->AddElement(H, 10);BC408->AddElement(C, 9);

  // // LiquidScint(NE213) 液闪 
  // G4Material* NE213 = new G4Material("NE213",0.874*g/cm3,2);
  // NE213->AddElement(H,1212);
  // NE213->AddElement(C,1000);
  
  // // He-3 detector materials
  // G4Material* matHe3  = new G4Material("He3",  2., 3.*g/mole, 0.00049*g/cm3, kStateGas);
  
  // // Uranium material
  // G4Material* matHEU58 = new G4Material("HEU58", 19.1*g/cm3, 1, kStateSolid);
  // matHEU58->AddElement(HEU58, 1.00);

  // G4Material* matHEU4568 = new G4Material("HEU4568",18.75*g/cm3,1);
  // matHEU4568->AddElement(HEU4568, 1.0);
  
  // G4Material* matSteel = new G4Material("Steel",7.788*g/cm3,9);
  // matSteel->AddElement(Fe,62.1805*perCent);
  // matSteel->AddElement(Cr,20.26*perCent);
  // matSteel->AddElement(Mn,9.37*perCent);
  // matSteel->AddElement(Ni,7.5*perCent);
  // matSteel->AddElement(Si,0.34*perCent);
  // matSteel->AddElement(N,0.29*perCent);
  // matSteel->AddElement(C,0.04*perCent);
  // matSteel->AddElement(P,0.018*perCent);
  // matSteel->AddElement(S,0.0015*perCent);
  
  // Print materials，运行时在终端输出材料信息
  G4cout << *(G4Material::GetMaterialTable()) << G4endl;
}
 
G4VPhysicalVolume*DetectorConstruction::DefineVolumes()
{
  //通过G4Material::GetMaterial()获取DefineMaterials()中定义的材料！
  G4Material* world_mat =  G4Material::GetMaterial("G4_Galactic");
  G4Material* dssd_mat =  G4Material::GetMaterial("G4_Galactic");
  G4Material* clover_mat =  G4Material::GetMaterial("G4_Ge");
   
  // World

  G4double sizeXYZ = 1.0*m;

  G4double dssdX = 5.0*cm;
  G4double dssdY = 5.0*cm;
  G4double dssdZ = 1000.0*um;
  G4double dssdDis = 10.0*cm;
    
  G4double cloverR = 5.0*cm;
  G4double cloverZ = 10.0*cm;
  
  G4Box* solidWorld =    
    new G4Box("World",                          //its name
  	         0.5*sizeXYZ, 0.5*sizeXYZ, 0.5*sizeXYZ);     //its size
     
  logicWorld =                         
    new G4LogicalVolume(solidWorld,          //its solid
                  world_mat,           //its material
                  "World");            //its name
                                   
  physWorld = 
    new G4PVPlacement(0,                //no rotation set 0
                G4ThreeVector(),       //at (0,0,0)
                logicWorld,          //its logical volume
                "World",            //its name
                0,                //its mother  volume
                false,             //no boolean operation
                0,                 //copy number
                checkOverlaps);        //overlaps checking

  G4Box* solidDSSD =    
    new G4Box("DSSD",                    //its name
  	         0.5*dssdX, 0.5*dssdY, 0.5*dssdZ);  //its size

  logicDSSD =
    new G4LogicalVolume(solidDSSD,            //its solid
                  dssd_mat,             //its material
                  "DSSD");             //its name

  G4RotationMatrix* rotdssd = new G4RotationMatrix();
  rotdssd->rotateX(45.0*deg);
  // rotdssd->rotateY(45.0*deg);
  // rotdssd->rotateZ(45.0*deg);
  
  physDSSD =
    new G4PVPlacement(rotdssd,                       //no rotation set 0
                G4ThreeVector(0.0,3.0*cm,dssdDis),      //at (0,0,0)
                logicDSSD,                      //its logical volume
                "DSSD",                        //its name
                logicWorld,                     //its mother  volume
                false,                        //no boolean operation
                0,                           //copy number
                checkOverlaps);                  //overlaps checking
  
  G4Tubs* solidClover =
    new G4Tubs("Clover",
            0,             //内半径
            cloverR,         //外半径
            0.5*cloverZ,      //Z轴方向的半长度
            0*degree,        //圆周起始位置弧度值
            360*degree);      //该实体的圆心角弧度值

  logicClover =
    new G4LogicalVolume(solidClover,            //its solid
                  clover_mat,             //its material
                  "Clover");              //its name

  G4RotationMatrix* rotclover = new G4RotationMatrix();
  rotclover->rotateY(90.0*deg);
  
  physClover =
    new G4PVPlacement(rotclover,                       //no rotation set 0
                G4ThreeVector(15.0*cm,0.0,0.0),         //at (0,0,0)
                logicClover,                      //its logical volume
                "Clover",                        //its name
                logicWorld,                      //its mother  volume
                false,                          //no boolean operation
                0,                             //copy number
                checkOverlaps);                    //overlaps checking

    // visualization attributes ------------------------------------------------
    //可视化界面几何体颜色设置（可有可无）
    
    G4VisAttributes* visAttributes = new G4VisAttributes(G4Colour(1.0,1.0,1.0));
    //visAttributes->SetVisibility(false);//不显示边框
    logicWorld->SetVisAttributes(visAttributes);
    fVisAttributes.push_back(visAttributes);
    
    visAttributes = new G4VisAttributes(G4Colour(1.0,1.0,0.0)); 
    logicDSSD->SetVisAttributes(visAttributes);
    fVisAttributes.push_back(visAttributes);

    visAttributes = new G4VisAttributes(G4Colour(0.0,1.0,1.0)); 
    logicClover->SetVisAttributes(visAttributes);
    fVisAttributes.push_back(visAttributes);
    
    // G4Colour  white   (1.0, 1.0, 1.0) ;
    // G4Colour  grey    (0.5, 0.5, 0.5) ;
    // G4Colour  lgrey   (.85, .85, .85) ;
    // G4Colour  red     (1.0, 0.0, 0.0) ;
    // G4Colour  blue    (0.0, 0.0, 1.0) ;
    // G4Colour  cyan    (0.0, 1.0, 1.0) ;
    // G4Colour  magenta (1.0, 0.0, 1.0) ; 
    // G4Colour  yellow  (1.0, 1.0, 0.0) ;
    // G4Colour  orange  (.75, .55, 0.0) ;
    // G4Colour  lblue   (0.0, 0.0, .75) ;
    // G4Colour  lgreen  (0.0, .75, 0.0) ;
    // G4Colour  green   (0.0, 1.0, 0.0) ;
    // G4Colour  brown   (0.7, 0.4, 0.1) ;

  //===================================================================

  //always return the physical World
  return physWorld;  
}

void DetectorConstruction::BuildSensitiveDetector(G4LogicalVolume* lv)
{
  // if(!lv){
  //   G4cout<<"$$No given logical volume, no SD built"<<G4endl;
  //   return;
  // }
  // G4SDManager* SDman=G4SDManager::GetSDMpointer();
  // wuSensitiveDetector* sd1=new wuSensitiveDetector(lv->GetName()); //
  // SDman->AddNewDetector(sd1);
  // lv->SetSensitiveDetector(sd1);
}
