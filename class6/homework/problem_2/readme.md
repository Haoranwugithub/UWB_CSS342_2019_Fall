## Complete the Singly Linked List (35pt)

Use folder ```problem_2```.

### 1. (35pt) Implement the linked list reversal in ***test/unit_tests.cpp***
```C++
template <class T>
void SingleLinkedList<T>::reverse_recursive() {
    // homework
}
```

reverse_iterative() reverse the order of node (**not just the value**) in a linked list. For example:

* If the list is empty, after calling the reverse_iterative() the list will still be empty
* If the list has 1, after calling the reverse_iterative() the list will be 1
* If the list has 1->2->3, after calling the reverse_iterative() the list will be 3->2->1
* If the list has 1->2->3->4, after calling the reverse_iterative() the list will be 4->3->2->1

reverse_iterative() works "in-place" which means no new node should be created during the process. 

The unit test for your reverse_iterative() is already provided in ***src/unit_tests.cpp***
```C++
TEST(sll_test, reverse_iterative) {
    ASSERT_TRUE(test_reverse_iterative_n(0));
    ASSERT_TRUE(test_reverse_iterative_n(1));
    ASSERT_TRUE(test_reverse_iterative_n(2));
    ASSERT_TRUE(test_reverse_iterative_n(3));
    ASSERT_TRUE(test_reverse_iterative_n(4));
}
```

Your reverse_iterative() should pass all of these test cases.


