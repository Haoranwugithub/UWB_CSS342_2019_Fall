#include "gtest/gtest.h"
#include "possible_paths.h"

TEST(test_recursive, zero) {
    int * grid = new int[1];
    grid[0] = 0;
    possiblePathsRecursive(grid, 1, 1);

    delete grid;
}

TEST(test_recursive, one_row) {
    int M = 2, N = 1;
    int* grid = new int[M*N];
    for (int i=0; i<M*N; i++) {
        grid[i] = i;
    }
    possiblePathsRecursive(grid, M, N);

    delete grid;
}

TEST(test_recursive, one_column) {
    int M = 2, N = 1;
    int* grid = new int[M*N];
    for (int i=0; i<M*N; i++) {
        grid[i] = i;
    }
    possiblePathsRecursive(grid, M, N);

    delete grid;
}


TEST(test_recursive, 2x2) {
    int M = 2, N = 2;
    int* grid = new int[M*N];
    for (int i=0; i<M*N; i++) {
        grid[i] = i;
    }
    possiblePathsRecursive(grid, M, N);

    delete grid;
}

TEST(test_recursive, 2x3) {
    int M = 2, N = 3;
    int* grid = new int[M*N];
    for (int i=0; i<M*N; i++) {
        grid[i] = i;
    }
    possiblePathsRecursive(grid, M, N);

    delete grid;
}

TEST(test_recursive, 3x2) {
    int M = 3, N = 2;
    int* grid = new int[M*N];
    for (int i=0; i<M*N; i++) {
        grid[i] = i;
    }
    possiblePathsRecursive(grid, M, N);

    delete grid;
}
