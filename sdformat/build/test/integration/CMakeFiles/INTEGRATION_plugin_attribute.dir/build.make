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
CMAKE_SOURCE_DIR = /home/mehatfie/GitHub/simSPIKE/sdformat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mehatfie/GitHub/simSPIKE/sdformat/build

# Include any dependencies generated for this target.
include test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/depend.make

# Include the progress variables for this target.
include test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/progress.make

# Include the compile flags for this target's objects.
include test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/flags.make

test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o: test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/flags.make
test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o: ../test/integration/plugin_attribute.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mehatfie/GitHub/simSPIKE/sdformat/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o"
	cd /home/mehatfie/GitHub/simSPIKE/sdformat/build/test/integration && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o -c /home/mehatfie/GitHub/simSPIKE/sdformat/test/integration/plugin_attribute.cc

test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.i"
	cd /home/mehatfie/GitHub/simSPIKE/sdformat/build/test/integration && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mehatfie/GitHub/simSPIKE/sdformat/test/integration/plugin_attribute.cc > CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.i

test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.s"
	cd /home/mehatfie/GitHub/simSPIKE/sdformat/build/test/integration && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mehatfie/GitHub/simSPIKE/sdformat/test/integration/plugin_attribute.cc -o CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.s

test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o.requires:
.PHONY : test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o.requires

test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o.provides: test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o.requires
	$(MAKE) -f test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/build.make test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o.provides.build
.PHONY : test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o.provides

test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o.provides.build: test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o

# Object files for target INTEGRATION_plugin_attribute
INTEGRATION_plugin_attribute_OBJECTS = \
"CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o"

# External object files for target INTEGRATION_plugin_attribute
INTEGRATION_plugin_attribute_EXTERNAL_OBJECTS =

test/integration/INTEGRATION_plugin_attribute: test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o
test/integration/INTEGRATION_plugin_attribute: test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/build.make
test/integration/INTEGRATION_plugin_attribute: src/libsdformat.so.2.2.2
test/integration/INTEGRATION_plugin_attribute: /usr/lib/x86_64-linux-gnu/libboost_system.so
test/integration/INTEGRATION_plugin_attribute: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
test/integration/INTEGRATION_plugin_attribute: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
test/integration/INTEGRATION_plugin_attribute: /usr/lib/x86_64-linux-gnu/libboost_regex.so
test/integration/INTEGRATION_plugin_attribute: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
test/integration/INTEGRATION_plugin_attribute: test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable INTEGRATION_plugin_attribute"
	cd /home/mehatfie/GitHub/simSPIKE/sdformat/build/test/integration && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/INTEGRATION_plugin_attribute.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/build: test/integration/INTEGRATION_plugin_attribute
.PHONY : test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/build

test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/requires: test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/plugin_attribute.cc.o.requires
.PHONY : test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/requires

test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/clean:
	cd /home/mehatfie/GitHub/simSPIKE/sdformat/build/test/integration && $(CMAKE_COMMAND) -P CMakeFiles/INTEGRATION_plugin_attribute.dir/cmake_clean.cmake
.PHONY : test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/clean

test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/depend:
	cd /home/mehatfie/GitHub/simSPIKE/sdformat/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mehatfie/GitHub/simSPIKE/sdformat /home/mehatfie/GitHub/simSPIKE/sdformat/test/integration /home/mehatfie/GitHub/simSPIKE/sdformat/build /home/mehatfie/GitHub/simSPIKE/sdformat/build/test/integration /home/mehatfie/GitHub/simSPIKE/sdformat/build/test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/integration/CMakeFiles/INTEGRATION_plugin_attribute.dir/depend

