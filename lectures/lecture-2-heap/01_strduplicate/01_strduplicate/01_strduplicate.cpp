#include "stdafx.h"
#include<iostream>
using namespace std;

int getSize(char* inputArray)
{
	int size = 0;
	for (int i = 0; inputArray[i] != '\0'; i++)
	{
		size++;
	}

	return size;
}
char* strduplicate(char* inputArray, size_t &size)
{
	int arraySize = getSize(inputArray);
	size = getSize(inputArray) * 2;
	char* result = new char[size];
	for (int i = 0; i < arraySize; i++)
	{
		result[i] = inputArray[i];
	}
	for (int i = 0; i < arraySize; i++)
	{
		result[i+arraySize] = inputArray[i];
	}

	return result;
}
int main()
{
	char inputArray[128];
	cin.getline(inputArray, 128);
	
	size_t size;
	char* duplicatedString;

	duplicatedString = strduplicate(inputArray, size);

	cout << duplicatedString << endl;
	delete duplicatedString;

    return 0;
}

