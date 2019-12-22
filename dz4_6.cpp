using namespace std;

int main()
{
setlocale(LC_ALL, "Ru");
int a[10], i, sum;
string str;
sum = 0;
cout « "Введите римское число -> " « endl;
cin » str;
for (i = 0; i <= str.size() - 1; i++)
{
if (str[i] == 'I') { a[i] = 1; }
if (str[i] == 'V') { a[i] = 5; }
if (str[i] == 'X') { a[i] = 10; }
if (str[i] == 'L') { a[i] = 50; }
if (str[i] == 'c') { a[i] = 100; }
if (str[i] == 'D') { a[i] = 500; }
if (str[i] == 'M') { a[i] = 1000; }
}
for (i = 0; i <= str.size() - 2; i++)
{
if (a[i] < a[i + 1])
{
a[i] = -a[i];
}
sum = sum + a[i];
}
sum = sum + a[str.size() - 1];
cout « "кол-во твоих оплеух = " « sum;
return 0;
}
