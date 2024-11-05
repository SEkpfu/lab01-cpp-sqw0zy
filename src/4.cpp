#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double v, h;
	cout << "Enter v:";
	cin >> v;
	if (v >= 2)
		h = (10 / (M_PI * v));
	else if (v <= -2)
		h = sqrt(v * v + 1 / v);
	else
		h = (v + 1) * (v + 1);
	cout << "h = " << h;
	return 0;
}