#include <iostream>
#include <string>
#include "Rubin.h"

using namespace std;

Rubin::Rubin()
{
	cout << "\t\t\t|| Конструктор рубина ||" << endl;
	color = "";
	diameter = 0;
}
Rubin::~Rubin()
{
	cout << "\t\t|| Деструктор рубина ||" << endl;
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