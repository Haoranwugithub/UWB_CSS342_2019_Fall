#!/bin/bash

# print out each command being executed 
set -x

rm main.x 

g++ main.cpp -Wall -std=c++11 -o homework1.x
