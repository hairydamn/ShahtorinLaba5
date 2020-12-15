
#include <iostream>
using namespace std;

float milestokm(float miles) {
	return miles * 1.609344;
}

float milestoft(float miles) {
	return miles * 5280;
}

int main()
{
	setlocale(NULL, "rus");
	float miles;
	cout << "Введите количество миль" << endl;
	cin >> miles;
	cout << miles << " mi = " << milestokm(miles) << " km" << endl;
	cout << miles << " mi = " << milestoft(miles) << " ft" << endl;
	system("pause");
}
