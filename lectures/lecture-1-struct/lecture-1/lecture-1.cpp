#include "stdafx.h"
#include<iostream>
using namespace std;



//more complex struct
struct Date
{
	int day, month, year;
};

struct Person
{
	char name[10];
	Date birthdate;
};
//end of examle

struct Point
{
	double x;
	double y;
};

struct Vect 
{
	double coords[10];
};

struct Rational
{
	double numerator;
	double denominator;
};

Rational multiply(Rational num1, Rational num2)
{
	Rational result;
	result.numerator = num1.numerator*num2.numerator;
	result.denominator = num1.denominator*num2.denominator;
	return result;
}

void printPoint(Point p)
{
	cout << p.x << endl;
	cout << p.y << endl;
}

void printRational(Rational num)
{
	cout << num.numerator << endl;
	cout << num.denominator << endl;
}

int main()
{
	cout << "POINT" << endl;

	Point p1;
	p1.x = 3.1;
	p1.y = 5;

	Point p2;
	p2.x = 1;
	p2.y = 2.2;

	printPoint(p1);
	printPoint(p2);

	cout << endl;
	cout << "VECTOR" << endl;

	Vect vector;
	vector.coords[2] = 60;
	//cin >> vector.coords[0];

	//cout << vector.coords[0] << endl;
	cout << vector.coords[2] << endl;
	

	cout << endl;
	cout << "RATIONAL" << endl;

	Rational num1;
	num1.numerator = 2.0;
	num1.denominator = 3.0;

	Rational num2;
	num2.numerator = 5.0;
	num2.denominator = 5.0;
	
	printRational(multiply(num1, num2));

	cout << endl;
	cout << "FOREACH IN C++" << endl;

	int array[] = { 12,13,14,15 };

	for (int x : array)
	{
		cout << x << endl;
	}

	cout << endl;
	cout << "" << endl;


    return 0;
}

