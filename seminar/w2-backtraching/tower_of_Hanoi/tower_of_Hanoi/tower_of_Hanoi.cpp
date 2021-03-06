#include "stdafx.h"
#include<iostream>
using namespace std;

void towerOfHanoi(int n, char firstRod, char middleRod, char thirdRod)
{
	if (n == 1)
	{
		cout << "Move disc from " << firstRod << " to " << thirdRod << endl;
		return;
	}
	towerOfHanoi(n - 1, firstRod, thirdRod, middleRod);
	cout << "Move disc from " << firstRod << " to " << thirdRod << endl;
	towerOfHanoi(n - 1, middleRod, firstRod, thirdRod);
}

int main()
{
	towerOfHanoi(4, 'A', 'B', 'C');
    return 0;
}

