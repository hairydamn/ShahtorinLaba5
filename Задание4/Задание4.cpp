#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>
float Pl(float R)
{
	return (M_PI * pow(R, 2));
}

int main()
{
	setlocale(0, "ru");
	cout << "Введите радиус круга: ";
	int R;
	cin >> R;

	cout << "Площадь круга равна  " << Pl(R) << endl;
	system("pause");
}