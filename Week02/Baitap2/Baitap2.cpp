#include <iostream>

using namespace std;

int main() {
    cout << "Exercise 2:\n";

    double oldKwh, newKwh;

    do {
        cout << "Input the old Kwh (non-negative real number): ";
        cin >> oldKwh;
    } while (oldKwh < 0);

    return 0;
}