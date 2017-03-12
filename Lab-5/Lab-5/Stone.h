#pragma once
#include <iostream>
#include "Mineral.h"

using namespace std;

class Stone
	: public Mineral
{
private:
	static int numStone;
	int weight;// Вес камня

public:
	// Полудрагоценный камень
	class SemipreciousStone
	{
	private:
		int price;// Цена полудрагоценного камня
	public:
		SemipreciousStone(int, int);
		~SemipreciousStone();

		void setWeightSemipreciousStone(int);// Установить вес полудрагоценного камня
		int getWeightSemipreciousStone();// Получить вес полудрагоценного камня
		void setPriceSemipreciousStone(int);// Установить цену полудрагоценного камня
		int getPriceSemipreciousStone();// Получить цену полудрагоценного камня
		void printSemipreciousStone();// Вывод полудрагоценного камня

		void changeWeightStone(int);// Поменять вес камня
		void toConsole();// Вывод информации о типе объекта

		Stone* stone;
	};

	Stone(int);
	~Stone();

	void setWeight(int*);// Установить вес камня
	int getWeight();// Получить вес камня
	void printStone();// Вывод камня

	void checkPriceSemipreciousStone(SemipreciousStone &obj);// Проверка цены полудрагоценного камня
	void Abstract();// Подменяющая функция
	void printNumStone();// Вывод количества камней
	void toConsole();// Вывод информации о типе объекта
};