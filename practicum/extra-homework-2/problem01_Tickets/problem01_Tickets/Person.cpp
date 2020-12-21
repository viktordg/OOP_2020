#include "stdafx.h"
#include "Person.h"


Person::Person()
{
	strcpy_s(this->name, "----");
	this->eg = 0;
	this->age = 0;
}


Person::Person(char* name, int eg, int age)
{
	strcpy_s(this->name, name);
	this->eg = eg;
	this->age = age;
}

char* Person::get_name()
{
	return this->name;
}

int Person::get_eg() const
{
	return this->eg;
}

int Person::get_age() const
{
	return this->age;
}
