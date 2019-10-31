#include "gtest/gtest.h"

int midPoint(int start, int end) {
    //return start + (end - start) / 2;
    return (start + end) / 2;
}

int* binarySearch(int* data, int start, int end, int x) {
    if (start>end) {
        return nullptr;
    }

    int midIdx = midPoint(start, end);
    printf("start=%d, end=%d, mid=%d\n", start, end, midIdx);
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

TEST(test, not_found) {
    int array[]={1,3,4,6,8,9};
    int* ret = binarySearch(array, 0, 5, -1);
    ASSERT_EQ(ret, nullptr);
}

TEST(test, in_class_demo) {
    int array[]={1,3,4,6,8,9};
    int* ret = binarySearch(array, 0, 5, 9);
    ASSERT_EQ(*ret, 9);
}

TEST(test, in_class_large_demo) {
    int testSize = INT32_MAX;

    printf("sizeof(int)=%d\n", sizeof(int));
    printf("test size (INT_MAX32) is %d\n", testSize);

    int* array = new int[INT32_MAX];

    for (int i=0; i<INT32_MAX; i++) {
        array[i] = i;
    }

    int target = 2;
    int* ret = binarySearch(array, 0, testSize-1, target);
    ASSERT_EQ(*ret, target);

    target = testSize-2;
    ret = binarySearch(array, 0, testSize-1, target);
    ASSERT_EQ(*ret, target);

    delete []array;
}
