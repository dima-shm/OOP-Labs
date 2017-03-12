#pragma once
#include "Gemstone.h"

class Container
{
private:
	int numStone;
	const static int SIZE = 64;
	
public:
	Container();

	Gemstone* stone[SIZE];

	void add(Gemstone&);
	void del(int);
	void set(Gemstone&, int);
	Gemstone *get(int);
	void print();
	int getNumStone();
};

