# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/pacoalgar/Documentos/uco/poo/marketplace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pacoalgar/Documentos/uco/poo/marketplace/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/seller_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/seller_test.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/seller_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/seller_test.dir/flags.make

tests/CMakeFiles/seller_test.dir/seller_test.cc.o: tests/CMakeFiles/seller_test.dir/flags.make
tests/CMakeFiles/seller_test.dir/seller_test.cc.o: ../tests/seller_test.cc
tests/CMakeFiles/seller_test.dir/seller_test.cc.o: tests/CMakeFiles/seller_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pacoalgar/Documentos/uco/poo/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/seller_test.dir/seller_test.cc.o"
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/seller_test.dir/seller_test.cc.o -MF CMakeFiles/seller_test.dir/seller_test.cc.o.d -o CMakeFiles/seller_test.dir/seller_test.cc.o -c /home/pacoalgar/Documentos/uco/poo/marketplace/tests/seller_test.cc

tests/CMakeFiles/seller_test.dir/seller_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/seller_test.dir/seller_test.cc.i"
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pacoalgar/Documentos/uco/poo/marketplace/tests/seller_test.cc > CMakeFiles/seller_test.dir/seller_test.cc.i

tests/CMakeFiles/seller_test.dir/seller_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/seller_test.dir/seller_test.cc.s"
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pacoalgar/Documentos/uco/poo/marketplace/tests/seller_test.cc -o CMakeFiles/seller_test.dir/seller_test.cc.s

# Object files for target seller_test
seller_test_OBJECTS = \
"CMakeFiles/seller_test.dir/seller_test.cc.o"

# External object files for target seller_test
seller_test_EXTERNAL_OBJECTS =

tests/seller_test: tests/CMakeFiles/seller_test.dir/seller_test.cc.o
tests/seller_test: tests/CMakeFiles/seller_test.dir/build.make
tests/seller_test: src/seller/libseller.a
tests/seller_test: src/person/libperson.a
tests/seller_test: lib/libgtest_main.a
tests/seller_test: lib/libgtest.a
tests/seller_test: tests/CMakeFiles/seller_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pacoalgar/Documentos/uco/poo/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable seller_test"
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/seller_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/seller_test.dir/build: tests/seller_test
.PHONY : tests/CMakeFiles/seller_test.dir/build

tests/CMakeFiles/seller_test.dir/clean:
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/seller_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/seller_test.dir/clean

tests/CMakeFiles/seller_test.dir/depend:
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pacoalgar/Documentos/uco/poo/marketplace /home/pacoalgar/Documentos/uco/poo/marketplace/tests /home/pacoalgar/Documentos/uco/poo/marketplace/build /home/pacoalgar/Documentos/uco/poo/marketplace/build/tests /home/pacoalgar/Documentos/uco/poo/marketplace/build/tests/CMakeFiles/seller_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/seller_test.dir/depend

