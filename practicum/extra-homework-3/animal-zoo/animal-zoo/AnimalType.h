#pragma once
#include<iostream>

class AnimalType
{
private:

	enum Status { safe, endangered, extinct };

	char typeName[30];
	int averageAge;
	Status currentStatus;
public:
	AnimalType();
	AnimalType(char* typeName, int averageAge, Status currentStatus);
};

