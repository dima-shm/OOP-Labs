#include <iostream>
#include "Product.h"

using namespace std;

Product::Product()
{
	//cout << "\t\t\t~~~ Конструктор продукта ~~~" << endl;
	price = 0;
}
Product::~Product()
{
	//cout << "\t\t\t~~~ Деструктор продукта ~~~" << endl;
	price = 0;
}

void Product::setPrice(int Price)
{
	try 
	{
		if (Price < 0) 
		{
			throw MyException("Исключение класса Product — Цена меньше нуля");
		}
		else 
		{
			price = Price;		
		}
	}
	catch (MyException exp)
	{
		cout << exp.what() << endl;
		return;
	}
}
int Product::getPrice()
{
	return price;
}
void Product::printPrice()
{
	cout << "| Цена товара: " << price << " $" << endl;
}