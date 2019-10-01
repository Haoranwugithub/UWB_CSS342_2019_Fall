#include "point.h"

void passByValue(Point point) {
    point.move(5, 5);
    point.print("in passByValue");
}

void passByPointer(Point *point) {
    point->move(5, 5);
    point->print("in passByPointer");
}

void passByReference(Point &point) {
    point.move(5, 5);
    point.print("in passByReference");
}
   
int testPassByValue() 
{ 
    Point point(1,2);
    point.print("in testPassByValue");

    passByValue(point);
    point.print("after calling passByValue"); 
}

int testPassByPointer() 
{ 
    Point point(1,2);
    point.print("in testPassByPointer");

    passByPointer(&point);
    point.print("after calling passByPointer"); 
}

int testPassByReference() 
{ 
    Point point(1,2);

    passByReference(point);
    point.print("after calling passByReference"); 
}

int main()
{
    testPassByValue();
    
    testPassByPointer();

    testPassByReference();
}
