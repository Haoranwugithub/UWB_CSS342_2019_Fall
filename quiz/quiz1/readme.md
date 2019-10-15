## 2019 Autumn CSS342 C  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Student Name:
  
Problem 1, 2 and 3 will use the following Point class:

```c++
class Point{
    int x;
    int y;
public:
    Point(int x, int y) : x(x), y(y) {}
    
    // add an offset to the point
    void move(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
    }
};
```
**1. What is the default access visibility (public, private or protected) to variable x and y in the Point class? (5pt)**
***ANSWER: PRIVATE***
\
\
**2. Implement a copy constructor function for Point class with the following signature (10pt)**
```c++
    Point(Point & anotherPoint);
```
***ANSWER:***
Point(Point & anotherPoint) { x = anotherPoint.x; y = anotherPoint.y; }
\
\
\
**3. Is there any problem with the following code using the Point function in terms memory? If so, how to fix it? (20pt)**
```c++
void foo(int arraySize) {
    Point *points = new Point[arraySize];
    for (int i=0; i<arraySize; i++) {
        points[i].move(i, i);
    }
}
```
***ANSWER:***
Yes. pointer "points" needs to be deleted or the memory it points to is leaked (never free'd)
\
\
**4. What problem does the following code have in terms of memory access? (20pt)**
```c++
#include<iostream>
char *sendMessage() {
    char msg[20];
    strcpy(msg,"Hello World!");
    return(msg);
}
int main() {
    printf("%s", sendMessage());
}
```
***ANSWER: Dangling pointer. msg[20] is "free'd" (returned to system) after sendMessage() finishes. The returned pointer msg will be pointing to memory address that does not belong to this program at the printf statement***
\
\
**5. Given the following code:**
```c++
#include <iostream>
using namespace std;
class Base {
public:
    void weather () { cout<< "it is sunny" <<endl; }
    ~Base() { cout<< "~Base()" <<endl; }
};
class Derived : public Base {
    int *ptr;
public:
    Derived(int size) { ptr = new int[size]; }
    void weather () { cout<< "it is raining" <<endl; }
    ~Derived() {
        delete []ptr;
        cout<< "~Derived()" <<endl;
    }
};
int main() {
    Derived * p1 = new Derived(10);
    Base * p2 = p1;
    p2->weather();
    delete p2;
}
```
**- What's the output when it runs? (15pt)**

***ANSWER:***
```bash
it is sunny
~Base()
```
\
\
**- Does this code have memory leak? and if yes, why? (15pt)**

***ANSWER: Yes because memory pointed to by ptr is allocated in constructor but the delete in ~Derived() is never called***
\
\
**- And if it has memory leak, how to fix it? (15pt)**

***ANSWER: Mark ~Base() virtual***
  
