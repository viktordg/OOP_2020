#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

struct Point
{
	double x;
	double y;

	void create(double inputX, double inputY)
	{
		if (inputX < 100 && inputY < 100)
		{	
			x = inputX;
			y = inputY;
		}
		else
		{
			cout << "CAN`T" << endl;
		}
	}

};

void check(Point A, Point B, Point C, Point D)
{
	double bottomSide = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
	// we do the same for the other 3 sides
}

//make a simple function wich checks if the figure is a rectangle or a square

int main()
{
	Point A;
	double xA, yA;
	cin >> xA >> yA;
	A.create(xA, yA);
	Point B;
	double xB, yB;
	cin >> xB >> yB;
	A.create(xB, yB);
	Point C;
	double xC, yC;
	cin >> xC >> yC;
	A.create(xC, yC);
	Point D;
	double xD, yD;
	cin >> xD >> yD;
	A.create(xD, yD);



    return 0;
}

