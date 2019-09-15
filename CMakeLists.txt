cmake_minimum_required(VERSION 3.14)
project(Cache_Coherence)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cache_Coherence main.cpp memory.cpp memory.h clock.cpp clock.h cache.cpp cache.h core.cpp core.h queue_control.cpp queue_control.h program.cpp program.h cache_control.cpp cache_control.h structs.h bus.cpp bus.h status_control.cpp status_control.h delay_control.cpp delay_control.h)
