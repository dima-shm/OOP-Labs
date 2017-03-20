//#define NDEBUG
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Set.h"
#include "Product.h"
#include <fstream>
#include <cassert>// для функции assert

using namespace std;

template<typename Type>
void quickSort(Set<Type> &set, int left, int right)
{
	int i = left, j = right;
	Type tmp;
	
	int median = set[(left + right) / 2];// центральный элемент

	// процедура разделения
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

	
	// рекурсивные вызовы, если есть, что сортировать 
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
	int median = set[(left + right) / 2].getPrice();// центральный элемент

	// процедура разделения
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


	// рекурсивные вызовы, если есть, что сортировать 
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
	
	cout << endl;
	cout << "| Множество D: "; D.print();
	cout << "| Отсортированное множество D: ";  quickSort(D, 0, D.getSize() - 1);
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

	cout << "| Множество A: "; A.print();
	cout << "| Множество B: "; B.print();
	cout << endl;
	cout << "| Множество C: "; C.print();
	cout << "| Множество D: "; D.print();

	cout << endl;
	cout << "| Пересечение A * B: "; A * B;
	cout << "| Удалить элемент 7 из множества A: "; A - 7.0; A.print();
	cout << "| Проверка является ли множество B подмнжеством A: ";
	if (A > B)
		cout << "является" << endl;
	else
		cout << "не является" << endl;
	B + 8.8;
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

	cout << endl;
	cout << "| Множество D: "; D.print();
	cout << "| Отсортированное множество D: ";  quickSort(D, 0, D.getSize() - 1);
	D.print();
}

void checkAssert(int* value)
{
	assert(value);
	cout << "Адрес значения в памяти = " << value << endl;
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "1. Ошибка установки цены" << endl;
	Product pr1;
	pr1.setPrice(-456);
	system("pause");
	system("cls");

	cout << "2. Ошибка размера множества" << endl;
	cout << "3. Ошибка доступа по индексу" << endl << endl;
	Set<int> A;
	A + 3;  A + 8;  A + -5; A + 7;
	A + 17; A + -5; A + 17; A + 3;
	A + 37; A + -5;	A + 3;	A + -5;
	A + 7;  A + 17; A + -5; A + 17;
	A + 3;  A + 37; A + 7;	A + 3;
	A + -5; A + 7;  A + 7;  A + 17;
	A + -5; A + 17; A + 3;  A + 37;
	A + 7;	A + 3;  A + -5; A + 7;  A + -25;
	cout << "Элемент A[31]: " << A[31] << endl;
	cout << endl;
	cout << A[32] << endl;
	system("pause");
	system("cls");

	cout << "4. Ошибка деления на ноль" << endl << endl;
	int a = 15, b = 0;
	cout << "a = " << a << "; b = " << b << endl;
	try 
	{
		if (!b) 
			throw MyException("Делить на ноль нельзя");
	}
	catch (MyException exp) 
	{
		cout << exp.what() << endl;
		while (!b) { cout << "Повторите ввод значения b: "; cin >> b; }
	}
	cout << "a / b = " << a / b << endl;
	system("pause");
	system("cls");

	cout << "5. Ошибка работы с файлом" << endl << endl;
	try 
	{
		ifstream file("MyFile.txt");
		if (!file.is_open())
			throw "Файл не может быть открыт";
		else
			cout << "Файл открыт" << endl;
	}
	catch (char *str) 
	{
		cout << str << endl;
	}
	system("pause");
	system("cls");

	cout << "Mаксрос accert" << endl << endl;
	int  c = 10;
	int *ptr1 = &c;
	int *ptr2 = NULL;

	checkAssert(ptr1);
	checkAssert(ptr2);
}