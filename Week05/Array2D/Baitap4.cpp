#include "Baitap4.h"
#pragma once

int FindMinPositiveArray2D(int arr[][100], int row, int col)
{
    int MinPositive = INT_MAX;

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            if (arr[i][j] > 0 && arr[i][j] < MinPositive)
                MinPositive = arr[i][j];

    return (MinPositive != INT_MAX ? MinPositive : -1);
}
