cmake_minimum_required(VERSION 3.10)
project(card)

set(CMAKE_CXX_STANDARD 11)

add_executable(card_example circular_card.cpp rectangular_card.cpp test.cpp)
