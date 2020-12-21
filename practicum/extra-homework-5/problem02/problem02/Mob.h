#pragma once
#include "Character.h"
class Mob : public Character
{
private:
	int exp;
public:
	Mob();
	Mob(const char* name, int health, int damage, int exp);

	const char* get_name() const;
	int get_health() const;
	int get_damage() const;
	int get_exp() const;

	void set_exp(int exp);
};

