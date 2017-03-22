#pragma once
#include <iostream>
#include <memory>

class Product
{
private:
	int price;// ����
public:
	Product();
	Product(const Product &obj)
	{
		price = obj.price;
	}
	~Product();

	void setPrice(int);// ���������� ����
	int getPrice();// �������� ����
	void printPrice();// �����

	friend std::ostream& operator << (std::ostream& stream, Product obj)
	{
		return stream << obj.price;
	}
	friend bool operator == (const Product& x, const Product& y)
	{
		return (x.price == y.price);
	}
};