#pragma once
#include "Stone.h"

class Gemstone
	: public Stone
{
private:
	int price;// Цена

public:
	Gemstone();
	~Gemstone();

	void setPrice(int);// Установить цену
	int getPrice();// Получить цену
	void printGemstone();// Вывод
};