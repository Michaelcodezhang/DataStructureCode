# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/michaelcode/MySoftware/clion-2017.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/michaelcode/MySoftware/clion-2017.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LevelOrderTraverse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LevelOrderTraverse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LevelOrderTraverse.dir/flags.make

CMakeFiles/LevelOrderTraverse.dir/main.cpp.o: CMakeFiles/LevelOrderTraverse.dir/flags.make
CMakeFiles/LevelOrderTraverse.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LevelOrderTraverse.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LevelOrderTraverse.dir/main.cpp.o -c /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse/main.cpp

CMakeFiles/LevelOrderTraverse.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LevelOrderTraverse.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse/main.cpp > CMakeFiles/LevelOrderTraverse.dir/main.cpp.i

CMakeFiles/LevelOrderTraverse.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LevelOrderTraverse.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse/main.cpp -o CMakeFiles/LevelOrderTraverse.dir/main.cpp.s

CMakeFiles/LevelOrderTraverse.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/LevelOrderTraverse.dir/main.cpp.o.requires

CMakeFiles/LevelOrderTraverse.dir/main.cpp.o.provides: CMakeFiles/LevelOrderTraverse.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/LevelOrderTraverse.dir/build.make CMakeFiles/LevelOrderTraverse.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/LevelOrderTraverse.dir/main.cpp.o.provides

CMakeFiles/LevelOrderTraverse.dir/main.cpp.o.provides.build: CMakeFiles/LevelOrderTraverse.dir/main.cpp.o


# Object files for target LevelOrderTraverse
LevelOrderTraverse_OBJECTS = \
"CMakeFiles/LevelOrderTraverse.dir/main.cpp.o"

# External object files for target LevelOrderTraverse
LevelOrderTraverse_EXTERNAL_OBJECTS =

LevelOrderTraverse: CMakeFiles/LevelOrderTraverse.dir/main.cpp.o
LevelOrderTraverse: CMakeFiles/LevelOrderTraverse.dir/build.make
LevelOrderTraverse: CMakeFiles/LevelOrderTraverse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LevelOrderTraverse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LevelOrderTraverse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LevelOrderTraverse.dir/build: LevelOrderTraverse

.PHONY : CMakeFiles/LevelOrderTraverse.dir/build

CMakeFiles/LevelOrderTraverse.dir/requires: CMakeFiles/LevelOrderTraverse.dir/main.cpp.o.requires

.PHONY : CMakeFiles/LevelOrderTraverse.dir/requires

CMakeFiles/LevelOrderTraverse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LevelOrderTraverse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LevelOrderTraverse.dir/clean

CMakeFiles/LevelOrderTraverse.dir/depend:
	cd /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse/cmake-build-debug /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse/cmake-build-debug /home/michaelcode/workPlace/CLionProjects/DataStructureCode/TreeAbout/LevelOrderTraverse/cmake-build-debug/CMakeFiles/LevelOrderTraverse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LevelOrderTraverse.dir/depend
