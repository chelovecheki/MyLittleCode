#include "stdafx.h"
#include "lab1.h"
#include "lab2.h"

using namespace std;

int main()
{
	setlocale(0, "");

	int ascii = 0;
	char key;

	while (ascii != 27)
	{
		system("cls");
		cout << "Нажмите... \n";
		cout << "'0' - Лабораторная работа №1; \n";
		cout << "'1' - Лабораторная работа №2; \n";
		cout << "Нажмите Esc для выхода. \n\n";

		key = _getch();
		ascii = key;

		switch (ascii)
		{
		case '0':
			LauncherLab1();
			break;
		case '1':
			LauncherLab2();
			break;

			return 0;
		}
	}
}

