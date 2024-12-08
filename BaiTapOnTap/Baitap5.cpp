#include "Baitap5.h"

void SortMatrxAscendingByYAndArea(Circle matrix[][MAX], const int &row, const int &col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 1; j < col; j++)
		{
			int k = j - 1;
			Circle key = matrix[i][j];

			for (k; k >= 0 && (key.center.y < matrix[i][k].center.y ||
				(key.center.y == matrix[i][k].center.y && ComputeCircleArea(key) < ComputeCircleArea(matrix[i][k]))); --k)
				matrix[i][k + 1] = matrix[i][k];

			matrix[i][k + 1] = key;
		}
	}
}