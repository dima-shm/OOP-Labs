#include "Controller.h"
#include "Gemstone.h"

Controller::Controller(Container& obj)
{
	object = &obj;
}

int Controller::calculateTotalWeight()
{
	int sumWeight = 0;

	for (int i = 0; i < object->getNumStone(); i++)
	{
		sumWeight += object->stone[i]->getWeight();
	}

	return sumWeight;
}
void Controller::sortStoneForPrice()
{

	int key;
	for (int i = 0; i < object->getNumStone(); i++)
	{
		for (int j = 0; j < object->getNumStone() - 1; j++)
		{
			Gemstone *gemstone_1 = dynamic_cast<Gemstone*>(object->stone[j]);
			key = j + 1;
			Gemstone *gemstone_2 = dynamic_cast<Gemstone*>(object->stone[key]);
			if (gemstone_1 && gemstone_2 && gemstone_1->getPrice() > gemstone_2->getPrice())
			{
				object->set(*gemstone_2, j);
				object->set(*gemstone_1, key);
			}
		}
	}

	for (int i = 0; i < object->getNumStone(); i++)
	{
		Gemstone *gemstone = dynamic_cast<Gemstone*>(object->get(i));
		gemstone->toConsole(); cout << "| Цена: " << gemstone->getPrice() << endl << endl;
	}
}
void Controller::searchStoneForTransparency(int FirstTransparency, int SecondTransparency)
{
	int numStone = object->getNumStone();

	cout << endl << "Камни с прозрачностью от 4 до 8:" << endl;
	for (int i = 0; i < numStone; i++)
	{
		Gemstone *gemstone = dynamic_cast<Gemstone*>(object->stone[i]);
		if (gemstone && (gemstone->getTransparency() >= FirstTransparency) && (gemstone->getTransparency() <= SecondTransparency))
		{
			gemstone->printStone();
			gemstone->printGemstone(); 
			cout << endl;
		}
	}
}