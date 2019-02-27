include_directories(${gtest_SOURCE_DIR}/include ${gmock_SOURCE_DIR}/include)

set(TEST UnitTests)

set(TESTS
        starterTests.cpp
        )

add_executable(${TEST} ${TESTS})

target_link_libraries(${TEST} gtest_main)
target_link_libraries(${TEST} ${PROJECT_LIBRARY})