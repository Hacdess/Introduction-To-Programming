#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Bai tap 3:\n";

    int r1, r2, d;

    cout << "Nhap ban kinh r1 (so nguyen duong): ";
    cin >> r1;
    if (r1 <= 0) {
        cout << "r1 phai la so nguyen duong!\n";
        return -1;
    }

    cout << "Nhap ban kinh r2 (so nguyen duong): ";
    cin >> r2;
    if (r2 <= 0) {
        cout << "r2 phai la so nguyen duong!\n";
        return -1;
    }

    cout << "Nhap khoang cach d giua tam 2 duong tron (so nguyen khong am): ";
    cin >> d;
    if (d < 0) {
        cout << "d phai la so nguyen khong am!\n";
        return -1;
    }

    if (d == 0) {
        if (r1 == r2)
            cout << "2 duong tron chong khop len nhau.\n";
        else
            cout << "2 duong tron dong tam.\n";
    } else if (d > r1 + r2)
        cout << "2 duong tron tach roi.\n";
    else if (d == r1 + r2)
        cout << "2 duong tron tiep xuc ngoai.\n";
    else {
        if (d > abs(r1 - r2))
            cout << "2 duong tron giao nhau.\n";
        else if (d == abs(r1 - r2))
            cout << "2 duong tron tiep xuc trong.\n";
        else {
            if (r1 > r2)
                cout << "Duong tron 1 bao duong tron 2.\n";
            else
                cout << "Duong tron 2 bao duong tron 1.\n";
        }
    }

    return 0;
}