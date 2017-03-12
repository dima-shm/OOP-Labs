#pragma once
#include "Container.h"

class Controller 
{
private:
	Container *object;
public:
	Controller(Container&);
	int calculateTotalWeight();
	void sortStoneForPrice();
	void searchStoneForTransparency(int, int);
};