#include "Baitap5.h"
#pragma once

void ListRowsContainNegatives(int arr[][100], int row, int col)
{
	cout << "Rows that have negative values:\n";

	for (int i = 0; i < row; ++i)
	{
		int j = 0;

		for (j; j < col && arr[i][j] >= 0; ++j);

		if (j != col)
		{
			cout << "Row " << i << ": ";
			for (j = 0; j < col; ++j)
				cout << arr[i][j] << ' ';
			cout << endl;
		}
	}
}
