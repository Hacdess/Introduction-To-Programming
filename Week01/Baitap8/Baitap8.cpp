// Baitap8.cpp : 
// Assuming the monthly interest rate of the bank is q (for example, if the interest rate is 1 %, then q = 0.01), 
// with the form of savings deposit with compound interest.
// Please input the deposit amount m, the number of months n, and the interest rate q, 
// then calculate and print the total interest earned.

#include <iostream>
using namespace std;;

int main()
{
    cout << "Ex 8\n";

    cout << "Input the deposit amount m: ";
    int m;
    cin >> m;

    cout << "Input the number of months n: ";
    int n;
    cin >> n;

    cout << "Input the interest rate q: ";
    double q;
    cin >> q;

    cout << "Total interest earned: " << m * pow(1 + q, n - 1) * q;

    return 0;
}