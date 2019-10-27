#include<iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <stdlib.h>


using namespace std;
void main()
{
	ofstream myfile;
	myfile.open("D:\\example.txt");
	if (myfile.is_open())
	{

		myfile << "asofgubsjdfn1i12e13jkb\n";



	}
	myfile.close();
	ifstream myfile1;
	myfile1.open("D:\\example.txt");
	if (myfile1.is_open()) {
		string s;

		getline(myfile1, s);
		cout << s;

	}
}
