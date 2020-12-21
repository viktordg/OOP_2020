#include "stdafx.h"
#include "Product.h"


Product::Product()
{
	this->SKU = SKU;
	strcpy_s(this->brand, "----");
	strcpy_s(this->model, "----");
	this->category = false;
	strcpy_s(this->color, "----");
	this->size = 0;
	this->price = 0;
	this->count = 0;
}
Product::Product(int SKU, const char* brand, const char* model, bool category, const char* color, int size, double price, int count)
{
	this->SKU = SKU;
	strcpy_s(this->brand, brand);
	strcpy_s(this->model, model);
	this->category = category;
	strcpy_s(this->color, color);
	this->size = size;
	this->price = price;
	this->count = count;
}
int Product::get_SKU()
{
	return this->SKU;
}
const char* Product::get_brand() const
{
	return this->brand;
}
const char* Product::get_model() const
{
	return this->model;
}
bool Product::get_category()
{
	return this->category;
}
const char* Product::get_color() const
{
	return this->color;
}
int Product::get_size()
{
	return this->size;
}
double Product::get_price()
{
	return this->price;
}
int Product::get_count()
{
	return this->count;
}
void Product::set_SKU(int SKU)
{
	this->SKU = SKU;
}
void Product::set_brand(char* brand)
{
	strcpy_s(this->brand, brand);
}
void Product::set_model(char* model)
{
	strcpy_s(this->model, model);
}
void Product::set_category(bool category)
{
	this->category = category;
}
void Product::set_color(char* color)
{
	strcpy_s(this->color, color);
}
void Product::set_size(int size)
{
	this->size = size;
}
void Product::set_price(double price)
{
	this->price = price;
}
void Product::set_count(int count)
{
	this->count = count;
}
