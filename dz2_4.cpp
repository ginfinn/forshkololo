#include <iostream>
#include <math.h>
using  namespace std;
int main()
{
	int a;
	cin >> a;
	a = abs(a);
	for (int i = 0; i <= 10; i++) {
		cout << a << endl;
		a=a++;
		
	}
}
