#include <iostream>
#include <windows.h>
#include <conio.h>
#include <memory>
#include <list>
#include "Product.h"
#include <algorithm>
#include <string>
#include <functional>

using namespace std;

class descendingSort 
{
public:
	bool operator()(Product obj1, Product &obj2)
	{
		return obj1.getPrice() > obj2.getPrice();
	}
};

class increasedSort
{
public:
	bool operator()(Product obj1, Product &obj2)
	{
		return obj1.getPrice() < obj2.getPrice();
	}
};

class isEqual
{
public:
	bool  operator() (Product obj)
	{
		return obj.getPrice() == 50;
	}
};

class isEquals
{
public:
	bool operator()(Product obj1, const int &obj2)
	{
		return obj1.getPrice() == obj2;
	}
};

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*---------- 1 ----------*/
	Product pr1, pr2, pr3, pr4, pr5, pr6, pr7, pr8, pr9;
	pr1.setPrice(10);
	pr2.setPrice(20);
	pr3.setPrice(30);
	pr4.setPrice(40);
	pr5.setPrice(50);
	pr6.setPrice(60);
	pr7.setPrice(70);
	pr8.setPrice(71);
	pr9.setPrice(80);

	list<Product> mylist1 = {pr1, pr2, pr3, pr4, pr5, pr6, pr7};
	list<Product>::iterator it = mylist1.begin();

	cout << "Список mylist1: ";
	while (it != mylist1.end())
	{
		cout << "(" << *it << ") ";
		it++;
	}

	mylist1.sort(descendingSort());

	it = mylist1.begin();
	cout << endl << "Отсортированный список mylist1: ";
	while (it != mylist1.end()) 
	{
		cout << "(" << *it << ") ";
		it++;
	}

	/*---------- 2 ----------*/
	cout << endl << endl << "В списке mylist1 найден элемент " << *find(mylist1.rbegin(), mylist1.rend(), pr3);

	/*---------- 3 ----------*/
	list<Product> mylist2;
	it = mylist1.begin();
	while (it != mylist1.end())
	{
		if (*it == pr5 || *it == pr4 || *it == pr7)
			mylist2.push_back(*it);
		it++;
	}

	mylist2.reverse();
	it = mylist2.begin();	
	cout << endl << endl << "Список mylist2: ";
	while (it != mylist2.end())
	{
		cout << "(" << *it << ") ";
		it++;
	}

	/*---------- 4 ----------*/
	mylist1.sort(increasedSort());
	mylist2.sort(increasedSort());

	it = mylist1.begin();
	cout << endl;
	cout << endl << "Список mylist1: ";
	while (it != mylist1.end())
	{
		cout << "(" << *it << ") ";
		it++;
	}

	it = mylist2.begin();
	cout << endl << "Список mylist2: ";
	while (it != mylist2.end())
	{
		cout << "(" << *it << ") ";
		it++;
	}
	
	/*---------- 5 ----------*/
	list<Product> mylist3;
	it = mylist1.begin();
	while (it != mylist1.end())
	{
		mylist3.push_back(*it);
		it++;
	}
	it = mylist2.begin();
	while (it != mylist2.end())
	{
		mylist3.push_back(*it);
		it++;
	}

	cout << endl;
	cout << "Список mylist3: ";
	it = mylist3.begin();
	while (it != mylist3.end())
	{
		cout << "(" << *it << ") ";
		it++;
	}

	/*---------- 6 ----------*/
	int count3 = 0;
	int count4 = 0;
	int count7 = 0;

	it = mylist3.begin();
	while (it != mylist3.end())
	{
		if (*it == pr3)
			count3++;
		if (*it == pr4)
			count4++;
		if (*it == pr7)
			count7++;
		it++;
	}
	cout << endl;
	cout << endl << "Список mylist3 содержит " << count3 << " элементов (30), " << count4 << " элементов (40), " << count7 << " элементов (70)";

	/*---------- 7 ----------*/
	char *str = "Hello";
	string str1(str);//конструктор 1
	string str2("World"); //конструктор 2
	string str3(3, '!'); //конструктор 3
	string str4(str3);//конструктор копирования
	string str5(move(str4));//конструктор перемещения

	str1 += " " + str2 + " " + str5;
	cout << endl << endl << "str1: " << str1;

	//str1.substr(pos,n) - Извлекает подстроку из данного экземпляра. Подстрока начинается с указанной позиции знака и имеет указанную длину.
	cout << endl << "str1.substr(0, 5): " << str1.substr(0, 5);
	// str1.find_first_of(value) - поиск первого символа, который является частью value в строке str1
	cout << endl << "str1.find_first_of('W'): " << str1.find_first_of('W');
	//str.insert() - вставка в нужную позицию
	cout << endl << "str1.insert(5, \",\"): " << str1.insert(5, ",");

	/*---------- 8 ----------*/
	cout << endl << endl;
	cout << "Биндера 1:" << endl;
	
	//count_if() возвращает число элементов в диапазоне, значения которых удовлетворяют указанному условию
	int countOfElements = count_if(mylist1.begin(), mylist1.end(), bind(isEqual(), placeholders::_1));
	cout << "Список mylist1: ";
	it = mylist1.begin();
	while (it != mylist1.end())
	{
		cout << "(" << *it << ") ";
		it++;
	}
	cout << endl << "Элементов со значением 50: " << countOfElements;

	cout << endl;
	cout << "Биндер 2:" << endl;

	//метод erase() удаляет элемент, который найден методом find_if() - возвращает итератор найденого элемента, в заданном диапазоне и удовлетворению предиката
	mylist1.erase(find_if(mylist1.begin(), mylist1.end(), bind(isEquals(), placeholders::_1, 50)));
	
	cout << "Список mylist1: ";
	it = mylist1.begin();
	while (it != mylist1.end())
	{
		cout << "(" << *it << ") ";
		it++;
	}


	/*---------- Защита ----------*/
	//reverse merge copy remove_if for_each типы контейнеров вектор лист set map 

	mylist1.reverse();

	list<int> mylist4;
	mylist4.push_back(11);
	mylist4.push_back(12);
	mylist4.push_back(15);
	mylist4.push_back(16);
	list<int> mylist5;
	mylist5.push_back(13);
	mylist5.push_back(19);
	
	mylist4.merge(mylist5);

	mylist1.remove_if((mylist1.begin(), mylist1.end(), bind(isEquals(), placeholders::_1, 50)));
	
	copy(mylist1.begin(), mylist1.end(), ostream_iterator<Product>(cout, " "));

	_getch();
}