#ifndef LIST_EXAMPLE_OOP_LIST_H
#define LIST_EXAMPLE_OOP_LIST_H

#include <string>

class list {
private:
    int* array;
    int size;
public:
    int getSize() const {
        return size;
    }

private:
    int capacity;
    int frontIdx;
    int endIdx;
public:
    list(int capacity);

    virtual ~list();

    int pop_front();
    void push_back(int newValue);
};

#endif //LIST_EXAMPLE_OOP_LIST_H
