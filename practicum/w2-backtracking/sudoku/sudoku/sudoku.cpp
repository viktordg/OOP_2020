#include "stdafx.h"
#include<iostream>
using namespace std;

bool checkRow(int  grid[][9], int row, int col, int currentNumber)
{
	for (int i = 0; i < 9; i++)
	{
		if (grid[i][col] != currentNumber && i != row)
		{
			return true;
		}
		return false;
	}
}

bool checkCol(int  grid[][9], int row, int col, int currentNumber)
{
	for (int i = 0; i < 9; i++)
	{
		if (grid[row][i] != currentNumber && i != row)
		{
			return true;
		}
		return false;
	}
}

int currentBox(int grid[][9], int row, int col)
{
	if (row <= 2 && col <= 2)
	{
		return 1;
	}
	if (row <= 2 && col <= 5)
	{
		return 2;
	}
	if (row <= 2 && col <= 8)
	{
		return 3;
	}
	if (row <= 5 && col <= 2)
	{
		return 4;
	}
	if (row <= 5 && col <= 5)
	{
		return 5;
	}
	if (row <= 5 && col <= 8)
	{
		return 6;
	}
	if (row <= 8 && col <= 2)
	{
		return 7;
	}
	if (row <= 8 && col <= 5)
	{
		return 8;
	}
	if (row <= 8 && col <= 8)
	{
		return 9;
	}
}

bool checkInCurrentBox(int grid[][9], int row, int col, int currentNumber, int currentBox)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (grid[i + row][j + col] == currentNumber)
			{
				return false;
			}
		}
	}
	return true;
}

bool containsZeros(int grid[][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (grid[i][j] == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int getNextZeroRowIndex(int grid[][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (grid[i][j] == 0)
			{
				return i;
			}
		}
	}
}
int getNextZeroColIndex(int grid[][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (grid[i][j] == 0)
			{
				return j;
			}
		}
	}
}
void solve(int  grid[][9])
{
	if (!containsZeros)
	{
		return;
	}
	
	if (checkRow(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 1) 
		&& checkCol(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 1)
		&& checkInCurrentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 1, currentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid))))
	{
		grid[getNextZeroRowIndex(grid)][getNextZeroColIndex(grid)] = 1;
	}
	if (checkRow(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 2)
		&& checkCol(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 2)
		&& checkInCurrentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 2, currentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid))))
	{
		grid[getNextZeroRowIndex(grid)][getNextZeroColIndex(grid)] = 2;
	}
	if (checkRow(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 3)
		&& checkCol(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 3)
		&& checkInCurrentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 3, currentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid))))
	{
		grid[getNextZeroRowIndex(grid)][getNextZeroColIndex(grid)] = 3;
	}
	if (checkRow(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 4)
		&& checkCol(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 4)
		&& checkInCurrentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 4, currentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid))))
	{
		grid[getNextZeroRowIndex(grid)][getNextZeroColIndex(grid)] = 4;
	}
	if (checkRow(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 5)
		&& checkCol(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 5)
		&& checkInCurrentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 5, currentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid))))
	{
		grid[getNextZeroRowIndex(grid)][getNextZeroColIndex(grid)] = 5;
	}
	if (checkRow(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 6)
		&& checkCol(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 6)
		&& checkInCurrentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 6, currentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid))))
	{
		grid[getNextZeroRowIndex(grid)][getNextZeroColIndex(grid)] = 6;
	}
	if (checkRow(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 7)
		&& checkCol(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 7)
		&& checkInCurrentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 7, currentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid))))
	{
		grid[getNextZeroRowIndex(grid)][getNextZeroColIndex(grid)] = 7;
	}
	if (checkRow(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 8)
		&& checkCol(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 8)
		&& checkInCurrentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 8, currentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid))))
	{
		grid[getNextZeroRowIndex(grid)][getNextZeroColIndex(grid)] = 8;
	}
	if (checkRow(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 9)
		&& checkCol(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 9)
		&& checkInCurrentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid), 9, currentBox(grid, getNextZeroRowIndex(grid), getNextZeroColIndex(grid))))
	{
		grid[getNextZeroRowIndex(grid)][getNextZeroColIndex(grid)] = 9;
	}

	solve(grid);
}

int main()
{
	int grid[][9] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
					{ 5, 2, 0, 0, 0, 0, 0, 0, 0 },
					{ 0, 8, 7, 0, 0, 0, 0, 3, 1 },
					{ 0, 0, 3, 0, 1, 0, 0, 8, 0 },
					{ 9, 0, 0, 8, 6, 3, 0, 0, 5 },
					{ 0, 5, 0, 0, 9, 0, 6, 0, 0 },
					{ 1, 3, 0, 0, 0, 0, 2, 5, 0 },
					{ 0, 0, 0, 0, 0, 0, 0, 7, 4 },
					{ 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

	solve(grid);

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << grid[i][j] << ' ';
		}
		cout << endl;
	}

    return 0;
}

