#include "Baitap8.h"

long long ComputeProductSquareOrEvenNumbers(int n)
{
    if (n < 1)
        return -1;

    long long product = 1;

    for (int i = 1; i <= n; ++i)
        if (i % 2 == 0 || IsSquareNumber(i))
            product *= i;

    return product;
}
