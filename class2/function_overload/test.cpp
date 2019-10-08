// overloading functions
#include <iostream>
using namespace std;

int operate (int a, int b)
{

	return (a * b);
}

double operate (double a, double b)
{
	return (a + b);
}

double operate (double a)
{
	return operate(a, a);
}

int operate (int a)
{
	return operate(a, a);
}

int main ()
{
	cout << operate (3, 2.0) << '\n';
	cout << operate (1.5, 2.3) << '\n';
	cout << operate (4.1) << '\n';
	cout << operate (4.0) << '\n';
	return 0;
}
