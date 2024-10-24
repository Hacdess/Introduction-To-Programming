#include <iostream>

using namespace std;

int main() {
    cout << "Bai tap 10:\n";

    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    while (n <= 0) {
        cout << "Nhap lai so nguyen duong n: ";
        cin >> n;
    }

    double realSum = 0;
    int intSum = 0;
    int i;

    for (i = 1; i < n; ++i)
        realSum = realSum + double(i) / (i + 1);
    cout << "Cau 10.1: " << realSum << "\n\n";

    for (i = 1; i <= n; ++i)
        intSum = intSum + i * (i + 1);
    cout << "Cau 10.2: " << intSum << "\n\n";

    intSum = 0;
    for (i = 1; i <= n; ++i) {
        int value = 1;

        for (int j = 0; j < i; ++j)
            value *= i;

        intSum += value;
    }
    cout << "Cau 10.3: " << intSum << "\n";

    return 0;
}