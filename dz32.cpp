#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	setlocale(0, "");
	double S, m, n, p, r, x, y;
	cout << "Сумма кредита: ";
	cin >> S;
	cout << "Ежемесячная выплата: ";
	cin >> m;
	cout << "Срок: ";
	cin >> n;
	p = 0;
	x = m;
	y = 0;
	while (y <= x) {
		p = p + 1;
		r = p / 100;
		y = (S*r*pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
	}
	cout << "Процент = " << p << endl;
	system ("pause");
	return 0;
}
