	#include "stdafx.h"
	#include<iostream>
	#include<string>
	#include<fstream>
	#include<cstdlib>
	using namespace std;

	struct Product
	{
		char description[32];
		int prodNum;
		double cost;
	
		Product() : description("----"), prodNum(0000), cost(00.00) {}

		void create(const char* inputDesc, int inputProdNum, double inputCost)
		{
			strcpy_s(description, inputDesc);
			prodNum = inputProdNum;
			cost = inputCost;
		}
		void print()
		{
			cout << description << ", " << prodNum << ", " << cost << endl;
		}
	};

	int main()
	{	
		ofstream myfile("02_assist.txt");
		if (myfile.is_open())
		{
			Product* fileArray = new Product[5];
			
			for (int i = 0; i < 5; i++)
			{
				char ws;
				char currentName[32];
				int currentProdNum;
				double currentCost;

				cout << "Product:" << endl;
				cin.getline(currentName, 32, '\n');
				cout << "Prod num:" << endl;
				cin >> currentProdNum;
				ws = cin.get();
				cout << "Cost:" << endl;
				cin >> currentCost;
				ws = cin.get();

				fileArray[i].create(currentName, currentProdNum, currentCost);
			}

			for (int i = 0; i < 5; i++)
				myfile << fileArray[i].description << ", " << fileArray[i].prodNum << ", " << fileArray[i].cost << endl;

			myfile.close();
			delete fileArray;
		}
		else
			exit(EXIT_FAILURE);
	//------------------------------------------------------------------------------------------------------	

		fstream input;
		input.open("02_input.txt");

		if (input.is_open())
		{
			int size;
			char ws;

			input << "Array size: " << endl;
			input >> size;
			ws = input.get();
			Product* stockArr = new Product[size];

			for (int i = 0; i < size; i++)
			{
				string currentName;
				string currentProdNum;
				string currentCost;

				getline(input, currentName);
				getline(input, currentProdNum);
				getline(input, currentCost);


				int parsedProdNum = stoi(currentProdNum);
				double parsedCost = atof(currentCost.c_str());
				char charArrCurrentName[32];
				strcpy_s(charArrCurrentName, currentName.c_str());

				stockArr[i].create(charArrCurrentName, parsedProdNum , parsedCost);
			}

			for (int i = 0; i < size; i++)
				cout << stockArr[i].description << ", " << stockArr[i].prodNum << ", " << stockArr[i].cost << endl;

			input.close();

			delete stockArr;
		}
		else
			exit(EXIT_FAILURE);
	

		return 0;
	}

