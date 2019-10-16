cmake_minimum_required(VERSION 3.10)
project(cmake_example)

set(CMAKE_CXX_STANDARD 17)
Set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
Set(CMAKE_LIBRARY_PATH ${CMAKE_SOURCE_DIR}/src)

Set(CMAKE_BINARY_DIR  ${CMAKE_SOURCE_DIR}/bin)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(src)

add_subdirectory(test)
