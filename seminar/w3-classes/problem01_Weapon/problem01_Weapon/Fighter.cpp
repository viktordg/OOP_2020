#include "stdafx.h"
#include "Fighter.h"


Fighter::Fighter()
{
	strcpy_s(this->name, "Dummy");
	this->strenght= 1;
	this->health = 1;
	this->wep = wep;
}
Fighter::Fighter(char name[20], int strenght, int health, Weapon wep)
{
	strcpy_s(this->name, name);
	this->strenght = strenght;
	this->health = health;
	this->wep = wep;
}
int Fighter::get_health() const
{
	return this->health;
}
const Weapon Fighter::get_Weapon() const
{
	return this->wep;
}
void Fighter::set_health(int health)
{
	this->health = health;
}
bool Fighter::isAlive(int health)
{
	if (health <= 0)
	{
		return false;
	}
	else
		return true;
}
int Fighter::attak(int health)
{
	int remainingHealth = this->wep.use(health);
	remainingHealth -= this->strenght;

	return remainingHealth;
}


