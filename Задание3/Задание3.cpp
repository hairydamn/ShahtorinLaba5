#include <iostream>
using namespace std;
float srAr(int a, int b, int c)
{
	return ((a + b + c) / 3.0);
}

int main()
{
	setlocale(0, "ru");
	cout << "Введите первое число:";
	int q;
	cin >> q;

	cout << "Введите второе число:";
	int w;
	cin >> w;

	cout << "Введите третье число:";
	int e;
	cin >> e;

	cout << "Среднее арифметическое введёных вами чисел равна " << srAr(q, w, e) << endl;
	system("pause");
}