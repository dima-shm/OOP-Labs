#pragma once
#include <string>
#include "Pearl.h"

using namespace std;

class Necklace
	: public Pearl
{
private:
	int weight;
	int price;
	int diameter;
	int numberOfPearls;// ���������� ��������

public:
	Necklace(int, int, int,  int, int);
	~Necklace();

	void setNumberOfPearls(int);// ���������� �������
	int getNumberOfPearls();// �������� �������
	void printNecklace();// �����
	void toConsole();// ����� ���������� � ���� �������
};