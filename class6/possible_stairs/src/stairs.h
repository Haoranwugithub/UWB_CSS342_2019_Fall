long possibleStairs(int N) {
    if (N<0) {
        return 0;
    }
    if (N>=0 && N<=2) {
        if (N==1) {
            printf ("possibleStairs(%d) is called\n", N);
        }
        return N;
    }

    return possibleStairs(N-1) + possibleStairs(N-2);
}