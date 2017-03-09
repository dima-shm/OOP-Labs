#include <iostream>
#include "Stone.h"

using namespace std;

Stone::Stone()
{
	cout << "\t\t\t|| Конструктор камня ||" << endl;
	weight = 0;
}
Stone::~Stone()
{
	cout << "\t\t\t|| Деструктор камня ||" << endl;
}

void Stone::setWeight(int Weight)
{
	weight = Weight;
}
int Stone::getWeight()
{
	return weight;
}
void Stone::printStone()
{
	cout << "| Вес: " << weight << " грамм" << endl;
}