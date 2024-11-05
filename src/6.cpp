#include <iostream>
using namespace std;
int main()
{
	int n;
	double s{};
	cout << "Enter n:";
	cin >> n;
	double a{0};
	for (int i = 1; i <= n; i++)
	{
		//s += 1. / cos(i); wrong:(
		a += cos(i);
		s += 1. / a;
		//cout << a << "\t" << s << endl; для проверки
	}
	cout << "S = " << s;
	return 0;
}