#include <iostream>
#include <string>
#include "Emerald.h"

using namespace std;

Emerald::Emerald()
{
	cout << "\t\t\t|| Конструктор изумруда ||" << endl;
	color = "";
	diameter = 0;
}
Emerald::~Emerald()
{
	cout << "\t\t\t|| Деструктор изумруда ||" << endl;
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