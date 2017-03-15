#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Set.h"
#include "Product.h"

using namespace std;

template<typename Type>
void quickSort(Set<Type> &set, int left, int right)
{
	int i = left, j = right;
	Type tmp;
	
	int median = set[(left + right) / 2];// ����������� �������

	// ��������� ����������
	while (i <= j) 
	{
		while (set[i] < median)
			i++;
		while (set[j] > median)
			j--;

		if (i <= j) 
		{
			tmp = set[i];
			set[i] = set[j];
			set[j] = tmp;
			i++;
			j--;
		}
	};

	
	// ����������� ������, ���� ����, ��� ����������� 
	if (left < j)
		quickSort(set, left, j);
	if (i < right)
		quickSort(set, i, right);
}

template<> 
void quickSort<Product>(Set<Product> &set, int left, int right)
{
	int i = left, j = right;
	Product tmp;
	int median = set[(left + right) / 2].getPrice();// ����������� �������

	// ��������� ����������
	while (i <= j)
	{
		while (set[i].getPrice() < median)
			i++;
		while (set[j].getPrice() > median)
			j--;

		if (i <= j)
		{
			tmp = set[i];
			set[i] = set[j];
			set[j] = tmp;
			i++;
			j--;
		}
	};


	// ����������� ������, ���� ����, ��� ����������� 
	if (left < j)
		quickSort(set, left, j);
	if (i < right)
		quickSort(set, i, right);
}

void checkForInt()
{
	cout << "Set<int>\n\n";

	Set<int> A, B, C, D;

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
	
	cout << endl;
	cout << "| ��������� D: "; D.print();
	cout << "| ��������������� ��������� D: ";  quickSort(D, 0, D.getSize() - 1);
	D.print();
}

void checkForDouble()
{
	cout << "Set<double>\n\n";

	Set<double> A, B, C, D;

	A + 3.3;
	A + -5.7;
	A + 7.0;
	A + 17.2;
	A + 27.8;
	A + 37.9;

	B + -5.7;
	B + 17.2;
	B + 3.3;
	B + 37.9;

	C + 9.1;
	C + 15.6;
	C + -1.1;
	C + 37.5;

	D + -1.1;
	D + 15.6;
	D + 37.5;
	D + 9.1;

	cout << "| ��������� A: "; A.print();
	cout << "| ��������� B: "; B.print();
	cout << endl;
	cout << "| ��������� C: "; C.print();
	cout << "| ��������� D: "; D.print();

	cout << endl;
	cout << "| ����������� A * B: "; A * B;
	cout << "| ������� ������� 7 �� ��������� A: "; A - 7.0; A.print();
	cout << "| �������� �������� �� ��������� B ������������ A: ";
	if (A > B)
		cout << "��������" << endl;
	else
		cout << "�� ��������" << endl;
	B + 8.8;
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

	cout << endl;
	cout << "| ��������� D: "; D.print();
	cout << "| ��������������� ��������� D: ";  quickSort(D, 0, D.getSize() - 1);
	D.print();
}

void checkForProduct()
{
	cout << "Set<Product>\n\n";

	Product pr1, pr2, pr3, pr4, pr5;
	pr1.setPrice(123);
	pr2.setPrice(456);
	pr3.setPrice(789);
	pr4.setPrice(79);
	pr5.setPrice(56);

	Set<Product> A, B;
	A + pr1;
	A + pr2;
	A + pr3;

	B + pr4;
	B + pr5;

	cout << "| ��������� A: "; A.print();
	cout << "| ��������� B: "; B.print();

	cout << endl;
	cout << "| ������� ������� 7 �� ��������� A: "; A - pr3; A.print();
	cout << "| �������� �������� �� ��������� B ������������ A: ";
	if (A > B)
		cout << "��������" << endl;
	else
		cout << "�� ��������" << endl;

	cout << endl;
	cout << "| ��������� B: "; B.print();
	cout << "| ��������������� ��������� B: ";  quickSort(B, 0, B.getSize() - 1);
	B.print();
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choose, exit = 0;;
	for (;;)
	{
		cout << endl; cout << "\t======================= ���� =======================" << endl;
		cout << "\t\t\t" << "[1]" << " - template<int> class Set" << endl;
		cout << "\t\t\t" << "[2]" << " - template<double> class Set" << endl;
		cout << "\t\t\t" << "[3]" << " - template<Product> class Set" << endl;
		cout << "\t\t\t" << "[0]" << " - �����" << endl;
		cout << "\t\t\t�������� ��������: "; cin >> choose;
		cout << "\t===================================================="; cout << endl << endl;

		switch (choose)
		{
		case 1:
			checkForInt(); 
			system("pause");
			system("cls"); 
			break;
		case 2:
			checkForDouble(); 
			system("pause");
			system("cls"); 
			break;
		case 3:
			checkForProduct(); 
			system("pause");
			system("cls"); break;
		case 0: exit = 1; break;
		}
		if (exit == 1) { break; }
	}
}