#include "NotLetterOrDigit.h"

bool IsDigit(char c)
{
	return c >= '0' && c <= '9';
}

void GetListNotLetterNorDigit(char str[], int indexes[], int& len)
{
	len = 0;
	int lenStr = strlen(str);
	for (int i = 0; i < lenStr; ++i)
		if (!IsDigit(str[i]) && !IsLetter(str[i]))
			indexes[len++] = i;
}

bool IsValidChar(char c)
{
	return (IsDigit(c) || IsLetter(c));
}

void RemoveNotLetterNorDigit(char str[])
{
	int len = strlen(str);

	for (int i = 0; i < len; ++i)
		if (!IsValidChar(str[i]))
		{
			bool del = false;
			cout << "'" << str[i] << "' is not a letter or a digit. ";
			cout << "Do you want to delete? (0 - no / 1 - yes): ";
			cin >> del;

			if (del)
			{
				for (int j = i; j < len - 1; ++j)
					str[j] = str[j + 1];
				--i;
				--len;
				str[len] = '\0';
			}
				
		}
}
