#include "CapitalizeFirstLetter.h"

bool IsLowercase(char c)
{
    return c >= 'a' && c <= 'z';
}

bool IsUppercase(char c)
{
    return c >= 'A' && c <= 'Z';
}

bool IsLetter(char c)
{
    return IsLowercase(c) || IsUppercase(c);
}

void CapitalizeFirstLetter(char str[])
{
    int len = strlen(str);

    bool newWord = true;

    for (int i = 0; i < len; i++)
    {
        if (IsLetter(str[i]))
            if ((i == 0 || IsLetter(str[i]) && str[i - 1] == ' ') && IsLowercase(str[i]))
                str[i] = (char) (str[i] - 32);
        else
            continue;
    }
}
