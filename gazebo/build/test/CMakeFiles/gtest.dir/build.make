# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/mehatfie/GitHub/simSPIKE/gazebo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mehatfie/GitHub/simSPIKE/gazebo/build

# Include any dependencies generated for this target.
include test/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/gtest.dir/flags.make

test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o: test/CMakeFiles/gtest.dir/flags.make
test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o: ../test/gtest/src/gtest-all.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mehatfie/GitHub/simSPIKE/gazebo/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o -c /home/mehatfie/GitHub/simSPIKE/gazebo/test/gtest/src/gtest-all.cc

test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.i"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mehatfie/GitHub/simSPIKE/gazebo/test/gtest/src/gtest-all.cc > CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.i

test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.s"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mehatfie/GitHub/simSPIKE/gazebo/test/gtest/src/gtest-all.cc -o CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.s

test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o.requires:
.PHONY : test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o.requires

test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o.provides: test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o.requires
	$(MAKE) -f test/CMakeFiles/gtest.dir/build.make test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o.provides.build
.PHONY : test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o.provides

test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o.provides.build: test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

test/libgtest.a: test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o
test/libgtest.a: test/CMakeFiles/gtest.dir/build.make
test/libgtest.a: test/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libgtest.a"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/test && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/gtest.dir/build: test/libgtest.a
.PHONY : test/CMakeFiles/gtest.dir/build

test/CMakeFiles/gtest.dir/requires: test/CMakeFiles/gtest.dir/gtest/src/gtest-all.cc.o.requires
.PHONY : test/CMakeFiles/gtest.dir/requires

test/CMakeFiles/gtest.dir/clean:
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/test && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/gtest.dir/clean

test/CMakeFiles/gtest.dir/depend:
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mehatfie/GitHub/simSPIKE/gazebo /home/mehatfie/GitHub/simSPIKE/gazebo/test /home/mehatfie/GitHub/simSPIKE/gazebo/build /home/mehatfie/GitHub/simSPIKE/gazebo/build/test /home/mehatfie/GitHub/simSPIKE/gazebo/build/test/CMakeFiles/gtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/gtest.dir/depend
