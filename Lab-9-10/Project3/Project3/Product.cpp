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
	price = Price;
}
int Product::getPrice()
{
	return price;
}
void Product::printPrice()
{
	cout << "| ���� ������: " << price << " $" << endl;
}