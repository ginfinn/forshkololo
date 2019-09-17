#include <iostream>
using namespace std;
int main()
{
	
	
	for (double i = -4.0; i <= 4; i += 0,5) {
		cout <<"y=" << (pow(i,2)-2*i+2)/(i-1) << endl;
	}

}
