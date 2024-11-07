#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return 0;
    if (n < 4)
        return 1;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    short N;
    do {
        cout << "Input N (0 < N <= 1000): ";
        cin >> N;
    } while (N <= 0 || N > 1000);

    short count = 0;
    for (int i = 2; count < N; i++) {
        if (isPrime(i)) {
            cout << i << ' ';
            count++;
        }
    }

}