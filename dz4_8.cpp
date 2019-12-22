#include <iostream>
using namespace std;

void max(float x0, float x1, float x2) //поиск макс ф-ции
{
	if (x0 > x1 && x0 > x2)
		cout << 1;
	else if (x0<x1 && x1>x2)
		cout << 2;
	else if (x0 < x2 && x1 < x2)
		cout << 3;
	else if (x0 == x1 && x1 > x2)
		cout << "1 and 2";
	else if (x0 < x1 && x1 == x2)
		cout << "2 and 3";
	else if (x0 == x2 && x1 < x2)
		cout << "1 and 3";
	else if (x0 == x1 && x1 == x2)
		cout << "1 and 2 and 3";
}

void min(float x0, float x1, float x2)//поиск мин
{
	if (x0 < x1 && x0 < x2)
		cout << 1;
	else if (x0 > x1 && x1 < x2)
		cout << 2;
	else if (x0 > x2 && x1 > x2)
		cout << 3;
	else if (x0 == x1 && x1 < x2)
		cout << "1 and 2";
	else if (x0 > x1 && x1 == x2)
		cout << "2 and 3";
	else if (x0 == x2 && x1 > x2)
		cout << "1 and 3";
	else if (x0 == x1 && x1 == x2)
		cout << "1 and 2 and 3";
}

int main()
{
	float max;
	float min;
	float max1;
	float min1;
	setlocale(LC_ALL, "Rus");
	float A[3][4], B[4][2], C[3][2]; //столбцы и строки
	int i, j, k;
	for (i = 0; i < 3; i++) //делаем матрицу
	{
		for (j = 0; j < 2; j++)
		{
			C[i][j] = 0;
		}
	}
	for (i = 0; i < 3; i++)
	{
		cout << endl << "введите количество для продавца " << i + 1 << ": "; //заполняем матрицу
		for (j = 0; j < 4; j++)
		{
			cin >> A[i][j];
		}
	}
	for (i = 0; i < 4; i++)
	{
		cout << endl << "введите цену и комиссию за товар " << i + 1 << ": ";
		cin >> B[i][0] >> B[i][1];
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 2; k++)
			{
				C[i][k] += A[i][j] * B[j][k];
			}
		}
	}
	for (int i = 0; i <= 1;i++) {
		if (C[i + 1][0] < C[i][0]) {
			max = C[i][0];
		}
		else {
			max = C[i+1][0];
		}
	}
	for (int i = 0; i <= 1; i++) {
		if (C[i + 1][0] < C[i][0]) {
			min = C[i+1][0];
		}
		else {
			min = C[i][0];
		}
	}
	for (int i = 0; i <= 1; i++) {
		if (C[i + 1][1] < C[i][1]) {
			max1 = C[i][1];
		}
		else {
			max1 = C[i + 1][1];
		}
	}
	for (int i = 0; i <= 1; i++) {
		if (C[i + 1][1] < C[i][1]) {
			min1 = C[i + 1][1];
		}
		else {
			min1 = C[i][1];
		}
	}
	//max(C[0][0], C[1][0], C[2][0]);
	cout << endl << "Максимальные деньги полученные продавцом " <<max << endl;
	//max(C[0][0], C[1][0], C[2][0]);
	cout << endl;
	//min(C[0][0], C[1][0], C[2][0]);
	cout << "Минимальные деньги полученные продавцом " <<min << endl;
	//min(C[0][0], C[1][0], C[2][0]);
	//max(C[0][1], C[1][1], C[2][1]);
	cout << "максимальные комиссионные деньги полученные продавцом " <<max1 <<endl;
	//max(C[0][1], C[1][1], C[2][1]);
	//min(C[0][1], C[1][1], C[2][1]);
	cout << "минимальные комиссионные деньги полученные продавцом " <<min1 <<endl;
	//min(C[0][1], C[1][1], C[2][1]);
	cout << "сумма = " << C[0][0] + C[1][0] + C[2][0] << endl;
	cout << " обшая сумма = " << C[0][0] + C[1][0] + C[2][0] + C[0][1] + C[1][1] + C[2][1] << endl;
	cout << "сумма комиссионных = " << C[0][1] + C[1][1] + C[2][1];
