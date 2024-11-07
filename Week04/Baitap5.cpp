#include "Baitap5.h"

bool IsPerfectNumber(int n)
{
	int sum = 0;
	int half = n / 2;

	for (int i = 1; i <= half; ++i)
		if (n % i == 0)
			sum += i;

	return sum == n;
}