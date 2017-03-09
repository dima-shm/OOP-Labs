#include <iostream>
#include "Gemstone.h"

using namespace std;

Gemstone::Gemstone(int Weight, int Price) : Stone(Weight)
{
	cout << "\t\t\t|| Конструктор драгоценного камня ||" << endl;
	price = Price;
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
void Gemstone::toConsole()
{
	cout << "| " << typeid(this).name() << " " << getWeight() << " " << price << endl;
}