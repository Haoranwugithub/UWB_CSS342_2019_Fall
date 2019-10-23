//forward declaration
#include <iostream>

void testReverse();
void testSort();
void testAdd(); 
void testSubscriptOperator();
void testCopyConstructor();

int main() {
    std::cout << "Hello, World!" << std::endl;

    // run tests
    testSubscriptOperator();
    testAdd();
    testSort();
    testReverse();
	testCopyConstructor();
}
