#include <iostream>

using namespace std;

int main() {
    cout << "Bai tap 4:\n";

    int days, pay = 0;
    char type;
    bool isValidType = 1;

    cout << "Nhap so ngay thue (so nguyen duong): ";
    cin >> days;
    if (days <= 0) {
        cout << "So ngay phai la so nguyen duong!\n";
        return -1;
    }

    cout << "Nhap loai phong A, B hoac C: ";
    cin >> type;
    cout << endl;

    cout << "=== Phuong phap If ... Else ===\n";

    if (type == 'A') {
        pay = days * 450000;
        if (days > 10)
            pay = pay * 90 / 100;
    }
    else if (type == 'B') {
        pay = days * 350000;
        if (days > 10)
            pay = pay * 92 / 100;
    }
    else if (type == 'C') {
        pay = days * 250000;
        if (days > 10)
            pay = pay * 92 / 100;
    }
    else {
        cout << "Loai phong phai la A, B hoac C!\n\n";
        isValidType = 0;
    }

    if (isValidType)
        cout << "Tien thue phong: " << pay << " d.\n\n";

    cout << "=== Phuong phap Switch ... case ===\n";

    switch (type) {
        case 'A':
            pay = days * 450000;
            if (days > 10)
                pay = pay * 90 / 100;
            break;
        case 'B':
            pay = days * 350000;
            if (days > 10)
                pay = pay * 92 / 100;
            break;
        case 'C':
            pay = days * 250000;
            if (days > 10)
                pay = pay * 92 / 100;
            break;
        default:
            cout << "Loai phong phai la A, B hoac C!\n";
            isValidType = 0;
            break;
    }

    if (isValidType)
        cout << "Tien thue phong: " << pay << " d.\n";
    else
        return -1;

    return 0;
}