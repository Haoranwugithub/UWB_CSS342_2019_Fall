#include "point.h"

class Shape {
    int size;
    Point *points;

public:
    Shape() = delete;

    Shape(int s) : size(s) {
        printf("Constructed shape of size %d\n", size);
        points = new Point[size];
    }

    void print() {
        for (int i=0; i<size; i++) {
            printf("Point(%d,%d)", points[i].getX(), points[i].getY());
            if (i+1 != size) {
                printf("->");
            }
        }
        printf("\n");
    }
};
