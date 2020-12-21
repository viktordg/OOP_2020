#pragma once
#include "Character.h"
#include "Mob.h"
#include<cstring>
#include<iostream>
class Hero : public Character
{
private:
	char* job;
	int exp;
	int lvl;
public:
	Hero();
	Hero(const char* name, int health, int damage, const char* job, int exp, int lvl);
	Hero(const Hero& other);
	Hero& operator= (const Hero& other);
	~Hero();

	const char* get_name() const;
	int get_health() const;
	int get_damage() const;
	const char* get_job() const;
	int get_exp() const;
	int get_lvl() const;

	void set_job(const char* job);
	void set_exp(int exp);
	void set_lvl(int lvl);

	void attack(Mob& mob);
};

