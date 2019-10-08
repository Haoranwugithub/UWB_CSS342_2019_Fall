#include "main.h"

void test(int arraySize) {
    int *array = new int[arraySize];
    int frontIdx = 0, endIdx = 0, listSize = 0;

    pushBack(array, arraySize, &listSize, &frontIdx, &endIdx, 3);
    int val = popFront(array, arraySize, &listSize, &frontIdx, &endIdx);
    verifyEq("pop", val, 3);
    verifyEq("listSize", listSize, 0);

    for (int i = 0; i < arraySize; i++) {
        pushBack(array, arraySize, &listSize, &frontIdx, &endIdx, i);
    }
    verifyEq("listSize", listSize, arraySize);

    val = popFront(array, arraySize, &listSize, &frontIdx, &endIdx);
    verifyEq("pop", val, 0);
    verifyEq("listSize", listSize, arraySize-1);

    pushBack(array, arraySize, &listSize, &frontIdx, &endIdx, 99);
    verifyEq("listSize", listSize, arraySize);

    for (int i = 0; i < arraySize; i++) {
        val = popFront(array, arraySize, &listSize, &frontIdx, &endIdx);
    }
    verifyEq("pop", val, 99);
    verifyEq("listSize", listSize, 0);

    delete[] array;
}
