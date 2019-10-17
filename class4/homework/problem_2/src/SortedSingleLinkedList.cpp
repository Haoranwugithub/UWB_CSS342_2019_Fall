#include "SortedSingleLinkedList.h"

template <class T>
void SortedSingleLinkedList<T>::insert(T val){
    // homework
}

template <class T>
int SortedSingleLinkedList<T>::size() const {
    T count = 0;
    ListNode<T> *ptr = head;
    while (ptr->next != nullptr) {
        ptr = ptr->next;
        count++;
    }

    return count;
}

/*
 * delete everything from the linked list
 */
template <class T>
void SortedSingleLinkedList<T>::clear() {
    ListNode<T>* ptr = head->next;
    while (ptr != nullptr) {
        ListNode<T>* curr = ptr;
        ptr = ptr->next;
        delete curr;
    }
    head->next = nullptr;
}

template <class T>
std::vector<T> SortedSingleLinkedList<T>::toVector() const {
    std::vector<T> output;
    for (ListNode<T> *ptr = head->next; ptr != nullptr; ptr = ptr->next) {
        output.push_back(ptr->val);
    }
    return output;
}

template<class T>
void SortedSingleLinkedList<T>::merge(SortedSingleLinkedList &) {
    // homework
}



