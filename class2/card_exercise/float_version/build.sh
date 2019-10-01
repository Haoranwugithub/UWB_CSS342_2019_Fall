#!/bin/bash

set -x
set -u

FLAGS=-Wall

g++ $FLAGS -c circular_card.cpp  -o circular_card.o
g++ $FLAGS -c rectangular_card.cpp  -o rectangular_card.o
g++ $FLAGS -c test.cpp  -o test.o
g++ test.o rectangular_card.o circular_card.o -o test.x
