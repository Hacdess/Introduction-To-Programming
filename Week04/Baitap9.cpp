#include "Baitap9.h"

long long ComputeProductPrimeOrFullOddDigitsNumbers(int n)
{
    if (n < 1)
        return -1;

    long long product = 1;

    for (int i = 1; i <= n; ++i)
        if (IsPrime(i) || IsFullOddDigitsPositive(i))
            product *= i;

    return product;
}
