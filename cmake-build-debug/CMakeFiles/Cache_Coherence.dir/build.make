# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Cache_Coherence.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cache_Coherence.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cache_Coherence.dir/flags.make

CMakeFiles/Cache_Coherence.dir/main.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cache_Coherence.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/main.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/main.cpp"

CMakeFiles/Cache_Coherence.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/main.cpp" > CMakeFiles/Cache_Coherence.dir/main.cpp.i

CMakeFiles/Cache_Coherence.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/main.cpp" -o CMakeFiles/Cache_Coherence.dir/main.cpp.s

CMakeFiles/Cache_Coherence.dir/memory.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/memory.cpp.o: ../memory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Cache_Coherence.dir/memory.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/memory.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/memory.cpp"

CMakeFiles/Cache_Coherence.dir/memory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/memory.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/memory.cpp" > CMakeFiles/Cache_Coherence.dir/memory.cpp.i

CMakeFiles/Cache_Coherence.dir/memory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/memory.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/memory.cpp" -o CMakeFiles/Cache_Coherence.dir/memory.cpp.s

CMakeFiles/Cache_Coherence.dir/clock.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/clock.cpp.o: ../clock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Cache_Coherence.dir/clock.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/clock.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/clock.cpp"

CMakeFiles/Cache_Coherence.dir/clock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/clock.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/clock.cpp" > CMakeFiles/Cache_Coherence.dir/clock.cpp.i

CMakeFiles/Cache_Coherence.dir/clock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/clock.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/clock.cpp" -o CMakeFiles/Cache_Coherence.dir/clock.cpp.s

CMakeFiles/Cache_Coherence.dir/cache.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/cache.cpp.o: ../cache.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Cache_Coherence.dir/cache.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/cache.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cache.cpp"

CMakeFiles/Cache_Coherence.dir/cache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/cache.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cache.cpp" > CMakeFiles/Cache_Coherence.dir/cache.cpp.i

CMakeFiles/Cache_Coherence.dir/cache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/cache.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cache.cpp" -o CMakeFiles/Cache_Coherence.dir/cache.cpp.s

CMakeFiles/Cache_Coherence.dir/core.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/core.cpp.o: ../core.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Cache_Coherence.dir/core.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/core.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/core.cpp"

CMakeFiles/Cache_Coherence.dir/core.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/core.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/core.cpp" > CMakeFiles/Cache_Coherence.dir/core.cpp.i

CMakeFiles/Cache_Coherence.dir/core.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/core.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/core.cpp" -o CMakeFiles/Cache_Coherence.dir/core.cpp.s

CMakeFiles/Cache_Coherence.dir/queue_control.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/queue_control.cpp.o: ../queue_control.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Cache_Coherence.dir/queue_control.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/queue_control.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/queue_control.cpp"

CMakeFiles/Cache_Coherence.dir/queue_control.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/queue_control.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/queue_control.cpp" > CMakeFiles/Cache_Coherence.dir/queue_control.cpp.i

CMakeFiles/Cache_Coherence.dir/queue_control.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/queue_control.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/queue_control.cpp" -o CMakeFiles/Cache_Coherence.dir/queue_control.cpp.s

CMakeFiles/Cache_Coherence.dir/program.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/program.cpp.o: ../program.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Cache_Coherence.dir/program.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/program.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/program.cpp"

CMakeFiles/Cache_Coherence.dir/program.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/program.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/program.cpp" > CMakeFiles/Cache_Coherence.dir/program.cpp.i

CMakeFiles/Cache_Coherence.dir/program.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/program.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/program.cpp" -o CMakeFiles/Cache_Coherence.dir/program.cpp.s

CMakeFiles/Cache_Coherence.dir/cache_control.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/cache_control.cpp.o: ../cache_control.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Cache_Coherence.dir/cache_control.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/cache_control.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cache_control.cpp"

CMakeFiles/Cache_Coherence.dir/cache_control.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/cache_control.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cache_control.cpp" > CMakeFiles/Cache_Coherence.dir/cache_control.cpp.i

CMakeFiles/Cache_Coherence.dir/cache_control.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/cache_control.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cache_control.cpp" -o CMakeFiles/Cache_Coherence.dir/cache_control.cpp.s

CMakeFiles/Cache_Coherence.dir/bus.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/bus.cpp.o: ../bus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Cache_Coherence.dir/bus.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/bus.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/bus.cpp"

CMakeFiles/Cache_Coherence.dir/bus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/bus.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/bus.cpp" > CMakeFiles/Cache_Coherence.dir/bus.cpp.i

CMakeFiles/Cache_Coherence.dir/bus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/bus.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/bus.cpp" -o CMakeFiles/Cache_Coherence.dir/bus.cpp.s

CMakeFiles/Cache_Coherence.dir/status_control.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/status_control.cpp.o: ../status_control.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Cache_Coherence.dir/status_control.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/status_control.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/status_control.cpp"

CMakeFiles/Cache_Coherence.dir/status_control.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/status_control.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/status_control.cpp" > CMakeFiles/Cache_Coherence.dir/status_control.cpp.i

CMakeFiles/Cache_Coherence.dir/status_control.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/status_control.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/status_control.cpp" -o CMakeFiles/Cache_Coherence.dir/status_control.cpp.s

CMakeFiles/Cache_Coherence.dir/delay_control.cpp.o: CMakeFiles/Cache_Coherence.dir/flags.make
CMakeFiles/Cache_Coherence.dir/delay_control.cpp.o: ../delay_control.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Cache_Coherence.dir/delay_control.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cache_Coherence.dir/delay_control.cpp.o -c "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/delay_control.cpp"

CMakeFiles/Cache_Coherence.dir/delay_control.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cache_Coherence.dir/delay_control.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/delay_control.cpp" > CMakeFiles/Cache_Coherence.dir/delay_control.cpp.i

CMakeFiles/Cache_Coherence.dir/delay_control.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cache_Coherence.dir/delay_control.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/delay_control.cpp" -o CMakeFiles/Cache_Coherence.dir/delay_control.cpp.s

# Object files for target Cache_Coherence
Cache_Coherence_OBJECTS = \
"CMakeFiles/Cache_Coherence.dir/main.cpp.o" \
"CMakeFiles/Cache_Coherence.dir/memory.cpp.o" \
"CMakeFiles/Cache_Coherence.dir/clock.cpp.o" \
"CMakeFiles/Cache_Coherence.dir/cache.cpp.o" \
"CMakeFiles/Cache_Coherence.dir/core.cpp.o" \
"CMakeFiles/Cache_Coherence.dir/queue_control.cpp.o" \
"CMakeFiles/Cache_Coherence.dir/program.cpp.o" \
"CMakeFiles/Cache_Coherence.dir/cache_control.cpp.o" \
"CMakeFiles/Cache_Coherence.dir/bus.cpp.o" \
"CMakeFiles/Cache_Coherence.dir/status_control.cpp.o" \
"CMakeFiles/Cache_Coherence.dir/delay_control.cpp.o"

# External object files for target Cache_Coherence
Cache_Coherence_EXTERNAL_OBJECTS =

Cache_Coherence: CMakeFiles/Cache_Coherence.dir/main.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/memory.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/clock.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/cache.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/core.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/queue_control.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/program.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/cache_control.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/bus.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/status_control.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/delay_control.cpp.o
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/build.make
Cache_Coherence: CMakeFiles/Cache_Coherence.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable Cache_Coherence"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cache_Coherence.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cache_Coherence.dir/build: Cache_Coherence

.PHONY : CMakeFiles/Cache_Coherence.dir/build

CMakeFiles/Cache_Coherence.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cache_Coherence.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cache_Coherence.dir/clean

CMakeFiles/Cache_Coherence.dir/depend:
	cd "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence" "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence" "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug" "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug" "/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/CMakeFiles/Cache_Coherence.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Cache_Coherence.dir/depend
