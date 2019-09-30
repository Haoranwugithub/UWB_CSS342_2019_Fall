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

        virtual ~Base() {
            cout<< "~Base() called" <<endl; 
        }
}; 

class DerivedA:public Base 
{ 
    int *ptr;

    public: 
        DerivedA(int size) {
            printf("new Derived A obj\n");
            ptr = (size>0) ? new int[size] : nullptr;
        }

        void print () 
        { cout<< "print(virtual) Derived class" <<endl; } 

        void show () 
        { cout<< "show(non-virtual) in Derived class" <<endl; } 
        
        ~DerivedA() {
            delete []ptr;
            cout<< "~DerivedA() called" <<endl; 
        }
}; 

class DerivedB:public Base 
{ 
    int *ptr;

    public: 
        
        DerivedB(int size) {
            printf("new Derived B obj\n");
            ptr = (size>0) ? new int[size] : nullptr;
        }

        void print () 
        { cout<< "print(virtual) Derived class" <<endl; } 

        void show () 
        { cout<< "show(non-virtual) in Derived class" <<endl; } 
        
        ~DerivedB() {
            delete []ptr;
            cout<< "~DerivedB() called" <<endl; 
        }
}; 

int main() 
{ 
    DerivedA * pA = new DerivedA(10); 
    DerivedB * pB = new DerivedB(20); 

    //NON-VIRTUAL function, binded at compile time 
    Base * pBase = pA;
    pBase->show();  

    pBase = pB;
    pBase->show();  

    //VIRTUAL function, binded at runtime 
    pBase = pA;
    pBase->print();  

    pBase = pB;
    pBase->print();  

    // which descructor is called? 
    pBase = pA;
    delete pBase;
    
    pBase = pB;
    delete pBase;
}
