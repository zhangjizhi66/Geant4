// main.cc --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 六 4月 19 14:25:47 2014 (+0800)
// Last-Updated: 五 8月 20 22:42:20 2021 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 114
// URL: http://wuhongyi.cn 

//这是多线程的头文件
#include "G4MTRunManager.hh"

// #ifdef G4MULTITHREADED
// #include "G4MTRunManager.hh"
// #include "G4RunManager.hh"
// #else
// #include "G4RunManager.hh"
// #endif


//探测器构建
//madatory class - Detector Construction
#include "wuDetectorConstruction.hh"

//调用物理过程
//mandatory class - physics 
#include "wuPhysicsList.hh"
#include "FTF_BIC.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysic G4HadronPhysicsFTF_BIC G4StoppingPhysics G4IonPhysics G4NeutronTrackingCut
#include "FTFP_BERT_ATL.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysic G4HadronPhysicsFTFP_BERT_ATL G4StoppingPhysics G4IonPhysics G4NeutronTrackingCut 
#include "FTFP_BERT.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysic G4HadronPhysicsFTFP_BERT G4StoppingPhysics G4IonPhysics G4NeutronTrackingCut        
#include "FTFP_BERT_HP.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysicsHP G4HadronPhysicsFTFP_BERT_HP G4StoppingPhysics G4IonPhysics            
#include "FTFP_BERT_TRV.hh"// G4EmStandardPhysicsGS G4EmExtraPhysics G4DecayPhysics G4HadronHElasticPhysics G4HadronPhysicsFTFP_BERT_TRV G4StoppingPhysics G4IonPhysics G4NeutronTrackingCut
#include "FTFP_INCLXX.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysics G4HadronPhysicsINCLXX G4StoppingPhysics G4IonINCLXXPhysics G4NeutronTrackingCut
#include "FTFP_INCLXX_HP.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysicsHP G4HadronPhysicsINCLXX G4StoppingPhysics G4IonINCLXXPhysics
#include "G4GenericPhysicsList.hh"                    
#include "LBE.hh"// 这个比较复杂 -_-
#include "NuBeam.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysics G4HadronPhysicsNuBeam G4StoppingPhysics G4IonPhysics G4NeutronTrackingCut
#include "QBBC.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysicsXS G4StoppingPhysics G4IonPhysics G4HadronInelasticQBBC G4NeutronTrackingCut
#include "QGS_BIC.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysics G4HadronPhysicsQGS_BIC G4StoppingPhysics G4IonPhysics G4NeutronTrackingCut
#include "QGSP_BERT.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysics G4HadronPhysicsQGSP_BERT G4StoppingPhysics G4IonPhysics G4NeutronTrackingCut
#include "QGSP_BERT_HP.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysicsHP G4HadronPhysicsQGSP_BERT_HP G4StoppingPhysics G4IonPhysics
#include "QGSP_BIC_AllHP.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysicsPHP G4HadronPhysicsQGSP_BIC_AllHP G4StoppingPhysics G4IonPhysicsPHP
#include "QGSP_BIC.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysics G4HadronPhysicsQGSP_BIC G4StoppingPhysics G4IonPhysics G4NeutronTrackingCut
#include "QGSP_BIC_HP.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysicsHP G4HadronPhysicsQGSP_BIC_HP G4StoppingPhysics G4IonPhysics
#include "QGSP_FTFP_BERT.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysics G4HadronPhysicsQGSP_FTFP_BERT G4StoppingPhysics G4IonPhysics G4NeutronTrackingCut
#include "QGSP_INCLXX.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysics G4HadronPhysicsINCLXX G4StoppingPhysics G4IonINCLXXPhysics G4NeutronTrackingCut
#include "QGSP_INCLXX_HP.hh"// G4EmStandardPhysics G4EmExtraPhysics G4DecayPhysics G4HadronElasticPhysicsHP G4HadronPhysicsINCLXX G4StoppingPhysics G4IonINCLXXPhysics
#include "Shielding.hh"// 这个比较复杂,分好几种情况 -_-

#include "G4ParticleHPManager.hh"


//其它过程的管理
//not mandatory class - ActionInitialization
#include "wuActionInitialization.hh"

// 关于图形界面与交互接口
#include "G4UImanager.hh"
#include "G4UIterminal.hh"
#include "G4UItcsh.hh"
// #ifdef G4VIS_USE
#include "G4VisExecutive.hh"
// #endif
// #ifdef G4UI_USE
#include "G4UIExecutive.hh"
// #endif


#include "Randomize.hh"//随机数这里产生
#include <ctime>// initialize random seed
using namespace std;

int main(int argc,char** argv)
{

  G4Random::setTheEngine(new CLHEP::RanecuEngine);
  G4int seconds =  time(NULL);
  G4Random::setTheSeed(seconds);



  // Construct the default run manager
  G4MTRunManager* mtrunManager = NULL;

  mtrunManager = new G4MTRunManager;
  mtrunManager->SetNumberOfThreads(2);
  // mtrunManager->SetUserInitialization(new wuWorkerInitialization);


  // Set mandatory initialization classes ，410版本的框架是这样的，ActionInitialization来管理。
  //
  // Detector construction
  mtrunManager->SetUserInitialization(new wuDetectorConstruction());


  // Physics list
  // G4VModularPhysicsList* physicsList = new wuPhysicsList();
  // mtrunManager->SetUserInitialization(physicsList);
  mtrunManager->SetUserInitialization(new FTFP_BERT_HP());
  
  // User action initialization
  mtrunManager->SetUserInitialization(new wuActionInitialization());


  // Initialize G4 kernel
  mtrunManager->Initialize();



  // Print   Data source of this Partile HP calculation
  // G4ParticleHPManager::GetInstance()->DumpDataSource();

  

// #ifdef G4VIS_USE
  G4VisManager* visManager = 0;
// #endif
  
  
  G4UImanager* UImanager = G4UImanager::GetUIpointer();

  G4String commandopt = argv[1];
  if(commandopt == "vis.mac")// 开启图形界面模式
    {
// #ifdef G4VIS_USE
      visManager = new G4VisExecutive;
      visManager->Initialize();
// #endif   
// #ifdef G4UI_USE
      G4UIExecutive* ui = new G4UIExecutive(argc, argv);
      UImanager->ApplyCommand("/control/execute vis.mac");
      ui->SessionStart();
      delete ui;
// #endif
    }
  else
    {
      if(commandopt == "-l")// 开启命令行模式
	{
// #ifdef G4UI_USE_TCSH    
	  G4UIsession* session = new G4UIterminal(new G4UItcsh);
	  session->SessionStart();
	  delete session;
// #endif
	}
      else
	{// 无图形界面执行脚本模式
	  G4String command = "/control/execute ";
	  G4String fileName = argv[1];
	  UImanager->ApplyCommand(command + fileName);
	}
    }

  
  // Job termination
  // Free the store: user actions, physics_list and detector_description are
  // owned and deleted by the run manager, so they should not be deleted 
  // in the main() program !
  

// #ifdef G4VIS_USE
  if(visManager != 0)
    delete visManager;
// #endif
  

delete mtrunManager;


  return 0;
}


// 
// main.cc ends here
