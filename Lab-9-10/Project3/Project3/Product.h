#pragma once

class Product
{
private:
	int price;// Цена
public:
	Product();
	~Product();

	void setPrice(int);// Установить цену
	int getPrice();// Получить цену
	void printPrice();// Вывод

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