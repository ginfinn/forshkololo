#include <iostream>
#include <math.h>
using  namespace std;
int main()
{
	int a, b, c,x1,x2;
	cin >> a;
	cin >> b;
	cin >> c;
	int D = pow(b, 2) - (4 * a * c);
	if (D >= 0 && a != 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << x1 << endl << x2;
	}
	if (D < 0) {
		cout << "net resh";
	}
}
