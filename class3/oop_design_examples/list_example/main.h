#pragma once

#include <cassert>
#include <string>

using namespace std;

int popFront(int *array, int arraySize, int *listSize, int *frontIdx, int *endIdx);

void pushBack(int *array, int arraySize, int *listSize, int *frontIdx, int *endIdx, int newValue);

void verifyEq(const string &name, int x, int y);

void test(int arraySize);
