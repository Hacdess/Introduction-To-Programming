// Baitap4.cpp : Input a real x, calculate and print the values y1 = x / 3 and y2 = x / 7, rounding them to 2 decimal places.

#include <iostream>

using namespace std;

static void roundingTo2DecimalPlace(double& x)
{
    x = double(int(x * 100 + 0.5)) / 100;
}

int main()
{
    cout << "Ex 4\n";
    cout << "Input a real x: ";
    double x;
    cin >> x;

    double y1 = x / 3;
    double y2 = x / 7;

    roundingTo2DecimalPlace(y1);
    roundingTo2DecimalPlace(y2);

    cout << "y1: " << y1 << endl;
    cout << "y2: " << y2;

    return 0;
}