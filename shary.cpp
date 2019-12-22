#include <iostream>
#include <math.h>
#include <cstdlib>
#include<iostream>
#include <cmath>
#include <random>
#include <vector>
#include <random>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

unsigned factorial(unsigned n) {
return ((n > 1) ? n * factorial(n - 1) : n);
}

unsigned getMismatchCount(bool select[], unsigned n, unsigned step = 0) {
unsigned count = 0;
if (step >= n)
{
count = 1;
}
else {
for (unsigned i = 0; i < n; i++)
{
if ((i != step) && !select[i])
{
select[i] = true;
count += getMismatchCount(select, n, step + 1);
select[i] = false;
}
}
}

return count;
}

int main() {
unsigned N;
//bool select[N];
cin » N;
bool* select = new bool[N];

for (int i = 0; i < N; ++i)
{
select[i] = false;
}

cout « factorial(N) - getMismatchCount(select, N) « endl;

delete[]select;

return 0;
}
