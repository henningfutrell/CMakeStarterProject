cmake_minimum_required(VERSION 3.13)
project(CMakeStarterProject)

set(PROJECT_MAIN_EXECUTABLE ${CMAKE_PROJECT_NAME})
set(PROJECT_LIBRARY ${CMAKE_PROJECT_NAME}Lib)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_MAIN_EXECUTABLE} main.cpp)

include_directories(
        src
        lib
)

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(${PROJECT_MAIN_EXECUTABLE} ${PROJECT_LIBRARY})