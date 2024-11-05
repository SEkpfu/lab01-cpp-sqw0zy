#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	cout << "Enter the square of sphere: ";
	double square, r, v;
	cin >> square;
	r = sqrt(square / (4 * M_PI));
	v = M_PI * (4. / 3) * r * r * r;
	cout << v;
	return 0;
}