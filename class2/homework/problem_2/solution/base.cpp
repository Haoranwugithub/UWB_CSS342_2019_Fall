#include "base.h"

void Base::print () { 
	cout<< "print(virtual) in Base class" <<endl; 
} 

void Base::show () { 
	cout<< "show(non-virtual) in Base class" <<endl; 
} 

// why is this destructor virtual?
Base::~Base() {
	cout<< "~Base() called" <<endl; 
}
