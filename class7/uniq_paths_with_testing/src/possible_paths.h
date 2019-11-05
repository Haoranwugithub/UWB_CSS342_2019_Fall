#include <iostream>

void printAnswer(std::vector<int>*ans) {
    for (int i=0; i<ans->size(); i++) {
        printf("%d ", (*ans)[i]);
    }
    printf("\n");
}

void _possiblePathsRecursive(int* grid, int ld, int M, int N, std::vector<int>*answer) {

    // move out of grid
    if (M<=0 || N<=0) {
        return;
    }

    // push the current value
    answer->push_back(*grid);

    if (M==1 && N==1) {
        // reach the end
        printAnswer(answer);
    } else {
        // move right
        _possiblePathsRecursive(grid + ld, ld, M - 1, N, answer);

        // move down
        _possiblePathsRecursive(grid + 1, ld, M, N - 1, answer);
    }

    // remove the current value
    answer->pop_back();
}

void possiblePathsRecursive(int* grid, int M, int N) {
    std::vector<int> *answer = new std::vector<int>();

    _possiblePathsRecursive(grid, N, M, N, answer);

    delete answer;
}
