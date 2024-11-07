#include "Baitap2.h"

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    if (n < 4)
        return true;

    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; ++i)
        if (n % i == 0)
            return false;

    return true;
}
