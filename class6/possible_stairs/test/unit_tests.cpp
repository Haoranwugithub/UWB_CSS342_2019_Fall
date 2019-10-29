#include "gtest/gtest.h"

#include "stairs.h"

TEST(test, zero_one_and_two) {
    for (int i=0; i<3; i++) {
        ASSERT_EQ(possibleStairs(1), 1);
    }
}

TEST(test, three) {
    ASSERT_EQ(possibleStairs(3), 3);
}

TEST(test, four) {
    ASSERT_EQ(possibleStairs(20), 10946);
}

TEST(test, in_class_demo ) {
    int testSize = 20;
    long ways = possibleStairs(testSize);
    printf("there are %ld ways for size %d\n", ways, testSize);
}
