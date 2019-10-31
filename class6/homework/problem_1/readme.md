## Reverse A Stack Using Recursion (40pt)

Use folder ```problem_1```.

### 1. (40pt) Implement reverse_stack_recursively(Stack<int> &stack) in ***src/Homework.h***
```c++
void reverse_stack_recursively(Stack<int> &stack) {
    // homework
}
```

- This function takes a stack (reference) and reverse its content using recursion. 
- Any loop such as for, while is not allowed. You will not receive any point if you use any loop.
- You can only use the provided Stack implementation.

For example:

* input stack: (top on the left, bottom on the right): [], after the reversal: []
* input stack: (top on the left, bottom on the right): [0], after the reversal: [0]
* input stack: (top on the left, bottom on the right): [0, 1], after the reversal: [1, 0]
* input stack: (top on the left, bottom on the right): [0, 1, 2], after the reversal: [2, 1, 0]
* input stack: (top on the left, bottom on the right): [0, 2, 2, 3], after the reversal: [3, 2, 2, 0]


### 2. (20pt) Write unit tests in ***test/HomeworkTest.cpp*** for your reverse_stack_recursively(Stack<int> &) in task 1 to verify it works correctly.
All the above cases should be verified.
