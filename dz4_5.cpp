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
	int x, y;
	COLORREF yellow = RGB(255, 255, 0);
	COLORREF lightblue = RGB(173, 216, 230);

	// make sure the names match
	wstring str(L"ConGraphics");
	SetConsoleTitle(str.c_str());
	HWND hWnd = FindWindow(NULL, str.c_str());
	HDC hDC = GetDC(hWnd);

	while (true) {
		// draw a yellow sine curve
		for (x = 0; x < 700; x++)
		{
			// center at y = 200 pixels
			y = (int)(sin(x / 100.0) * 100 + 200);
			SetPixel(hDC, x, y, yellow);
		}

		// draw center line
		for (x = 0; x < 700; x++)
		{
			SetPixel(hDC, x, 200, lightblue);
		}
	}
	
	
	ReleaseDC(hWnd, hDC);
	DeleteDC(hDC);
	getchar();

	}
