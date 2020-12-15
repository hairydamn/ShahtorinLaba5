#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int perevod(float a) //Метод для формулы
{
	return ((180 / M_PI) * a);
}

int main()
{
	setlocale(0, "ru");
	cout << "Введите количество радиан" << endl;
	float c;
	cin >> c;
	cout << "Градусов " << perevod(c) << endl;
	system("pause");
}
