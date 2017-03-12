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
	Rubin rubin(14, 240, 7, 14, "�������");
	Diamond diamond(15, 150, 12, 15, "����������");
	Emerald emerald(16, 260, 4, 16, "������");


	cout << endl << "����������� ������" << endl;
	cout << "| ���: " << gemstone.getWeight() << endl;
	cout << "| ������������: " << gemstone.getTransparency() << endl;
	cout << "| ����: " << gemstone.getPrice() << "$";
	cout << endl;

	cout << endl << "�����" << endl;
	cout << "| ���: " << rubin.getWeight() << endl;
	cout << "| ������������: " << rubin.getTransparency() << endl;
	cout << "| ����: " << rubin.getPrice() << "$" << endl;
	cout << "| ����: " << rubin.getColor() << endl;
	cout << "| �������: " << rubin.getDiameter() << endl;
	cout << endl;

	cout << "�����" << endl;
	cout << "| ���: " << diamond.getWeight() << endl;
	cout << "| ������������: " << diamond.getTransparency() << endl;
	cout << "| ����: " << diamond.getPrice() << "$" << endl;
	cout << "| ����: " << diamond.getColor() << endl;
	cout << "| �������: " << diamond.getDiameter() << endl;
	cout << endl;

	cout << "�������" << endl;
	cout << "| ���: " << emerald.getWeight() << endl;
	cout << "| ������������: " << emerald.getTransparency() << endl;
	cout << "| ����: " << emerald.getPrice() << "$" << endl;
	cout << "| ����: " << emerald.getColor() << endl;
	cout << "| �������: " << emerald.getDiameter() << endl;

	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	
	Container container;
	container.add(gemstone);
	container.add(rubin);
	container.add(diamond);
	container.add(emerald);

	container.print();

	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	Controller controller(container);
	cout << endl << "����� ���: " << controller.calculateTotalWeight() << " �����, " << controller.calculateTotalWeight() * 0.2 << " �����" << endl;
	cout << endl << "���������� �� ����" << endl; controller.sortStoneForPrice();
	controller.searchStoneForTransparency(4, 8);

	_getch();
}