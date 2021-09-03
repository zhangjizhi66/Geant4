
#include "G4MTRunManager.hh"  //这是多线程的头文件

#include "DetectorConstruction.hh"  //必需：探测器构建

//必需：调用物理过程
#include "PhysicsList.hh"
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
#include "Shielding.hh"// 这个比较复杂,分好几种情况

#include "G4ParticleHPManager.hh"

//其它过程的管理
//非必需：ActionInitialization
#include "ActionInitialization.hh"

// 关于图形界面与交互接口
#include "G4UImanager.hh"
#include "G4UIterminal.hh"
#include "G4UItcsh.hh"
#include "G4VisExecutive.hh"
#include "G4UIExecutive.hh"

#include "Randomize.hh"  //随机数产生
#include <ctime>

using namespace std;

int main(int argc,char** argv)
{
  G4Random::setTheEngine(new CLHEP::RanecuEngine);
  G4Random::setTheSeed(time(NULL));

  // Construct the default run manager
  G4MTRunManager* mtrunManager = new G4MTRunManager;
  mtrunManager->SetNumberOfThreads(2);

  // Detector construction
  mtrunManager->SetUserInitialization(new DetectorConstruction());

  // Physics list
  // G4VModularPhysicsList* physicsList = new PhysicsList();
  // mtrunManager->SetUserInitialization(physicsList);
  mtrunManager->SetUserInitialization(new FTFP_BERT_HP());
  
  // action initialization
  mtrunManager->SetUserInitialization(new ActionInitialization());

  // Initialize G4 kernel
  mtrunManager->Initialize();

  // Print Data source of this Partile HP calculation
  // G4ParticleHPManager::GetInstance()->DumpDataSource();

  G4VisManager* visManager = 0;
  G4UImanager* UImanager = G4UImanager::GetUIpointer();

  G4String commandopt = argv[1];
  if(commandopt == "vis.mac"){  // 开启图形界面模式
      visManager = new G4VisExecutive;
      visManager->Initialize();

      G4UIExecutive* ui = new G4UIExecutive(argc, argv);
      UImanager->ApplyCommand("/control/execute vis.mac");
      ui->SessionStart();
      delete ui;
  }
  else{
      if(commandopt == "-l"){  // 开启命令行模式   
        G4UIsession* session = new G4UIterminal(new G4UItcsh);
        session->SessionStart();
        delete session;
      }
      else{              // 无图形界面执行脚本模式
        G4String command = "/control/execute ";
        UImanager->ApplyCommand(command + commandopt);
      }
  }
    
  if(visManager != 0)
    delete visManager;

  delete mtrunManager;
  return 0;
}
