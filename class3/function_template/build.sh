#!/bin/bash

# print out each command being executed 
set -x
set -u

PROJECT=test
EXECUTABLE=$PROJECT.x

rm $EXECUTABLE 

FLAGS="-std=c++11" 

g++ $PROJECT.cpp $FLAGS -o $EXECUTABLE 
