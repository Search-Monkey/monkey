cmake_minimum_required(VERSION 3.5)
project (Monkey)

#version number
set (Monkey_VERSION_MAJOR 1)
set (Monkey_VERSION_MINOR 0)

set (Boost_USE_STATIC_LIBS YES )
find_package(Boost 1.58 REQUIRED
  COMPONENTS  
  unit_test_framework
)
message( STATUS "Boost Test Framework: ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} ")


#include the subdirectory containing our libs
add_subdirectory (src)
add_subdirectory (tests)
