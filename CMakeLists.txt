cmake_minimum_required(VERSION 3.15)
project(build)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_PREFIX_PATH "/usr/include/qt/")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(src)
add_subdirectory(libs)