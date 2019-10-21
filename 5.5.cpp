#include <iostream>
using namespace std;

int main()
{
	char A[5][7] = { {"  *   "},{"*   * "},{"     *"},{"      "},{"      "} };
	char B[5][7] = { {"      "},{"      "},{"     *"},{"*   * "},{"  *   "} };
	int n;
	cin >> n;
	for (int j = 0; j < 5; j++) {
		if (j == 2)
			cout << "*";
		else
			cout << " ";
		for (int k = 0; k < n; k++) {
			if (k % 2 == 0) {
				for (int i = 0; i < 7; i++)
					cout << A[j][i];
			}
			else {
				for (int i = 0; i < 7; i++)
					cout << B[j][i];
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
