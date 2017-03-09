#include <iostream>
#include "Stone.h"

using namespace std;

Stone::Stone(int Weight)
{
	cout << "\t\t\t|| ����������� ����� ||" << endl;
	weight = Weight;
	numStone++;
}
Stone::~Stone()
{
	cout << "\t\t|| ���������� ����� ||" << endl;
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
	cout << "| ���: " << weight << " �����" << endl;
}

void Stone::checkPriceSemipreciousStone(SemipreciousStone &obj)
{
	if (obj.getPriceSemipreciousStone() > 10)
	{
		cout << "\t\t\t���� ����� ������ 10$" << endl << endl;
	}
	else if (obj.getPriceSemipreciousStone() == 10)
	{
		cout << "\t\t\t���� ����� ����� 10$" << endl << endl;
	}
	else
	{
		cout << "\t\t\t���� ����� ������ 10$" << endl << endl;
	}
}
void Stone::Abstract()
{
	cout << "����� ����������� ������� ������ ������";
}
void Stone::printNumStone()
{
	cout << "| ���������� ������: " << numStone << endl << endl;
}
void Stone::toConsole()
{ 
	cout << "| " << typeid(this).name() << " " << weight << endl;
}