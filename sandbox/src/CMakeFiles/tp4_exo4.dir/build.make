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
include src/CMakeFiles/tp4_exo4.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/tp4_exo4.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/tp4_exo4.dir/flags.make

src/CMakeFiles/tp4_exo4.dir/tp4_exo4.c.o: src/CMakeFiles/tp4_exo4.dir/flags.make
src/CMakeFiles/tp4_exo4.dir/tp4_exo4.c.o: src/tp4_exo4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/programmation/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/tp4_exo4.dir/tp4_exo4.c.o"
	cd /home/user/Documents/programmation/sandbox/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tp4_exo4.dir/tp4_exo4.c.o -c /home/user/Documents/programmation/sandbox/src/tp4_exo4.c

src/CMakeFiles/tp4_exo4.dir/tp4_exo4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tp4_exo4.dir/tp4_exo4.c.i"
	cd /home/user/Documents/programmation/sandbox/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/Documents/programmation/sandbox/src/tp4_exo4.c > CMakeFiles/tp4_exo4.dir/tp4_exo4.c.i

src/CMakeFiles/tp4_exo4.dir/tp4_exo4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tp4_exo4.dir/tp4_exo4.c.s"
	cd /home/user/Documents/programmation/sandbox/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/Documents/programmation/sandbox/src/tp4_exo4.c -o CMakeFiles/tp4_exo4.dir/tp4_exo4.c.s

# Object files for target tp4_exo4
tp4_exo4_OBJECTS = \
"CMakeFiles/tp4_exo4.dir/tp4_exo4.c.o"

# External object files for target tp4_exo4
tp4_exo4_EXTERNAL_OBJECTS =

build/tp4_exo4: src/CMakeFiles/tp4_exo4.dir/tp4_exo4.c.o
build/tp4_exo4: src/CMakeFiles/tp4_exo4.dir/build.make
build/tp4_exo4: src/CMakeFiles/tp4_exo4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Documents/programmation/sandbox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../build/tp4_exo4"
	cd /home/user/Documents/programmation/sandbox/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp4_exo4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/tp4_exo4.dir/build: build/tp4_exo4

.PHONY : src/CMakeFiles/tp4_exo4.dir/build

src/CMakeFiles/tp4_exo4.dir/clean:
	cd /home/user/Documents/programmation/sandbox/src && $(CMAKE_COMMAND) -P CMakeFiles/tp4_exo4.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/tp4_exo4.dir/clean

src/CMakeFiles/tp4_exo4.dir/depend:
	cd /home/user/Documents/programmation/sandbox && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/programmation/sandbox /home/user/Documents/programmation/sandbox/src /home/user/Documents/programmation/sandbox /home/user/Documents/programmation/sandbox/src /home/user/Documents/programmation/sandbox/src/CMakeFiles/tp4_exo4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/tp4_exo4.dir/depend

