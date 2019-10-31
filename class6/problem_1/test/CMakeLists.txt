add_executable(linked_list_tests main.cpp LinkedListTest.cpp)
add_executable(linked_stack_tests main.cpp LinkedStackTest.cpp)
add_executable(array_stack_tests main.cpp)
add_executable(array_queue_tests main.cpp)
add_executable(linked_queue_tests main.cpp LinkedQueueTest.cpp)

include_directories(${CMAKE_LIBRARY_PATH})
link_directories(${LIBRARY_OUTPUT_PATH})

target_link_libraries(
                    linked_list_tests
                    gtest)

target_link_libraries(
        linked_stack_tests
        gtest)

target_link_libraries(
        array_stack_tests
        gtest)

target_link_libraries(
        array_queue_tests
        gtest)

target_link_libraries(
        linked_queue_tests
        gtest)

add_test(
        NAME
        LinkedListUnitTests
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/linked_list_tests
)

add_test(
        NAME
        ArrayStackUnitTests
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/array_stack_tests
)

add_test(
        NAME
        ArrayQueueUnitTests
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/array_queue_tests
)

add_test(
        NAME
        LinkedStackUnitTests
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/linked_stack_tests
)

add_test(
        NAME
        LinkedQueueUnitTests
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/linked_queue_tests
)
