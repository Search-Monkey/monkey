#indicate the entry point for the executable
add_subdirectory(common)

project(Monkey_src)
add_executable (Monkey main.cpp)
target_link_libraries (Monkey common)
target_link_libraries (Monkey mul)
# Indicate which libraries to include during the link process.
