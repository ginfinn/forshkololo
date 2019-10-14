#include <iostream>
#include <cmath>

using namespace std;

class Jopa {
    static double p, S, r, n;

public:
    double static M();
};

double Jopa::p, Jopa::S, Jopa::r, Jopa::n;

double Jopa::M() {
    cin >> p;
    cin >> S;
    cin >> n;
    r = p / 100;
    if (12 * (pow((1 + r), n) - 1) > 0) {
        return (S * r * pow((1 + r), n) / (12 * (pow((1 + r), n) - 1)));
    }
    return -1;
}

int main() {
    cout << Jopa::M();
}
