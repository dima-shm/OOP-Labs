#pragma once
#include <string>
#include "Gemstone.h"

using namespace std;

class Rubin
	: public Gemstone
{
private:
	string color;// Цвет
	int diameter;// Диаметр

public:
	Rubin(int, int, int, int, string);
	~Rubin();

	void setColor(string);// Установить цвет
	string getColor();// Получить цвет
	void setDiameter(int);// Установить диаметр
	int getDiameter();// Получить диаметр
	void printRubin();// Вывод
	void toConsole();// Вывод информации о типе объекта
};