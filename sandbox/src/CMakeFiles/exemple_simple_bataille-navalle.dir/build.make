# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/user/Documents/programmation/sandbox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Documents/programmation/sandbox

# Include any dependencies generated for this target.
include src/CMakeFiles/exemple_simple_bataille-navalle.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/exemple_simple_bataille-navalle.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/exemple_simple_bataille-navalle.dir/flags.make

src/CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.o: src/CMakeFiles/exemple_simple_bataille-navalle.dir/flags.make
src/CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.o: src/exemple_simple_bataille-navalle.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/programmation/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.o"
	cd /home/user/Documents/programmation/sandbox/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.o -c /home/user/Documents/programmation/sandbox/src/exemple_simple_bataille-navalle.c

src/CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.i"
	cd /home/user/Documents/programmation/sandbox/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/Documents/programmation/sandbox/src/exemple_simple_bataille-navalle.c > CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.i

src/CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.s"
	cd /home/user/Documents/programmation/sandbox/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/Documents/programmation/sandbox/src/exemple_simple_bataille-navalle.c -o CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.s

# Object files for target exemple_simple_bataille-navalle
exemple_simple_bataille__navalle_OBJECTS = \
"CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.o"

# External object files for target exemple_simple_bataille-navalle
exemple_simple_bataille__navalle_EXTERNAL_OBJECTS =

build/exemple_simple_bataille-navalle: src/CMakeFiles/exemple_simple_bataille-navalle.dir/exemple_simple_bataille-navalle.c.o
build/exemple_simple_bataille-navalle: src/CMakeFiles/exemple_simple_bataille-navalle.dir/build.make
build/exemple_simple_bataille-navalle: src/CMakeFiles/exemple_simple_bataille-navalle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Documents/programmation/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../build/exemple_simple_bataille-navalle"
	cd /home/user/Documents/programmation/sandbox/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exemple_simple_bataille-navalle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/exemple_simple_bataille-navalle.dir/build: build/exemple_simple_bataille-navalle

.PHONY : src/CMakeFiles/exemple_simple_bataille-navalle.dir/build

src/CMakeFiles/exemple_simple_bataille-navalle.dir/clean:
	cd /home/user/Documents/programmation/sandbox/src && $(CMAKE_COMMAND) -P CMakeFiles/exemple_simple_bataille-navalle.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/exemple_simple_bataille-navalle.dir/clean

src/CMakeFiles/exemple_simple_bataille-navalle.dir/depend:
	cd /home/user/Documents/programmation/sandbox && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/programmation/sandbox /home/user/Documents/programmation/sandbox/src /home/user/Documents/programmation/sandbox /home/user/Documents/programmation/sandbox/src /home/user/Documents/programmation/sandbox/src/CMakeFiles/exemple_simple_bataille-navalle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/exemple_simple_bataille-navalle.dir/depend

