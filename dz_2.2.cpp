#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x, y, b;
    cin>>x>>y>>b;

    if (sqrt(b - x) > 0&&log(b - y)>0)
    {
        cout << "z=" << log(b - y) * sqrt(b - x);
    }else
        cout<<"функция не определена при данных значениях";
}
