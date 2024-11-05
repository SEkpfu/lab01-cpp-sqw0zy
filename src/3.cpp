#include <iostream>
using namespace std;
int main()
{
	double x, y, a, b, c, d;
	cout << "Enter x: "; 
	cin >> x;
	a = x * x; //x^2 = a
	b = a * x; // x^3 = b
	c = a * b; // x^5 = c
	d = c * c * b; // x^13 = d
	y = d - c + a - 2;
	cout << "y = " << y;
	return 0;
}