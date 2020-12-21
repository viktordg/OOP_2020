#include "stdafx.h"
#include "Weapon.h"
#include "Fighter.h"

Weapon::Weapon()
{
	strcpy_s(this->name, "Baloon");
	this->power = 1;
	this->durability = 1;
}
Weapon::Weapon(char name[20], int power, int durability)
{
	strcpy_s(this->name, name);
	this->power = power;
	this->durability = durability;
}
void Weapon::set_durability(int durability)
{
	if (durability<0)
	{
		this->durability = 0;
	}
	else
	{
		this->durability = durability;
	}
}
const char* Weapon::get_name() const
{
	return this->name;
}
const int Weapon::get_power() const
{
	return this->power;
}
const int Weapon::get_durability() const
{
	return this->durability;
}
void Weapon::print()
{
	cout << "name: " << this->name << "; power: " << this->power << "; durability: " << this->durability << endl;
}
int Weapon::use(int health)
{
	this->durability -= 15;
	return health -= this->power;
}