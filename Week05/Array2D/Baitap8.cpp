#include "Baitap8.h"
#pragma once

bool IsQueenValue(int arr[][100], int row, int col, int indexRow, int indexCol)
{
	for (int i = 0; i < col; ++i)
		if (arr[indexRow][indexCol] < arr[indexRow][i])
			return false;

	for (int i = 0; i < row; ++i)
		if (arr[indexRow][indexCol] < arr[i][indexCol])
			return false;

	for (int i = 1; indexRow - i >= 0 && indexCol - i >= 0; ++i)
		if (arr[indexRow][indexCol] < arr[indexRow - i][indexCol - i])
			return false;
	for (int i = 1; indexRow + i < row && indexCol + i < col; ++i)
		if (arr[indexRow][indexCol] < arr[indexRow + i][indexCol + i])
			return false;

	for (int i = 1; indexRow - i >= 0 && indexCol + i < col; ++i)
		if (arr[indexRow][indexCol] < arr[indexRow - i][indexCol + i])
			return false;
	for (int i = 1; indexRow + i < row && indexCol - i >= 0; ++i)
		if (arr[indexRow][indexCol] < arr[indexRow + i][indexCol - i])
			return false;

	return true;
}

int CountQueenValues(int arr[][100], int row, int col)
{
	int count = 0;

	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			if (IsQueenValue(arr, row, col, i, j))
				++count;

	return count;
}
