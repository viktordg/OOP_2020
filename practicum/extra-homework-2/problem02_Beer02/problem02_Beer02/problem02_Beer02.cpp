#include "stdafx.h"
#include<iostream>
#include "Beer.h"
using namespace std;

int main()
{
	Beer b1;
	cout << b1.get_brand() << endl;
	cout << b1.get_mil() << endl;
	char test[] = "test";
	b1.set_brand(test);
	b1.set_mil(1);
	cout << b1.get_brand() << endl;
	cout << b1.get_mil() << endl;
	b1.combine(test);
	cout << b1.get_brand() << endl;
	cout << b1.isCombined(b1.get_brand()) << endl;

	char name[] = "Stella Artois";
	Beer b2(name, 500);

    return 0;
}

