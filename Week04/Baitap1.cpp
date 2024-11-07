#include "Baitap1.h"

bool IsSquareNumber(int n)
{
    int sqrtN = (int) sqrt(n);
    return sqrtN * sqrtN == n;
}
