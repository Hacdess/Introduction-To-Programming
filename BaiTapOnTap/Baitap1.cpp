#include "Baitap1.h"

void InputCirleMatrixFromConsole(Circle matrix[][MAX], int& row, int& col)
{
	do
	{
		cout << "Input the number of matrix's rows and cols (0 < row, col <= " << MAX << ") separated by space: ";
		cin >> row >> col;
	} while (row < 1 || col < 1 || row > MAX || col > MAX);

	cout << endl;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
		{
			InputCircle(matrix[i][j]);
			cout << endl;
		}
}

bool ReadFile(const char filename[], Circle matrix[][MAX], int& row, int& col)
{
	ifstream fin(filename);
	if (!fin)
	{
		cout << "Can't open file " << filename << endl;
		return false;
	}

	fin >> row >> col;
	fin.ignore();

	char c;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
		{
			fin >> c;
			fin.ignore();

			fin >> matrix[i][j].center.x;
			fin >> c;
			fin.ignore();
			fin >> matrix[i][j].center.y;
			fin >> c >> c;
			fin.ignore();

			fin >> matrix[i][j].radius;
			fin >> c;
			fin.ignore();
		}

	fin.close();
	return true;
}