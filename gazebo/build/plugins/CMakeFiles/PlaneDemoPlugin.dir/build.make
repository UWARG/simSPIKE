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
include plugins/CMakeFiles/PlaneDemoPlugin.dir/depend.make

# Include the progress variables for this target.
include plugins/CMakeFiles/PlaneDemoPlugin.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/CMakeFiles/PlaneDemoPlugin.dir/flags.make

plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o: plugins/CMakeFiles/PlaneDemoPlugin.dir/flags.make
plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o: ../plugins/PlaneDemoPlugin.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mehatfie/GitHub/simSPIKE/gazebo/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o -c /home/mehatfie/GitHub/simSPIKE/gazebo/plugins/PlaneDemoPlugin.cc

plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.i"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mehatfie/GitHub/simSPIKE/gazebo/plugins/PlaneDemoPlugin.cc > CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.i

plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.s"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mehatfie/GitHub/simSPIKE/gazebo/plugins/PlaneDemoPlugin.cc -o CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.s

plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o.requires:
.PHONY : plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o.requires

plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o.provides: plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o.requires
	$(MAKE) -f plugins/CMakeFiles/PlaneDemoPlugin.dir/build.make plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o.provides.build
.PHONY : plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o.provides

plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o.provides.build: plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o

# Object files for target PlaneDemoPlugin
PlaneDemoPlugin_OBJECTS = \
"CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o"

# External object files for target PlaneDemoPlugin
PlaneDemoPlugin_EXTERNAL_OBJECTS =

plugins/libPlaneDemoPlugin.so: plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o
plugins/libPlaneDemoPlugin.so: plugins/CMakeFiles/PlaneDemoPlugin.dir/build.make
plugins/libPlaneDemoPlugin.so: gazebo/libgazebo.so.4.0.1
plugins/libPlaneDemoPlugin.so: gazebo/sensors/libgazebo_sensors.so.4.0.1
plugins/libPlaneDemoPlugin.so: gazebo/physics/libgazebo_physics.so.4.0.1
plugins/libPlaneDemoPlugin.so: gazebo/util/libgazebo_util.so.4.0.1
plugins/libPlaneDemoPlugin.so: gazebo/physics/ode/libgazebo_physics_ode.so.4.0.1
plugins/libPlaneDemoPlugin.so: deps/opende/libgazebo_ode.so.4.0.1
plugins/libPlaneDemoPlugin.so: deps/opende/GIMPACT/libgazebo_gimpact.so.4.0.1
plugins/libPlaneDemoPlugin.so: deps/opende/ou/libgazebo_opende_ou.so.4.0.1
plugins/libPlaneDemoPlugin.so: deps/libccd/libgazebo_ccd.so.4.0.1
plugins/libPlaneDemoPlugin.so: deps/opende/OPCODE/libgazebo_opcode.so.4.0.1
plugins/libPlaneDemoPlugin.so: gazebo/physics/simbody/libgazebo_physics_simbody.so.4.0.1
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libSimTKsimbody.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libSimTKmath.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libSimTKcommon.so
plugins/libPlaneDemoPlugin.so: /usr/lib/libblas.so
plugins/libPlaneDemoPlugin.so: /usr/lib/liblapack.so
plugins/libPlaneDemoPlugin.so: /usr/lib/libblas.so
plugins/libPlaneDemoPlugin.so: /usr/lib/liblapack.so
plugins/libPlaneDemoPlugin.so: gazebo/rendering/libgazebo_rendering.so.4.0.1
plugins/libPlaneDemoPlugin.so: gazebo/transport/libgazebo_transport.so.4.0.1
plugins/libPlaneDemoPlugin.so: gazebo/rendering/skyx/libgazebo_skyx.so.4.0.1
plugins/libPlaneDemoPlugin.so: gazebo/rendering/selection_buffer/libgazebo_selection_buffer.so.4.0.1
plugins/libPlaneDemoPlugin.so: gazebo/rendering/deferred_shading/libgazebo_rendering_deferred.so.4.0.1
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libGLU.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libGL.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libSM.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libICE.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libX11.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libXext.so
plugins/libPlaneDemoPlugin.so: gazebo/msgs/libgazebo_msgs.so.4.0.1
plugins/libPlaneDemoPlugin.so: gazebo/common/libgazebo_common.so.4.0.1
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libdl.so
plugins/libPlaneDemoPlugin.so: /usr/lib/libfreeimage.so
plugins/libPlaneDemoPlugin.so: /usr/lib/libtar.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libsdformat.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libopenal.so
plugins/libPlaneDemoPlugin.so: /usr/lib/libgdal.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
plugins/libPlaneDemoPlugin.so: gazebo/math/libgazebo_math.so.4.0.1
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
plugins/libPlaneDemoPlugin.so: /usr/lib/x86_64-linux-gnu/libpthread.so
plugins/libPlaneDemoPlugin.so: plugins/CMakeFiles/PlaneDemoPlugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libPlaneDemoPlugin.so"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PlaneDemoPlugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/CMakeFiles/PlaneDemoPlugin.dir/build: plugins/libPlaneDemoPlugin.so
.PHONY : plugins/CMakeFiles/PlaneDemoPlugin.dir/build

plugins/CMakeFiles/PlaneDemoPlugin.dir/requires: plugins/CMakeFiles/PlaneDemoPlugin.dir/PlaneDemoPlugin.cc.o.requires
.PHONY : plugins/CMakeFiles/PlaneDemoPlugin.dir/requires

plugins/CMakeFiles/PlaneDemoPlugin.dir/clean:
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins && $(CMAKE_COMMAND) -P CMakeFiles/PlaneDemoPlugin.dir/cmake_clean.cmake
.PHONY : plugins/CMakeFiles/PlaneDemoPlugin.dir/clean

plugins/CMakeFiles/PlaneDemoPlugin.dir/depend:
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mehatfie/GitHub/simSPIKE/gazebo /home/mehatfie/GitHub/simSPIKE/gazebo/plugins /home/mehatfie/GitHub/simSPIKE/gazebo/build /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/CMakeFiles/PlaneDemoPlugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/CMakeFiles/PlaneDemoPlugin.dir/depend
