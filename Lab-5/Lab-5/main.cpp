#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include "Stone.h"
#include "Gemstone.h"
#include "Diamond.h"
#include "Emerald.h"
#include "Rubin.h"
#include "Mineral.h"
#include "Necklace.h"
#include "Printer.h"
#include "Container.h"
#include "Controller.h"

using namespace std;

int Stone::numStone = 0;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Gemstone gemstone(13, 130, 1);
	Rubin rubin(14, 240, 7, 14, "Красный");
	Diamond diamond(15, 150, 12, 15, "Прозрачный");
	Emerald emerald(16, 260, 4, 16, "Зелёный");


	cout << endl << "Драгоценный камень" << endl;
	cout << "| Вес: " << gemstone.getWeight() << endl;
	cout << "| Прозрачность: " << gemstone.getTransparency() << endl;
	cout << "| Цена: " << gemstone.getPrice() << "$";
	cout << endl;

	cout << endl << "Рубин" << endl;
	cout << "| Вес: " << rubin.getWeight() << endl;
	cout << "| Прозрачность: " << rubin.getTransparency() << endl;
	cout << "| Цена: " << rubin.getPrice() << "$" << endl;
	cout << "| Цвет: " << rubin.getColor() << endl;
	cout << "| Диаметр: " << rubin.getDiameter() << endl;
	cout << endl;

	cout << "Алмаз" << endl;
	cout << "| Вес: " << diamond.getWeight() << endl;
	cout << "| Прозрачность: " << diamond.getTransparency() << endl;
	cout << "| Цена: " << diamond.getPrice() << "$" << endl;
	cout << "| Цвет: " << diamond.getColor() << endl;
	cout << "| Диаметр: " << diamond.getDiameter() << endl;
	cout << endl;

	cout << "Изумруд" << endl;
	cout << "| Вес: " << emerald.getWeight() << endl;
	cout << "| Прозрачность: " << emerald.getTransparency() << endl;
	cout << "| Цена: " << emerald.getPrice() << "$" << endl;
	cout << "| Цвет: " << emerald.getColor() << endl;
	cout << "| Диаметр: " << emerald.getDiameter() << endl;

	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	
	Container container;
	container.add(gemstone);
	container.add(rubin);
	container.add(diamond);
	container.add(emerald);

	container.print();

	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	Controller controller(container);
	cout << endl << "Общий вес: " << controller.calculateTotalWeight() << " грамм, " << controller.calculateTotalWeight() * 0.2 << " карат" << endl;
	cout << endl << "Сортировка по цене" << endl; controller.sortStoneForPrice();
	controller.searchStoneForTransparency(4, 8);

	_getch();
}