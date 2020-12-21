#include "stdafx.h"
#include "Beer.h"
using namespace std;

Beer::Beer()
{
	strcpy_s(this->brand, "----");
	this->mil = 0;
}

Beer::Beer(char* brand, int mil)
{
	strcpy_s(this->brand, brand);
	this->mil = mil;
}

const char* Beer::get_brand() const
{
	return this->brand;
}

int Beer::get_mil() const
{
	return this->mil;
}

void Beer::set_brand(char* brand)
{
	strcpy_s(this->brand, brand);
}

void Beer::set_mil(int mil)
{
	this->mil = mil;
}

void Beer::combine(char* word)
{
	strcat(this->brand, "&");
	strcat(this->brand, word);
}

bool Beer::isCombined(char* brand)
{
	for (int i = 0;brand[i] != '/0' ; i++)
	{
		if (brand[i] == '&')
		{
			return true;
		}
		return false;
	}
}


