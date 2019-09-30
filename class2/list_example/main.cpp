#include "main.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("format: list_example [size of array]\n");
        return 0;
    }
    int arraySize = atoi(argv[1]);
    test(arraySize);
}

int popFront(int *array, int arraySize, int *listSize, int *frontIdx, int *endIdx) {
    if (*listSize == 0) {
        printf("cannot pop from an empty list\n");
        return -1;
    }
    int frontVal = array[*frontIdx];
    *frontIdx = (*frontIdx + 1) % arraySize;
    (*listSize)--;

    return frontVal;
}

void pushBack(int *array, int arraySize, int *listSize, int *frontIdx, int *endIdx, int newValue) {
    if (*listSize == arraySize) {
        printf("cannot add to a full list\n");
        return;
    }

    array[*endIdx] = newValue;
    *endIdx = (*endIdx + 1) % arraySize;
    (*listSize)++;
}

void verifyEq(const string &name, int x, int y) {
    if (x == y) {
        printf("%s: %d == %d, passed\n", name.c_str(), x, y);
    } else {
        printf("%s: %d != %d, failed\n", name.c_str(), x, y);
    }
}

