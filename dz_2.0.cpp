#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double h, R, r, l;
    l=(2*M_PI*R);
    cin >> R;
    cin >> r;

    cin >> h;

    cout << "V=" << (M_PI * h / 3 * (pow(R, 2) + (R * r) + pow(r, 2)));
    cout << "S=" << (M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2)));
}
