#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Bai tap 5:\n";

    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    while (n <= 0) {
        cout << "Nhap lai so nguyen duong n: ";
        cin >> n;
    }

    int sqrtN = static_cast<int>(sqrt(n));

    if (sqrtN * sqrtN == n)
        cout << n << " la so chinh phuong.\n";
    else
        cout << n << " khong la so chinh phuong.\n";

    return 0;
}