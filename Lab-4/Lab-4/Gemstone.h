#pragma once
#include "Stone.h"

class Gemstone
	: public Stone
{
private:
	int price;// Цена

public:
	Gemstone();
	Gemstone(int, int);
	~Gemstone();

	void setPrice(int);// Установить цену
	int getPrice();// Получить цену
	void printGemstone();// Вывод
	void toConsole();// Вывод информации о типе объекта
};