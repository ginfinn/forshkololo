#include<iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include<iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <stdlib.h>
#define PI 3.14

using namespace std;
void main()
{
	string  input;
	string line;
	int sum = 0;
	ofstream myfile("D:\\example.txt");
	if (myfile.is_open())
	{
		cout << "input=`";
		for (int i = 0; i < 10; i++) {
			cin >> input;
			myfile << input << endl;
		}


		myfile.close();
	}
	else
	{
		cout << "Unable to open file";
		return;
	}
	ifstream myfile1("D:\\example.txt");
	if (myfile1.is_open())
	{
		while (getline(myfile1, line))
		{
			sum = sum + atoi(line.c_str());
		}
		cout << sum;
		myfile1.close();
	}
	else
	{
		cout << "Unable to open file";
		return;
	}
}
