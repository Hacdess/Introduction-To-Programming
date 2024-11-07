#include "Baitap10.h"

int FindFirstSquareNumber(int n)
{
	for (int i = 1; i <= n; ++i)
		if (IsSquareNumber(i))
			return i;

	return -1;
}

int FindLastPerfectNumber(int n)
{
	for (int i = n; i >= 1; --i)
		if (IsPerfectNumber(i))
			return i;

	return -1;
}
