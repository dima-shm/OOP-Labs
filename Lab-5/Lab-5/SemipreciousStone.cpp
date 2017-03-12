#include <iostream>
#include "Stone.h"

using namespace std;

Stone::SemipreciousStone::SemipreciousStone(int Weight, int Price)
{
	cout << "\t\t\t|| ����������� ���������������� ����� ||" << endl;
	price = Price;
	stone = new Stone(Weight);
}
Stone::SemipreciousStone::~SemipreciousStone()
{
	cout << "\t\t|| ���������� ���������������� ����� ||" << endl;
	delete stone;
}

void Stone::SemipreciousStone::setWeightSemipreciousStone(int Weight)
{
	stone->weight = Weight;
}
int Stone::SemipreciousStone::getWeightSemipreciousStone()
{
	return stone->weight;
}
void Stone::SemipreciousStone::setPriceSemipreciousStone(int Price)
{
	price = Price;
}
int Stone::SemipreciousStone::getPriceSemipreciousStone()
{
	return price;
}
void Stone::SemipreciousStone::printSemipreciousStone()
{
	cout << "| ���: " << stone->weight << " �����" << endl;
	cout << "| ����: " << price << "$" << endl;
}

void Stone::SemipreciousStone::changeWeightStone(int Weight)
{
	stone->setWeight(&Weight);
}
void Stone::SemipreciousStone::toConsole()
{
	cout << "| " << typeid(this).name() << " " << stone->weight << " " << price << endl;
}