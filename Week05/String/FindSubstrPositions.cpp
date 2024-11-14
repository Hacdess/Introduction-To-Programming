#include "FindSubstrPositions.h"

void FindSubstrPositions(const char str[], const char subStr[])
{
    int strLen = strlen(str);
    int subStrLen = strlen(subStr);

    if (subStrLen > strLen) {
        cout << "Sub string is longer than the original one!" << endl;
        return;
    }

    bool found = false;

    for (int i = 0; i <= strLen - subStrLen; ++i) {
        bool match = true;

        for (int j = 0; j < subStrLen; ++j) {
            if (str[i + j] != subStr[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            cout << "Sub string appears at: " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Can't find sub string!" << endl;
    }
}
