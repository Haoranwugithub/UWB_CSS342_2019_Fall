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
    SortedSingleLinkedList<int> list0;

    std::vector<int> answer0;
    list0.insert(5);
    answer0.push_back(5);
    ASSERT_TRUE(list0.toVector()==answer0);

    answer0.push_back(8);
    list0.insert(8);
    ASSERT_TRUE(list0.toVector()==answer0);

    answer0.insert(answer0.begin(), 2);
    list0.insert(2);
    ASSERT_TRUE(list0.toVector()==answer0);

    answer0.insert(answer0.begin()+1, 5);
    list0.insert(5);
    ASSERT_TRUE(list0.toVector()==answer0);

    std::vector<int> answer1;
    SortedSingleLinkedList<int> list1;
    for (int i=0; i<10; i++) {
        list1.insert(99);
        answer1.push_back(99);
    }

    list1.insert(98);
    answer1.insert(answer1.begin(), 98);
    ASSERT_TRUE(list1.toVector()==answer1);

    list1.insert(100);
    answer1.insert(answer1.end(), 100);
    ASSERT_TRUE(list1.toVector()==answer1);
}

void verifyEvilMergeCase(const std::vector<int>& curr, const std::vector<int>& other, const std::vector<int>& answer) {
    SortedSingleLinkedList<int> currList;
    for (int i=0; i<curr.size(); i++) {
        currList.insert(curr[i]);
    }
    SortedSingleLinkedList<int> otherList;
    for (int i=0; i<other.size(); i++) {
        otherList.insert(other[i]);
    }

    currList.evilMerge(otherList);

    ASSERT_TRUE(currList.toVector()==answer);

    ASSERT_EQ(otherList.size(), 0);
}

// this tests the case if merge takes and removes node from the other list
TEST(sll_test, evil_merge) {
    verifyEvilMergeCase(std::vector<int>{}, std::vector<int>{}, std::vector<int>{});

    verifyEvilMergeCase(std::vector<int>{1, 3},
                    std::vector<int>{2, 4}, std::vector<int>{1, 2, 3, 4});

    verifyEvilMergeCase(std::vector<int>{6, 7, 8},
                    std::vector<int>{4, 5}, std::vector<int>{4, 5, 6, 7, 8});

    verifyEvilMergeCase(std::vector<int>{3, 3, 8},
                    std::vector<int>{2, 5}, std::vector<int>{2, 3, 3, 5, 8});
}

void verifyMergeCase(const std::vector<int>& curr, const std::vector<int>& other, const std::vector<int>& answer) {
    SortedSingleLinkedList<int> currList;
    for (int i=0; i<curr.size(); i++) {
        currList.insert(curr[i]);
    }
    SortedSingleLinkedList<int> otherList;
    for (int i=0; i<other.size(); i++) {
        otherList.insert(other[i]);
    }

    currList.merge(otherList);

    ASSERT_TRUE(currList.toVector()==answer);
}

TEST(sll_test, merge) {
    verifyMergeCase(std::vector<int>{}, std::vector<int>{}, std::vector<int>{});

    verifyMergeCase(std::vector<int>{1, 3},
            std::vector<int>{2, 4}, std::vector<int>{1, 2, 3, 4});

    verifyMergeCase(std::vector<int>{6, 7, 8},
            std::vector<int>{4, 5}, std::vector<int>{4, 5, 6, 7, 8});

    verifyMergeCase(std::vector<int>{3, 3, 8},
            std::vector<int>{2, 5}, std::vector<int>{2, 3, 3, 5, 8});
}