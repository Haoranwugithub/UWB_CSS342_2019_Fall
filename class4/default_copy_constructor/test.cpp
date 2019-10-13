#include "myArray.h"

#define IntArray MyArray<int>

int main() {

	IntArray *p1 = new IntArray(5);
	p1->add(1);

	IntArray *p2 = new IntArray(*p1); 
	p2->add(2);

	delete p1;

	delete p2;
}
