#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double r, m;
	double S, p, n, otvet;

	p = 0;
	cout << "Input S" << endl;
	cin >> S;
	cout << "Input m" << endl;
	cin >> m;
	cout << "Input n" << endl;
	cin >> n;
	r = p / 100;
	for (double r = 0; r < 1; r += 0.01) {
		if (((S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) - m) < 0.01)
			otvet = r;
	}
	cout << otvet * 100  << endl;
}
