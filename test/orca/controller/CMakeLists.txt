include_directories( . )
set(UTEST_TARGET controller)
add_subdirectory (utest)

set(BINARY ${UTEST_TARGET})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true
 gn_version.h
 formula.h formula.c
 ../domain/test1.h
 ../domain/mock/test1_mock.h
 ../domain//mock/test1_mock.cpp
)
 
set(SOURCES ${SOURCES})
add_library(${BINARY}_lib STATIC ${SOURCES})

target_link_libraries(${BINARY}_lib gtest_main gmock_main)
