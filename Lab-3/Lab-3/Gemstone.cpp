#include <iostream>
#include "Gemstone.h"

using namespace std;

Gemstone::Gemstone()
{
	cout << "\t\t|| ����������� ������������ ����� ||" << endl;
	price = 0;
}
Gemstone::~Gemstone()
{
	cout << "\t\t|| ���������� ������������ ����� ||" << endl;
}

void Gemstone::setPrice(int Price)
{
	price = Price;
}
int Gemstone::getPrice()
{
	return price;
}
void Gemstone::printGemstone()
{
	cout << "| ����: " << price << "$" << endl;
}