#pragma once
#include<iostream>
#include<string.h>

class String
{
private:
	char* string;
	void copy(const char* string)
	{
		this->string = new char[strlen(string) + 1];
		strcpy_s(this->string, strlen(string) + 1, string);
	}
	int substringIndex(char* string, char* substring)
	{
		for (int i = 0; i < strlen(string); i++)
		{
			if (string[i] == substring[0] && strlen(substring) == 1)
			{
				return i;
			}

			if (string[i] == substring[0] && strlen(substring) > 1)
			{
				for (int j = 1; j < strlen(substring); j++)
				{
					if (string[i + j] != substring[j])
					{
						break;
					}
					return i;
				}
			}
		}
	}
public:
	String();
	String(const char* string);
	String(const String &other);
	~String();
	String operator+ (char c);
	String operator+ (String other);
	bool operator== (String other);
	bool compare(String other);
	String add(char c);
	bool contains(String other);
	String operator- (String other);
};

