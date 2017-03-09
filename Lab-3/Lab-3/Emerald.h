#pragma once
#include <string>
#include "Gemstone.h"

using namespace std;

class Emerald
	: public Gemstone
{
private:
	string color;// ����
	int diameter;// �������

public:
	Emerald();
	~Emerald();

	void setColor(string);// ���������� ����
	string getColor();// �������� ����
	void setDiameter(int);// ���������� �������
	int getDiameter();// �������� �������
	void printEmerald();// �����
};