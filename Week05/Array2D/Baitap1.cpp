#include "Baitap1.h"
#pragma once

int ComputeSumPositiveArray2D(int arr[][100], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            if (arr[i][j] > 0)
                sum += arr[i][j];
    return sum;
}
