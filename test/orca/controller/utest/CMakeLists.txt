set(BINARY ${UTEST_TARGET}_tst)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp
../../domain/mock/test1_mock.cpp
../../domain/mock/test1_mock.h
../domain/test1.h
)
set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${TEST_SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})

target_link_libraries(${BINARY} PUBLIC ${UTEST_TARGET}_lib gtest gtest_main gmock_main)
