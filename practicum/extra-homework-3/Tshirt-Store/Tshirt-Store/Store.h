#pragma once
#include<iostream>
#include "Product.h"

class Store
{
private:
	Product * stock;
	int size;
	int capacity;

	void erase()
	{
		delete[] this->stock;
	}
public:
	Store();
	Store(const Product* newStock, int size, int capacity);
	Store(const Store& newStore);
	~Store();
	void add(Product newProduct);
	void deleteProduct(int index);
	void change(Product newProduct, int index);
	void print();
	void quit();
};

