#include "stdafx.h"
#include "Character.h"
#include<cstring>


Character::Character()
{
	this->set_name("----");
	this->set_health(0);
	this->set_damage(0);
}
Character::Character(const char* name, int health, int damage)
{
	this->set_name(name);
	this->set_health(health);
	this->set_damage(damage);
}
Character::Character(const Character& other)
{
	this->set_name(other.name);
	this->set_health(other.health);
	this->set_damage(other.damage);
}
Character& Character::operator= (const Character& other)
{
	if (this != &other)
	{
		this->set_name(other.name);
		this->set_health(other.health);
		this->set_damage(other.damage);
	}
	return *this;
}
Character::~Character()
{
	delete[] this->name;
}

void Character::set_name(const char* name)
{
	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Character::set_health(int health)
{
	this->health = health;
}
void Character::set_damage(int damage)
{
	this->damage = damage;
}
