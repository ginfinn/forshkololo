#include <string.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int Rim(char A)
{
	if (A == 'I')
		return 1;
	if (A == 'V')
		return 5;
	if (A == 'X')
		return 10;
	if (A == 'L')
		return 50;
	if (A == 'C')
		return 100;
	if (A == 'D')
		return 500;
	if (A == 'M')
		return 1000;
}
int main()
{
	char str[10] = "";
	gets_s(str);
	int k, a, b;
	int s = 0;
	int d = strlen(str);
	if (d == 1)
		cout << Rim(str[0]) << endl;
	else {
		for (int i = 1; i <= d; i++) {
			a = Rim(str[i - 1]);
			b = Rim(str[i]);
			if (a < b) {
				s = s + (b - a);
				i++;
			}
			else
				s = s + a;
		}
		cout << s << endl;
	}
	system("pause");
	return 0;
}
