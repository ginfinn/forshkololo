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

double triangle(int storona) {

	double S = (storona * storona * sqrt(3)) / (4);
	return S;

}
int sqad(int storona_1, int storona_2)
{

	int S = storona_1 * storona_2;
	return S;
}
double cirkle(int R)
{
	double S = PI * R * R;
	return S;
}
void main()
{
	int a, b, r;
	cout << "side of triangle" << endl;
	cin >> a;
	cout << "side(second) of hetirexugolnik" << endl;
	cin >> b;
	cout << "radius" << endl;
	cin >> r;
	cout << "triangle" << " " << triangle(a) << endl;
	cout << "pryamougolnik" << " " << sqad(a, b) << endl;
	cout << "cirkle" << " " << cirkle(r) << endl;
	}
