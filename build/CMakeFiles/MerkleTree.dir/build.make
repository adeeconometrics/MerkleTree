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
CMAKE_SOURCE_DIR = /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/build

# Include any dependencies generated for this target.
include CMakeFiles/MerkleTree.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MerkleTree.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MerkleTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MerkleTree.dir/flags.make

CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.o: CMakeFiles/MerkleTree.dir/flags.make
CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.o: ../src/MerkleNode.cpp
CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.o: CMakeFiles/MerkleTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.o -MF CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.o.d -o CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.o -c /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/MerkleNode.cpp

CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/MerkleNode.cpp > CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.i

CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/MerkleNode.cpp -o CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.s

CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.o: CMakeFiles/MerkleTree.dir/flags.make
CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.o: ../src/MerkleTree.cpp
CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.o: CMakeFiles/MerkleTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.o -MF CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.o.d -o CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.o -c /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/MerkleTree.cpp

CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/MerkleTree.cpp > CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.i

CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/MerkleTree.cpp -o CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.s

CMakeFiles/MerkleTree.dir/src/SHA256.cpp.o: CMakeFiles/MerkleTree.dir/flags.make
CMakeFiles/MerkleTree.dir/src/SHA256.cpp.o: ../src/SHA256.cpp
CMakeFiles/MerkleTree.dir/src/SHA256.cpp.o: CMakeFiles/MerkleTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MerkleTree.dir/src/SHA256.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MerkleTree.dir/src/SHA256.cpp.o -MF CMakeFiles/MerkleTree.dir/src/SHA256.cpp.o.d -o CMakeFiles/MerkleTree.dir/src/SHA256.cpp.o -c /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/SHA256.cpp

CMakeFiles/MerkleTree.dir/src/SHA256.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MerkleTree.dir/src/SHA256.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/SHA256.cpp > CMakeFiles/MerkleTree.dir/src/SHA256.cpp.i

CMakeFiles/MerkleTree.dir/src/SHA256.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MerkleTree.dir/src/SHA256.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/SHA256.cpp -o CMakeFiles/MerkleTree.dir/src/SHA256.cpp.s

CMakeFiles/MerkleTree.dir/src/main.cpp.o: CMakeFiles/MerkleTree.dir/flags.make
CMakeFiles/MerkleTree.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/MerkleTree.dir/src/main.cpp.o: CMakeFiles/MerkleTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MerkleTree.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MerkleTree.dir/src/main.cpp.o -MF CMakeFiles/MerkleTree.dir/src/main.cpp.o.d -o CMakeFiles/MerkleTree.dir/src/main.cpp.o -c /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/main.cpp

CMakeFiles/MerkleTree.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MerkleTree.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/main.cpp > CMakeFiles/MerkleTree.dir/src/main.cpp.i

CMakeFiles/MerkleTree.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MerkleTree.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/src/main.cpp -o CMakeFiles/MerkleTree.dir/src/main.cpp.s

# Object files for target MerkleTree
MerkleTree_OBJECTS = \
"CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.o" \
"CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.o" \
"CMakeFiles/MerkleTree.dir/src/SHA256.cpp.o" \
"CMakeFiles/MerkleTree.dir/src/main.cpp.o"

# External object files for target MerkleTree
MerkleTree_EXTERNAL_OBJECTS =

MerkleTree: CMakeFiles/MerkleTree.dir/src/MerkleNode.cpp.o
MerkleTree: CMakeFiles/MerkleTree.dir/src/MerkleTree.cpp.o
MerkleTree: CMakeFiles/MerkleTree.dir/src/SHA256.cpp.o
MerkleTree: CMakeFiles/MerkleTree.dir/src/main.cpp.o
MerkleTree: CMakeFiles/MerkleTree.dir/build.make
MerkleTree: CMakeFiles/MerkleTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable MerkleTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MerkleTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MerkleTree.dir/build: MerkleTree
.PHONY : CMakeFiles/MerkleTree.dir/build

CMakeFiles/MerkleTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MerkleTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MerkleTree.dir/clean

CMakeFiles/MerkleTree.dir/depend:
	cd /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/build /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/build /home/ddamiana/Documents/CodeProjects/Cpp/MerkleTree/build/CMakeFiles/MerkleTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MerkleTree.dir/depend

