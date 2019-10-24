#include "gtest/gtest.h"

int* binarySearch(int* data, int start, int end, int x) {
    if (start>end) {
        return nullptr;
    }

    int midIdx = start + (end - start) / 2;
    if (data[midIdx] == x) {
        return data+midIdx;
    }

    if (x<data[midIdx]) {
        return binarySearch(data, start, midIdx - 1, x);
    }
    else {
        return binarySearch(data, midIdx + 1, end, x);
    }
}

TEST(test, one) {
    int array[]={1};

    int* ret = binarySearch(array, 0, 0, 1);
    ASSERT_EQ(*ret, 1);

    ret = binarySearch(array, 0, 0, 2);
    ASSERT_EQ(ret, nullptr);
}

TEST(test, two) {
    int array[]={1, 2};

    int* ret = binarySearch(array, 0, 1, 1);
    ASSERT_EQ(*ret, 1);

    ret = binarySearch(array, 0, 1, 2);
    ASSERT_EQ(*ret, 2);

    ret = binarySearch(array, 0, 1, 3);
    ASSERT_EQ(ret, nullptr);
}

TEST(test, multiple) {
    int testSize = 3;
    int array[3][3]={{1,2,3},{3,4,5},{1,3,5}};

    for (int i=0; i<testSize; i++) {
        int* ret = binarySearch(array[i], 0, 2, 3);
        ASSERT_EQ(*ret, 3);
    }
}

TEST(test, in_class_demo) {
    int array[]={1,3,4,6,8,9};
    int* ret = binarySearch(array, 0, 5, 9);
    ASSERT_EQ(*ret, 9);
}
