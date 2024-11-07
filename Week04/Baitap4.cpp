#include "Baitap4.h"

bool IsFullOddDigitsPositive(int n)
{
    if (n < 1)
        return false;

	while (n)
	{
		if (n % 10 % 2 == 0)
			return false;
		n /= 10;
	}

	return true;
}
