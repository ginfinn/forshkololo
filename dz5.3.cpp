#include <iostream>

using namespace std;

double Round(double i)
{
	return 3.14*i*i;
}

double Square(double i)
{
	return i*i;
}

double Nsquare(double i, double j)
{
	return i*j;
}

double Triangle(double i, double j)
{
	return 0.5 * i*j;
}

int main()
{
	setlocale(0, "");
	int n;
	double a, b;
	double S = 0;
	cout << "Сколько сторон? (у круга 0 или 1)" << endl;
	cin >> n;
	if ((n>4) || (n<0))
		cout << "Не рассчитана под счёт подобного" << endl;
	else {
		if ((n == 0) || (n == 1)) {
			cout << "Введите радиус: ";
			cin >> a;
			S = Round(a);
		}
		if (n == 3) {
			cout << "Введите основание: ";
			cin >> a;
			cout << "Введите высоту: ";
			cin >> b;
			S = Triangle(a, b);
		}
		if (n == 4) {
			char q = '_';
			cout << "квадрат?(Y/N)" << endl;
			cin >> q;
			if ((q == 'y') || (q == 'Y')) {
				cout << "Введите сторону: ";
				cin >> a;
				S = Square(a);
			}
			else {
				cout << "прямоугольник?(Y/N)" << endl;
				cin >> q;
				if ((q == 'y') || (q == 'Y')) {
					cout << "Введите высоту: ";
					cin >> a;
					cout << "Введите ширину: ";
					cin >> b;
					S = Nsquare(a, b);
				}
				else
					cout << "Не рассчитана под счёт подобного" << endl;
			}
		}
		if (S != 0)
			cout << "Площадь равна: " << S << endl;
	}
	system("pause");
	return 0;
}
