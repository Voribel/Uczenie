# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Wiktor\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6397.106\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Wiktor\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6397.106\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = H:\Uczenie\Projekty\Kalkulator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\Uczenie\Projekty\Kalkulator\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Kalkulator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Kalkulator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Kalkulator.dir/flags.make

CMakeFiles/Kalkulator.dir/main.cpp.obj: CMakeFiles/Kalkulator.dir/flags.make
CMakeFiles/Kalkulator.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\Uczenie\Projekty\Kalkulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Kalkulator.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Kalkulator.dir\main.cpp.obj -c H:\Uczenie\Projekty\Kalkulator\main.cpp

CMakeFiles/Kalkulator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kalkulator.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\Uczenie\Projekty\Kalkulator\main.cpp > CMakeFiles\Kalkulator.dir\main.cpp.i

CMakeFiles/Kalkulator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kalkulator.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\Uczenie\Projekty\Kalkulator\main.cpp -o CMakeFiles\Kalkulator.dir\main.cpp.s

CMakeFiles/Kalkulator.dir/calculations.cpp.obj: CMakeFiles/Kalkulator.dir/flags.make
CMakeFiles/Kalkulator.dir/calculations.cpp.obj: ../calculations.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\Uczenie\Projekty\Kalkulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Kalkulator.dir/calculations.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Kalkulator.dir\calculations.cpp.obj -c H:\Uczenie\Projekty\Kalkulator\calculations.cpp

CMakeFiles/Kalkulator.dir/calculations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kalkulator.dir/calculations.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\Uczenie\Projekty\Kalkulator\calculations.cpp > CMakeFiles\Kalkulator.dir\calculations.cpp.i

CMakeFiles/Kalkulator.dir/calculations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kalkulator.dir/calculations.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\Uczenie\Projekty\Kalkulator\calculations.cpp -o CMakeFiles\Kalkulator.dir\calculations.cpp.s

# Object files for target Kalkulator
Kalkulator_OBJECTS = \
"CMakeFiles/Kalkulator.dir/main.cpp.obj" \
"CMakeFiles/Kalkulator.dir/calculations.cpp.obj"

# External object files for target Kalkulator
Kalkulator_EXTERNAL_OBJECTS =

Kalkulator.exe: CMakeFiles/Kalkulator.dir/main.cpp.obj
Kalkulator.exe: CMakeFiles/Kalkulator.dir/calculations.cpp.obj
Kalkulator.exe: CMakeFiles/Kalkulator.dir/build.make
Kalkulator.exe: CMakeFiles/Kalkulator.dir/linklibs.rsp
Kalkulator.exe: CMakeFiles/Kalkulator.dir/objects1.rsp
Kalkulator.exe: CMakeFiles/Kalkulator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=H:\Uczenie\Projekty\Kalkulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Kalkulator.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Kalkulator.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Kalkulator.dir/build: Kalkulator.exe

.PHONY : CMakeFiles/Kalkulator.dir/build

CMakeFiles/Kalkulator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Kalkulator.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Kalkulator.dir/clean

CMakeFiles/Kalkulator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\Uczenie\Projekty\Kalkulator H:\Uczenie\Projekty\Kalkulator H:\Uczenie\Projekty\Kalkulator\cmake-build-debug H:\Uczenie\Projekty\Kalkulator\cmake-build-debug H:\Uczenie\Projekty\Kalkulator\cmake-build-debug\CMakeFiles\Kalkulator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Kalkulator.dir/depend

