# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Clion_Projects\OOP\Laborator4\Laborator4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab4_Olteanu_Teodora.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab4_Olteanu_Teodora.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab4_Olteanu_Teodora.dir/flags.make

CMakeFiles/Lab4_Olteanu_Teodora.dir/main.cpp.obj: CMakeFiles/Lab4_Olteanu_Teodora.dir/flags.make
CMakeFiles/Lab4_Olteanu_Teodora.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab4_Olteanu_Teodora.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Lab4_Olteanu_Teodora.dir\main.cpp.obj -c E:\Clion_Projects\OOP\Laborator4\Laborator4\main.cpp

CMakeFiles/Lab4_Olteanu_Teodora.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab4_Olteanu_Teodora.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Clion_Projects\OOP\Laborator4\Laborator4\main.cpp > CMakeFiles\Lab4_Olteanu_Teodora.dir\main.cpp.i

CMakeFiles/Lab4_Olteanu_Teodora.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab4_Olteanu_Teodora.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Clion_Projects\OOP\Laborator4\Laborator4\main.cpp -o CMakeFiles\Lab4_Olteanu_Teodora.dir\main.cpp.s

# Object files for target Lab4_Olteanu_Teodora
Lab4_Olteanu_Teodora_OBJECTS = \
"CMakeFiles/Lab4_Olteanu_Teodora.dir/main.cpp.obj"

# External object files for target Lab4_Olteanu_Teodora
Lab4_Olteanu_Teodora_EXTERNAL_OBJECTS =

Lab4_Olteanu_Teodora.exe: CMakeFiles/Lab4_Olteanu_Teodora.dir/main.cpp.obj
Lab4_Olteanu_Teodora.exe: CMakeFiles/Lab4_Olteanu_Teodora.dir/build.make
Lab4_Olteanu_Teodora.exe: CMakeFiles/Lab4_Olteanu_Teodora.dir/linklibs.rsp
Lab4_Olteanu_Teodora.exe: CMakeFiles/Lab4_Olteanu_Teodora.dir/objects1.rsp
Lab4_Olteanu_Teodora.exe: CMakeFiles/Lab4_Olteanu_Teodora.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab4_Olteanu_Teodora.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lab4_Olteanu_Teodora.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab4_Olteanu_Teodora.dir/build: Lab4_Olteanu_Teodora.exe

.PHONY : CMakeFiles/Lab4_Olteanu_Teodora.dir/build

CMakeFiles/Lab4_Olteanu_Teodora.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab4_Olteanu_Teodora.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lab4_Olteanu_Teodora.dir/clean

CMakeFiles/Lab4_Olteanu_Teodora.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Clion_Projects\OOP\Laborator4\Laborator4 E:\Clion_Projects\OOP\Laborator4\Laborator4 E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\CMakeFiles\Lab4_Olteanu_Teodora.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab4_Olteanu_Teodora.dir/depend

