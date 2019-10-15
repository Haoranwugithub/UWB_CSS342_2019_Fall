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
