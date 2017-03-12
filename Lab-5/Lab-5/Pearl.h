#pragma once
#include <string>
#include "Gemstone.h"

using namespace std;

class Pearl
	: protected Gemstone
{
protected:
	const string color = "white";;// ����

private:
	int diameter;// �������

public:
	Pearl(int, int, int, int);
	~Pearl();

	void setWeight(int);// ��������� ���
	void setPrice(int);// ��������� ����
	int getPrice();// ��������� ����
	void setColor(string);// ���������� ����
	const string getColor();// �������� ����
	void setDiameter(int);// ���������� �������
	int getDiameter();// �������� �������
	void printStone();// �����
	void printGemstone();// �����
	void printPearl();// �����
	void toConsole();// ����� ���������� � ���� �������
};