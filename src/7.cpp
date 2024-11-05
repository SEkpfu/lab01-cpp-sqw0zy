#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	cout << "Введите целое число n:";
	cin >> n;
	double count9{}, count8{}, count6{}, sum{}, sum89{};
	for (int i{}; i < n; i++)
	{
		int number;
		cout << "Введите целое число:";
		cin >> number;
		int numb = abs(number);
		int count{};
		if (numb % 10 == 9)
		{
			count9++;
			sum89 += number;
		}
		else if (numb % 10 == 8)
		{
			count8++;
			sum89 += number;
		}
		if (number % 6 == 0)
			count6++;
		while (numb > 10)
			numb /= 10;
		if (numb == 3)
			sum += number;
	}
	if (count9 + count8 > 0)
		cout << "Среднее арифметическое чисел, оканчивающихся на 9 или 8 = " << sum89 / (count9 + count8) << endl;
	else
		cout << "Среднее арифметическое чисел, оканчивающихся на 9 или 8 не может быть вычислено, т.к. таких чисел нет \n";
	cout << "Общее количество чисел, кратных 6 = " << count6 << endl;
	cout << "Сумма чисел, начинающихся на 3 = " << sum;
	return 0;
}