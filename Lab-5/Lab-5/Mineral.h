#pragma once

class Mineral// ����������� ����� �������
{
private:
	int price;// ����

public:
	Mineral();
	virtual ~Mineral();

	virtual void Abstract(void) = 0; // ������ (������) ����������� �������
	virtual void toConsole() = 0;
};