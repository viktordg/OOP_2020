#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

struct Planet
{
	char name[10];
	double distanceToTheSun;
	double diameter;
	double mass;

	void create(const char* inputName, double inputDistanceTOTheSun, double inputDiameter, double inputMass)
	{
		strcpy_s(name, inputName);
		distanceToTheSun = inputDistanceTOTheSun;
		diameter = inputDiameter;
		mass = inputMass;
	}

	void print()
	{
		cout << "Name: ";
		for (int i = 0; name[i] != '\0' ; i++)
		{
			cout << name[i];
		}
		cout << endl;
		cout << "Distance To The Sun: " << distanceToTheSun << endl;
		cout << "Diameter: " << diameter << endl;
		cout << "Mass: " << mass << endl;
	}

	double timeFromSunToPlanet()
	{
		return distanceToTheSun / 299792;
	}
};

int main()
{
	Planet A;
	char name[] = "Earht";
	A.create(name, 149600000, 12742, 10);
	A.print();
	cout << "Seconds: " << A.timeFromSunToPlanet() << endl;

	Planet B;
	char name1[] = "Mars";
	B.create(name1, 149600000, 12742, 10);

	Planet C;
	char name2[] = "Saturn";
	C.create(name2, 149600000, 12742, 10);

	Planet planets[2];

	/*for (Planet x : planets)
	{
		x.print();
	}*/

	for (int i = 0; i < 2; i++)
	{
		planets[i].print();
	}
    return 0;
}

