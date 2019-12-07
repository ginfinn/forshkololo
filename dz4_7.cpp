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
	int m = 37;
	int i = 3;
	int c = 64;
	int s =0;
	for(int k =0 ; k<20 ;++k)
	{
		s = (m*s+i) % c;
		cout<< s<<" ";
	}
	}
