#ifndef STACK_LINKEDQUEUE_H
#define STACK_LINKEDQUEUE_H

#include "SingleLinkedList.h"
#include <cassert>
#include "Queue.h"

template<class T>
class LinkedQueue : public Queue<T> {
private:
    SingleLinkedList<T> *m_queue;
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
    //return m_queue.count()==0; // what's wrong with this?
    return m_queue->begin() == m_queue->end();
}

template<class T>
bool LinkedQueue<T>::enqueue(const T &val) {
    m_queue->add(val);
    return true;
}

template<class T>
bool LinkedQueue<T>::dequeue() {
    m_queue->popHead();
    return true;
}

template<class T>
T LinkedQueue<T>::peekFront() {
    assert(!isEmpty());
    return *(m_queue->begin());
}

template<class T>
LinkedQueue<T>::~LinkedQueue() {
    delete m_queue;
}

template<class T>
LinkedQueue<T>::LinkedQueue() {
    m_queue = new SingleLinkedList<T>();
}

template<class T>
LinkedQueue<T>::LinkedQueue(LinkedQueue &anotherQueue) {
    m_queue = new SingleLinkedList<T>(*(anotherQueue.m_queue));
}

#endif //STACK_LINKEDQUEUE_H
