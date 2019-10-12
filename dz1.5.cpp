#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int time;
    int curtains;
    int lamp;
    cout << "введите время ,без двоеточия между часами и минутами";
    cin >> time;
    cout << "шторы закрыты/окрыты(1/0)?";
    cin >> curtains;
    cout << "лампа включена/выключена(1/0)?";
    cin >> lamp;


    if (lamp == 1 || (curtains == 0 && time >= 900 && time < 2000)) {
        cout << "светло";
    }else
        cout << "темно"
                ;

}
