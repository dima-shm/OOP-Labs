#include <iostream>
#include "Stone.h"

using namespace std;

Stone::SemipreciousStone::SemipreciousStone(int Weight, int Price)
{
	cout << "\t\t\t|| Конструктор полудрагоценного камня ||" << endl;
	price = Price;
	stone = new Stone(Weight);
}
Stone::SemipreciousStone::~SemipreciousStone()
{
	cout << "\t\t|| Деструктор полудрагоценного камня ||" << endl;
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
	cout << "| Вес: " << stone->weight << " грамм" << endl;
	cout << "| Цена: " << price << "$" << endl;
}

void Stone::SemipreciousStone::changeWeightStone(int Weight)
{
	stone->setWeight(&Weight);
}
void Stone::SemipreciousStone::toConsole()
{
	cout << "| " << typeid(this).name() << " " << stone->weight << " " << price << endl;
}