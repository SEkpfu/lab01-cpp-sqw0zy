#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Введите 3 целых числа (а, б, и с): ";
	int a, b, c;
	cin >> a >> b >> c;
	(a * c > 100 ? cout << max(a, max(c, b)) : cout << "a * a = " << a * a << "\nb * b = " << b * b << "\nc * c = " << c * c);
	return 0;
}