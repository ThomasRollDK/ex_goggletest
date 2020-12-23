include_directories( . )
set(UTEST_TARGET domain)
add_subdirectory (utest)

set(BINARY ${UTEST_TARGET})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true
 test1.h test1.c
)
 
set(SOURCES ${SOURCES})
add_library(${BINARY}_lib STATIC ${SOURCES})

target_link_libraries(${BINARY}_lib)
