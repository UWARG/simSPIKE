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
include plugins/CMakeFiles/CameraPlugin.dir/depend.make

# Include the progress variables for this target.
include plugins/CMakeFiles/CameraPlugin.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/CMakeFiles/CameraPlugin.dir/flags.make

plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o: plugins/CMakeFiles/CameraPlugin.dir/flags.make
plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o: ../plugins/CameraPlugin.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mehatfie/GitHub/simSPIKE/gazebo/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o -c /home/mehatfie/GitHub/simSPIKE/gazebo/plugins/CameraPlugin.cc

plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.i"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mehatfie/GitHub/simSPIKE/gazebo/plugins/CameraPlugin.cc > CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.i

plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.s"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mehatfie/GitHub/simSPIKE/gazebo/plugins/CameraPlugin.cc -o CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.s

plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o.requires:
.PHONY : plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o.requires

plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o.provides: plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o.requires
	$(MAKE) -f plugins/CMakeFiles/CameraPlugin.dir/build.make plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o.provides.build
.PHONY : plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o.provides

plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o.provides.build: plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o

# Object files for target CameraPlugin
CameraPlugin_OBJECTS = \
"CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o"

# External object files for target CameraPlugin
CameraPlugin_EXTERNAL_OBJECTS =

plugins/libCameraPlugin.so: plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o
plugins/libCameraPlugin.so: plugins/CMakeFiles/CameraPlugin.dir/build.make
plugins/libCameraPlugin.so: gazebo/libgazebo.so.4.0.1
plugins/libCameraPlugin.so: gazebo/sensors/libgazebo_sensors.so.4.0.1
plugins/libCameraPlugin.so: gazebo/physics/libgazebo_physics.so.4.0.1
plugins/libCameraPlugin.so: gazebo/util/libgazebo_util.so.4.0.1
plugins/libCameraPlugin.so: gazebo/physics/ode/libgazebo_physics_ode.so.4.0.1
plugins/libCameraPlugin.so: deps/opende/libgazebo_ode.so.4.0.1
plugins/libCameraPlugin.so: deps/opende/GIMPACT/libgazebo_gimpact.so.4.0.1
plugins/libCameraPlugin.so: deps/opende/ou/libgazebo_opende_ou.so.4.0.1
plugins/libCameraPlugin.so: deps/libccd/libgazebo_ccd.so.4.0.1
plugins/libCameraPlugin.so: deps/opende/OPCODE/libgazebo_opcode.so.4.0.1
plugins/libCameraPlugin.so: gazebo/physics/simbody/libgazebo_physics_simbody.so.4.0.1
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libSimTKsimbody.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libSimTKmath.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libSimTKcommon.so
plugins/libCameraPlugin.so: /usr/lib/libblas.so
plugins/libCameraPlugin.so: /usr/lib/liblapack.so
plugins/libCameraPlugin.so: /usr/lib/libblas.so
plugins/libCameraPlugin.so: /usr/lib/liblapack.so
plugins/libCameraPlugin.so: gazebo/rendering/libgazebo_rendering.so.4.0.1
plugins/libCameraPlugin.so: gazebo/transport/libgazebo_transport.so.4.0.1
plugins/libCameraPlugin.so: gazebo/rendering/skyx/libgazebo_skyx.so.4.0.1
plugins/libCameraPlugin.so: gazebo/rendering/selection_buffer/libgazebo_selection_buffer.so.4.0.1
plugins/libCameraPlugin.so: gazebo/rendering/deferred_shading/libgazebo_rendering_deferred.so.4.0.1
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libGLU.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libGL.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libSM.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libICE.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libX11.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libXext.so
plugins/libCameraPlugin.so: gazebo/msgs/libgazebo_msgs.so.4.0.1
plugins/libCameraPlugin.so: gazebo/common/libgazebo_common.so.4.0.1
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libdl.so
plugins/libCameraPlugin.so: /usr/lib/libfreeimage.so
plugins/libCameraPlugin.so: /usr/lib/libtar.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libsdformat.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libopenal.so
plugins/libCameraPlugin.so: /usr/lib/libgdal.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
plugins/libCameraPlugin.so: gazebo/math/libgazebo_math.so.4.0.1
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
plugins/libCameraPlugin.so: /usr/lib/x86_64-linux-gnu/libpthread.so
plugins/libCameraPlugin.so: plugins/CMakeFiles/CameraPlugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libCameraPlugin.so"
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CameraPlugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/CMakeFiles/CameraPlugin.dir/build: plugins/libCameraPlugin.so
.PHONY : plugins/CMakeFiles/CameraPlugin.dir/build

plugins/CMakeFiles/CameraPlugin.dir/requires: plugins/CMakeFiles/CameraPlugin.dir/CameraPlugin.cc.o.requires
.PHONY : plugins/CMakeFiles/CameraPlugin.dir/requires

plugins/CMakeFiles/CameraPlugin.dir/clean:
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins && $(CMAKE_COMMAND) -P CMakeFiles/CameraPlugin.dir/cmake_clean.cmake
.PHONY : plugins/CMakeFiles/CameraPlugin.dir/clean

plugins/CMakeFiles/CameraPlugin.dir/depend:
	cd /home/mehatfie/GitHub/simSPIKE/gazebo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mehatfie/GitHub/simSPIKE/gazebo /home/mehatfie/GitHub/simSPIKE/gazebo/plugins /home/mehatfie/GitHub/simSPIKE/gazebo/build /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins /home/mehatfie/GitHub/simSPIKE/gazebo/build/plugins/CMakeFiles/CameraPlugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/CMakeFiles/CameraPlugin.dir/depend

