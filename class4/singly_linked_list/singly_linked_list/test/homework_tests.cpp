#include "SingleLinkedList.h"
#include "gtest/gtest.h"

TEST(sll_test, add_node) {
    SingleLinkedList list;
    list.add(99);
    ASSERT_EQ(list.count(), 1);

    list.add(100);
    ASSERT_EQ(list.count(), 2);

}
