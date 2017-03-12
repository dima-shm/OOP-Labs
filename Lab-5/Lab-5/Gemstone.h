#pragma once
#include "Stone.h"

class Gemstone
	: public Stone
{
private:
	int transparency;// ������������
	int price;// ����

public:
	Gemstone();
	Gemstone(int, int, int);
	~Gemstone();

	int getTransparency();// �������� ������������
	void setPrice(int);// ���������� ����
	int getPrice();// �������� ����
	void printGemstone();// �����
	void toConsole();// ����� ���������� � ���� �������
};