#include "circular_card.h" 
#include "rectangular_card.h" 
#include<iostream> 
using namespace std;

void test_circular_card_area();
void test_rectangular_card_area();
void test_circular_card_perimeter();
void test_rectangular_card_perimeter();

int main() {
    rectangular_card<double> rc(2, 3);
    circular_card<double> cc(5);

    card<double> *pc = &rc;

    cout << "Area of the rectangular card is " << pc->area() << ".\n";

    pc = &cc;
    cout << "Area of the circular card is " << pc->area() << ".\n";

	test_circular_card_area();
	test_rectangular_card_area();
	test_circular_card_perimeter();
	test_rectangular_card_perimeter();
}

template<typename T>
T circular_card_area(T radius) {
	return PI * radius * radius;
}

void test_circular_card_area() {
	int testSize = 5;
	for (int i=0; i<testSize; i++) {
		circular_card<double> c1(i);
		double expect  = circular_card_area<double>(double(i)); 
		double actual = c1.area();
		if (actual != expect) {
			printf("test_circular_card_area FAILED. expect %f, actual %f, i=%d\n",
					expect, actual, i);
			return;
			}
	}
	printf("test_circular_card_area PASSED.\n");
}

template<typename T>
T rectangular_card_area(T width, T height) {
	return width * height; 
}

void test_rectangular_card_area() {
	int testSize = 5;
	for (int i=0; i<testSize; i++) {
		rectangular_card<double> c1(i, i+1);
		double expect  = rectangular_card_area<double>(double(i), double(i+1)); 
		double actual = c1.area();
		if (actual != expect) {
			printf("test_rectangular_card_area FAILED. expect %f, actual %f, i=%d\n",
					expect, actual, i);
			return;
			}
	}
	printf("test_rectangular_card_area PASSED.\n");
}

template<typename T>
T circular_card_perimeter(T radius) {
	return 2 * PI * radius;
}

void test_circular_card_perimeter() {
	int testSize = 5;
	for (int i=0; i<testSize; i++) {
		circular_card<double> c1(i);
		double expect  = circular_card_perimeter<double>(double(i)); 
		double actual = c1.perimeter();
		if (actual != expect) {
			printf("test_circular_card_perimeter FAILED. expect %f, actual %f, i=%d\n",
					expect, actual, i);
			return;
			}
	}
	printf("test_circular_card_perimeter PASSED.\n");
}

template<typename T>
T rectangular_card_perimeter(T width, T height) {
	return 2 * (width + height); 
}

void test_rectangular_card_perimeter() {
	int testSize = 5;
	for (int i=0; i<testSize; i++) {
		rectangular_card<double> c1(i, i+1);
		double expect  = rectangular_card_perimeter<double>(double(i), double(i+1)); 
		double actual = c1.perimeter();
		if (actual != expect) {
			printf("test_rectangular_card_perimeter FAILED. expect %f, actual %f, i=%d\n",
					expect, actual, i);
			return;
			}
	}
	printf("test_rectangular_card_perimeter PASSED.\n");
}
