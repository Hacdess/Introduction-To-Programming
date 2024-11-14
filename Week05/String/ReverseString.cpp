#include "ReverseString.h"

void SwapChar(char& c1, char& c2)
{
    char temp = c1;
    c1 = c2;
    c2 = temp;
}

void ReverseString(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
        SwapChar(str[i], str[len - i - 1]);
}
