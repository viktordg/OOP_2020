#pragma once
#include<iostream>
#include "Weapon.h"
using namespace std;

class Fighter
{
private:
	char name[20];
	int strenght;
	int health;
	Weapon wep;
public:
	Fighter();
	Fighter(char name[20], int strenght, int health, Weapon wep);
	int get_health() const;
	const Weapon get_Weapon() const;
	void set_health(int health);
	bool isAlive(int health);
	int attak(int health);
};

