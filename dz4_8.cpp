#include <cstdlib>
#include<iostream>
#include <cmath>
#include <vector>
//#include "stdafx.h"
#include <random>
#include <fstream>
#include <string>
#include <algorithm>
#include <stdlib.h>

#include <cstdio>
#include <windows.h>
//#include <dos.h>
//#include<graphics.h>
using namespace std;

#define PI 3.14

using namespace std;


void main()
{
	int row1, row2, col1, col2;
	double** a, ** b, ** c;
	system("chcp 1251");
	system("cls");
	cout << "Введите количество строк первой матрицы: ";
	cin >> row1;
	cout << "Введите количество столбцов первой матрицы: ";
	cin >> col1;
	cout << "Введите количество строк второй матрицы: ";
	cin >> row2;
	cout << "Введите количество столбцов второй матрицы: ";
	cin >> col2;
	if (col1 != row2)
	{
		cout << "Умножение невозможно!";
		cin.get(); cin.get();
		return;
	}
	// Ввод элементов первой матрицы
	a = new double* [row1];
	cout << "Введите элементы первой матрицы" << endl;
	for (int i = 0; i < row1; i++)
	{
		a[i] = new double[col1];
		for (int j = 0; j < col1; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
	// Вывод элементов первой матрицы
	cout << "первая матрица" << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (a[i][j] < 0)
				cout << a[i][j] << "\t";
			else
				cout << " " << a[i][j] << "\t";
		}
		cout << endl;
	}
	// Ввод элементов второй матрицы
	b = new double* [row2];
	cout << "Введите элементы второй матрицы" << endl;
	for (int i = 0; i < row2; i++)
	{
		b[i] = new double[col2];
		for (int j = 0; j < col2; j++)
		{
			cout << "b[" << i << "][" << j << "]= ";
			cin >> b[i][j];
		}
	}
	// Вывод элементов второй матрицы
	cout << "вторая матрица" << endl;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			if (b[i][j] < 0)
				cout << b[i][j] << "\t";
			else
				cout << " " << b[i][j] << "\t";
		}
		cout << endl;
	}

// Умножение матриц
c = new double* [row1];
for (int i = 0; i < row1; i++)
{
	c[i] = new double[col2];
	for (int j = 0; j < col2; j++)
	{
		c[i][j] = 0;
		for (int k = 0; k < col1; k++)
			c[i][j] += a[i][k] * b[k][j];
	}
}
// Вывод матрицы произведения
cout << "Матрица произведения" << endl;
for (int i = 0; i < row1; i++)
{
	for (int j = 0; j < col2; j++)
		if (c[i][j] < 0)
			cout << c[i][j] << "\t";
		else
			cout << " " << c[i][j] << "\t";
	cout << endl;
}
cin.get(); cin.get();
return;
}
