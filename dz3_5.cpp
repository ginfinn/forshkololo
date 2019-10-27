#include<iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <stdlib.h>


using namespace std;
void main(){
	//сортировка
// char chr;
	int number = 0;
	string cach[30];
	//string alph_ideal = "asdaknabcdefghijklmnopqrstuvwxy" ;
	string aplh = "qwertyuiopasdfghjklzxcvbnmofnd";
	number = aplh.length();
	for (int i = 0; i < number; ++i)
	{
		cach[i] = aplh[i];
	}
	sort(begin(cach), end(cach));
	for (auto& s : cach) { cout << s << " "; }
}
