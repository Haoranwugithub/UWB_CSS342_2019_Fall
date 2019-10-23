#include "base.h"

class DerivedA:public Base 
{ 
    int *ptr;
    public: 
        DerivedA(int size); 
        void print ();
        void show ();
        ~DerivedA();
}; 
