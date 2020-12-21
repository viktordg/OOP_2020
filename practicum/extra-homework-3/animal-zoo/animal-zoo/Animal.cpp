#include "stdafx.h"
#include "Animal.h"


Animal::Animal()
{
	strcpy_s(this->name, "----");
	this->age = 0;
	AnimalType type;
	this->type = type;
}
Animal::Animal(char* name, int age, AnimalType type)
{
	strcpy_s(this->name, name);
	this->age = age;
	this->type = type;
}
