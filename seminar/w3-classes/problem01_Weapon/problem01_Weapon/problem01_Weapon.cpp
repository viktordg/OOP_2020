#include "stdafx.h"
#include<iostream>
#include "Weapon.h"
#include "Fighter.h"
using namespace std;

int main()
{
	char name1[] = "Frostmourne";
	Weapon wep1(name1, 9999, 9999);
	char fght1Name[] = "Lich King";
	Fighter LichKing(fght1Name, 9999, 999999, wep1);

	char name2[] = "Ashbringer";
	Weapon wep2(name1, 10000, 10000);
	char fght2Name[] = "Tirion Fordring";
	Fighter TirionFordring(fght1Name, 10000, 100000, wep2);

	int aftermathHealth = TirionFordring.attak(LichKing.get_health());

	LichKing.set_health(aftermathHealth);

	cout << LichKing.get_health() << endl;

	Weapon TririonsWeapon = TirionFordring.get_Weapon();

	cout << TririonsWeapon.get_durability() << endl;

	cout << LichKing.isAlive(LichKing.get_health()) << endl;

    return 0;
}

