#include "stdafx.h"
#include<iostream>
#include"Hero.h"
#include"Mob.h"

int main()
{
	Mob mob("Golem", 70, 32, 64);
	Hero hero("Naruto", 100, 100, "ninja", 70, 55);
	hero.attack(mob);
    return 0;
}

