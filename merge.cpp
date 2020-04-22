#include <iostream>
#include <time.h>
#include <algorithm>
#include<ctime>
#include<cmath>

using namespace std;


int merge(int *a, int n, bool reverse, bool test)
{
    int swp=0,comp=0;
    int mid = n / 2; // находим середину сортируемой последовательности
    if (n % 2 == 1)
        mid++;
    int h = 1; // шаг
    // выделяем память под формируемую последовательность
    int *c = (int*)malloc(n * sizeof(int));
    int step;
    while (h < n)
    {
        step = h;
        int i = 0;   // индекс первого пути
        int j = mid; // индекс второго пути
        int k = 0;   // индекс элемента в результирующей последовательности
        while (step <= mid)
        {
            while ((i < step) && (j < n) && (j < (mid + step)))
            { // пока не дошли до конца пути
                comp++;
                swp++;
                // заполняем следующий элемент формируемой последовательности
                // меньшим из двух просматриваемых
                if (reverse ? (a[i] > a[j]) : (a[i] < a[j]))
                {
                    c[k] = a[i];
                    i++; k++;
                }
                else {
                    c[k] = a[j];
                    j++; k++;
                }
            }
            while (i < step)
            { // переписываем оставшиеся элементы первого пути (если второй кончился раньше)
                comp++;
                swp++;
                c[k] = a[i];
                i++; k++;
            }
            while ((j < (mid + step)) && (j<n))
            {  // переписываем оставшиеся элементы второго пути (если первый кончился раньше)
                comp++;
                swp++;
                c[k] = a[j];
                j++; k++;
            }
            step = step + h; // переходим к следующему этапу
        }
        h = h * 2;
        // Переносим упорядоченную последовательность (промежуточный вариант) в исходный массив
        for (i = 0; i<n; i++) {
            swp++;
            a[i] = c[i];
        }
    }

    if (test == true) {
        cout << "Результат сортировки методом Шелла: ";
        for (int i=0; i<n; i++) {
            cout << a[i] << " ";
        }
    }

    return comp+swp;
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
    merge(input_data_s2, n, false, true); cout << endl;
    cout << "----------- РАБОЧИЙ ПРОГОН ----------" << endl << endl;
    cout << "СОРТИРОВКА МЕТОДОМ ПРОСТОГО ОБМЕНА: " << endl;


    cout << endl << "СОРТИРОВКА МЕТОДОМ ШЕЛЛА: " << endl;
    for(int s = 1000; s <= 5000; s+=1000) {
        cout << ":::::::::::: " << s << " ЭЛЕМЕНТОВ ::::::::::::" << endl;
        int *work_data = new int[s];
        put_data(work_data, s);
        cout << "[СРЕДНИЙ СЛУЧАЙ] C+M = " << merge(work_data, s,false,false); cout << endl;
        cout << "[ЛУЧШИЙ СЛУЧАЙ]  C+M = " << merge(work_data, s,false,false); cout << endl;
        cout << "[ХУДШИЙ СЛУЧАЙ]  C+M = " << merge(work_data, s,true ,false); cout << endl;
        delete[](work_data);
    }

    return 0;
}
