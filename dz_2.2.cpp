#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(0, "");
	double x,y,b;
	cout << "Введите x:";
	cin >> x;
	cout << "Введите y:";
	cin >> y;
	cout << "Введите b:";
	cin >> b;
	if ((b - y>=0) && (b - x>=0)) {
		double z = log((b - y))*sqrt((b - x));
		cout << z << endl;
	}
	else
		cout << "Решений нет!";
	system("pause");
	return 0;
}
