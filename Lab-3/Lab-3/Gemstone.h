#pragma once
#include "Stone.h"

class Gemstone
	: public Stone
{
private:
	int price;// ����

public:
	Gemstone();
	~Gemstone();

	void setPrice(int);// ���������� ����
	int getPrice();// �������� ����
	void printGemstone();// �����
};