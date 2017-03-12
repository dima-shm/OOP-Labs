#pragma once
#include "Stone.h"

class Gemstone
	: public Stone
{
private:
	int transparency;// Прозрачность
	int price;// Цена

public:
	Gemstone();
	Gemstone(int, int, int);
	~Gemstone();

	int getTransparency();// Получить прозрачность
	void setPrice(int);// Установить цену
	int getPrice();// Получить цену
	void printGemstone();// Вывод
	void toConsole();// Вывод информации о типе объекта
};