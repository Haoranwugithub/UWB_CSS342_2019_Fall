#include "gtest/gtest.h"

#include "stairs.h"

TEST(test_recursive, zero_one_and_two) {
    for (int i=0; i<3; i++) {
        ASSERT_EQ(possibleStairsRecursive(1), 1);
    }
}

TEST(test_recursive, three) {
    ASSERT_EQ(possibleStairsRecursive(3), 3);
}

TEST(test_recursive, four) {
    ASSERT_EQ(possibleStairsRecursive(20), 10946);
}

TEST(test_recursive, in_class_demo ) {
    int testSize = 30;
    long ways = possibleStairsIterative(testSize);
    printf("there are %ld ways for size %d\n", ways, testSize);
}

TEST(test_iterative, zero_one_and_two) {
    for (int i=0; i<3; i++) {
        ASSERT_EQ(possibleStairsIterative(1), 1);
    }
}

TEST(test_iterative, four) {
    ASSERT_EQ(possibleStairsIterative(20), 10946);
}
