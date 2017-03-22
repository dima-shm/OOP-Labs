#pragma once

class Product
{
private:
	int price;// ����
public:
	Product();
	~Product();

	void setPrice(int);// ���������� ����
	int getPrice();// �������� ����
	void printPrice();// �����

	friend std::ostream &operator << (std::ostream &stream, Product &obj)
	{
		return stream << obj.price;
	}
	friend std::ostream &operator << (std::ostream &stream, const Product &obj)
	{
		return stream << obj.price;
	}

	friend bool operator == (const Product& x, const Product& y)
	{
		return (x.price == y.price);
	}
};