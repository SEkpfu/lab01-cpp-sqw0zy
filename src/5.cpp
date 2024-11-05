#include <iostream>
using namespace std;
int main()
{
	int n, count{};
	double x, y;
	cout << "Enter n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter x and y:";
		cin >> x >> y;
		if ((x <= 0 && y >= 0 && (y <= 2 * x + 4)) || ((x * x + y * y <= 16) && ((x >= 0 && y >= 0) || (x >= 2 && x <= 4 && y <= 0))))
			count++;
	}
	cout << "The amount of points in the area = " << count;
	return 0;
}
/*
1-ая четверть: (x >= 0 && y >= 0 && (x*x + y*y <= 16))
2-ая четверть: (x <= 0 && y >= 0 && (y <= 2*x + 4))
3-ья четверть: nothing
4-ая четверть: (x >= 2 && x <= 4 && y <= 0 && (x * x + y * y <= 16)
*/