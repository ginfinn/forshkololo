#include<iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <stdlib.h>


using namespace std;
void main() {
	string line;
	int i = 0;
	int number;
	bool has_space = false;
	bool has_digital = false;
	ifstream myfile("D:\\example.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			
		
			number = line.length();
			while (line[i])
			{
				if (isdigit(line[i])) {
					cout << line[i];
					has_space = false;
					has_digital = true;
				}
				else {
					if (!has_space) {
						has_space = true;
						cout << " ";
					}
				}
				i++;
			}
			cout << "\n";
		}
		if (!has_digital) {
			cout << "v faile net cifr";
		}
	}
}
