#include <stdio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	for (int i = 1; i <= 6; i++) {
		if (i % 2 == 0) {
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 15));
			cout << "* * * * * * * *";
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 15));
			cout << "                                 "<<endl;
		}
		else {
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 15));
			cout << "* * * * * * * *";
			SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 15));
			cout << "                                 " << endl;
		}
	}
	SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 15));
	cout << "               ";
	SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 15));
	cout << "                                 " << endl;
	for (int i = 1; i <= 6; i++) {
		if (i % 2 == 1) {
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 15));
			cout << "                                                " << endl;
		}
		else {
			SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 15));
			cout << "                                                " << endl;
		}
	}
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	system("pause");
	return 0;
}
