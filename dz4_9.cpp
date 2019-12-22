#include <iostream>
using namespace std;

int to_ten(char x)
{

switch (x)
{
case '0': return 0;
case '1': return 1;
case '2': return 2;
case '3': return 3;
case '4': return 4;
case '5': return 5;
case '6': return 6;
case '7': return 7;
case '8': return 8;
case '9': return 9;
case 'A': return 10;
case 'B': return 11;
case 'C': return 12;
case 'D': return 13;
case 'E': return 14;
case 'F': return 15;
case '.': return -10;
}
return 100;

}

bool correct_enter(int a, int b, string str)
{
if (a < 17 && a>1 && b < 17 && b>1)
{

b = 0;

for (int i = 0; i < str.length(); i++)
{
if (!(a > to_ten(str[i])))
return 0;
if (str[i] == '.')
b += 1;
}
if (b < 2)
return 1;

}
return 0;
}

int main()
{

int znak = 1;
int mantisa;
int j, i;
int SS0, SS1;
int x = 0;
char char0[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
float x_mant = 0;
string N;
cout « "enter 'from system' 'number' 'to system':" « endl;
cin » SS0 » N » SS1;
if (N[0] == '-')
{
znak = -1;
N[0] = '0';
}

if (correct_enter(SS0, SS1, N))
{
mantisa = N.length();
for (int i = 0; i < N.length(); i++)

{
if (N[i] == '.')
mantisa = i;

}
j = 0;

for (i = mantisa - 1; i >= 0; i--)
{
x += to_ten(N[i]) * pow(SS0, j);
j++;

}
j = -1;

for (i = mantisa + 1; i < N.length(); i++)
{
x_mant += to_ten(N[i]) * pow(SS0, j);
j--;
}

}

// выполнен перевод в десятичную, znak - знак, х- целая часть, x_mant - дробная часть

if (correct_enter(SS0, SS1, N))
{
cout « "resalt: ";
if (znak == -1)
cout « "-";
if (x == 0)
cout « "0";

else
{
N = "";
while (x > 0)
{
N = N + char0[x % SS1];
x = x / SS1;

}

for (i = N.length() - 1; i >= 0; i--)
{
cout « N[i];
}

}

if (x_mant > 0)
{
cout « ".";
i = 0;
while (x_mant > 0 && i < 10)
{
x_mant = x_mant * SS1;
x = x_mant / 1;
cout « char0[x];
x_mant = x_mant - x;
i++;

}

}

}

else
cout « "incorrect enter";

}
