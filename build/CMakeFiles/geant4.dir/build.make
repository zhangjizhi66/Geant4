# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zhangjizhi/geant4_step

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhangjizhi/geant4_step/build

# Include any dependencies generated for this target.
include CMakeFiles/geant4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/geant4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/geant4.dir/flags.make

CMakeFiles/geant4.dir/main.cc.o: CMakeFiles/geant4.dir/flags.make
CMakeFiles/geant4.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/geant4.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geant4.dir/main.cc.o -c /home/zhangjizhi/geant4_step/main.cc

CMakeFiles/geant4.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geant4.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangjizhi/geant4_step/main.cc > CMakeFiles/geant4.dir/main.cc.i

CMakeFiles/geant4.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geant4.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangjizhi/geant4_step/main.cc -o CMakeFiles/geant4.dir/main.cc.s

CMakeFiles/geant4.dir/main.cc.o.requires:

.PHONY : CMakeFiles/geant4.dir/main.cc.o.requires

CMakeFiles/geant4.dir/main.cc.o.provides: CMakeFiles/geant4.dir/main.cc.o.requires
	$(MAKE) -f CMakeFiles/geant4.dir/build.make CMakeFiles/geant4.dir/main.cc.o.provides.build
.PHONY : CMakeFiles/geant4.dir/main.cc.o.provides

CMakeFiles/geant4.dir/main.cc.o.provides.build: CMakeFiles/geant4.dir/main.cc.o


CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o: CMakeFiles/geant4.dir/flags.make
CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o: ../src/wuActionInitialization.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o -c /home/zhangjizhi/geant4_step/src/wuActionInitialization.cc

CMakeFiles/geant4.dir/src/wuActionInitialization.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geant4.dir/src/wuActionInitialization.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangjizhi/geant4_step/src/wuActionInitialization.cc > CMakeFiles/geant4.dir/src/wuActionInitialization.cc.i

CMakeFiles/geant4.dir/src/wuActionInitialization.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geant4.dir/src/wuActionInitialization.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangjizhi/geant4_step/src/wuActionInitialization.cc -o CMakeFiles/geant4.dir/src/wuActionInitialization.cc.s

CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o.requires:

.PHONY : CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o.requires

CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o.provides: CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o.requires
	$(MAKE) -f CMakeFiles/geant4.dir/build.make CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o.provides.build
.PHONY : CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o.provides

CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o.provides.build: CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o


CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o: CMakeFiles/geant4.dir/flags.make
CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o: ../src/wuDetectorConstruction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o -c /home/zhangjizhi/geant4_step/src/wuDetectorConstruction.cc

CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangjizhi/geant4_step/src/wuDetectorConstruction.cc > CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.i

CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangjizhi/geant4_step/src/wuDetectorConstruction.cc -o CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.s

CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o.requires:

.PHONY : CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o.requires

CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o.provides: CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o.requires
	$(MAKE) -f CMakeFiles/geant4.dir/build.make CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o.provides.build
.PHONY : CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o.provides

CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o.provides.build: CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o


CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o: CMakeFiles/geant4.dir/flags.make
CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o: ../src/wuEventActionAll.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o -c /home/zhangjizhi/geant4_step/src/wuEventActionAll.cc

CMakeFiles/geant4.dir/src/wuEventActionAll.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geant4.dir/src/wuEventActionAll.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangjizhi/geant4_step/src/wuEventActionAll.cc > CMakeFiles/geant4.dir/src/wuEventActionAll.cc.i

CMakeFiles/geant4.dir/src/wuEventActionAll.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geant4.dir/src/wuEventActionAll.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangjizhi/geant4_step/src/wuEventActionAll.cc -o CMakeFiles/geant4.dir/src/wuEventActionAll.cc.s

CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o.requires:

.PHONY : CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o.requires

CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o.provides: CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o.requires
	$(MAKE) -f CMakeFiles/geant4.dir/build.make CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o.provides.build
.PHONY : CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o.provides

CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o.provides.build: CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o


CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o: CMakeFiles/geant4.dir/flags.make
CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o: ../src/wuPhysicsList.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o -c /home/zhangjizhi/geant4_step/src/wuPhysicsList.cc

CMakeFiles/geant4.dir/src/wuPhysicsList.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geant4.dir/src/wuPhysicsList.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangjizhi/geant4_step/src/wuPhysicsList.cc > CMakeFiles/geant4.dir/src/wuPhysicsList.cc.i

CMakeFiles/geant4.dir/src/wuPhysicsList.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geant4.dir/src/wuPhysicsList.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangjizhi/geant4_step/src/wuPhysicsList.cc -o CMakeFiles/geant4.dir/src/wuPhysicsList.cc.s

CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o.requires:

.PHONY : CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o.requires

CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o.provides: CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o.requires
	$(MAKE) -f CMakeFiles/geant4.dir/build.make CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o.provides.build
.PHONY : CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o.provides

CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o.provides.build: CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o


CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o: CMakeFiles/geant4.dir/flags.make
CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o: ../src/wuPrimaryGeneratorActionAll.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o -c /home/zhangjizhi/geant4_step/src/wuPrimaryGeneratorActionAll.cc

CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangjizhi/geant4_step/src/wuPrimaryGeneratorActionAll.cc > CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.i

CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangjizhi/geant4_step/src/wuPrimaryGeneratorActionAll.cc -o CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.s

CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o.requires:

.PHONY : CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o.requires

CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o.provides: CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o.requires
	$(MAKE) -f CMakeFiles/geant4.dir/build.make CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o.provides.build
.PHONY : CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o.provides

CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o.provides.build: CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o


CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o: CMakeFiles/geant4.dir/flags.make
CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o: ../src/wuRunActionAll.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o -c /home/zhangjizhi/geant4_step/src/wuRunActionAll.cc

CMakeFiles/geant4.dir/src/wuRunActionAll.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geant4.dir/src/wuRunActionAll.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangjizhi/geant4_step/src/wuRunActionAll.cc > CMakeFiles/geant4.dir/src/wuRunActionAll.cc.i

CMakeFiles/geant4.dir/src/wuRunActionAll.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geant4.dir/src/wuRunActionAll.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangjizhi/geant4_step/src/wuRunActionAll.cc -o CMakeFiles/geant4.dir/src/wuRunActionAll.cc.s

CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o.requires:

.PHONY : CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o.requires

CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o.provides: CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o.requires
	$(MAKE) -f CMakeFiles/geant4.dir/build.make CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o.provides.build
.PHONY : CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o.provides

CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o.provides.build: CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o


CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o: CMakeFiles/geant4.dir/flags.make
CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o: ../src/wuStackingActionAll.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o -c /home/zhangjizhi/geant4_step/src/wuStackingActionAll.cc

CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangjizhi/geant4_step/src/wuStackingActionAll.cc > CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.i

CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangjizhi/geant4_step/src/wuStackingActionAll.cc -o CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.s

CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o.requires:

.PHONY : CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o.requires

CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o.provides: CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o.requires
	$(MAKE) -f CMakeFiles/geant4.dir/build.make CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o.provides.build
.PHONY : CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o.provides

CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o.provides.build: CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o


CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o: CMakeFiles/geant4.dir/flags.make
CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o: ../src/wuSteppingActionAll.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o -c /home/zhangjizhi/geant4_step/src/wuSteppingActionAll.cc

CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangjizhi/geant4_step/src/wuSteppingActionAll.cc > CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.i

CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangjizhi/geant4_step/src/wuSteppingActionAll.cc -o CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.s

CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o.requires:

.PHONY : CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o.requires

CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o.provides: CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o.requires
	$(MAKE) -f CMakeFiles/geant4.dir/build.make CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o.provides.build
.PHONY : CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o.provides

CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o.provides.build: CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o


CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o: CMakeFiles/geant4.dir/flags.make
CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o: ../src/wuTrackingActionAll.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o -c /home/zhangjizhi/geant4_step/src/wuTrackingActionAll.cc

CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhangjizhi/geant4_step/src/wuTrackingActionAll.cc > CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.i

CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhangjizhi/geant4_step/src/wuTrackingActionAll.cc -o CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.s

CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o.requires:

.PHONY : CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o.requires

CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o.provides: CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o.requires
	$(MAKE) -f CMakeFiles/geant4.dir/build.make CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o.provides.build
.PHONY : CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o.provides

CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o.provides.build: CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o


# Object files for target geant4
geant4_OBJECTS = \
"CMakeFiles/geant4.dir/main.cc.o" \
"CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o" \
"CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o" \
"CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o" \
"CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o" \
"CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o" \
"CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o" \
"CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o" \
"CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o" \
"CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o"

# External object files for target geant4
geant4_EXTERNAL_OBJECTS =

geant4: CMakeFiles/geant4.dir/main.cc.o
geant4: CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o
geant4: CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o
geant4: CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o
geant4: CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o
geant4: CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o
geant4: CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o
geant4: CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o
geant4: CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o
geant4: CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o
geant4: CMakeFiles/geant4.dir/build.make
geant4: /opt/Geant4/geant41006p02/lib64/libG4Tree.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4GMocren.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4visHepRep.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4RayTracer.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4VRML.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4OpenGL.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4gl2ps.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4interfaces.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4persistency.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4error_propagation.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4readout.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4physicslists.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4parmodels.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4FR.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4vis_management.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4modeling.so
geant4: /usr/lib64/libXmu.so
geant4: /usr/lib64/libXext.so
geant4: /usr/lib64/libXt.so
geant4: /usr/lib64/libSM.so
geant4: /usr/lib64/libICE.so
geant4: /usr/lib64/libX11.so
geant4: /usr/lib64/libXm.so
geant4: /usr/lib64/libGLU.so
geant4: /usr/lib64/libGL.so
geant4: /usr/lib64/libQt5OpenGL.so.5.9.7
geant4: /usr/lib64/libQt5PrintSupport.so.5.9.7
geant4: /usr/lib64/libQt5Widgets.so.5.9.7
geant4: /usr/lib64/libQt5Gui.so.5.9.7
geant4: /usr/lib64/libQt5Core.so.5.9.7
geant4: /usr/lib64/libxerces-c.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4run.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4event.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4tracking.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4processes.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4analysis.so
geant4: /usr/lib64/libfreetype.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4expat.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4zlib.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4digits_hits.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4track.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4particles.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4geometry.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4materials.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4graphics_reps.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4intercoms.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4global.so
geant4: /opt/Geant4/geant41006p02/lib64/libG4clhep.so
geant4: CMakeFiles/geant4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhangjizhi/geant4_step/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable geant4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/geant4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/geant4.dir/build: geant4

.PHONY : CMakeFiles/geant4.dir/build

CMakeFiles/geant4.dir/requires: CMakeFiles/geant4.dir/main.cc.o.requires
CMakeFiles/geant4.dir/requires: CMakeFiles/geant4.dir/src/wuActionInitialization.cc.o.requires
CMakeFiles/geant4.dir/requires: CMakeFiles/geant4.dir/src/wuDetectorConstruction.cc.o.requires
CMakeFiles/geant4.dir/requires: CMakeFiles/geant4.dir/src/wuEventActionAll.cc.o.requires
CMakeFiles/geant4.dir/requires: CMakeFiles/geant4.dir/src/wuPhysicsList.cc.o.requires
CMakeFiles/geant4.dir/requires: CMakeFiles/geant4.dir/src/wuPrimaryGeneratorActionAll.cc.o.requires
CMakeFiles/geant4.dir/requires: CMakeFiles/geant4.dir/src/wuRunActionAll.cc.o.requires
CMakeFiles/geant4.dir/requires: CMakeFiles/geant4.dir/src/wuStackingActionAll.cc.o.requires
CMakeFiles/geant4.dir/requires: CMakeFiles/geant4.dir/src/wuSteppingActionAll.cc.o.requires
CMakeFiles/geant4.dir/requires: CMakeFiles/geant4.dir/src/wuTrackingActionAll.cc.o.requires

.PHONY : CMakeFiles/geant4.dir/requires

CMakeFiles/geant4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/geant4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/geant4.dir/clean

CMakeFiles/geant4.dir/depend:
	cd /home/zhangjizhi/geant4_step/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhangjizhi/geant4_step /home/zhangjizhi/geant4_step /home/zhangjizhi/geant4_step/build /home/zhangjizhi/geant4_step/build /home/zhangjizhi/geant4_step/build/CMakeFiles/geant4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/geant4.dir/depend

