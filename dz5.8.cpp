#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	setlocale(0, "");
	const int m = 3;
	const int n = 4;
	const int x = 2;
	double min1 = INT16_MAX, min2 = INT16_MAX;
	double max1 = 0, max2 = 0, sum1 = 0, sum2 = 0;
	double top1, top2, lox1, lox2, S;
	double A[m][n] = { {5,2,0,10},{3,5,2,5},{20,0,0,0} };
	double B[n][x] = { {1.2,0.5},{2.8,0.4},{5,1},{2,1.5} };
	double C[m][x] = { {0,0},{0,0},{0,0} };
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < x; j++) {
			for (int k = 0; k < n; k++) {
				C[i][j] += A[i][k]*B[k][j];
			}
			cout << C[i][j] << " ";
			if (j == 0) {
				if (C[i][j] > max1) {
					max1 = C[i][j];
					top1 = i+1;
				}
				if (C[i][j] < min1) {
					min1 = C[i][j];
					lox1 = i+1;
				}
				sum1 += C[i][j];
			}
			if (j == 1) {
				if (C[i][j] > max2) {
					max2 = C[i][j];
					top2 = i+1;
				}
				if (C[i][j] < min2) {
					min2 = C[i][j];
					lox2 = i+1;
				}
				sum2 += C[i][j];
			}

		}
		cout << endl;
	}
	S = sum1 + sum2;
	cout << "Больше всего денег выручил продавец номер " << top1 <<endl;
	cout << "Меньше всего денег выручил продавец номер " << lox1 << endl;
	cout << "Наибольшие комиссионные получил продавец номер " << top2 << endl;
	cout << "Наименьшие комиссионные получил продавец номер " << lox2 << endl;
	cout << "Всего денег с продаж было вырученно: " << sum1 << endl;
	cout << "Всего комиссионных было получено: " << sum2 << endl;
	cout << "Общее количество денег, прошедших через продавцов : " << S << endl;
	system("pause");
	return 0;
}
