#ifndef A_SHAPE_SINGLELINKEDLIST_H
#define A_SHAPE_SINGLELINKEDLIST_H

#include "ListNode.h"
#include <vector>

using namespace std;

class SingleLinkedList {
private:
    ListNode *m_head;

    ListNode *_reverse_recursive(ListNode *);

public:
    SingleLinkedList() {
        m_head = new ListNode();
    }

    SingleLinkedList(SingleLinkedList &list);

    ~SingleLinkedList() {
        while (m_head != nullptr) {
            ListNode *curr = m_head;
            m_head = m_head->getNext();
            delete curr;
        }
    }

    void add(int);

    int count() const;

    void reverse_iterative();

    void reverse_recursive();

    vector<int> toVector() const;

    bool equal(SingleLinkedList &);

    // homework
    void pushHead(int);

    // homework
    void popHead();

    // homework
    void popTail();

    class Iterator {
    private:
        ListNode *m_currNode;
    public:
        Iterator(ListNode *);

        Iterator &operator++() {
            if (m_currNode != nullptr) {
                m_currNode = m_currNode->getNext();
            }

            return *this;
        }

        Iterator operator++(int) {
            Iterator it(*this);
            operator++();
            return it;
        }

        int operator*() {
            return m_currNode->getVal();
        }

        bool operator!=(const Iterator &it) {
            return m_currNode != it.m_currNode;
        }

        bool operator==(const Iterator &it) {
            return m_currNode == it.m_currNode;
        }

    };

    void remove(int val);

    Iterator erase(Iterator);

    Iterator erase(Iterator, Iterator);

    Iterator begin() {
        return Iterator(m_head->getNext());
    }

    Iterator end() {
        return Iterator(nullptr);
    }

    Iterator tail() {
        if (m_head->getNext() == nullptr) {
            return end();
        }

        ListNode *ptr = m_head;
        while (ptr->getNext() != nullptr) {
            ptr = ptr->getNext();
        }
        return Iterator(ptr);
    }
};

#endif //A_SHAPE_SINGLELINKEDLIST_H
