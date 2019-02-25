include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
set(TEST UnitTests)

set(TESTS
        starterTests.cpp
        )

add_executable(${TEST} ${TESTS})

set_target_properties(gtest gtest_main ${TEST_NAME}
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests/bin"
        )

target_link_libraries(${TEST} gtest gtest_main)

target_link_libraries(${TEST} ${PROJECT_LIBRARY})