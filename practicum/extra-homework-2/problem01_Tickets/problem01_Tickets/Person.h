#pragma once
#include<iostream>

class Person
{
private:
	char name[128];
	int eg;
	int age;
public:
	Person();
	Person(char* name, int eg, int age);
	char* get_name();
	int get_eg() const;
	int get_age() const;
};

