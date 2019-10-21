#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	setlocale(0, "");
	double x, a, w;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите a: ";
	cin >> a;
	x = fabs(x);
	if (x < 1)
		w = a*log(x);
	else
		w = sqrt(a - x*x);
	cout << "w=" << w << endl;
	system("pause");
	return 0;
}
