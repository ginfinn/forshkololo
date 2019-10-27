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
int znak(int a) {
	
	if (a > 0)
		return 1;

	else if (a == 0)
		return 0;

	else
		return -1;
	
}
void main()
{
	int a;
	cout << " input number";
	cin >> a;
	cout << znak (a);
	}
