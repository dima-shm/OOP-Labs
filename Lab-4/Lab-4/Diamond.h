#pragma once
#include <string>
#include "Gemstone.h"

using namespace std;

class Diamond
	: public Gemstone
{
private:
	string color;// ����
	int diameter;// �������

public:
	Diamond(int, int, int, string);
	~Diamond();

	void setColor(string);// ���������� ����
	string getColor();// �������� ����
	void setDiameter(int);// ���������� �������
	int getDiameter();// �������� �������
	void printDiamond();// �����
	void toConsole();// ����� ���������� � ���� �������
};