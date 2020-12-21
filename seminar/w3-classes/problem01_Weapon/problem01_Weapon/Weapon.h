#pragma once
#include<iostream>
using namespace std;

class Weapon
{
private:
	char name[20];
	int power;
	int durability;
public:
	Weapon();
	Weapon(char name[20], int power, int durability);
	const char* get_name() const;
	const int get_power() const;
	const int get_durability() const;
	void set_durability(int durability);
	void print();
	int use(int health);
};

