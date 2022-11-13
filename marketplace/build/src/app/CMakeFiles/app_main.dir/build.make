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
include src/app/CMakeFiles/app_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/app/CMakeFiles/app_main.dir/compiler_depend.make

# Include the progress variables for this target.
include src/app/CMakeFiles/app_main.dir/progress.make

# Include the compile flags for this target's objects.
include src/app/CMakeFiles/app_main.dir/flags.make

src/app/CMakeFiles/app_main.dir/app_main.cc.o: src/app/CMakeFiles/app_main.dir/flags.make
src/app/CMakeFiles/app_main.dir/app_main.cc.o: ../src/app/app_main.cc
src/app/CMakeFiles/app_main.dir/app_main.cc.o: src/app/CMakeFiles/app_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pacoalgar/Documentos/uco/poo/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/app/CMakeFiles/app_main.dir/app_main.cc.o"
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build/src/app && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/app/CMakeFiles/app_main.dir/app_main.cc.o -MF CMakeFiles/app_main.dir/app_main.cc.o.d -o CMakeFiles/app_main.dir/app_main.cc.o -c /home/pacoalgar/Documentos/uco/poo/marketplace/src/app/app_main.cc

src/app/CMakeFiles/app_main.dir/app_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app_main.dir/app_main.cc.i"
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build/src/app && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pacoalgar/Documentos/uco/poo/marketplace/src/app/app_main.cc > CMakeFiles/app_main.dir/app_main.cc.i

src/app/CMakeFiles/app_main.dir/app_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app_main.dir/app_main.cc.s"
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build/src/app && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pacoalgar/Documentos/uco/poo/marketplace/src/app/app_main.cc -o CMakeFiles/app_main.dir/app_main.cc.s

# Object files for target app_main
app_main_OBJECTS = \
"CMakeFiles/app_main.dir/app_main.cc.o"

# External object files for target app_main
app_main_EXTERNAL_OBJECTS =

src/app/app_main: src/app/CMakeFiles/app_main.dir/app_main.cc.o
src/app/app_main: src/app/CMakeFiles/app_main.dir/build.make
src/app/app_main: src/app/libapp.a
src/app/app_main: src/market/libmarket.a
src/app/app_main: src/person/libperson.a
src/app/app_main: src/client/libclient.a
src/app/app_main: src/seller/libseller.a
src/app/app_main: src/product/libproduct.a
src/app/app_main: src/basket/libbasket.a
src/app/app_main: src/app/CMakeFiles/app_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pacoalgar/Documentos/uco/poo/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable app_main"
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build/src/app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/app_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/app/CMakeFiles/app_main.dir/build: src/app/app_main
.PHONY : src/app/CMakeFiles/app_main.dir/build

src/app/CMakeFiles/app_main.dir/clean:
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build/src/app && $(CMAKE_COMMAND) -P CMakeFiles/app_main.dir/cmake_clean.cmake
.PHONY : src/app/CMakeFiles/app_main.dir/clean

src/app/CMakeFiles/app_main.dir/depend:
	cd /home/pacoalgar/Documentos/uco/poo/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pacoalgar/Documentos/uco/poo/marketplace /home/pacoalgar/Documentos/uco/poo/marketplace/src/app /home/pacoalgar/Documentos/uco/poo/marketplace/build /home/pacoalgar/Documentos/uco/poo/marketplace/build/src/app /home/pacoalgar/Documentos/uco/poo/marketplace/build/src/app/CMakeFiles/app_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/app/CMakeFiles/app_main.dir/depend

