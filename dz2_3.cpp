#include <iostream>
#include <stdlib.h>  
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double z, b, x, y;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	if (((b - y) <= 0) or ((b - x) < 0))
	{
		cout << "Функция не определена.";
	}
	else
	{
		z = log(b - y) * (sqrt(b - x));
		cout << "z = " << z;
	}
}
