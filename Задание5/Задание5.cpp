#include <iostream>
using namespace std;
bool plndrof5(int x)
{
	if ((x / 10000 == x % 10) && (x % 10000 / 1000) == (x % 100) / 10)
		return true;
	else return false;
}
int main()
{
	setlocale(0, "ru");
	int x;
	cout << "Введите 5-тизначное число: ";
	cin >> x;
	if (x <= 9999 || x >= 100000)
		cout << "Ошибка!!! ";
	else
		if (plndrof5(x)) {
			cout << "Число " << x << " является числом-палиндром" << endl;
		}
		else { cout << "Число " << x << " не является числом-палиндром" << endl; }
	system("pause");
}
