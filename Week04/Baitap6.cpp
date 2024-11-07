#include "Baitap6.h"

long long ComputeSumPrimes(int n)
{
    long long sum = 0;

    for (int i = 1; i <= n; ++i)
        if (IsPrime(i))
            sum += i;

    return sum;
}
