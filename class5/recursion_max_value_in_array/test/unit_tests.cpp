#include "gtest/gtest.h"
#include "LinkedStack.h"

#define precheck if(size<=0 || array==nullptr){printf("invalid input size=%d, array=%x\n", size, array);return 0;}

int max_iterative(int* array, int size) {
    precheck;

    int v1 = array[0];
    for (int i=1; i<size; i++) {
        int v2 = array[i];
        printf("comparing %d vs %d\n", v1, v2);
        if (v1 < v2) {
            v1 = v2;
        }
    }

    return v1;
}

int max_recursive(int* array, int size) {
    precheck;

    if (size == 1) {
        return array[0];
    }

    int v1 = array[0];
    int v2 = max_recursive(array+1, size-1);
    return (v1<v2) ? v2 : v1;
}

int max_using_a_stack(int* array, int size) {
    precheck;

    LinkedStack<int> stack;

    int i=0;
    while (i!=size-1) {
        stack.push(array[i]);
        i++;
    }

    int v2 = array[size-1];
    while (!stack.isEmpty()) {
        int v1 = stack.peek();
        stack.pop();

        if (v1 > v2) {
            v2 = v1;
        }
    }

    return v2;
}

#define ITERATIVE
//#define RECURSIVE
//#define STACK

int max(int* array, int size) {
#ifdef ITERATIVE
    return max_iterative(array, size);
#endif
#ifdef RECURSIVE
    return max_recursive(array, size);
#endif
#ifdef STACK
    return max_using_a_stack(array, size);
#endif
}

TEST(test, one) {
    int array[]={1};
    ASSERT_EQ(max(array, 1), 1);
}

TEST(test, two) {
    int array1[]={1,2};
    ASSERT_EQ(max(array1, 2), 2);

    int array2[]={2,1};
    ASSERT_EQ(max(array2, 2), 2);

    int array3[]={2,2};
    ASSERT_EQ(max(array3, 2), 2);
}

TEST(test, more_than_two) {
    int testSize = 3;
    int array1[3][3]={{1,2,3},{3,2,1},{3,3,3}};

    for (int i=0; i<testSize; i++) {
        ASSERT_EQ(max(array1[i], testSize), 3);
    }
}

TEST(test, in_class_demo) {
    int array[]={3,2,9,2,5,1};
    ASSERT_EQ(max(array, 6), 9);
}
