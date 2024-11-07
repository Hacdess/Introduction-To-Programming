#include "Baitap7.h"

long long ComputeSumSquareOrPerfectNumbers(int n)
{
	long long sum = 0;
	
	for (int i = 1; i <= n; ++i)
		if (IsSquareNumber(i) || IsPerfectNumber(i))
			sum += i;

	return sum;
}
