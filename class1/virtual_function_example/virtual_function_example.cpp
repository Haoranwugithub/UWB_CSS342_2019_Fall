#include<iostream> 
using namespace std; 

class Base 
{ 
    public: 
        virtual void print () { 
            cout<< "print(virtual) in Base class" <<endl; 
        } 

        void show () { 
            cout<< "show(non-virtual) in Base class" <<endl; 
        } 

        ~Base() {
            cout<< "~Base() called" <<endl; 
        }
}; 

class Derived:public Base 
{ 
    public: 
        void print () 
        { cout<< "print(virtual) Derived class" <<endl; } 

        void show () 
        { cout<< "show(non-virtual) in Derived class" <<endl; } 
        
        ~Derived() {
            cout<< "~Derived() called" <<endl; 
        }
}; 

int main() 
{ 
    Base *basePtr = new Derived(); 

    //virtual function, binded at runtime 
    basePtr->print();  

    // Non-virtual function, binded at compile time 
    basePtr->show();  

    delete basePtr;
} 
