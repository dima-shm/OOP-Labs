#include <iostream>
#include "Stone.h"

using namespace std;

Stone::Stone(int Weight)
{
	cout << "\t\t\t|| Êîíñòðóêòîð êàìíÿ ||" << endl;
	weight = Weight;
	numStone++;
}
Stone::~Stone()
{
	cout << "\t\t|| Äåñòðóêòîð êàìíÿ ||" << endl;
	numStone--;
}

void Stone::setWeight(int* Weight)
{
	weight = *Weight;
}
int Stone::getWeight()
{
	return weight;
}
void Stone::printStone()
{
	cout << "| Âåñ: " << weight << " ãðàìì" << endl;
}

void Stone::checkPriceSemipreciousStone(SemipreciousStone &obj)
{
	if (obj.getPriceSemipreciousStone() > 10)
	{
		cout << "\t\t\tÖÅÍÀ ÊÀÌÍß ÁÎËÜØÅ 10$" << endl << endl;
	}
	else if (obj.getPriceSemipreciousStone() == 10)
	{
		cout << "\t\t\tÖÅÍÀ ÊÀÌÍß ÐÀÂÍÀ 10$" << endl << endl;
	}
	else
	{
		cout << "\t\t\tÖÅÍÀ ÊÀÌÍß ÌÅÍÜØÅ 10$" << endl << endl;
	}
}
void Stone::Abstract()
{
	cout << "Âûçîâ àáñòðàêòíîé ôóíêöèè êëàññà ÊÀÌÅÍÜ";
}
void Stone::printNumStone()
{
	cout << "| Êîëè÷åñâòî êàìíåé: " << numStone << endl << endl;
}
void Stone::toConsole()
{ 
	cout << "| " << typeid(this).name() << " " << weight << endl;
}