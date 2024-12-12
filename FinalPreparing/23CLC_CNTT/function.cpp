#include "function.h"

int findChar(char sentence[], int n, char c)
{
    for (int i = 0; i < n; ++i)
        if (c == sentence[i])
            return i;
    return -1;
}

bool isVowel(char c)
{
    char vowels[] = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};
    return (findChar(vowels, 12, c) >= 0 ? true : false);
}

void makeSpoonerism(char twowords[], char newTwoWords[])
{
    int len = strlen(twowords);
    int start1, start2, end1;

    int i = 0;
    for (i; !isVowel(twowords[i]); ++i);
    start1 = i - 1;

    for (i; twowords[i] != ' '; ++i);
    end1 = i;

    ++i;
    for (i; !isVowel(twowords[i]); ++i);
    start2 = i - 1;

    int j = 0;
    i = 0;
    for (i; i < start1; ++i)
        newTwoWords[j++] = twowords[i];
    for (i = start2; i < len; ++i)
        newTwoWords[j++] = twowords[i];
    newTwoWords[j++] = ' ';
    for (i = end1 + 2; i < start2; ++i)
        newTwoWords[j++] = twowords[i];
    for (i = start1; i < end1; ++i)
        newTwoWords[j++] = twowords[i];
    newTwoWords[j] = '\0';
}