#pragma once
#include<iostream>
using namespace std;

class Beer
{
private:
	char brand[127];
	int mil;
public:
	Beer();
	Beer(char* brand, int mil);
	char* get_brand();
	int get_mil() const;
	void set_brand(char* brand);
	void set_mil(int mil);
	void combine(char* word);
	bool isCombined(char* brand);
};