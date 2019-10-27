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
	bool minus = false;
	int number, sum, col;
	sum = 0;
	col = 0;
	string input;
	cout << "rome input I-1 V-5 X-10 L-50 C-100 D-500 M-1000" << endl;
	cin >> input;
	number = input.length();
	for (int i = 0; i <= number; ++i)
	{

		if (input[i] == '-') { minus = true; }
		if (input[i] == 'I')
		{
			sum = sum + 1;
			col++;
		}
		if (input[i] == 'V')
		{
			sum = sum + 5;
			col++;
		}
		if (input[i] == 'X')
		{
			sum = sum + 10;
			col++;
		}
		if (input[i] == 'L')
		{
			sum = sum + 50;
			col++;
		}
		if (input[i] == 'C')
		{
			sum = sum + 100;
			col++;
		}
		if (input[i] == 'D')
		{
			sum = sum + 500;
			col++;
		}
		if (input[i] == 'M')
		{
			sum = sum + 1000;
			col++;
		}
	}
	if (col == number) { cout << sum; }
	else cout << sum << "something input noncorect";
	}
