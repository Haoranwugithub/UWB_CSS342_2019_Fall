#include "circular_card.h" 
#include "rectangular_card.h" 
#include<iostream> 
using namespace std;

int main() {
    rectangular_card<double> rc(2, 3);
    circular_card<double> cc(5);

    card<double> *pc = &rc;

    cout << "Area of the rectangular card is " << pc->area() << ".\n";

    pc = &cc;
    cout << "Area of the circular card is " << pc->area() << ".\n";
}

