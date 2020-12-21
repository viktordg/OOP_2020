#include "stdafx.h"
#include "Store.h"
using namespace std;

Store::Store()
{
	this->size = 0;
	this->capacity = 20;

	this->stock = new Product[this->capacity];
}
Store::Store(const Product* newStock, int size,int capacity)
{
	this->size = size;
	this->capacity = capacity;

	this->stock = new Product[this->capacity];
	for (size_t i = 0; i < this->capacity; i++)
	{
		this->stock[i] = newStock[i];
	}
}
Store::Store(const Store& newStore)
{
	this->size = newStore.size;
	this->capacity = newStore.capacity;

	this->stock = new Product[newStore.capacity];

	for (size_t i = 0; i < newStore.size; i++)
	{
		this->stock[i] = newStore.stock[i];
	}
}
Store::~Store()
{
	this->erase();
}
void Store::add(Product newProduct)
{
	if (this->size < this->capacity)
	{
		this->stock[this->size] = newProduct;
		this->size++;
	}
}
void Store::deleteProduct(int index)
{
	if (index < this->size)
	{
		for (size_t i = index; i < this->size - 1; i++)
		{
			this->stock[i] = this->stock[i + 1];
		}
		this->size--;
		//намалявам сайза, за да не може да се достъпи последния елемент
		//не знам как да го зануля
	}
}
void Store::change(Product newProduct, int index)
{
	if (index < this->size)
	{
		this->stock[index] = newProduct;
	}
}
void Store::print()
{
	for (size_t i = 0; i < this->size ; i++)
	{
		cout << "SKU: " << stock[i].get_SKU() << endl;
		cout << "Brand: " << stock[i].get_brand() << endl;
		cout << "Model: " << stock[i].get_model() << endl;
		cout << "Category: " << stock[i].get_category() << endl;
		cout << "Color: " << stock[i].get_color() << endl;
		cout << "Size: " << stock[i].get_size() << endl;
		cout << "Price: " << stock[i].get_price() << endl;
		cout << "Count: " << stock[i].get_count() << endl;
	}
}
void Store::quit()
{
	return;
}