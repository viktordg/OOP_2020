#include "stdafx.h"
#include "Hero.h"
#include "Mob.h"
#include<cstring>


Hero::Hero() : Character()
{
	this->set_job("----");
	this->set_exp(0);
	this->set_lvl(0);
}
Hero::Hero(const char* name, int health, int damage, const char* job, int exp, int lvl) : Character(name, health, damage)
{
	this->set_job(job);
	this->set_exp(exp);
	this->set_lvl(lvl);
}
Hero::Hero(const Hero& other) : Character(other)
{
	this->set_job(other.job);
	this->set_exp(other.exp);
	this->set_lvl(other.lvl);
}
Hero& Hero::operator= (const Hero& other)
{
	if (this != &other)
	{
		Character::operator=(other);
		this->set_job(other.job);
		this->set_exp(other.exp);
		this->set_lvl(other.lvl);
	}
	return *this;
}
Hero::~Hero()
{
	delete[] this->job;
}

const char* Hero::get_name() const
{
	return this->name;
}
int Hero::get_health() const
{
	return this->health;
}
int Hero::get_damage() const
{
	return this->damage;
}
const char* Hero::get_job() const
{
	return this->job;
}
int Hero::get_exp() const 
{
	return this->exp;
}
int Hero::get_lvl() const
{
	return this->lvl;
}

void Hero::set_job(const char* job)
{
	delete this->job;
	this->job = new char[strlen(job) + 1];
	strcpy_s(this->job, strlen(job) + 1, job);
}
void Hero::set_exp(int exp)
{
	this->exp = exp;
}
void Hero::set_lvl(int lvl)
{
	this->lvl = lvl;
}

void Hero::attack(Mob& mob)
{
	if (this->damage >= mob.get_health() && this->health > mob.get_damage())
	{
		std::cout << mob.get_name() << " has been slayn!" << std::endl;
		int sumExp = this->exp + mob.get_exp();
		if (sumExp >= 100)
		{
			this->lvl++;
			this->exp = sumExp - 100;
		}
	}
	else if (this->damage < mob.get_health() && this->health > mob.get_damage())
	{
		std::cout << mob.get_health() << " has survived!" << std::endl;

		int currentMobHealth = mob.get_health() - this->damage;
		int currentHeroHealth = this->health - mob.get_damage();

		this->health = currentHeroHealth;
		mob.set_health(currentMobHealth);
	}
	else
	{
		std::cout << this->name << "has died!" << std::endl;
	}
}
