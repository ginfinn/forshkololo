#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	setlocale(0, "");
	ifstream in("D:\\files\\input.txt");
	char a[30];
	int i, j;
	for (i=0; i<=29; i++) {
		in >> a[i];
	}
	for (int i = 29; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
	in.close();
	ofstream out("D:\\files\\output.txt");
	for (i = 0; i <= 29; i++) {
		out << a[i];
	}
	out.close();
	system("pause");
	return 0;
}
