#include "SortedSingleLinkedList.h"
#include "gtest/gtest.h"

// homework needs fix
TEST(sll_test, to_vector) {
    SortedSingleLinkedList<int> list;
    int testSize = 5;
    std::vector<int> answer;
    for (int i = 0; i < testSize; i++) {
        answer.push_back(i);
        list.insert(i);
    }

    ASSERT_EQ(list.size(), testSize);
    ASSERT_TRUE(answer == list.toVector());
}

TEST(sll_test, insert) {
    // homework
}

TEST(sll_test, merge) {
    // homework
}
