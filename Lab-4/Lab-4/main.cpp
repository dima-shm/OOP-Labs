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
	Rubin rubin(14, 140, 14, "�������");
	Diamond diamond(15, 150, 15, "����������");
	Emerald emerald(16, 160, 16, "������");

	cout << endl << "������:" << endl;
	cout << "| ���: " << stone.getWeight();
	cout << endl;

	cout << endl << "��������������� ������:" << endl;
	cout << "| ���: " << semipreciousStone.getWeightSemipreciousStone() << endl;
	cout << "| ����: " << semipreciousStone.getPriceSemipreciousStone() << "$" << endl;
	cout << endl;

	cout << endl << "����������� ������:" << endl;
	cout << "| ���: " << gemstone.getWeight() << endl;
	cout << "| ����: " << gemstone.getPrice() << "$" << endl;
	cout << endl;

	cout << endl << "�����:" << endl;
	cout << "| ���: " << rubin.getWeight() << endl;
	cout << "| ����: " << rubin.getPrice() << "$" << endl;
	cout << "| ����: " << rubin.getColor() << endl;
	cout << "| �������: " << rubin.getDiameter() << endl;
	cout << endl;

	cout << "�����" << endl;
	cout << "| ���: " << diamond.getWeight() << endl;
	cout << "| ����: " << diamond.getPrice() << "$" << endl;
	cout << "| ����: " << diamond.getColor() << endl;
	cout << "| �������: " << diamond.getDiameter() << endl;
	cout << endl;

	cout << "�������" << endl;
	cout << "| ���: " << emerald.getWeight() << endl;
	cout << "| ����: " << emerald.getPrice() << "$" << endl;
	cout << "| ����: " << emerald.getColor() << endl;
	cout << "| �������: " << emerald.getDiameter() << endl;
	cout << endl;


	//container.add(&stone);

	_getch();
}