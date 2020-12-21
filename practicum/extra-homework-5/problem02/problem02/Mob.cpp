#include "stdafx.h"
#include "Mob.h"

Mob::Mob() : Character()
{
	this->set_exp(0);
}
Mob::Mob(const char* name, int health, int damage, int exp) : Character(name, health, damage)
{
	this->set_exp(exp);
}

const char* Mob::get_name() const
{
	return this->name;
}
int Mob::get_health() const
{
	return this->health;
}
int Mob::get_damage() const
{
	return this->damage;
}
int Mob::get_exp() const
{
	return this->exp;
}

void Mob::set_exp(int exp)
{
	this->exp = exp;
}
