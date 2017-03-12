#pragma once
#include <ctime>

class Set
{
private:
	static const int MAXSIZE = 64;
	int size;
	int *mas;

public:
	Set();
	~Set();

	void print();

	void operator + (int);// Добавление элемента в множество
	void operator - (int);// Удаление элемента из множества
	void operator * (Set&);// Пересечение множеств (только одинаковые элементы)
	bool operator > (Set&);// Проверка на подмножество
	bool operator != (Set&);// Проверка множеств на неравенство
};