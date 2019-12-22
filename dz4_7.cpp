include<iostream>
#include<time.h>
using namespace std;


int main()
{
setlocale(LC_ALL, "Ru");
srand(time(0));
int si, m, i, c;
cout « "Введите m, i, c : ";
cin » m » i » c;
si = rand() % c;
for (int j = 0; j < i; j++)
{
si = (si * m + i) % c;
}
cout « si;

}
