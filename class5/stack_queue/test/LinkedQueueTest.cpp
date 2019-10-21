#include "LinkedQueue.h"
#include "gtest/gtest.h"

TEST(queue_test, is_empty) {
    LinkedQueue<int> queue;
    ASSERT_TRUE(queue.isEmpty());

    queue.enqueue(1);
    ASSERT_FALSE(queue.isEmpty());
}

TEST(queue_test, enqueue) {
    LinkedQueue<int> queue;
    queue.enqueue(1);
    ASSERT_FALSE(queue.isEmpty());
    ASSERT_EQ(queue.peekFront(), 1);

    queue.enqueue(2);
    queue.enqueue(3);
    ASSERT_EQ(queue.peekFront(), 1);
}

TEST(queue_test, dequeue) {
    LinkedQueue<int> queue;
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
    LinkedQueue<int> queue;
    LinkedQueue<int> queue2(queue);
    ASSERT_TRUE(queue2.isEmpty());

    for (int i = 0; i < 3; i++) {
        queue.enqueue(i);
    }

    LinkedQueue<int> queue3(queue);
    while (!queue.isEmpty() && !queue3.isEmpty()) {
        ASSERT_EQ(queue.peekFront(), queue3.peekFront());
        queue.dequeue();
        queue3.dequeue();
    }

    ASSERT_TRUE(queue.isEmpty() && queue3.isEmpty());
}

TEST(queue_test, peek) {
    LinkedQueue<int> queue;
    ASSERT_DEATH(queue.peekFront(), ".*");

    queue.enqueue(1);
    ASSERT_EQ(queue.peekFront(), 1);

    queue.enqueue(2);
    ASSERT_EQ(queue.peekFront(), 1);

    queue.dequeue();
    ASSERT_EQ(queue.peekFront(), 2);
}

