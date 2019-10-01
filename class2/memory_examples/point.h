#include<iostream> 

class Point{ 
    int x;
    int y;
public:
    Point() : x(0), y(0) {}

    Point(int x, int y) : x(x), y(y) {
        printf("Constructed point(%d, %d)\n", x, y);
    }

    Point(Point & anotherPoint) {
        x = anotherPoint.x;
        y = anotherPoint.y;
        printf("Copy constructed point(%d, %d)\n", x, y);
    }
    
    ~Point() {
        printf("Point(%d, %d) destructed\n", x, y);
    }

    // add an offset to the point
    void move(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
    }

    void print(char msg[]) {
        if (msg==nullptr) {
            msg = "none";
        }
        printf ("%s: point(%d, %d) @ 0x%x\n", msg, x, y, this);
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }
}; 

