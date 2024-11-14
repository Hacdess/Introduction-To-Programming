#include "NhapXuat.h"

void InputArray2D(int arr[][100], int& row, int& col)
{
	do
	{
		cout << "Input number of rows (0 < row <= 100): ";
		cin >> row;
	} while (row < 0 || row > 100);

	do
	{
		cout << "Input number of columns (0 < col <= 100): ";
		cin >> col;
	} while (col < 0 || col > 100);

	for (int i = 0; i < row; ++i)
	{
		cout << "Input row " << i + 1 << " (separated by space): ";
		for (int j = 0; j < col; ++j)
			cin >> arr[i][j];
	}
}

void OutputArray2D(int arr[][100], int row, int col)
{
	cout << "Array 2D:\n";
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
			cout << arr[i][j] << ' ';
		cout << endl;
	}
}
