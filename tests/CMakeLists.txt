cmake_minimum_required(VERSION 2.8)
add_executable(tests main.cpp)
target_link_libraries(tests ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}  )
