#include "Baitap12.h"

long long SolveExercise12(int n)
{
	long long product = 1;
	int firstPerfect = -1;
	int lastSquare = -1;

	for (int i = 1; i <= n; ++i)
		if (IsPerfectNumber(i))
		{
			firstPerfect = i;
			break;
		}

	for (int i = n; i >= 1; --i)
		if (IsSquareNumber(i))
		{
			lastSquare = i;
			break;
		}

	if (firstPerfect == -1 || lastSquare == -1)
		return -1;

	if (firstPerfect < lastSquare)
		for (int i = firstPerfect; i <= lastSquare; ++i)
			if (i % 2 == 0)
				product *= i;

	return product;
}
