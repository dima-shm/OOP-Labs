#include <iostream>
#include "Gemstone.h"

using namespace std;

Gemstone::Gemstone(int Weight, int Price, int Transparency) : Stone(Weight)
{
	cout << "\t\t\t|| ����������� ������������ ����� ||" << endl;
	transparency = Transparency;
	price = Price;
}
Gemstone::~Gemstone()
{
	cout << "\t\t|| ���������� ������������ ����� ||" << endl;
}

int Gemstone::getTransparency()
{
	return transparency;
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
	cout << "| ������������: " << transparency << endl;
	cout << "| ����: " << price << "$" << endl;
}
void Gemstone::toConsole()
{
	cout << "| " << typeid(this).name() << " " << getWeight() << " " << price << endl;
}