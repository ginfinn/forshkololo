#include <iostream>
using namespace std; //ishet naib bolshiy delitel

int gcd(int a, int b) //funkziya opred naib obsch delitel
{
while (a != 0 && b != 0)
{
if (a > b)
{
a = a % b; //del s ostatkom
}
else b = b % a;
}
return a + b;
}



int main()
{
int t, a, b;
cin » t » b; //1-kolvo chisel //2-vvod samix chisel
for (int i = 2; i <= t; ++i)
{
cin » a;
b = gcd(a, b);
}
cout « b;
return 0;
}
