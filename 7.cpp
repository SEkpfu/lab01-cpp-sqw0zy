#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	cout << "Введите целое число n:";
	cin >> n;
	double count9{}, count8{}, count6{}, sum{};
	for (int i{}; i < n; i++)
	{
		int number;
		cout << "Введите целое число:";
		cin >> number;
		if (abs(number) % 10 == 9)
			count9++;
		else if (abs(number) % 10 == 8)
			count8++;
		if (abs(number) % 6 == 0)
			count6++;
		int numb = abs(number);
		int count{};
		while (numb > 10)
			numb /= 10;
		if (numb == 3)
			sum += number;
	}
	if (count9 > 0 || count8 > 0)
		cout << "Среднее арифметическое чисел, оканчивающихся на 9 или 8 = " << (count9 * 9 + count8 * 8) / (count9 + count8) << endl;
	else
		cout << "Среднее арифметическое чисел, оканчивающихся на 9 или 8 не может быть вычислено, т.к. таких чисел нет \n";
	cout << "Общее количество чисел, кратных 6 = " << count6 << endl;
	cout << "Сумма чисел, начинающихся на 3 = " << sum;
	return 0;
}