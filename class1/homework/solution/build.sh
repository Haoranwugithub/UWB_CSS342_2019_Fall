#!/bin/bash

# print out each command being executed 
set -x

rm homework1.x 

g++ test.cpp homework1.cpp -Wall -std=c++11 -o homework1.x
