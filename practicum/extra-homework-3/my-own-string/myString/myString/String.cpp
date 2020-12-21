#include "stdafx.h"
#include "String.h"

String::String()
{
	copy("");
}
String::String(const char* string)
{
	copy(string);
}
String::String(const String &other)
{
	string = new char[strlen(other.string) + 1];
	strcpy_s(this->string, strlen(other.string) + 1, other.string);
}
String::~String()
{
	delete[] this->string;
}
String String::operator+(char c)
{
	String result;
	result.string = new char[strlen(this->string) + 2];
	strcpy_s(result.string, strlen(this->string), this->string);
	result.string[strlen(this->string)] = c;
	result.string[strlen(this->string) + 1] = 0;
	return result;
}
String String::operator+(String other)
{
	String result;
	result.string = new char[strlen(this->string) + strlen(other.string) + 1];
	strcpy_s(result.string, strlen(this->string) + strlen(other.string) + 1, this->string);
	strcpy_s(result.string, strlen(this->string) + strlen(other.string) + 1, other.string);
	return result;
}
bool String::operator==(String other)
{
	return strcmp(this->string, other.string) == 0;
}
bool String::compare(String other)
{
	if (strlen(this->string) == strlen(other.string))
	{
		for (int i = 0; i < strlen(this->string); i++)
		{
			if (this->string[i] != other.string[i])
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}
String String::add(char c)
{
	String result;
	result.string = new char[strlen(this->string) + 2];
	strcpy_s(result.string, strlen(this->string), this->string);
	result.string[strlen(this->string)] = c;
	result.string[strlen(this->string) + 1] = 0;
	return result;
}
bool String::contains(String other)
{
	if (strlen(other.string) == 0)
	{
		return true;
	}

	int i = 0;
	int j = 0;
	 
	while (i < strlen(other.string) && j < strlen(this->string))
	{
		if (other.string[i] == this->string[i])
		{
			i++;
		}

		if (strlen(other.string) == i)
		{
			return true;
		}

		j++;
	}

	return false;
}
String String::operator-(String other)
{
	if (!(this->contains(other)))
	{
		return this->string;
	}

	char* result = new char[strlen(this->string) - strlen(other.string) + 1];
	int index = substringIndex(this->string, other.string);
	int continueIndex = index + strlen(other.string);
	int end = strlen(this->string) - continueIndex;

	for (int i = 0; i < index; i++)
	{
		result[i] = this->string[i];

	}
	for (int i = 0; i < end; i++)
	{
		result[index + i] = this->string[continueIndex + i];
	}
	result[strlen(this->string) - strlen(other.string)] = 0;
	delete[] this->string;
	this->string = result;
}




