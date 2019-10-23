#include "base.h"

class DerivedB:public Base 
{ 
    int *ptr;

    public: 
        DerivedB(int size); 
        void print ();
        void show ();
        ~DerivedB();
}; 

