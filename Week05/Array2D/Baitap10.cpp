#include "Baitap10.h"
#pragma once

int FindMostFrequentDigit(int arr[][100], int row, int col)
{
    int count[10] = { 0 };

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            int num = abs(arr[i][j]);
            if (num == 0)
                count[0]++;
            else
                while (num > 0)
                {
                    count[num % 10]++;
                    num /= 10;
                }
        }
    }

    int maxCount = 0;
    int mostFrequentDigit = 0;
    for (int i = 0; i < 10; ++i)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    return mostFrequentDigit;
}
