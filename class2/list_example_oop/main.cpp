#include "main.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("format: list_example [capacity of array]\n");
        return 0;
    }
    int arraySize = atoi(argv[1]);
    test(arraySize);
}

