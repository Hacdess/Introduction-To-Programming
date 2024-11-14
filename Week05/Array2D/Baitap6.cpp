#include "Baitap6.h"
#pragma once

void ListRowWithAllEvens(int arr[][100], int row, int col)
{
	cout << "Rows that have only even values:\n";

	for (int i = 0; i < row; ++i)
	{
		int j = 0;
		for (j; j < col && arr[i][j] % 2 == 0; ++j);

		if (j == col - 1)
		{
			cout << "Row " << i << ": ";
			for (j = 0; j < col; ++j)
				cout << arr[i][j] << ' ';
			cout << endl;
		}
	}
}
