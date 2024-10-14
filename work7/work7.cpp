#include <iostream>
#include "work71.h"
#include "work72.h"

//#include "72.cpp"

using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	bool a = false;
	while (!a)
	{
		system("cls");
		cout << "\tКакой пункт выбрать? " << endl;
		cout << "[1] 7.1 - Умножение матрицы. " << endl;
		cout << "[2] 7.2 - Возведение в степень. " << endl;
		cout << "[3] Остановить программу. " << endl;
		int choice; cin >> choice;
		switch (choice)
		{
		case 1: system("cls"); work71(); break;
		case 2: system("cls"); work72(); break;
		case 3: system("cls"); a = true; break;
		default: system("cls"); cout << "Eror"; break;
		}
	}
	return 0;
}
