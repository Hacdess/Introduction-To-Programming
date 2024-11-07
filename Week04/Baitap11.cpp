#include "Baitap11.h"

long long SolveExercise11(int n)
{
	long long sum = 0;

	int firstPerfect = -1, lastPerfect = FindLastPerfectNumber(n);

	if (lastPerfect == -1)
		return sum;

	for (int i = 1; i <= n; ++i)
		if (IsPerfectNumber(i))
		{
			firstPerfect = i;
			break;
		}

	for (int i = firstPerfect; i <= lastPerfect; ++i)
		sum += i;

	return sum;
}
