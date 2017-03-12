#pragma once
#include <string>
#include "Gemstone.h"

using namespace std;

class Pearl
	: protected Gemstone
{
protected:
	const string color = "white";;// Цвет

private:
	int diameter;// Диаметр

public:
	Pearl(int, int, int, int);
	~Pearl();

	void setWeight(int);// Установит вес
	void setPrice(int);// Установит цену
	int getPrice();// Установит цену
	void setColor(string);// Установить цвет
	const string getColor();// Получить цвет
	void setDiameter(int);// Установить диаметр
	int getDiameter();// Получить диаметр
	void printStone();// Вывод
	void printGemstone();// Вывод
	void printPearl();// Вывод
	void toConsole();// Вывод информации о типе объекта
};