#include <iostream>
#include "Stone.h"

using namespace std;

Stone::SemipreciousStone::SemipreciousStone()
{
	cout << "\t\t|| ����������� ���������������� ����� ||" << endl;
	price = 0;
	stone = new Stone;
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