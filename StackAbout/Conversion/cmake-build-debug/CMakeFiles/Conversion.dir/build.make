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
CMAKE_SOURCE_DIR = /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Conversion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Conversion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Conversion.dir/flags.make

CMakeFiles/Conversion.dir/main.cpp.o: CMakeFiles/Conversion.dir/flags.make
CMakeFiles/Conversion.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Conversion.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Conversion.dir/main.cpp.o -c /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/main.cpp

CMakeFiles/Conversion.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Conversion.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/main.cpp > CMakeFiles/Conversion.dir/main.cpp.i

CMakeFiles/Conversion.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Conversion.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/main.cpp -o CMakeFiles/Conversion.dir/main.cpp.s

CMakeFiles/Conversion.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Conversion.dir/main.cpp.o.requires

CMakeFiles/Conversion.dir/main.cpp.o.provides: CMakeFiles/Conversion.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Conversion.dir/build.make CMakeFiles/Conversion.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Conversion.dir/main.cpp.o.provides

CMakeFiles/Conversion.dir/main.cpp.o.provides.build: CMakeFiles/Conversion.dir/main.cpp.o


CMakeFiles/Conversion.dir/InitStack.cpp.o: CMakeFiles/Conversion.dir/flags.make
CMakeFiles/Conversion.dir/InitStack.cpp.o: ../InitStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Conversion.dir/InitStack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Conversion.dir/InitStack.cpp.o -c /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/InitStack.cpp

CMakeFiles/Conversion.dir/InitStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Conversion.dir/InitStack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/InitStack.cpp > CMakeFiles/Conversion.dir/InitStack.cpp.i

CMakeFiles/Conversion.dir/InitStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Conversion.dir/InitStack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/InitStack.cpp -o CMakeFiles/Conversion.dir/InitStack.cpp.s

CMakeFiles/Conversion.dir/InitStack.cpp.o.requires:

.PHONY : CMakeFiles/Conversion.dir/InitStack.cpp.o.requires

CMakeFiles/Conversion.dir/InitStack.cpp.o.provides: CMakeFiles/Conversion.dir/InitStack.cpp.o.requires
	$(MAKE) -f CMakeFiles/Conversion.dir/build.make CMakeFiles/Conversion.dir/InitStack.cpp.o.provides.build
.PHONY : CMakeFiles/Conversion.dir/InitStack.cpp.o.provides

CMakeFiles/Conversion.dir/InitStack.cpp.o.provides.build: CMakeFiles/Conversion.dir/InitStack.cpp.o


CMakeFiles/Conversion.dir/StackEmpty.cpp.o: CMakeFiles/Conversion.dir/flags.make
CMakeFiles/Conversion.dir/StackEmpty.cpp.o: ../StackEmpty.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Conversion.dir/StackEmpty.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Conversion.dir/StackEmpty.cpp.o -c /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/StackEmpty.cpp

CMakeFiles/Conversion.dir/StackEmpty.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Conversion.dir/StackEmpty.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/StackEmpty.cpp > CMakeFiles/Conversion.dir/StackEmpty.cpp.i

CMakeFiles/Conversion.dir/StackEmpty.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Conversion.dir/StackEmpty.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/StackEmpty.cpp -o CMakeFiles/Conversion.dir/StackEmpty.cpp.s

CMakeFiles/Conversion.dir/StackEmpty.cpp.o.requires:

.PHONY : CMakeFiles/Conversion.dir/StackEmpty.cpp.o.requires

CMakeFiles/Conversion.dir/StackEmpty.cpp.o.provides: CMakeFiles/Conversion.dir/StackEmpty.cpp.o.requires
	$(MAKE) -f CMakeFiles/Conversion.dir/build.make CMakeFiles/Conversion.dir/StackEmpty.cpp.o.provides.build
.PHONY : CMakeFiles/Conversion.dir/StackEmpty.cpp.o.provides

CMakeFiles/Conversion.dir/StackEmpty.cpp.o.provides.build: CMakeFiles/Conversion.dir/StackEmpty.cpp.o


CMakeFiles/Conversion.dir/Pop.cpp.o: CMakeFiles/Conversion.dir/flags.make
CMakeFiles/Conversion.dir/Pop.cpp.o: ../Pop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Conversion.dir/Pop.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Conversion.dir/Pop.cpp.o -c /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/Pop.cpp

CMakeFiles/Conversion.dir/Pop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Conversion.dir/Pop.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/Pop.cpp > CMakeFiles/Conversion.dir/Pop.cpp.i

CMakeFiles/Conversion.dir/Pop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Conversion.dir/Pop.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/Pop.cpp -o CMakeFiles/Conversion.dir/Pop.cpp.s

CMakeFiles/Conversion.dir/Pop.cpp.o.requires:

.PHONY : CMakeFiles/Conversion.dir/Pop.cpp.o.requires

CMakeFiles/Conversion.dir/Pop.cpp.o.provides: CMakeFiles/Conversion.dir/Pop.cpp.o.requires
	$(MAKE) -f CMakeFiles/Conversion.dir/build.make CMakeFiles/Conversion.dir/Pop.cpp.o.provides.build
.PHONY : CMakeFiles/Conversion.dir/Pop.cpp.o.provides

CMakeFiles/Conversion.dir/Pop.cpp.o.provides.build: CMakeFiles/Conversion.dir/Pop.cpp.o


CMakeFiles/Conversion.dir/Push.cpp.o: CMakeFiles/Conversion.dir/flags.make
CMakeFiles/Conversion.dir/Push.cpp.o: ../Push.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Conversion.dir/Push.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Conversion.dir/Push.cpp.o -c /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/Push.cpp

CMakeFiles/Conversion.dir/Push.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Conversion.dir/Push.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/Push.cpp > CMakeFiles/Conversion.dir/Push.cpp.i

CMakeFiles/Conversion.dir/Push.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Conversion.dir/Push.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/Push.cpp -o CMakeFiles/Conversion.dir/Push.cpp.s

CMakeFiles/Conversion.dir/Push.cpp.o.requires:

.PHONY : CMakeFiles/Conversion.dir/Push.cpp.o.requires

CMakeFiles/Conversion.dir/Push.cpp.o.provides: CMakeFiles/Conversion.dir/Push.cpp.o.requires
	$(MAKE) -f CMakeFiles/Conversion.dir/build.make CMakeFiles/Conversion.dir/Push.cpp.o.provides.build
.PHONY : CMakeFiles/Conversion.dir/Push.cpp.o.provides

CMakeFiles/Conversion.dir/Push.cpp.o.provides.build: CMakeFiles/Conversion.dir/Push.cpp.o


CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o: CMakeFiles/Conversion.dir/flags.make
CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o: /home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o -c /home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp

CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp > CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.i

CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp -o CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.s

CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o.requires:

.PHONY : CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o.requires

CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o.provides: CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o.requires
	$(MAKE) -f CMakeFiles/Conversion.dir/build.make CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o.provides.build
.PHONY : CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o.provides

CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o.provides.build: CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o


CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o: CMakeFiles/Conversion.dir/flags.make
CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o: /home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o -c /home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp

CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp > CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.i

CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp -o CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.s

CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o.requires:

.PHONY : CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o.requires

CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o.provides: CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o.requires
	$(MAKE) -f CMakeFiles/Conversion.dir/build.make CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o.provides.build
.PHONY : CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o.provides

CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o.provides.build: CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o


# Object files for target Conversion
Conversion_OBJECTS = \
"CMakeFiles/Conversion.dir/main.cpp.o" \
"CMakeFiles/Conversion.dir/InitStack.cpp.o" \
"CMakeFiles/Conversion.dir/StackEmpty.cpp.o" \
"CMakeFiles/Conversion.dir/Pop.cpp.o" \
"CMakeFiles/Conversion.dir/Push.cpp.o" \
"CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o" \
"CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o"

# External object files for target Conversion
Conversion_EXTERNAL_OBJECTS =

Conversion: CMakeFiles/Conversion.dir/main.cpp.o
Conversion: CMakeFiles/Conversion.dir/InitStack.cpp.o
Conversion: CMakeFiles/Conversion.dir/StackEmpty.cpp.o
Conversion: CMakeFiles/Conversion.dir/Pop.cpp.o
Conversion: CMakeFiles/Conversion.dir/Push.cpp.o
Conversion: CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o
Conversion: CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o
Conversion: CMakeFiles/Conversion.dir/build.make
Conversion: CMakeFiles/Conversion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable Conversion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Conversion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Conversion.dir/build: Conversion

.PHONY : CMakeFiles/Conversion.dir/build

CMakeFiles/Conversion.dir/requires: CMakeFiles/Conversion.dir/main.cpp.o.requires
CMakeFiles/Conversion.dir/requires: CMakeFiles/Conversion.dir/InitStack.cpp.o.requires
CMakeFiles/Conversion.dir/requires: CMakeFiles/Conversion.dir/StackEmpty.cpp.o.requires
CMakeFiles/Conversion.dir/requires: CMakeFiles/Conversion.dir/Pop.cpp.o.requires
CMakeFiles/Conversion.dir/requires: CMakeFiles/Conversion.dir/Push.cpp.o.requires
CMakeFiles/Conversion.dir/requires: CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Precede.cpp.o.requires
CMakeFiles/Conversion.dir/requires: CMakeFiles/Conversion.dir/home/michaelcode/workPlace/CLionProjects/DataStructureCode/ExpressionValue/Operate.cpp.o.requires

.PHONY : CMakeFiles/Conversion.dir/requires

CMakeFiles/Conversion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Conversion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Conversion.dir/clean

CMakeFiles/Conversion.dir/depend:
	cd /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug /home/michaelcode/workPlace/CLionProjects/DataStructureCode/Conversion/cmake-build-debug/CMakeFiles/Conversion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Conversion.dir/depend

