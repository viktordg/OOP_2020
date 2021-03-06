#include "stdafx.h"
#include<iostream>
#include<string>
#include "Store.h"
#include "Product.h"
using namespace std;

int main()
{
	string command;

	Store store;

	do
	{
		getline(cin, command);

		if (command == "Add")
		{
			cout << "Input product: " << endl;

			int SKU;
			char brand[30];
			char model[30];
			bool category;
			char color[15];
			int size;
			double price;
			int count;

			cin >> SKU;
			cin.getline(brand, 30);
			cin.getline(model, 30);
			cin >> category;
			cin.getline(color, 15);
			cin >> size;
			cin >> price;
			cin >> count;

			Product newProduct(SKU, brand, model, category, color, size, price, count);

			store.add(newProduct);
		}
		else if (command == "Delete")
		{
			int index;
			cout << "Input index: ";
			cin >> index;

			store.deleteProduct(index);
		}
		else if (command == "Change")
		{
			int index;
			cout << "Input index: ";
			cin >> index;

			cout << "Input product: " << endl;
			int SKU;
			char brand[30];
			char model[30];
			bool category;
			char color[15];
			int size;
			double price;
			int count;

			cin >> SKU;
			cin.getline(brand, 30);
			cin.getline(model, 30);
			cin >> category;
			cin.getline(color, 15);
			cin >> size;
			cin >> price;
			cin >> count;

			Product newProduct(SKU, brand, model, category, color, size, price, count);

			store.change(newProduct, index);
		}
		else if (command == "Display")
		{
			store.print();
		}
		else if (command == "Quit")
		{
			store.quit();
		}
	} while (true);
	
    return 0;
}

