#ifndef STACK_LINKEDSTACK_H
#define STACK_LINKEDSTACK_H

#include "Stack.h"
#include <cassert>

template<class T>
class ArrayStack : public Stack<T> {
private:
    T* items;
    int capacity;
    int size;
public:
    ArrayStack() = delete;

    ArrayStack(int capacity) : size(0) {
        assert(capacity>0);
        items = new int[capacity];
        this->capacity = capacity;
    }

    ArrayStack(ArrayStack &);

    virtual ~ArrayStack() ;

    bool isEmpty() const override;

    bool push(const T &) override;

    bool pop() override;

    T peek() const override;
};

template<class T>
bool ArrayStack<T>::isEmpty() const {
    return size==0;
}

template<class T>
bool ArrayStack<T>::push(const T &val) {
    if (size==capacity) {
        return false;
    }

    items[size] = val;
    size++;
    return true;
}

template<class T>
bool ArrayStack<T>::pop() {
    if (size==0) {
        return false;
    }
    size--;
    return true;
}

template<class T>
T ArrayStack<T>::peek() const {
    assert(size>0);
    return items[size-1];
}

template<class T>
ArrayStack<T>::ArrayStack(ArrayStack<T> &anotherStack) {
    items = new T[anotherStack.capacity];
    size = anotherStack.size;
    for (int i=0; i<size; i++) {
        items[i] = anotherStack.items[i];
    }
}

template<class T>
ArrayStack<T>::~ArrayStack() {
    delete [] items;
}

#endif //STACK_LINKEDSTACK_H
