#include "WordPerLine.h"

void PrintWordPerLine(char str[])
{
	int len = strlen(str);
	char word[51];
	int index = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (index > 0)
            {
                word[index] = '\0';
                cout << word << endl;
                index = 0;
            }
        }
        else
            word[index++] = str[i];
    }

    if (index > 0)
    {
        word[index] = '\0';
        cout << word << endl;
    }
}
