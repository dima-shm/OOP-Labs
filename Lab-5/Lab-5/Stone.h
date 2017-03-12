#pragma once
#include <iostream>
#include "Mineral.h"

using namespace std;

class Stone
	: public Mineral
{
private:
	static int numStone;
	int weight;// ��� �����

public:
	// ��������������� ������
	class SemipreciousStone
	{
	private:
		int price;// ���� ���������������� �����
	public:
		SemipreciousStone(int, int);
		~SemipreciousStone();

		void setWeightSemipreciousStone(int);// ���������� ��� ���������������� �����
		int getWeightSemipreciousStone();// �������� ��� ���������������� �����
		void setPriceSemipreciousStone(int);// ���������� ���� ���������������� �����
		int getPriceSemipreciousStone();// �������� ���� ���������������� �����
		void printSemipreciousStone();// ����� ���������������� �����

		void changeWeightStone(int);// �������� ��� �����
		void toConsole();// ����� ���������� � ���� �������

		Stone* stone;
	};

	Stone(int);
	~Stone();

	void setWeight(int*);// ���������� ��� �����
	int getWeight();// �������� ��� �����
	void printStone();// ����� �����

	void checkPriceSemipreciousStone(SemipreciousStone &obj);// �������� ���� ���������������� �����
	void Abstract();// ����������� �������
	void printNumStone();// ����� ���������� ������
	void toConsole();// ����� ���������� � ���� �������
};