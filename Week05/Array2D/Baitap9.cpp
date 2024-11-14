#include "Baitap9.h"
#pragma once

bool IsExtremeValue(int arr[][100], int row, int col, int indexRow, int indexCol)
{
    int currentValue = arr[indexRow][indexCol];
    bool isMax = true, isMin = true;

    for (int i = -1; i <= 1; ++i)
        for (int j = -1; j <= 1; ++j)
        {
            if (i == 0 && j == 0)
                continue;

            int neighborRow = indexRow + i;
            int neighborCol = indexCol + j;

            if (neighborRow >= 0 && neighborRow < row && neighborCol >= 0 && neighborCol < col)
            {
                if (currentValue <= arr[neighborRow][neighborCol])
                    isMax = false;
                if (currentValue >= arr[neighborRow][neighborCol])
                    isMin = false;
                if (!isMax && !isMin)
                    return false;
            }
        }

    return isMax || isMin;
}

int ComputeSumExtremeValues(int arr[][100], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            if (IsExtremeValue(arr, row, col, i, j))
                sum += arr[i][j];
    return sum;
}
