add_executable(linked_list_tests main.cpp LinkedListTest.cpp)
add_executable(stack_tests main.cpp LinkedStackTest.cpp)
add_executable(queue_tests main.cpp LinkedQueueTest.cpp)

include_directories(${CMAKE_LIBRARY_PATH})
link_directories(${LIBRARY_OUTPUT_PATH})

target_link_libraries(
                    linked_list_tests
                    gtest)

target_link_libraries(
        stack_tests
        gtest)

target_link_libraries(
        queue_tests
        gtest)

add_test(
        NAME
        LinkedListUnitTests
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/linked_list_tests
)

add_test(
        NAME
        StackUnitTests
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/stack_tests
)

add_test(
        NAME
        QueueUnitTests
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/queue_tests
)
