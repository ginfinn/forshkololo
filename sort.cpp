#include <iostream>
#include <vector> 
#include <iterator>

using namespace std;

vector<int> sort(vector<int> a, int lo, int hi) {

	//Сравниваем/меняем элементы на концах отрезка
	if (a[lo] > a[hi]) {
		int T = a[lo];
		a[lo] = a[hi];
		a[hi] = T;
	}

	//Меньше трёх?
	if (lo + 1 >= hi) return a;

	//Чему равна одна треть?
	int third = (hi - lo + 1) / 3;

	a = sort(a, lo, hi - third); //Для первых 2/3 массива
	a = sort(a, lo + third, hi); //Для последних 2/3 массива
	a = sort(a, lo, hi - third); //Для первых 2/3 массива
	return a;
}

//Вызываем сортировку для всего массива
vector<int> sort(vector<int> a) {
	return sort(a, 0, a.size() - 1);
}


int main()
{
	vector<int> b;
	vector<int> a;
	a.push_back(10);
	a.push_back(30);
	a.push_back(0);
	a.push_back(6);
	a.push_back(5);
	a.push_back(113);
	a.push_back(4);
	a.push_back(-5);
	a.push_back(3);
	a.push_back(-1);
	
	for (int i = 0; i < 10; i++) {

		cout << sort(a)[i]<<endl;
		 b = a;}
	//}std::copy(b.begin(), b.end(), std::ostream_iterator<int>(std::cout, " "));
};
