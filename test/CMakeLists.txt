message ("Water_predator/CMakeList.txt")
cmake_minimum_required (VERSION 3.11)
project (Orca)
set(CMAKE_CXX_STANDARD 14)

#unit test
enable_testing()
include(CTest)
add_subdirectory(gtest)
add_subdirectory(orca)



