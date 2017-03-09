#include <iostream>
#include <string>
#include "Diamond.h"

using namespace std;

Diamond::Diamond()
{
	cout << "\t\t\t|| Конструктор алмаза ||" << endl;
	color = "";
	diameter = 0;
}
Diamond::~Diamond()
{
	cout << "\t\t\t|| Деструктор алмаза ||" << endl;
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