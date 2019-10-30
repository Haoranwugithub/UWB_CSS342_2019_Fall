long possibleStairsRecursive(int N) {
    if (N<0) {
        return 0;
    }
    if (N>=0 && N<=2) {
        if (N==1) {
            printf ("possibleStairsRecursive(%d) is called\n", N);
        }
        return N;
    }

    return possibleStairsRecursive(N - 1) + possibleStairsRecursive(N - 2);
}

long possibleStairsIterative(int N) {
    int* buffer = new int[N];
    buffer[0] = 1;
    buffer[1] = 2;

    for (int i=2; i<N; i++) {
        buffer[i] = buffer[i-1] + buffer[i-2];
    }

    long result = buffer[N-1];
    delete [] buffer;

    return result;
}