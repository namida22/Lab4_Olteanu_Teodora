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
include Test/lib/googlemock/CMakeFiles/gmock_main.dir/depend.make

# Include the progress variables for this target.
include Test/lib/googlemock/CMakeFiles/gmock_main.dir/progress.make

# Include the compile flags for this target's objects.
include Test/lib/googlemock/CMakeFiles/gmock_main.dir/flags.make

Test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj: Test/lib/googlemock/CMakeFiles/gmock_main.dir/flags.make
Test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj: Test/lib/googlemock/CMakeFiles/gmock_main.dir/includes_CXX.rsp
Test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj: ../Test/lib/googlemock/src/gmock_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj"
	cd /d E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\Test\lib\googlemock && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gmock_main.dir\src\gmock_main.cc.obj -c E:\Clion_Projects\OOP\Laborator4\Laborator4\Test\lib\googlemock\src\gmock_main.cc

Test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock_main.cc.i"
	cd /d E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\Test\lib\googlemock && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Clion_Projects\OOP\Laborator4\Laborator4\Test\lib\googlemock\src\gmock_main.cc > CMakeFiles\gmock_main.dir\src\gmock_main.cc.i

Test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock_main.cc.s"
	cd /d E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\Test\lib\googlemock && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Clion_Projects\OOP\Laborator4\Laborator4\Test\lib\googlemock\src\gmock_main.cc -o CMakeFiles\gmock_main.dir\src\gmock_main.cc.s

# Object files for target gmock_main
gmock_main_OBJECTS = \
"CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj"

# External object files for target gmock_main
gmock_main_EXTERNAL_OBJECTS =

lib/libgmock_maind.a: Test/lib/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj
lib/libgmock_maind.a: Test/lib/googlemock/CMakeFiles/gmock_main.dir/build.make
lib/libgmock_maind.a: Test/lib/googlemock/CMakeFiles/gmock_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\..\lib\libgmock_maind.a"
	cd /d E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\Test\lib\googlemock && $(CMAKE_COMMAND) -P CMakeFiles\gmock_main.dir\cmake_clean_target.cmake
	cd /d E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\Test\lib\googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gmock_main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Test/lib/googlemock/CMakeFiles/gmock_main.dir/build: lib/libgmock_maind.a

.PHONY : Test/lib/googlemock/CMakeFiles/gmock_main.dir/build

Test/lib/googlemock/CMakeFiles/gmock_main.dir/clean:
	cd /d E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\Test\lib\googlemock && $(CMAKE_COMMAND) -P CMakeFiles\gmock_main.dir\cmake_clean.cmake
.PHONY : Test/lib/googlemock/CMakeFiles/gmock_main.dir/clean

Test/lib/googlemock/CMakeFiles/gmock_main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Clion_Projects\OOP\Laborator4\Laborator4 E:\Clion_Projects\OOP\Laborator4\Laborator4\Test\lib\googlemock E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\Test\lib\googlemock E:\Clion_Projects\OOP\Laborator4\Laborator4\cmake-build-debug\Test\lib\googlemock\CMakeFiles\gmock_main.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Test/lib/googlemock/CMakeFiles/gmock_main.dir/depend

