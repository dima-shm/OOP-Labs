#pragma once
#include <string>
#include "Gemstone.h"

using namespace std;

class Diamond
	: public Gemstone
{
private:
	string color;// Цвет
	int diameter;// Диаметр

public:
	Diamond();
	~Diamond();

	void setColor(string);// Установить цвет
	string getColor();// Получить цвет
	void setDiameter(int);// Установить диаметр
	int getDiameter();// Получить диаметр
	void printDiamond();// Вывод
};