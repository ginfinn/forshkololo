#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	double x, a;
	cin >> x;
	cin >> a;

	cout << "w=" << (abs(x) < 1 ? a * log(x) : sqrt(a - pow(x, 2)));


}
