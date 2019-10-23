#include "classA.h"
#include "classB.h"

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
