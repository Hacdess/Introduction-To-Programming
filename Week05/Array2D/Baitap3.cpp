#include "Baitap3.h"
#pragma once

int FindMaxOnEdgesArray2D(int arr[][100], int row, int col)
{
    int max = arr[0][0];
    
    for (int i = 0; i < row; ++i)
    {
        int max0 = arr[i][0] > arr[i][col - 1] ? arr[i][0] : arr[i][col - 1];
        if (max < max0)
            max = max0;
    }

    for (int i = 0; i < col; ++i)
    {
        int max0 = arr[0][i] > arr[row - 1][i] ? arr[0][i] : arr[row - 1][i];
        if (max < max0)
            max = max0;
    }

    return max;
}
