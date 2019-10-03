#include "circular_card.h" 
#include "rectangular_card.h" 
#include<iostream> 
using namespace std;

int main() {
    rectangular_card rc(2, 3);
    circular_card cc(5);

    card* pc = &rc;
    cout << "area of the rectangular card is " << pc->area() << ".\n";

    pc = &cc;
    cout << "area of the circular card is " << pc->area() << ".\n";
}

