#pragma once

class Mineral// Абстрактный класс минерал
{
private:
	int price;// Цена

public:
	Mineral();
	virtual ~Mineral();

	virtual void Abstract(void) = 0; // Чистая (пустая) виртуальная функция
	virtual void toConsole() = 0;
};