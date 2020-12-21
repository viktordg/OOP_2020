#include "stdafx.h"
#include "AnimalType.h"

AnimalType::AnimalType()
{
	strcpy_s(this->typeName, "----");
	this->averageAge = 0;
	this->currentStatus = safe;
}
AnimalType::AnimalType(char* typeName, int averageAge, Status currentStatus)
{
	strcpy_s(this->typeName, typeName);
	this->averageAge = averageAge;
	this->currentStatus = currentStatus;
}
