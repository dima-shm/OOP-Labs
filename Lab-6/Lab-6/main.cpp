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

	cout << "| ��������� A: "; A.print();
	cout << "| ��������� B: "; B.print();
	cout << endl;
	cout << "| ��������� C: "; C.print();
	cout << "| ��������� D: "; D.print();

	cout << endl;
	cout << "| ����������� A * B: "; A * B;
	cout << "| ������� ������� 7 �� ��������� A: "; A - 7; A.print();
	cout << "| �������� �������� �� ��������� B ������������ A: ";
	if (A > B)
		cout << "��������" << endl;
	else
		cout << "�� ��������" << endl;
	B + 8;
	cout << "| ��������� B: "; B.print();
	cout << "| �������� �������� �� ��������� B ������������ A: ";
	if (A > B)
		cout << "��������" << endl;
	else
		cout << "�� ��������" << endl;
	cout << "| �������� �������� C � D �� �����������: ";
	if (C != D)
		cout << "�� �����" << endl;
	else
		cout << "�����" << endl;
	_getch();
}