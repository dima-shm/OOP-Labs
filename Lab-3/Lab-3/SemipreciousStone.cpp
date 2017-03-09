#include <iostream>
#include "Stone.h"

using namespace std;

Stone::SemipreciousStone::SemipreciousStone()
{
	cout << "\t\t|| Конструктор полудрагоценного камня ||" << endl;
	price = 0;
	stone = new Stone;
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