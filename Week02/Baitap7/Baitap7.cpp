#include <iostream>

using namespace std;

int main() {
    cout << "Bai tap 7:\n";

    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    while (n <= 0) {
        cout << "Nhap lai so nguyen duong n: ";
        cin >> n;
    }

    bool isExist = 0;
    cout << "\nCac so co tong cac chu so bang 10 va nho hon n:\n";

    for (int i = 0; i < n; ++i) {
        int sumDigit = 0;
        int copyI = i;

        while (copyI > 0) {
            sumDigit += (copyI % 10);
            copyI /= 10;
        }

        if (sumDigit == 10) {
            if (!isExist)
                isExist = 1;
            cout << i << ' ';
        }
    }

    if (!isExist)
        cout << "Khong ton tai!";
    cout << endl;

    return 0;
}