#ifndef STACK_ARRAYQUEUE_H
#define STACK_ARRAYQUEUE_H

#include <cassert>
#include "Queue.h"

template<class T>
class ArrayQueue : public Queue<T> {
private:
    T *items;
    int frontIdx;
    int endIdx;
    int capacity;
    int size;
public:
    ArrayQueue() = delete;

    ArrayQueue(int capacity) : size(0), frontIdx(0), endIdx(0) {
        assert(capacity>0);
        items = new int[capacity];
        this->capacity = capacity;
    }

    ArrayQueue(ArrayQueue &);

    virtual ~ArrayQueue();

    bool isEmpty() const override;

    bool enqueue(const T &) override;

    bool dequeue() override;

    T peekFront() override;
};

template<class T>
bool ArrayQueue<T>::isEmpty() const {
    return size==0;
}

template<class T>
bool ArrayQueue<T>::enqueue(const T &val) {
    if (size==capacity) {
        return false;
    }
    items[endIdx] = val;
    endIdx = (endIdx + 1) % capacity;
    size++;
    return true;
}

template<class T>
bool ArrayQueue<T>::dequeue() {
    if (size==0) {
        return false;
    }
    frontIdx = (frontIdx + 1) % capacity;
    size--;
    return true;
}

template<class T>
T ArrayQueue<T>::peekFront() {
    assert(size>0);
    return items[frontIdx];
}

template<class T>
ArrayQueue<T>::~ArrayQueue() {
    delete [] items;
}

template<class T>
ArrayQueue<T>::ArrayQueue(ArrayQueue &anotherQueue) {
    items = new T[anotherQueue.capacity];
    size = anotherQueue.size;
    endIdx = anotherQueue.endIdx;
    frontIdx = anotherQueue.frontIdx;

    for (int i=0; i<size; i++) {
        items[i] = anotherQueue.items[i];
    }
}

#endif
