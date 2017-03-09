#pragma once
#include <string>
#include "Gemstone.h"

using namespace std;

class Rubin
	: public Gemstone
{
private:
	string color;// ����
	int diameter;// �������

public:
	Rubin();
	~Rubin();

	void setColor(string);// ���������� ����
	string getColor();// �������� ����
	void setDiameter(int);// ���������� �������
	int getDiameter();// �������� �������
	void printRubin();// �����
};