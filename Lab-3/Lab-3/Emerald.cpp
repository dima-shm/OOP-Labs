#include <iostream>
#include <string>
#include "Emerald.h"

using namespace std;

Emerald::Emerald()
{
	cout << "\t\t\t|| ����������� �������� ||" << endl;
	color = "";
	diameter = 0;
}
Emerald::~Emerald()
{
	cout << "\t\t\t|| ���������� �������� ||" << endl;
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
	cout << "| ����: " << color << endl;
	cout << "| �������: " << diameter << endl;
}