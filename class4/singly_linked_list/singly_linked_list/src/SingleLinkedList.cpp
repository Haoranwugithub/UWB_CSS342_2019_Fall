#include "SingleLinkedList.h"

void SingleLinkedList::add(int val) {
    ListNode *ptr = m_head;

    while (ptr->getNext() != nullptr) {
        ptr = ptr->getNext();
    }

    ptr->setNext(new ListNode(val));
}

int SingleLinkedList::count() const {
    int count = 0;
    ListNode *ptr = m_head;
    while (ptr->getNext() != nullptr) {
        ptr = ptr->getNext();
        count++;
    }

    return count;
}

vector<int> SingleLinkedList::toVector() const {
    vector<int> vec;
    for (auto ptr = m_head->getNext(); ptr != nullptr; ptr = ptr->getNext()) {
        vec.push_back(ptr->getVal());
    }
    return vec;
}

void SingleLinkedList::reverse_iterative() {
    auto p0 = m_head->getNext();
    if (p0 == nullptr || p0->getNext() == nullptr) {
        return;
    }
    auto p1 = p0->getNext();
    while (p1 != nullptr) {
        p0->setNext(p1->getNext());
        p1->setNext(m_head->getNext());
        m_head->setNext(p1);
        p1 = p0->getNext();
    }
}

bool SingleLinkedList::equal(SingleLinkedList &otherList) {
    auto it = begin(), otherIt = otherList.begin();
    while (it != end() && otherIt != otherList.end()) {
        if (*it != *otherIt) {
            return false;
        }
        it++;
        otherIt++;
    }

    return it == end() && otherIt == otherList.end();
}

SingleLinkedList::SingleLinkedList(SingleLinkedList &list) {
    m_head = new ListNode();
    auto p0 = m_head;
    for (auto it = list.begin(); it != list.end(); it++) {
        p0->setNext(new ListNode(*it));
        p0 = p0->getNext();
    }
}

ListNode *SingleLinkedList::_reverse_recursive(ListNode *head) {
    auto p0 = head->getNext();
    if (p0->getNext() == nullptr) {
        return p0;
    }

    auto p1 = _reverse_recursive(p0);

    head->setNext(p0->getNext());
    p0->setNext(p1->getNext());
    p1->setNext(p0);

    return p0;
}

void SingleLinkedList::reverse_recursive() {
    if (m_head->getNext() == nullptr) {
        return;
    }
    _reverse_recursive(m_head);
}

void SingleLinkedList::pushHead(int val) {
    ListNode *newNode = new ListNode(val);
    newNode->setNext(m_head->getNext());
    m_head->setNext(newNode);
}

void SingleLinkedList::popHead() {
    auto ptr = m_head->getNext();
    if (ptr != nullptr) {
        m_head->setNext(ptr->getNext());
        delete ptr;
    }
    return;
}

void SingleLinkedList::popTail() {
    auto p0 = m_head, p1 = m_head->getNext();

    while (p0->getNext() != nullptr && p1->getNext() != nullptr) {
        p1 = p1->getNext();
        p0 = p0->getNext();
    }

    if (p1 != nullptr) {
        p0->setNext(nullptr);
        delete p1;
    }
}

SingleLinkedList::Iterator::Iterator(ListNode *currNode) : m_currNode(currNode) {}

/*
 * Removes from the container all the elements that compare equal to val
 */
void SingleLinkedList::remove(int val) {
    auto ptr = m_head;
    while (ptr->getNext() != nullptr) {
        if (ptr->getNext()->getVal() == val) {
            auto newNext = ptr->getNext()->getNext();
            delete ptr->getNext();
            ptr->setNext(newNext);
        } else {
            ptr = ptr->getNext();
        }
    }
}

SingleLinkedList::Iterator SingleLinkedList::erase(SingleLinkedList::Iterator it) {
    for (auto ptr = m_head; it != Iterator(nullptr) && ptr->getNext() != nullptr;) {
        if (Iterator(ptr->getNext()) == it) {
            auto newNext = ptr->getNext()->getNext();
            delete ptr->getNext();
            ptr->setNext(newNext);
            return Iterator(newNext);
        } else {
            ptr = ptr->getNext();
        }

    }
    return SingleLinkedList::Iterator(nullptr);
}

/*
 * home work
 */
SingleLinkedList::Iterator SingleLinkedList::erase(SingleLinkedList::Iterator start, SingleLinkedList::Iterator end) {
    return SingleLinkedList::Iterator(nullptr);
}


