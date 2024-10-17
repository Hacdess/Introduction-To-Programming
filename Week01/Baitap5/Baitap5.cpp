// Baitap5.cpp : Input a positive integer n and a real number x. Calculate and print (x^2 + 1) ^ n.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Ex 5\n";

    int n;
    double x;

    cout << "Input a positive integer n: ";
    cin >> n;
    cout << "Input a real number x: ";
    cin >> x;

    cout << '(' << x << "^2 + 1) ^ " << n << " = " << pow((pow(x, 2) + 1), n);
}

