#include <iostream>

using namespace std;

int Random(int S, int k)
{
	if (k == 1) {
		int m = 37, i = 3, c = 64;
		S = (m*S + i) / c;
	}
	else {
		int m = 25173, i = 13849, c = 65537;
		S = (m*S + i) / c;
	}
		
	return S;
}
int main()
{
	int n,k;
	int S = 1000000;
	cin >> k;
	cin >> n;
	for (int j = 1; j <= n; j++)
	{
		S = Random(S,k);
		cout << S << " ";
	}
	system("pause");
	return 0;
}
