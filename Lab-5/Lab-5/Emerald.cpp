#include <iostream>
#include <string>
#include "Emerald.h"

using namespace std;

Emerald::Emerald(int Weight, int Price, int Transparency, int Diameter, string Color) : Gemstone(Weight, Price, Transparency)
{
	cout << "\t\t\t|| Конструктор изумруда ||" << endl;
	diameter = Diameter;
	color = Color;
}
Emerald::~Emerald()
{
	cout << "\t\t|| Деструктор изумруда ||" << endl;
}

void Emerald::setColor(string Color)
{
	color = Color;
}
string Emerald::getColor()
{
	return color;
}
void Emerald::setDiameter(int Diameter)
{
	diameter = Diameter;
}
int Emerald::getDiameter()
{
	return diameter;
}
void Emerald::printEmerald()
{
	cout << "| Цвет: " << color << endl;
	cout << "| Диаметр: " << diameter << endl;
}
void Emerald::toConsole()
{
	cout << "| " << typeid(this).name() << " " << color << " " << diameter << endl;
}