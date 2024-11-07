#include <iostream>

using namespace std;

bool HasZeroDigit(int n) {
    if (n < 0)
        n *= -1;
    
    else if (n == 0)
        return true;

    while (n) {
        if (n % 10 == 0)
            return true;
        n /= 10;
    }

    return false;
}

bool IsPerfectNumber(int n) {
    int SumDigits = 0, ProductDigits = 1;
    while (n) {
        SumDigits += (n % 10);
        ProductDigits *= (n % 10);
        n /= 10;
    }

    return SumDigits == ProductDigits;
}

bool CheckTongUocVaTichUoc(int n) {
    int TongUoc = 0, TichUoc = 1;
    for (int i = 1; i <= n /2; ++i) {
        if (n % i == 0) {
            TongUoc += i;
            TichUoc *= i;
        }
    }
    return TongUoc == TichUoc;
}

int main() {
    int n;
    do {
        cout << "Input n: ";
        cin >> n;
    } while (HasZeroDigit(n));


}