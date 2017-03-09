#pragma once

class Stone
{
private:
	int weight;// Вес камня

public:
	// Полудрагоценный камень
	class SemipreciousStone
	{
	private:
		int price;// Цена полудрагоценного камня
	public:
		SemipreciousStone();
		~SemipreciousStone();

		void setWeightSemipreciousStone(int);// Установить вес полудрагоценного камня
		int getWeightSemipreciousStone();// Получить вес полудрагоценного камня
		void setPriceSemipreciousStone(int);// Установить цену полудрагоценного камня
		int getPriceSemipreciousStone();// Получить цену полудрагоценного камня
		void printSemipreciousStone();// Вывод полудрагоценного камня

		Stone* stone;
	};

	Stone();
	~Stone();

	void setWeight(int);// Установить вес камня
	int getWeight();// Получить вес камня
	void printStone();// Вывод камня
};