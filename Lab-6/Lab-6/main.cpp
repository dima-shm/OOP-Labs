#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Set.h"

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Set A, B, C, D;

	A + 3;
	A + -5;
	A + 7;
	A + 17;
	A + 27;
	A + 37;
		   
	B + -5;
	B + 17;
	B + 3;
	B + 37;

	C + 9;
	C + 15;
	C + -1;
	C + 37;

	D + -1;
	D + 15;
	D + 37;
	D + 9;

	cout << "| Множество A: "; A.print();
	cout << "| Множество B: "; B.print();
	cout << endl;
	cout << "| Множество C: "; C.print();
	cout << "| Множество D: "; D.print();

	cout << endl;
	cout << "| Пересечение A * B: "; A * B;
	cout << "| Удалить элемент 7 из множества A: "; A - 7; A.print();
	cout << "| Проверка является ли множество B подмнжеством A: ";
	if (A > B)
		cout << "является" << endl;
	else
		cout << "не является" << endl;
	B + 8;
	cout << "| Множество B: "; B.print();
	cout << "| Проверка является ли множество B подмнжеством A: ";
	if (A > B)
		cout << "является" << endl;
	else
		cout << "не является" << endl;
	cout << "| Проверка множеств C и D на неравенство: ";
	if (C != D)
		cout << "не равно" << endl;
	else
		cout << "равно" << endl;
	_getch();
}