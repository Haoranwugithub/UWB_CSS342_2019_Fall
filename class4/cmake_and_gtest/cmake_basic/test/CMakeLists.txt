add_executable(unit_test main.cpp unit_tests.cpp)

include_directories(${CMAKE_LIBRARY_PATH})

link_directories(${LIBRARY_OUTPUT_PATH})

target_link_libraries(unit_test rectangle)
