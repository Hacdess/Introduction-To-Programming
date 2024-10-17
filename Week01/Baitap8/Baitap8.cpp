// Baitap8.cpp : 
// Assuming the monthly interest rate of the bank is q 
// (for example, if the interest rate is 1 %, then q = 0.01), 
// with the form of savings deposit with compound interest.
// Please input the deposit amount m, the number of months n, and the interest rate q, 
// then calculate and print the total interest earned.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Ex 8\n";

    double m;
    do {
        cout << "Input the deposit amount m (non-negative real number): ";
        cin >> m;
    } while (m < 0);

    int n;
    do {
        cout << "Input the number of months n (positive integer): ";
        cin >> n;
    } while (n <= 0);

    double q;
    do {
        cout << "Input the interest rate q (positive real number): ";
        cin >> q;
    } while (q <= 0);

    cout << "Total interest earned: " << m * (pow(1 + q, n) - 1);

    return 0;
}