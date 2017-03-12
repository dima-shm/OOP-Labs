#pragma once
#include <string>
#include "Pearl.h"

using namespace std;

class Necklace
	: public Pearl
{
private:
	int weight;
	int price;
	int diameter;
	int numberOfPearls;// Количество жемчужин

public:
	Necklace(int, int, int,  int, int);
	~Necklace();

	void setNumberOfPearls(int);// Установить диаметр
	int getNumberOfPearls();// Получить диаметр
	void printNecklace();// Вывод
	void toConsole();// Вывод информации о типе объекта
};