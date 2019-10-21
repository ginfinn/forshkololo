#include <string.h>
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>

using namespace std;

int Innorm(char Q)
{
	if (Q == 'A')
		return (10);
	if (Q == 'B')
		return (11);
	if (Q == 'C')
		return (12);
	if (Q == 'D')
		return (13);
	if (Q == 'E')
		return (14);
	if (Q == 'F')
		return (15);
}

int Inten(int n, char A[])
{
	int x;
	int S = 0;
	int j = strlen(A);
	j--;
	for (int i = 0; i <= j; i++) {
		if (isdigit(A[i])) {
			x = A[i] - 0x30;
			S = S + x*pow(n, j-i);
		}
		else {
			x = Innorm(A[i]);
			S = S + x*pow(n, j-i);
		}
	}
	return S;
}
int Innew(int z,int y) 
{
	int i = 0;
	char A[255];
	while (z > 0) {
		A[i] = (z%y) + 0x30;
			i++;
		z = z / y;
	}
	i--;
	for (int j = 0; j <= i / 2; j++)
		swap(A[j], A[i - j]);
	return atoi(A);
}

int main()
{
	setlocale(0, "");
	int a, b, k, f;
	char A[255];
	cout << "Введите число: ";
	gets_s(A);
	cout << "Его основание? ";
	cin >> a;
	cout << "Новое основание? ";
	cin >> b;
	if (a == b)
		cout << A << endl;
	else {
		if (a != 10)
		{
			if (b != 10) {
				k = Inten(a, A);
				f = Innew(k, b);
			}
			else
				f = Inten(a, A);
		}
		else
		{
			k = atoi(A);
			f = Innew(k, b);
		}
		cout << f << endl;
	}
	system("pause");
	return 0;
}
