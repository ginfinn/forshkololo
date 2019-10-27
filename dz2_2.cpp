#include <iostream>
#include <stdlib.h>  
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, a, w;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите a: ";
	cin >> a;
	if (abs(x) >= 1)
	{
		if ((a - x * x) < 0)
		{
			cout << "Функция не определена.";
		}
		else
		{
			w = sqrt(a - x * x);
			cout << "w = " << w << " \n";
		}
	}
	else
	{
		if (x==0)
		{
			cout << "Функция не определена.";
		}
		else
		{
			w = a * log(abs(x));
			cout << "w = " << w << " \n";
		}
	}
}
