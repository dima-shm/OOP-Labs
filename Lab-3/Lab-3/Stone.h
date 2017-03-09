#pragma once

class Stone
{
private:
	int weight;// ��� �����

public:
	// ��������������� ������
	class SemipreciousStone
	{
	private:
		int price;// ���� ���������������� �����
	public:
		SemipreciousStone();
		~SemipreciousStone();

		void setWeightSemipreciousStone(int);// ���������� ��� ���������������� �����
		int getWeightSemipreciousStone();// �������� ��� ���������������� �����
		void setPriceSemipreciousStone(int);// ���������� ���� ���������������� �����
		int getPriceSemipreciousStone();// �������� ���� ���������������� �����
		void printSemipreciousStone();// ����� ���������������� �����

		Stone* stone;
	};

	Stone();
	~Stone();

	void setWeight(int);// ���������� ��� �����
	int getWeight();// �������� ��� �����
	void printStone();// ����� �����
};