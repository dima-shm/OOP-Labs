#pragma once
#include "Mineral.h"
#include "Stone.h"
#include "Gemstone.h"

class Printer
{
public:
	Printer();
	~Printer();

	void iAmPrinting(Mineral *someobj);
};