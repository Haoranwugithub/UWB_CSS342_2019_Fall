#include "ArrayStack.h"
#include "gtest/gtest.h"

TEST(stack_test, is_empty) {
    ArrayStack<int> stack(5);
    ASSERT_TRUE(stack.isEmpty());

    ASSERT_TRUE(stack.push(1));
    ASSERT_FALSE(stack.isEmpty());

    ASSERT_TRUE(stack.pop());
    ASSERT_TRUE(stack.isEmpty());
}

TEST(stack_test, push) {
    ArrayStack<int> stack(5);
    stack.push(1);
    ASSERT_FALSE(stack.isEmpty());
    ASSERT_EQ(stack.peek(), 1);

    stack.push(2);
    stack.push(3);
    ASSERT_EQ(stack.peek(), 3);
}

TEST(stack_test, pop) {
    ArrayStack<int> stack(5);
    stack.push(1);
    stack.pop();
    ASSERT_TRUE(stack.isEmpty());

    stack.push(2);
    stack.push(3);
    stack.pop();
    ASSERT_EQ(stack.peek(), 2);
}

TEST(stack_test, peek) {
    ArrayStack<int> stack(5);
    ASSERT_DEATH(stack.peek(), ".*");

    stack.push(1);
    ASSERT_EQ(stack.peek(), 1);

    stack.push(2);
    ASSERT_EQ(stack.peek(), 2);

    stack.pop();
    ASSERT_EQ(stack.peek(), 1);
}

TEST(stack_test, copy_constructor) {
    ArrayStack<int> stack(5);
    ArrayStack<int> stack2(stack);
    ASSERT_TRUE(stack2.isEmpty());

    for (int i = 0; i < 3; i++) {
        stack.push(i);
    }

    ArrayStack<int> stack3(stack);
    while (!stack.isEmpty() && !stack3.isEmpty()) {
        ASSERT_EQ(stack.peek(), stack3.peek());
        stack.pop();
        stack3.pop();
    }

    ASSERT_TRUE(stack.isEmpty() && stack3.isEmpty());
}
