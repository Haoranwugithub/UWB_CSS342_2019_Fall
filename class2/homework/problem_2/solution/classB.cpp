#include "classB.h"

DerivedB::DerivedB(int size) {
	printf("new Derived B obj\n");
	ptr = (size>0) ? new int[size] : nullptr;
}

void DerivedB::print () 
{ cout<< "print(virtual) DerivedB class" <<endl; } 

void DerivedB::show () 
{ cout<< "show(non-virtual) in DerivedB class" <<endl; } 

DerivedB::~DerivedB() {
	delete []ptr;
	cout<< "~DerivedB() called" <<endl; 
}
