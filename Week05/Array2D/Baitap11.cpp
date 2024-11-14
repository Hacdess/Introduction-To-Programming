#include "Baitap11.h"
#pragma once

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int j = i - 1;
        int k = arr[i];

        for (j; j >= 0 && k < arr[j]; --j)
            arr[j + 1] = arr[j];

        arr[j + 1] = k;
    }
}

void SortEdgesClockwise(int arr[][100], int row, int col)
{
    int boundaryValues[396];
    int index = 0;

    for (int j = 0; j < col; ++j)
        boundaryValues[index++] = arr[0][j];

    for (int i = 1; i < row; ++i)
        boundaryValues[index++] = arr[i][col - 1];

    if (row > 1)
        for (int j = col - 2; j >= 0; --j)
            boundaryValues[index++] = arr[row - 1][j];

    if (col > 1)
        for (int i = row - 2; i > 0; --i)
            boundaryValues[index++] = arr[i][0];

    InsertionSort(boundaryValues, index);

    index = 0;
    for (int j = 0; j < col; ++j)
        arr[0][j] = boundaryValues[index++];

    for (int i = 1; i < row; ++i )
        arr[i][col - 1] = boundaryValues[index++];

    if (row > 1)
        for (int j = col - 2; j >= 0; --j)
            arr[row - 1][j] = boundaryValues[index++];

    if (col > 1)
        for (int i = row - 2; i > 0; --i)
            arr[i][0] = boundaryValues[index++];
}

