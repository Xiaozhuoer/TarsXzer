# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /usr/local/tars/xzer/HelloServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /usr/local/tars/xzer/HelloServer/build

# Utility rule file for HelloServer-k8s-upload.

# Include any custom commands dependencies for this target.
include src/CMakeFiles/HelloServer-k8s-upload.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/HelloServer-k8s-upload.dir/progress.make

src/CMakeFiles/HelloServer-k8s-upload:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/usr/local/tars/xzer/HelloServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "call /usr/local/tars/xzer/HelloServer/build/run-k8s-upload-HelloServer.cmake"
	cmake -P /usr/local/tars/xzer/HelloServer/build/run-k8s-upload-HelloServer.cmake

HelloServer-k8s-upload: src/CMakeFiles/HelloServer-k8s-upload
HelloServer-k8s-upload: src/CMakeFiles/HelloServer-k8s-upload.dir/build.make
.PHONY : HelloServer-k8s-upload

# Rule to build all files generated by this target.
src/CMakeFiles/HelloServer-k8s-upload.dir/build: HelloServer-k8s-upload
.PHONY : src/CMakeFiles/HelloServer-k8s-upload.dir/build

src/CMakeFiles/HelloServer-k8s-upload.dir/clean:
	cd /usr/local/tars/xzer/HelloServer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/HelloServer-k8s-upload.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/HelloServer-k8s-upload.dir/clean

src/CMakeFiles/HelloServer-k8s-upload.dir/depend:
	cd /usr/local/tars/xzer/HelloServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /usr/local/tars/xzer/HelloServer /usr/local/tars/xzer/HelloServer/src /usr/local/tars/xzer/HelloServer/build /usr/local/tars/xzer/HelloServer/build/src /usr/local/tars/xzer/HelloServer/build/src/CMakeFiles/HelloServer-k8s-upload.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/HelloServer-k8s-upload.dir/depend

