#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

struct Rectangle
{
	double a;
	double b;

	double getR(Rectangle rectangle)
	{
		double result;

		result = sqrt((a*a + b * b)) / 2;
		return result;
	}

	double area(Rectangle rectangle)
	{
		return a * b;
	}

	double circumference(Rectangle retctangle)
	{
		return a + a + b + b;
	}
};

Rectangle create(double a, double b)
{
	Rectangle result;
	result.a = a;
	result.b = b;
	return result;
}

void print(Rectangle rectangle)
{
	cout << rectangle.a << endl;
	cout << rectangle.b << endl;
}

int main()
{
	Rectangle rectangle;
	int a, b;
	cin >> a >> b;
	rectangle = create(a, b);

	print(rectangle);

	cout << "Area: " << rectangle.area(rectangle) << endl;
	cout << "R: " << rectangle.getR(rectangle) << endl;
	cout << "Circumferece: " << rectangle.circumference(rectangle) << endl;
	
    return 0;
}

