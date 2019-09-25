#include "main.h"
#include "list.h"

void test(int arraySize) {
    list list(arraySize);

    list.push_back(3);
    int val = list.pop_front();
    verifyEq("pop", val, 3);
    verifyEq("listSize", list.getSize(), 0);

    for (int i = 0; i < arraySize; i++) {
        list.push_back(i);
    }
    verifyEq("listSize", list.getSize(), arraySize);

    val = list.pop_front();
    verifyEq("pop", val, 0);
    verifyEq("listSize", list.getSize(), arraySize-1);

    list.push_back(99);
    verifyEq("listSize", list.getSize(), arraySize);

    for (int i = 0; i < arraySize; i++) {
        val = list.pop_front();
    }
    verifyEq("pop", val, 99);
    verifyEq("listSize", list.getSize(), 0);
}

void verifyEq(const string &name, int x, int y) {
    if (x == y) {
        printf("%s: %d == %d, passed\n", name.c_str(), x, y);
    } else {
        printf("%s: %d != %d, failed\n", name.c_str(), x, y);
    }
}







