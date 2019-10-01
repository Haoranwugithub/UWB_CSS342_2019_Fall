#include<iostream> 

class Point{ 
    int x;
    int y;
public:
    Point(int x, int y) : x(x), y(y) {
        printf("Constructed point(%d, %d)\n", x, y);
    }

    Point(Point & anotherPoint) {
        x = anotherPoint.x;
        y = anotherPoint.y;
        printf("Copy constructed point(%d, %d)\n", x, y);
    }

    void move(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
    }

    void print(char msg[]) {
        if (msg==nullptr) {
            msg = "none";
        }
        printf ("%s: point(%d, %d) @ %x\n", msg, x, y, this);
    }
}; 

