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
CMAKE_COMMAND = "/Users/geowatson/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.4668.70/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/geowatson/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.4668.70/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/geowatson/bravo/hw1/1.23

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/geowatson/bravo/hw1/1.23/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ts.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ts.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ts.dir/flags.make

CMakeFiles/ts.dir/ts.c.o: CMakeFiles/ts.dir/flags.make
CMakeFiles/ts.dir/ts.c.o: ../ts.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/geowatson/bravo/hw1/1.23/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ts.dir/ts.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ts.dir/ts.c.o   -c /Users/geowatson/bravo/hw1/1.23/ts.c

CMakeFiles/ts.dir/ts.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ts.dir/ts.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/geowatson/bravo/hw1/1.23/ts.c > CMakeFiles/ts.dir/ts.c.i

CMakeFiles/ts.dir/ts.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ts.dir/ts.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/geowatson/bravo/hw1/1.23/ts.c -o CMakeFiles/ts.dir/ts.c.s

CMakeFiles/ts.dir/ts.c.o.requires:

.PHONY : CMakeFiles/ts.dir/ts.c.o.requires

CMakeFiles/ts.dir/ts.c.o.provides: CMakeFiles/ts.dir/ts.c.o.requires
	$(MAKE) -f CMakeFiles/ts.dir/build.make CMakeFiles/ts.dir/ts.c.o.provides.build
.PHONY : CMakeFiles/ts.dir/ts.c.o.provides

CMakeFiles/ts.dir/ts.c.o.provides.build: CMakeFiles/ts.dir/ts.c.o


# Object files for target ts
ts_OBJECTS = \
"CMakeFiles/ts.dir/ts.c.o"

# External object files for target ts
ts_EXTERNAL_OBJECTS =

ts: CMakeFiles/ts.dir/ts.c.o
ts: CMakeFiles/ts.dir/build.make
ts: CMakeFiles/ts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/geowatson/bravo/hw1/1.23/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ts"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ts.dir/build: ts

.PHONY : CMakeFiles/ts.dir/build

CMakeFiles/ts.dir/requires: CMakeFiles/ts.dir/ts.c.o.requires

.PHONY : CMakeFiles/ts.dir/requires

CMakeFiles/ts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ts.dir/clean

CMakeFiles/ts.dir/depend:
	cd /Users/geowatson/bravo/hw1/1.23/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/geowatson/bravo/hw1/1.23 /Users/geowatson/bravo/hw1/1.23 /Users/geowatson/bravo/hw1/1.23/cmake-build-debug /Users/geowatson/bravo/hw1/1.23/cmake-build-debug /Users/geowatson/bravo/hw1/1.23/cmake-build-debug/CMakeFiles/ts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ts.dir/depend

