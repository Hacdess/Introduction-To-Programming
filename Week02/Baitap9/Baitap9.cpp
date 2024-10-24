#include <iostream>

using namespace std;

int main() {
    cout << "Bai tap 9:\n";

    double sum = 0;
    double input;

    cout << "Nhap cac so thuc (nhap 0 de dung):\n";

    do {
        cin >> input;
        sum += input;
    } while (input != 0);

    cout << "Tong cac so da nhap: " << sum << endl;

    return 0;
}