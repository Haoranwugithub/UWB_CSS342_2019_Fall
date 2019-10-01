#!/bin/bash

# print out each command being executed 
set -x

PROJECT=point
EXECUTABLE=$PROJECT.x

rm $EXECUTABLE 

FLAGS="-Wall -std=c++11" 

g++ $PROJECT.cpp $FLAG -o $EXECUTABLE 
