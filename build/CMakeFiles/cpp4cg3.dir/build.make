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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/matti/projects/cpp4cg3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/matti/projects/cpp4cg3/build

# Include any dependencies generated for this target.
include CMakeFiles/cpp4cg3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp4cg3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp4cg3.dir/flags.make

CMakeFiles/cpp4cg3.dir/main32.cpp.o: CMakeFiles/cpp4cg3.dir/flags.make
CMakeFiles/cpp4cg3.dir/main32.cpp.o: ../main32.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/matti/projects/cpp4cg3/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/cpp4cg3.dir/main32.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cpp4cg3.dir/main32.cpp.o -c /home/matti/projects/cpp4cg3/main32.cpp

CMakeFiles/cpp4cg3.dir/main32.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp4cg3.dir/main32.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/matti/projects/cpp4cg3/main32.cpp > CMakeFiles/cpp4cg3.dir/main32.cpp.i

CMakeFiles/cpp4cg3.dir/main32.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp4cg3.dir/main32.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/matti/projects/cpp4cg3/main32.cpp -o CMakeFiles/cpp4cg3.dir/main32.cpp.s

CMakeFiles/cpp4cg3.dir/main32.cpp.o.requires:
.PHONY : CMakeFiles/cpp4cg3.dir/main32.cpp.o.requires

CMakeFiles/cpp4cg3.dir/main32.cpp.o.provides: CMakeFiles/cpp4cg3.dir/main32.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpp4cg3.dir/build.make CMakeFiles/cpp4cg3.dir/main32.cpp.o.provides.build
.PHONY : CMakeFiles/cpp4cg3.dir/main32.cpp.o.provides

CMakeFiles/cpp4cg3.dir/main32.cpp.o.provides.build: CMakeFiles/cpp4cg3.dir/main32.cpp.o

CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o: CMakeFiles/cpp4cg3.dir/flags.make
CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o: ../controller/glut_engine.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/matti/projects/cpp4cg3/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o -c /home/matti/projects/cpp4cg3/controller/glut_engine.cpp

CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/matti/projects/cpp4cg3/controller/glut_engine.cpp > CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.i

CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/matti/projects/cpp4cg3/controller/glut_engine.cpp -o CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.s

CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o.requires:
.PHONY : CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o.requires

CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o.provides: CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpp4cg3.dir/build.make CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o.provides.build
.PHONY : CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o.provides

CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o.provides.build: CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o

CMakeFiles/cpp4cg3.dir/window.cpp.o: CMakeFiles/cpp4cg3.dir/flags.make
CMakeFiles/cpp4cg3.dir/window.cpp.o: ../window.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/matti/projects/cpp4cg3/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/cpp4cg3.dir/window.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cpp4cg3.dir/window.cpp.o -c /home/matti/projects/cpp4cg3/window.cpp

CMakeFiles/cpp4cg3.dir/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp4cg3.dir/window.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/matti/projects/cpp4cg3/window.cpp > CMakeFiles/cpp4cg3.dir/window.cpp.i

CMakeFiles/cpp4cg3.dir/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp4cg3.dir/window.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/matti/projects/cpp4cg3/window.cpp -o CMakeFiles/cpp4cg3.dir/window.cpp.s

CMakeFiles/cpp4cg3.dir/window.cpp.o.requires:
.PHONY : CMakeFiles/cpp4cg3.dir/window.cpp.o.requires

CMakeFiles/cpp4cg3.dir/window.cpp.o.provides: CMakeFiles/cpp4cg3.dir/window.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpp4cg3.dir/build.make CMakeFiles/cpp4cg3.dir/window.cpp.o.provides.build
.PHONY : CMakeFiles/cpp4cg3.dir/window.cpp.o.provides

CMakeFiles/cpp4cg3.dir/window.cpp.o.provides.build: CMakeFiles/cpp4cg3.dir/window.cpp.o

# Object files for target cpp4cg3
cpp4cg3_OBJECTS = \
"CMakeFiles/cpp4cg3.dir/main32.cpp.o" \
"CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o" \
"CMakeFiles/cpp4cg3.dir/window.cpp.o"

# External object files for target cpp4cg3
cpp4cg3_EXTERNAL_OBJECTS =

cpp4cg3: CMakeFiles/cpp4cg3.dir/main32.cpp.o
cpp4cg3: CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o
cpp4cg3: CMakeFiles/cpp4cg3.dir/window.cpp.o
cpp4cg3: CMakeFiles/cpp4cg3.dir/build.make
cpp4cg3: /usr/lib64/libGLU.so
cpp4cg3: /usr/lib64/libGL.so
cpp4cg3: /usr/lib64/libSM.so
cpp4cg3: /usr/lib64/libICE.so
cpp4cg3: /usr/lib64/libX11.so
cpp4cg3: /usr/lib64/libXext.so
cpp4cg3: /usr/lib64/libglut.so
cpp4cg3: /usr/lib64/libXmu.so
cpp4cg3: /usr/lib64/libXi.so
cpp4cg3: CMakeFiles/cpp4cg3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable cpp4cg3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp4cg3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp4cg3.dir/build: cpp4cg3
.PHONY : CMakeFiles/cpp4cg3.dir/build

CMakeFiles/cpp4cg3.dir/requires: CMakeFiles/cpp4cg3.dir/main32.cpp.o.requires
CMakeFiles/cpp4cg3.dir/requires: CMakeFiles/cpp4cg3.dir/controller/glut_engine.cpp.o.requires
CMakeFiles/cpp4cg3.dir/requires: CMakeFiles/cpp4cg3.dir/window.cpp.o.requires
.PHONY : CMakeFiles/cpp4cg3.dir/requires

CMakeFiles/cpp4cg3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp4cg3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp4cg3.dir/clean

CMakeFiles/cpp4cg3.dir/depend:
	cd /home/matti/projects/cpp4cg3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/matti/projects/cpp4cg3 /home/matti/projects/cpp4cg3 /home/matti/projects/cpp4cg3/build /home/matti/projects/cpp4cg3/build /home/matti/projects/cpp4cg3/build/CMakeFiles/cpp4cg3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp4cg3.dir/depend

