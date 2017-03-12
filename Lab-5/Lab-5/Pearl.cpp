#include <iostream>
#include <string>
#include "Pearl.h"

using namespace std;

Pearl::Pearl(int Weight, int Price, int Transparency, int Diameter) : Gemstone(Weight, Price, Transparency)
{
	cout << "\t\t\t|| ����������� ������� ||" << endl;
	diameter = Diameter;
}
Pearl::~Pearl()
{
	cout << "\t\t|| ���������� ������������ ����� ||" << endl;
}

void Pearl::setWeight(int Weight)
{
	Gemstone::setWeight(&Weight);
}
void Pearl::setPrice(int Price)
{
	Gemstone::setPrice(Price);
}
int Pearl::getPrice()
{
	return Gemstone::getPrice();
}
const string Pearl::getColor()
{
	return color;
}
void Pearl::setDiameter(int Diameter)
{
	diameter = Diameter;
}
int Pearl::getDiameter()
{
	return diameter;
}
void Pearl::printStone()
{
	Gemstone::printStone();
}
void Pearl::printGemstone()
{
	Gemstone::printGemstone();
}
void Pearl::printPearl()
{
	cout << "| ����: " << color << endl;
	cout << "| �������: " << diameter << endl;
}
void Pearl::toConsole()
{
	cout << "| " << typeid(this).name() << " " << getWeight() << " " << getPrice() << " " << getColor() << " " << getDiameter() << endl;
}