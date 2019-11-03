#include "SortedSingleLinkedList.h"

template <class T>
void SortedSingleLinkedList<T>::insert(T val){
    ListNode<T>* p0 = head;

    // move p0 to node that has larger value than val
    while (p0->next != nullptr) {
        if (p0->next->val>=val) {
            break;
        }
        p0 = p0->next;
    }

    // insert the new node
    ListNode<T>* newNode = new ListNode<T>(val);
    newNode->next = p0->next;
    p0->next = newNode;
    return;
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

/* solution by using insert */
template<class T>
void SortedSingleLinkedList<T>::merge(SortedSingleLinkedList & otherList) {
    ListNode<T>* p = otherList.head->next;

    while (p != nullptr) {
        insert(p->val);
        p = p->next;
    }
}

/*
 * extra credit
 */
/*
template<class T>
void SortedSingleLinkedList<T>::merge(SortedSingleLinkedList & otherList) {
    ListNode<T>* pCurr = head;
    ListNode<T>* pOther = otherList.head->next;

    while (pOther != nullptr) {
        while(pCurr->next != nullptr && pCurr->next->val<pOther->val) {
            pCurr = pCurr->next;
        }
        ListNode<T>* newNode = new ListNode<T>(pOther->val);
        newNode->next = pCurr->next;
        pCurr->next = newNode;

        pOther = pOther->next;
    }
}
*/


// this version would take the node from the other list instead of creating new node.
// as a result after the merge the other list would be empty
template<class T>
void SortedSingleLinkedList<T>::evilMerge(SortedSingleLinkedList & otherList) {
    ListNode<T>* pCurr = head;
    ListNode<T>* pOtherHead = otherList.head;

    while (pOtherHead->next != nullptr) {
        while(pCurr->next != nullptr && pCurr->next->val<pOtherHead->next->val) {
            pCurr = pCurr->next;
        }

        ListNode<T>* newNode = pOtherHead->next;
        pOtherHead->next = newNode->next;

        newNode->next = pCurr->next;
        pCurr->next = newNode;
    }
}
