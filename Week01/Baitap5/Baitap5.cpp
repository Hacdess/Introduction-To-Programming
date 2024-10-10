// Baitap5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int x) {
    if (x < 0)
        return 0;

    int copy = x, palin = 0;
    while (x != 0) {
        palin = palin * 10 + (x % 10);
        x /= 10;
    }
    cout << palin;
    return x == palin;
}

int main()
{
    int n;
    cin >> n;
    cout << isPalindrome(n);
}

