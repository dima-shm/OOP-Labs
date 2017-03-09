#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include "color.h"
#include "Stone.h"
#include "Gemstone.h"
#include "Diamond.h"
#include "Emerald.h"
#include "Rubin.h"
#include "Mineral.h"
#include "Necklace.h"
#include "Printer.h"
#include "Container.h"

using namespace std;

int Stone::numStone = 0;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	//Container container;
	//Controller controller;

	Stone stone(11);
	Stone::SemipreciousStone semipreciousStone(12, 120);
	Gemstone gemstone(13, 130);
	Rubin rubin(14, 140, 14, "Красный");
	Diamond diamond(15, 150, 15, "Прозрачный");
	Emerald emerald(16, 160, 16, "Зелёный");

	cout << endl << "Камень:" << endl;
	cout << "| Вес: " << stone.getWeight();
	cout << endl;

	cout << endl << "Полудрагоценный камень:" << endl;
	cout << "| Вес: " << semipreciousStone.getWeightSemipreciousStone() << endl;
	cout << "| Цена: " << semipreciousStone.getPriceSemipreciousStone() << "$" << endl;
	cout << endl;

	cout << endl << "Драгоценный камень:" << endl;
	cout << "| Вес: " << gemstone.getWeight() << endl;
	cout << "| Цена: " << gemstone.getPrice() << "$" << endl;
	cout << endl;

	cout << endl << "Рубин:" << endl;
	cout << "| Вес: " << rubin.getWeight() << endl;
	cout << "| Цена: " << rubin.getPrice() << "$" << endl;
	cout << "| Цвет: " << rubin.getColor() << endl;
	cout << "| Диаметр: " << rubin.getDiameter() << endl;
	cout << endl;

	cout << "Алмаз" << endl;
	cout << "| Вес: " << diamond.getWeight() << endl;
	cout << "| Цена: " << diamond.getPrice() << "$" << endl;
	cout << "| Цвет: " << diamond.getColor() << endl;
	cout << "| Диаметр: " << diamond.getDiameter() << endl;
	cout << endl;

	cout << "Изумруд" << endl;
	cout << "| Вес: " << emerald.getWeight() << endl;
	cout << "| Цена: " << emerald.getPrice() << "$" << endl;
	cout << "| Цвет: " << emerald.getColor() << endl;
	cout << "| Диаметр: " << emerald.getDiameter() << endl;
	cout << endl;


	//container.add(&stone);

	_getch();
}