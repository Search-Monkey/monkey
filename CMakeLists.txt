cmake_minimum_required (VERSION 2.8)
project (Monkey)

#version number
set (Monkey_VERSION_MAJOR 1)
set (Monkey_VERSION_MINOR 0)

#include the subdirectory containing our libs
add_subdirectory (src)
add_subdirectory (tests)
find_package( boost 1.36.0)
  if(Boost_FOUNDif(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
      add_executable(foo foo.cc)
  endif()
target_link_libraries(foo)

#install (TARGETS Monkey DESTINATION bin)
