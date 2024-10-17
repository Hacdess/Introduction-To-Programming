// Baitap7.cpp :
// Input a positive integer n and a real number x.
// Calculate and print the value of the following expression:
// f(X) = (x^2 + x + 1)^n + (x^2 - x + 1)^n.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Ex 7\n";

    int n;
    do {
        cout << "Input a positive integer n: ";
        cin >> n;
    } while (n <= 0);


    double x;
    cout << "Input a real number x: ";
    cin >> x;

    cout << "f(" << x << ") = (" << x << "^2 + " << x << " + 1)^" << n << " + (" << x << "^2 - " << x << " + 1)^" << n << " = " << pow(pow(x, 2) + x + 1, n) + pow(pow(x, 2) - x + 1, n);

    return 0;
}