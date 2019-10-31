#include "gtest/gtest.h"

#include "possible_paths.h"

TEST(test_recursive, zero) {
    ASSERT_EQ(possiblePathsRecursive(0, 0), 0);
    ASSERT_EQ(possiblePathsRecursive(0, 1), 0);
    ASSERT_EQ(possiblePathsRecursive(0, 1), 0);
}

TEST(test_recursive, one) {
    ASSERT_EQ(possiblePathsRecursive(1, 1), 1);
    ASSERT_EQ(possiblePathsRecursive(1, 2), 1);
    ASSERT_EQ(possiblePathsRecursive(2, 1), 1);
}

TEST(test_recursive, demo) {
    ASSERT_EQ(possiblePathsRecursive(3, 2), 3);
    ASSERT_EQ(possiblePathsRecursive(7, 3), 28);
}
