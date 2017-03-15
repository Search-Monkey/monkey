include_directories( "../src/common" )
add_executable(tests main.cpp mul_test.cpp )
target_link_libraries(tests ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} mul)
