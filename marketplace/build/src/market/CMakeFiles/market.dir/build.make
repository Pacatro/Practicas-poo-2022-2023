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
CMAKE_SOURCE_DIR = /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build

# Include any dependencies generated for this target.
include src/market/CMakeFiles/market.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/market/CMakeFiles/market.dir/compiler_depend.make

# Include the progress variables for this target.
include src/market/CMakeFiles/market.dir/progress.make

# Include the compile flags for this target's objects.
include src/market/CMakeFiles/market.dir/flags.make

src/market/CMakeFiles/market.dir/market.cc.o: src/market/CMakeFiles/market.dir/flags.make
src/market/CMakeFiles/market.dir/market.cc.o: ../src/market/market.cc
src/market/CMakeFiles/market.dir/market.cc.o: src/market/CMakeFiles/market.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/market/CMakeFiles/market.dir/market.cc.o"
	cd /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build/src/market && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/market/CMakeFiles/market.dir/market.cc.o -MF CMakeFiles/market.dir/market.cc.o.d -o CMakeFiles/market.dir/market.cc.o -c /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/src/market/market.cc

src/market/CMakeFiles/market.dir/market.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/market.dir/market.cc.i"
	cd /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build/src/market && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/src/market/market.cc > CMakeFiles/market.dir/market.cc.i

src/market/CMakeFiles/market.dir/market.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/market.dir/market.cc.s"
	cd /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build/src/market && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/src/market/market.cc -o CMakeFiles/market.dir/market.cc.s

# Object files for target market
market_OBJECTS = \
"CMakeFiles/market.dir/market.cc.o"

# External object files for target market
market_EXTERNAL_OBJECTS =

src/market/libmarket.a: src/market/CMakeFiles/market.dir/market.cc.o
src/market/libmarket.a: src/market/CMakeFiles/market.dir/build.make
src/market/libmarket.a: src/market/CMakeFiles/market.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmarket.a"
	cd /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build/src/market && $(CMAKE_COMMAND) -P CMakeFiles/market.dir/cmake_clean_target.cmake
	cd /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build/src/market && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/market.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/market/CMakeFiles/market.dir/build: src/market/libmarket.a
.PHONY : src/market/CMakeFiles/market.dir/build

src/market/CMakeFiles/market.dir/clean:
	cd /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build/src/market && $(CMAKE_COMMAND) -P CMakeFiles/market.dir/cmake_clean.cmake
.PHONY : src/market/CMakeFiles/market.dir/clean

src/market/CMakeFiles/market.dir/depend:
	cd /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/src/market /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build/src/market /home/pacoalgar/Documentos/uco/Practicas-poo-2022-2023/marketplace/build/src/market/CMakeFiles/market.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/market/CMakeFiles/market.dir/depend

