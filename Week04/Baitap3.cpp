#include "Baitap3.h"

bool IsPalindrome(int n)
{
	if (n < 0)
		return false;
	if (n < 10)
		return true;

	int reverseHalf = 0;

	while (reverseHalf < n)
	{
		reverseHalf = reverseHalf * 10 + (n % 10);
		n /= 10;
	}

	return n == reverseHalf || n == reverseHalf / 10;
}
