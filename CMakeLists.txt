cmake_minimum_required (VERSION 2.8)
project (Monkey)

#version number
set (Monkey_VERSION_MAJOR 1)
set (Monkey_VERSION_MINOR 0)

#include the subdirectory containing our libs
add_subdirectory (src)
add_subdirectory (tests)

#install (TARGETS Monkey DESTINATION bin)
