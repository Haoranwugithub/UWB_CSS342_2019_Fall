#include <iostream>

void _possiblePathsRecursive(int* grid, int ld, int M, int N, std::vector<int>*ans) {

    if (M<=0 || N<=0) {
        return;
    }

    ans->push_back(*grid);

    if (M==1 && N==1) {
        for (int i=0; i<ans->size(); i++) {
            printf("%d ", (*ans)[i]);
        }
        printf("\n");
    } else {
        _possiblePathsRecursive(grid + ld, ld, M - 1, N, ans);
        _possiblePathsRecursive(grid + 1, ld, M, N - 1, ans);
    }

    ans->pop_back();
    return;
}

void possiblePathsRecursive(int* grid, int M, int N) {
    std::vector<int> *answer = new std::vector<int>();

    _possiblePathsRecursive(grid, N, M, N, answer);

    delete answer;
}
