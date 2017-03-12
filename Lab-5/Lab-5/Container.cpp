#include "Container.h"
#include "Gemstone.h"


Container::Container()
{
	numStone = 0;
}

void Container::add(Gemstone &obj)
{
	if (numStone < SIZE)
	{
		stone[numStone++] = &obj;
	}
}
void Container::del(int NumStone)
{
	delete stone[NumStone];
	NumStone--;
}
void Container::set(Gemstone &obj, int number)
{
	if (number < SIZE)
	{
		stone[number] = &obj;
	}
}
Gemstone *Container::get(int NumStone)
{
	return stone[NumStone];
}
void Container::print()
{
	for (int i = 0; i < numStone; i++)
	{
		stone[i]->toConsole();
		cout << "| Цена: " << stone[i]->getPrice() << endl << endl;
	}
}

int Container::getNumStone()
{ 
	return numStone;
}