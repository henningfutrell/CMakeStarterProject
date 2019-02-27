include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
set(TEST UnitTests)

set(TESTS
        starterTests.cpp
        )

add_executable(${TEST} ${TESTS})

target_link_libraries(${TEST} gtest_main)
target_link_libraries(${TEST} ${PROJECT_LIBRARY})