#!/bin/bash

# print out each command being executed 
set -x

rm review.x 

g++ review.cpp -Wall -std=c++11 -o review.x
