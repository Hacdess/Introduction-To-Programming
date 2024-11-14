#include "Baitap7.h"
#pragma once

bool IsSaddleValue(int arr[][100], int row, int col, int indexRow, int indexCol)
{
	for (int i = 0; i < col; ++i)
		if (arr[indexRow][indexCol] < arr[indexRow][i])
			return false;

	for (int i = 0; i < row; ++i)
		if (arr[indexRow][indexCol] > arr[i][indexCol])
			return false;

	return true;
}

int CountSaddleValues(int arr[][100], int row, int col)
{
	int count = 0;

	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			if (IsSaddleValue(arr, row, col, i, j))
				++count;

	return count;
}
