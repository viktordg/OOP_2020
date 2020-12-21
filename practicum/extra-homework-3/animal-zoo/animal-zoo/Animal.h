#pragma once
#include<iostream>
#include "AnimalType.h"

class Animal
{
private:
	char name[30];
	int age;
	AnimalType type;
public:
	Animal();
	Animal(char* name, int age, AnimalType type);
};

