#include <math.h>
#include <iostream>

using namespace std;

int main() {
    double x, a;
    cin >> a;
    cin >> x;
    if  (a - pow(x, 2)>0){
        cout << "w=" << (abs(x) < 1 ? a * log(abs(x)) : sqrt(a - pow(x, 2)));
    }else{
        cout<<"функция не определена при"<<"x="<<(x)<<"и"<<"a="<<(a);
    }

}
