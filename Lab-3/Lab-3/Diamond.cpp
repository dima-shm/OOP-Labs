#include <iostream>
#include <string>
#include "Diamond.h"

using namespace std;

Diamond::Diamond()
{
	cout << "\t\t\t|| ����������� ������ ||" << endl;
	color = "";
	diameter = 0;
}
Diamond::~Diamond()
{
	cout << "\t\t\t|| ���������� ������ ||" << endl;
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
	cout << "| ����: " << color << endl;
	cout << "| �������: " << diameter << endl;
}