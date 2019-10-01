#include "shape.h"

void stack_variable()
{
    Point point(1, 2);
    point.move(5, 6);
    point.print("in stack_variable");
    
	// are we missing something?
}

void heap_variable()
{
    Point *point = new Point(1,2);
    point->move(5, 6);
    point->print("in heap_variable");

    // are we missing something?
}

void heap_array(int arraySize)
{
    Point *points = new Point[arraySize];  
    for (int i=0; i<arraySize; i++) {
        points[i].move(i, i);
    }
    
    for (int i=0; i<arraySize; i++) {
        points[i].print("in heap_array");
    }

    // are we missing something?
}

int main()
{
//    stack_variable();

//    heap_variable();

//    heap_array(10);

//    Shape shape(5);
//   shape.print();
}
