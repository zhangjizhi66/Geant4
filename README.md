# geant4 示例代码

## 运行

./build.sh

build/geant4 -l

Idle> /run/beamOn 100000

## Class 列表

### PrimaryGeneratorAction

PrimaryGeneratorAction 类指明了粒子源的全部信息。

指明的信息包括：粒子的种类、动能、产生位置、方向；可以在其中加上随机数，使物理量具有一定的分布

### DetectorConstruction

DetectorConstruction 类指明了探测器及实验室环境的全部信息。

DetectorConstruction::DefineMaterials 函数定义了所有会用到的材料。

DetectorConstruction::DefineVolumes 函数指明了探测器及实验室环境的尺寸、材料、位置

### RunAction

RunAction 类指明了在一个 run 的开始前和结束后需要做的事情。

对于本程序，在 RunAction::BeginOfRunAction 函数中：创建并打开 ROOT 文件，设置文件名称、column 名称；

在 RunAction::EndOfRunAction 函数中：写入并关闭 ROOT 文件。

### EventAction

EventAction 类指明了在一个 event 的开始前和结束后需要做的事情。

对于本程序，EventAction 类没有做任何事情。

在 src/EventAction.cc 中，保留了数据接口代码作为参考（已被注释掉）

### TrackingAction

TrackingAction 类指明了在一个 track 中需要做的事情。

对于本程序，TrackingAction 类没有做任何事情。

在 src/TrackingAction.cc 中，保留了数据接口代码作为参考（已被注释掉）

### SteppingAction

SteppingAction 类指明了在一个 step 中需要做的事情。

对于本程序，数据是在每个 step 中获取的，并即时添加到 ROOT 文件中

### StackingAction

对于本程序，StackingAction 类没有做任何事情。

