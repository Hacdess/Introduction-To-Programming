#include "WordLengthByIndex.h"

int GetWordLengthByIndex(char str[], int index)
{
    int len = strlen(str);

    if (index < 0 || index >= len)
        return -1;

    if (!IsLetter(str[index]))
        return 0;    

    int i = index, j = index;

    while (i > 0 && IsLetter(str[i - 1])) {
        --i;
    }

    while (j < len - 1 && IsLetter(str[j + 1])) {
        ++j;
    }

    return j - i + 1;
}
