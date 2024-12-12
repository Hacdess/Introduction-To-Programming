#include <iostream>
#include <cstring>

using namespace std;

unsigned myPow(int m, int n)
{
    if (m == 0)
        return 0;
    if (n == 0)
        return 1;

    unsigned int ans = m;

    for (int i = 1; i < n; ++i)
        ans *= m;

    return ans;
}

unsigned int convert(char bin[])
{
    int len = strlen(bin);
    unsigned int dec = 0;

    for (int i = 0; i < len; ++i)
    {
        dec <<= 1;
        if (bin[i] == '1')
            dec |= 1;
    }

    // for (int i = len - 1; i >= 0; --i)
    //     if (bin[i] == '1')
    //         dec += myPow(2, len - i - 1);

    return dec;
}

int main() {
    char bin[17];
    int bits;
    cout << "input number of bits: ";
    cin >> bits;
    cin.ignore();
    cin.getline(bin, bits + 1);
    cout << convert(bin);
}