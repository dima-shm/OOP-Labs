#include <iostream>
#include "Gemstone.h"

using namespace std;

Gemstone::Gemstone()
{
	cout << "\t\t|| Конструктор драгоценного камня ||" << endl;
	price = 0;
}
Gemstone::~Gemstone()
{
	cout << "\t\t|| Деструктор драгоценного камня ||" << endl;
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
	cout << "| Цена: " << price << "$" << endl;
}