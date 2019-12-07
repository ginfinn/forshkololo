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
using  namespace std;
int main()
{
	ofstream myfile;
	/*myfile.open("D:\\example.txt");
	if (myfile.is_open())
	{

		myfile << "asofgubsjdfn1i12e13jkb\n";



	}*/
	myfile.close();
	ifstream myfile1;
	myfile1.open("D:\\example.txt");
	if (myfile1.is_open()) {
		string s;

		while (getline(myfile1, s)) {
			cout << s << endl;
		}

	}
}
