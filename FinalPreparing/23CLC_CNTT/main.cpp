#include "function.h"

int main()
{
    char twoWords[MAX];
    cin.getline(twoWords, MAX);
    char newTwoWords[MAX];

    makeSpoonerism(twoWords, newTwoWords);
    cout << newTwoWords << endl;

    strcat(twoWords, &twoWords[0]);
    cout << twoWords;
}