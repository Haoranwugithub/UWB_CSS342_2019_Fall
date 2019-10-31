#ifndef STACK_LINKEDQUEUE_H
#define STACK_LINKEDQUEUE_H

#include "SingleLinkedList.h"
#include <cassert>
#include "Queue.h"

template<class T>
class LinkedQueue : public Queue<T> {
private:
    SingleLinkedList<T> *items;
public:
    LinkedQueue();

    LinkedQueue(LinkedQueue &);

    virtual ~LinkedQueue();

    bool isEmpty() const override;

    bool enqueue(const T &) override;

    bool dequeue() override;

    T peekFront() override;
};

template<class T>
bool LinkedQueue<T>::isEmpty() const {
    //return items.size()==0; // what's wrong with this?
    return items->begin() == items->end();
}

template<class T>
bool LinkedQueue<T>::enqueue(const T &val) {
    items->append(val);
    return true;
}

template<class T>
bool LinkedQueue<T>::dequeue() {
    items->popHead();
    return true;
}

template<class T>
T LinkedQueue<T>::peekFront() {
    assert(!isEmpty());
    return *(items->begin());
}

template<class T>
LinkedQueue<T>::~LinkedQueue() {
    delete items;
}

template<class T>
LinkedQueue<T>::LinkedQueue() {
    items = new SingleLinkedList<T>();
}

template<class T>
LinkedQueue<T>::LinkedQueue(LinkedQueue &anotherQueue) {
    items = new SingleLinkedList<T>();
    for (auto it = anotherQueue.items->begin(); it != anotherQueue.items->end(); it++) {
        items->append(*it);
    }
}

#endif //STACK_LINKEDQUEUE_H
