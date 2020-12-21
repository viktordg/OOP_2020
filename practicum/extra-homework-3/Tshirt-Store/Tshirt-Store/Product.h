#pragma once
#include<iostream>

class Product
{
private:
	int SKU;
	char brand[30];
	char model[30];
	bool category;
	char color[15];
	int size;
	double price;
	int count;

public:
	Product();
	Product(int SKU, const char* brand, const char* model, bool category, const char* color, int size, double price, int count);
	int get_SKU();
	const char* get_brand() const;
	const char* get_model() const;
	bool get_category();
	const char* get_color() const;
	int get_size();
	double get_price();
	int get_count();
	void set_SKU(int SKU);
	void set_brand(char* brand);
	void set_model(char* model);
	void set_category(bool category);
	void set_color(char* color);
	void set_size(int size);
	void set_price(double price);
	void set_count(int count);
};

