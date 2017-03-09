#include <iostream>
#include <string>
#include "Diamond.h"

using namespace std;

Diamond::Diamond(int Weight, int Price, int Diameter, string Color) : Gemstone(Weight, Price)
{
	cout << "\t\t\t|| Конструктор алмаза ||" << endl;
	diameter = Diameter;
	color = Color;
}
Diamond::~Diamond()
{
	cout << "\t\t|| Деструктор алмаза ||" << endl;
}

void Diamond::setColor(string Color)
{
	color = Color;
}
string Diamond::getColor()
{
	return color;
}
void Diamond::setDiameter(int Diameter)
{
	diameter = Diameter;
}
int Diamond::getDiameter()
{
	return diameter;
}
void Diamond::printDiamond()
{
	cout << "| Цвет: " << color << endl;
	cout << "| Диаметр: " << diameter << endl;
}
void Diamond::toConsole()
{
	cout << "| " << typeid(this).name() << " " << color << " " << diameter << endl;
}