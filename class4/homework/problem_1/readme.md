## Complete the Singly Linked List

Use folder ```problem_1```.

1. (10pt) Implement remove(T val) in src/SingleLinkedList.cpp
```C++
/*
 * Removes all the nodes whose val equals the val in the parameter
 * Return true is any node was actually removed. False otherwise
 */
template <class T>
bool SingleLinkedList<T>::remove(T val) {
    // NOT IMPLEMENTED
    return false;
}
```
The skeleton code is already provided and should not be modified. 

The remove(T val) will remove all the nodes whose val equals the val in the parameter. Removed nodes are deleted in memory.

For example:
* If the list has 1->2->3, after calling the remove(3) the list will be 1->2, and return true
* If the list has 1->2->4->2, after calling the remove(2) the list will be 1->4, and return true
* If the list has 1->1->4->2, after calling the remove(2) the list will be 4->2, and return true
* If the list has 1->1->4->2, after calling the remove(5) the list will be 1->1->4->2, and return false
* If the list is empty, after calling the remove(2) the list will be empty, and return false
* If the list has 1->1, after calling the remove(1) the list will be empty, and return true


2. (10pt) Write a unit test for your remove(T val) in task 1 to verify it works correctly. The following cases have to be verified in your tests:
* input is empty
* input has one element
* input has more than one elements without duplicates
* input has more than one elements with duplicates
* input has more than one elements, all elements being the same values

Your tests should verify both the correct elements are removed AND remove(T val) returns the correct boolean value.
