#include <iostream>
#include "Product.h"

using namespace std;

Product::Product()
{
	//cout << "\t\t\t~~~ ����������� �������� ~~~" << endl;
	price = 0;
}
Product::~Product()
{
	//cout << "\t\t\t~~~ ���������� �������� ~~~" << endl;
	price = 0;
}

void Product::setPrice(int Price)
{
	try 
	{
		if (Price < 0) 
		{
			throw MyException("���������� ������ Product � ���� ������ ����");
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
	cout << "| ���� ������: " << price << " $" << endl;
}