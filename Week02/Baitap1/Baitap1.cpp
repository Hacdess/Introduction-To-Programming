#include <iostream>

using namespace std;

int main() {
    cout << "Bai tap 1\n";

    double a, b, c, d;
    cout << "Nhap vao 4 so thuc: ";
    cin >> a >> b >> c >> d;

    double max1, min1, max2, min2;

    if (a > b) {
        max1 = a;
        min1 = b;
    } else {
        max1 = b;
        min1 = a;
    }

    if (c > d) {
        max2 = c;
        min2 = d;
    } else {
        max2 = d;
        min2 = c;
    }

    cout << "So lon nhat: " << ((max1 > max2) ? max1 : max2) << endl;
    cout << "So nho nhat: " << ((min1 < min2) ? min1 : min2);

    return 0;
}