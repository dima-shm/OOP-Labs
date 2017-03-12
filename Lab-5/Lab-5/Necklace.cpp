#include <iostream>
#include <string>
#include "Necklace.h"

using namespace std;

Necklace::Necklace(int Weight, int Price, int Transparency, int Diameter, int NumberOfPearls) : Pearl(Weight, Price, Transparency, Diameter)
{
	cout << "\t\t\t|| ����������� �������� ||" << endl;
	weight = Weight;
	price = Price;
	diameter = Diameter;
}
Necklace::~Necklace()
{
	cout << "\t\t|| ���������� ������������ ����� ||" << endl;
}

void Necklace::setNumberOfPearls(int NumberOfPearls)
{
	numberOfPearls = NumberOfPearls;
}
int Necklace::getNumberOfPearls()
{
	return numberOfPearls;
}
void Necklace::printNecklace()
{
	cout << "| ���������� ��������: " << numberOfPearls << endl;
}
void Necklace::toConsole()
{
	cout << "| " << typeid(this).name() << " " << getNumberOfPearls() << endl;
}