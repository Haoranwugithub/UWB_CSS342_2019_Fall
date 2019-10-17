## Complete the Singly Linked List

Use folder ```problem_2```.

We are working with a sorted singly linked list in this problem. A sorted singly linked list is similar to the regular singly linked list as we have seen in class and problem_1. The difference is values in a sorted singly linked list is always...well...sorted, and **in ascending order** in this problem. The interface of a sorted singly linked list class looks like this 
```C++
template <class T>
class SortedSingleLinkedList {
private:
    ListNode<T> *head;
public:
    SortedSingleLinkedList() {
        head = new ListNode<T>();
    }

    ~SortedSingleLinkedList() {
        clear();
        delete head;
    }

    std::vector<T> toVector() const;
    void clear();
    int size() const;

    void insert(T);
    void merge(SortedSingleLinkedList &);
};
```

This list has two functions, insert(T) and void merge(SortedSingleLinkedList &) that are to be implemented in this homeowrk:

### 1. (15pt) Implement insert(T) in ***src/SortedSingleLinkedList.cpp***
```C++
/*
 * Removes all the nodes whose val equals the val in the parameter
 * Return true is any node was actually removed. False otherwise
 */
template <class T>
void SortedSingleLinkedList<T>::insert(T val){
    // homework
}
```
The skeleton code is already provided and should not be modified. 

The insert(T) function adds value to the list while ***maintaining the ascending order***. 

For example:

*If the input list is empty, insert(1) will add one node to the list with value set to 1
*If the input list is 1, insert(2) will make the list 1->2
*If the input list is 3, insert(2) will make the list 2->3
*If the input list is 1->3->5, insert(2) will make the list 1->2->3->5
*If the input list is 2->3->5, insert(1) will make the list 1->2->3->5
*If the input list is 2->3->5, insert(8) will make the list 2->3->5->8
*If the input list is 1->2->2->4, insert(3) will make the list 1->2->2->3->4


### 2. (15pt) Write a unit test in ***test/unit_tests.cpp*** for your insert(T) in task 1 to verify it works correctly. The following cases have to be verified in your tests:

* input is empty
* input has one element
* input has more than one elements without duplicates
* input has more than one elements with duplicates
* input has more than one elements, all elements being the same values

Your tests should verify both the correct elements are removed AND remove(T val) returns the correct boolean value. The skeleton code is provided:

```C++
EST(sll_test, insert) {
    // homework
}
```



