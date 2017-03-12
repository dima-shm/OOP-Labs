#include <iostream>
#include <string>
#include "Rubin.h"

using namespace std;

Rubin::Rubin(int Weight, int Price, int Transparency, int Diameter, string Color) : Gemstone(Weight, Price, Transparency)
{
	cout << "\t\t\t|| Конструктор рубина ||" << endl;
	diameter = Diameter;
	color = Color;
}
Rubin::~Rubin()
{
	cout << "\t\t|| Деструктор рубина||" << endl;
}

void Rubin::setColor(string Color)
{
	color = Color;
}
string Rubin::getColor()
{
	return color;
}
void Rubin::setDiameter(int Diameter)
{
	diameter = Diameter;
}
int Rubin::getDiameter()
{
	return diameter;
}
void Rubin::printRubin()
{
	cout << "| Цвет: " << color << endl;
	cout << "| Диаметр: " << diameter << endl;
}
void Rubin::toConsole()
{
	cout << "| " << typeid(this).name() << " " << color << " " << diameter << endl;
}