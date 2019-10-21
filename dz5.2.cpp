#include <iostream>

using namespace std;
int Sign(double a)
{
	if (a > 0)
		return 1;
	if (a = 0)
		return 2;
	if (a < 0)
		return -1;
}
int main()
{
	double a;
	int b;
	cin >> a;
	b = Sign(a);
	if (b==2)
		cout << "sign x=0" << endl;
	else
		cout << "sign x=" << b << endl;
	system("pause");
	return 0;
}
