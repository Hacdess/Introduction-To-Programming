#include "Baitap2.h"
#pragma once

bool IsPrime(int n)
{
	if (n < 4)
		return n > 1;
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

int CountPrimesArray2D(int arr[][100], int row, int col)
{
	int count = 0;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			if (IsPrime(arr[i][j]))
				++count;
	return count;
}
