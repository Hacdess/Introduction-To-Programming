#include "RemoveExtraSpaces.h"

void RemoveExtraSpaces(char str[])
{
    int len = strlen(str);
    int i = 0, j = 0;

    while (str[i] == ' ')
        i++;

    while (i < len) {
        if (str[i] == ' ' && (i + 1 < len && str[i + 1] != ' '))
            str[j++] = str[i++];
        else if (str[i] != ' ')
            str[j++] = str[i++];
        else
            i++;
    }

    if (j > 0 && str[j - 1] == ' ')
        j--;

    str[j] = '\0';
}
