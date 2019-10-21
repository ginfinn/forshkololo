#include <iostream>

using namespace std;
int main()
{
	setlocale(0, "");
	double N;
	int i;
	cout << "Введите N: ";
	cin >> N;
	int n = (int)(N+.5);
	for (i = n; i < n + 10; i++) {
		cout << i <<" ";
	}
	system("pause");
	return 0;
}
