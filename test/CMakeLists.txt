message ("Water_predator/CMakeList.txt")
cmake_minimum_required (VERSION 3.11)
project (Orca)
set(CMAKE_CXX_STANDARD 14)

#unit test
enable_testing()
include(CTest)
#old setup to googletest

if(${GOOGLETEST_TOOLS})
    add_subdirectory(tools/googletest)
    include_directories(tools/googletest/googlemock/include tools/googletest/googletest/include)
else(${GOOGLETEST_TOOLS})
    add_subdirectory(gtest)
endif(${GOOGLETEST_TOOLS})

add_subdirectory(orca)



