#include <iostream>
#include <time.h>
#include <algorithm>
#include<ctime>
#include<cmath>

using namespace std;




int shell_sort(int *x, int n, bool reverse, bool test) {
    int i, j,k, increment, temp;
    int swp=0,comp=0;increment = n/2;
    while (increment > 0)
    {
        for (i=0;i<increment;i++)
        {
            for(j=0;j<n;j+=increment)
            {
                temp=x[j];
                if (reverse == false) {
                  for(k=j-increment;k>=0&&temp<x[k];k-=increment)
                  {
                    comp++;
                    swp++;
                    x[k+increment]=x[k];
                  }
                } else {
                  for(k=j-increment;k>=0&&temp>x[k];k-=increment)
                  {
                    comp++;
                    swp++;
                    x[k+increment]=x[k];
                  }
                }
                x[k+increment]=temp;
                swp++;
            }
        }
        comp++;
        if (increment/2 != 0)
            increment = increment/2;
        else if (increment == 1)
            increment = 0;
        else
            increment = 1;
    }

    if (test == true) {
        cout << "Результат сортировки методом Шелла: ";
        for (int i=0; i<n; i++) {
            cout << x[i] << " ";
        }
    }

    return comp + swp;
}


void put_data(int *data, int size) {
    for (int i=0; i < size; i++) {
        data[i] = rand();
    }
}


int main() {
    srand(time(NULL));
    const int n = 10;
    int input_data_b[n]; int input_data_i[n]; int input_data_s[n]; int input_data_s2[n];
    cout << "Исходный массив (" << n << " элементов): ";
    for (int i=0; i<n; i++) { // ВВОД МАССИВА ДЛЯ ТЕСТОВОГО ПРОГОНА
        int t;
        cin >> t;
        input_data_b[i] = t;
        input_data_i[i] = t;
        input_data_s[i] = t;
        input_data_s2[i] = t;
    }
    cout << "---------- ТЕСТОВЫЙ ПРОГОН ----------" << endl << endl;
    shell_sort(input_data_s2, n, false, true); cout << endl;
    cout << "----------- РАБОЧИЙ ПРОГОН ----------" << endl << endl;
    cout << "СОРТИРОВКА МЕТОДОМ ПРОСТОГО ОБМЕНА: " << endl;
    
	
    cout << endl << "СОРТИРОВКА МЕТОДОМ ШЕЛЛА: " << endl;
    for(int s = 1000; s <= 5000; s+=1000) {
        cout << ":::::::::::: " << s << " ЭЛЕМЕНТОВ ::::::::::::" << endl;
        int *work_data = new int[s];
        put_data(work_data, s);
        cout << "[СРЕДНИЙ СЛУЧАЙ] C+M = " << shell_sort(work_data, s,false,false); cout << endl;
        cout << "[ЛУЧШИЙ СЛУЧАЙ]  C+M = " << shell_sort(work_data, s,false,false); cout << endl;
        cout << "[ХУДШИЙ СЛУЧАЙ]  C+M = " << shell_sort(work_data, s,true ,false); cout << endl;
        delete[](work_data);
    }

    return 0;
}
