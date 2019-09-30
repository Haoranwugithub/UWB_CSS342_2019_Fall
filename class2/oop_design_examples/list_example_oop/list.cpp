#include "list.h"

list::list(int capacity) : capacity(capacity), size(0), frontIdx(0), endIdx(0) {
    array = new int[capacity];
}

list::~list() {
    delete [] array;
}

int list::pop_front() {
    if (size == 0) {
        printf("cannot pop from an empty list\n");
        return -1;
    }

    int frontVal = array[frontIdx];
    frontIdx = (frontIdx + 1) % capacity;
    size--;

    return frontVal;
}

void list::push_back(int newValue) {
    if (size == capacity) {
        printf("cannot add to a full list\n");
        return;
    }

    array[endIdx] = newValue;
    endIdx = (endIdx + 1) % capacity;
    size++;
}

