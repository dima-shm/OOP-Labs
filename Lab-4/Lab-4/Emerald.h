#pragma once
#include <string>
#include "Gemstone.h"

using namespace std;

class Emerald
	: public Gemstone
{
private:
	string color;// Цвет
	int diameter;// Диаметр

public:
	Emerald(int, int, int, string);
	~Emerald();

	void setColor(string);// Установить цвет
	string getColor();// Получить цвет
	void setDiameter(int);// Установить диаметр
	int getDiameter();// Получить диаметр
	void printEmerald();// Вывод
	void toConsole();// Вывод информации о типе объекта
};