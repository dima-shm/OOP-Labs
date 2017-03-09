#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include "color.h"
#include "Stone.h"
#include "Gemstone.h"
#include "Diamond.h"
#include "Emerald.h"
#include "Rubin.h"

using namespace std;

void readFromKeyboard(int choose)
{
	string color;
	int weight, price, diameter;

	cout << "| ������� ��� �����: "; cin >> weight;

	if (choose == 1)
	{
		Stone stone;
		stone.setWeight(weight);
		stone.printStone();
	}
	if (choose == 2)
	{
		cout << "| ������� ���� �����: "; cin >> price; cout << endl;

		Stone::SemipreciousStone semipreciousStone;
		semipreciousStone.setWeightSemipreciousStone(weight);
		semipreciousStone.setPriceSemipreciousStone(price);
		semipreciousStone.printSemipreciousStone();
	}
	if (choose == 3)
	{
		cout << "| ������� ���� �����: "; cin >> price; cout << endl;

		Gemstone gemstone;
		gemstone.setWeight(weight);
		gemstone.setPrice(price);
		gemstone.printStone();
		gemstone.printGemstone();
	}
	else if (choose == 4)
	{
		cout << "| ������� ���� �����: "; cin >> price;
		cout << "| ������� ���� �����: "; cin >> color;
		cout << "| ������� ������� �����: "; cin >> diameter; cout << endl;

		Rubin rubin;
		rubin.setWeight(weight);
		rubin.setPrice(price);
		rubin.setColor(color);
		rubin.setDiameter(diameter);
		rubin.printStone();
		rubin.printGemstone();
		rubin.printRubin();
	}
	else if (choose == 5)
	{
		cout << "| ������� ���� �����: "; cin >> price;
		cout << "| ������� ���� �����: "; cin >> color;
		cout << "| ������� ������� �����: "; cin >> diameter; cout << endl;

		Diamond diamond;
		diamond.setWeight(weight);
		diamond.setPrice(price);
		diamond.setColor(color);
		diamond.setDiameter(diameter);
		diamond.printStone();
		diamond.printGemstone();
		diamond.printDiamond();
	}
	else if (choose == 6)
	{
		cout << "| ������� ���� �����: "; cin >> price;
		cout << "| ������� ���� �����: "; cin >> color;
		cout << "| ������� ������� �����: "; cin >> diameter; cout << endl;

		Emerald emerald;
		emerald.setWeight(weight);
		emerald.setPrice(price);
		emerald.setColor(color);
		emerald.setDiameter(diameter);
		emerald.printStone();
		emerald.printGemstone();
		emerald.printEmerald();
	}
}

void readFromFile(int choose)
{
	string fileName;
	string color;
	int weight, price, diameter;

	if (choose == 1)
		fileName = "files/stone.xml";
	else if (choose == 2)
		fileName = "files/semipreciousStone.xml";
	else if (choose == 3)
		fileName = "files/gemStone.xml";
	else if (choose == 4)
		fileName = "files/rubin.xml";
	else if (choose == 5)
		fileName = "files/diamond.xml";
	else if (choose == 6)
		fileName = "files/emerald.xml";
	ifstream file(fileName);

	if (!file.is_open())
	{
		red(); cout << "\t\t\t|| ������ ������ ����� ||" << endl; white();
	}
	else
	{
		green(); cout << "\t\t\t|| ���� �������� ||" << endl << endl; white();
	}

	file >> weight;
	file >> price;
	file >> color;
	file >> diameter;

	if (choose == 1)
	{
		Stone stone;
		stone.setWeight(weight);
		stone.printStone();
	}
	if (choose == 2)
	{
		Stone::SemipreciousStone semipreciousStone;
		semipreciousStone.setWeightSemipreciousStone(weight);
		semipreciousStone.setPriceSemipreciousStone(price);
		semipreciousStone.printSemipreciousStone();
	}
	if (choose == 3)
	{
		Gemstone gemstone;
		gemstone.setWeight(weight);
		gemstone.setPrice(price);
		gemstone.printStone();
		gemstone.printGemstone();
	}
	else if (choose == 4)
	{
		Rubin rubin;
		rubin.setWeight(weight);
		rubin.setPrice(price);
		rubin.setColor(color);
		rubin.setDiameter(diameter);
		rubin.printStone();
		rubin.printGemstone();
		rubin.printRubin();
	}
	else if (choose == 5)
	{
		Diamond diamond;
		diamond.setWeight(weight);
		diamond.setPrice(price);
		diamond.setColor(color);
		diamond.setDiameter(diameter);
		diamond.printStone();
		diamond.printGemstone();
		diamond.printDiamond();
	}
	else if (choose == 6)
	{
		Emerald emerald;
		emerald.setWeight(weight);
		emerald.setPrice(price);
		emerald.setColor(color);
		emerald.setDiameter(diameter);
		emerald.printStone();
		emerald.printGemstone();
		emerald.printEmerald();
	}

	file.close();
}

void Choose(int choose)
{
	int k;

	blue(); cout << "\t\t\t[1]"; white(); cout << " - ���� � ����������" << endl;
	blue(); cout << "\t\t\t[2]"; white(); cout << " - ������ �� �����" << endl;
	cout << "\t\t\t�������� ��������: "; blue();
	cin >> k; white();
	cout << endl;

	if (k == 1)
	{
		readFromKeyboard(choose);
	}
	else if (k == 2)
	{
		readFromFile(choose);
	}

}

void menu()
{
	int choose, exit = 0;
	for (;;)
	{
		cout << endl; blue(); cout << "================================ ���� ================================"; white(); cout << endl;
		blue(); cout << "\t\t\t[1]"; white(); cout << " - ������" << endl;
		blue(); cout << "\t\t\t[2]"; white(); cout << " - ��������������� ������" << endl;
		blue(); cout << "\t\t\t[3]"; white(); cout << " - ����������� ������" << endl;
		blue(); cout << "\t\t\t[4]"; white(); cout << " - �����" << endl;
		blue(); cout << "\t\t\t[5]"; white(); cout << " - �����" << endl;
		blue(); cout << "\t\t\t[6]"; white(); cout << " - �������" << endl;
		blue(); cout << "\t\t\t[0]"; white(); cout << " - �����" << endl;
		cout << "\t\t\t�������� ��������: "; blue();
		cin >> choose; white();
		blue(); cout << "======================================================================"; white(); cout << endl << endl;

		switch (choose)
		{
		case 1:
		{
			Choose(choose);
		} break;
		case 2:
		{
			Choose(choose);
		} break;
		case 3:
		{
			Choose(choose);
		} break;
		case 4:
		{
			Choose(choose);
		} break;
		case 5:
		{
			Choose(choose);
		} break;
		case 6:
		{
			Choose(choose);
		} break;
		case 0: exit = 1; break;
		default:
		{
			red();  cout << "\t\t\t|| [" << choose << "] - ����������� ������� ||" << endl; white();
		} break;
		}

		if (exit == 1) { break; }
	}
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	menu();

	_getch();
}