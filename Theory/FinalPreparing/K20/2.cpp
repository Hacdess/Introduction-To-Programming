#include <iostream>
#include <cstring>

using namespace std;

// unsigned int convert(char bin[])
// {
//     unsigned int ans = 0;
//     int len = strlen(bin);

//     for (int i = 0; i < len; ++i)
//     {
//         ans <<= 1;
//         ans |= (bin[i] ==  '1');
//     }

//     return ans;
// }

int pow(int n, int m)
{
    if (n == 0)
        return 0;

    if (n == 1 || m == 0)
        return 1;

    int ans = 1;
    for (int i = 0; i < m; ++i)
        ans *= n;
    return ans;
}

unsigned int convert(char bin[])
{
    unsigned int ans = 0;
    int len = strlen(bin);
    for (int i = 0; i < len; ++i)
        if (bin[len - 1 - i] == '1')
            ans += pow(2, i);
    return ans;
}


int main()
{
    char bin[9];
    cin.getline(bin, 9);
    cout << convert(bin);
}