#include <iostream>
#include "Stone.h"

using namespace std;

Stone::Stone()
{
	cout << "\t\t\t|| ����������� ����� ||" << endl;
	weight = 0;
}
Stone::~Stone()
{
	cout << "\t\t\t|| ���������� ����� ||" << endl;
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
	cout << "| ���: " << weight << " �����" << endl;
}