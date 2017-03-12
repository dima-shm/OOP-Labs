#include <iostream>
#include "Gemstone.h"

using namespace std;

Gemstone::Gemstone(int Weight, int Price, int Transparency) : Stone(Weight)
{
	cout << "\t\t\t|| Конструктор драгоценного камня ||" << endl;
	transparency = Transparency;
	price = Price;
}
Gemstone::~Gemstone()
{
	cout << "\t\t|| Деструктор драгоценного камня ||" << endl;
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
	cout << "| Прозрачность: " << transparency << endl;
	cout << "| Цена: " << price << "$" << endl;
}
void Gemstone::toConsole()
{
	cout << "| " << typeid(this).name() << " " << getWeight() << " " << price << endl;
}