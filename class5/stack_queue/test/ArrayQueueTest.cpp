#include "ArrayQueue.h"
#include "gtest/gtest.h"

TEST(queue_test, is_empty) {
    ArrayQueue<int> queue(5);
    ASSERT_TRUE(queue.isEmpty());

    queue.enqueue(1);
    ASSERT_FALSE(queue.isEmpty());
}

TEST(queue_test, enqueue) {
    ArrayQueue<int> queue(5);
    queue.enqueue(1);
    ASSERT_FALSE(queue.isEmpty());
    ASSERT_EQ(queue.peekFront(), 1);

    queue.enqueue(2);
    queue.enqueue(3);
    ASSERT_EQ(queue.peekFront(), 1);
}

TEST(queue_test, dequeue) {
    ArrayQueue<int> queue(5);
    queue.enqueue(1);
    queue.dequeue();
    ASSERT_TRUE(queue.isEmpty());

    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.dequeue();
    ASSERT_EQ(queue.peekFront(), 3);
    queue.dequeue();
    ASSERT_EQ(queue.peekFront(), 4);
    queue.dequeue();
    ASSERT_TRUE(queue.isEmpty());
}

TEST(queue_test, copy_constructor) {
    ArrayQueue<int> queue(5);
    ArrayQueue<int> queue2(queue);
    ASSERT_TRUE(queue2.isEmpty());

    for (int i = 0; i < 3; i++) {
        queue.enqueue(i);
    }

    ArrayQueue<int> queue3(queue);
    while (!queue.isEmpty() && !queue3.isEmpty()) {
        ASSERT_EQ(queue.peekFront(), queue3.peekFront());
        queue.dequeue();
        queue3.dequeue();
    }

    ASSERT_TRUE(queue.isEmpty() && queue3.isEmpty());
}

TEST(queue_test, peek) {
    ArrayQueue<int> queue(5);
    ASSERT_DEATH(queue.peekFront(), ".*");

    queue.enqueue(1);
    ASSERT_EQ(queue.peekFront(), 1);

    queue.enqueue(2);
    ASSERT_EQ(queue.peekFront(), 1);

    queue.dequeue();
    ASSERT_EQ(queue.peekFront(), 2);
}

TEST(queue_test, overflow) {
    int testSize = 3;
    ArrayQueue<int> queue(testSize);
    for (int i=0; i<testSize; i++) {
        ASSERT_TRUE(queue.enqueue(i+5));
    }
    ASSERT_FALSE(queue.enqueue(testSize));

    ASSERT_TRUE(queue.dequeue());
    ASSERT_TRUE(queue.dequeue());
    ASSERT_EQ(queue.peekFront(), testSize-1+5);
    ASSERT_TRUE(queue.enqueue(99));
    ASSERT_TRUE(queue.dequeue());
    ASSERT_EQ(queue.peekFront(), 99);
}
