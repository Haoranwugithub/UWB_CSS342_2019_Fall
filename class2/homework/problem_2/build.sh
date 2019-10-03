#!/bin/bash

# print out each command being executed 
set -x

rm virtual_function_example.x 

g++ virtual_function_example.cpp -Wall -std=c++11 -o virtual_function_example.x
