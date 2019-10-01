#!/bin/bash

# print out each command being executed 
set -x

PROJECT=memory_examples
EXECUTABLE=$PROJECT.x

rm $EXECUTABLE 

FLAGS="-Wunused-private-field -Wall -std=c++11" 

g++ $PROJECT.cpp $FLAG -o $EXECUTABLE 
