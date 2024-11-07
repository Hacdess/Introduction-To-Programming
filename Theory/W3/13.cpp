#include <iostream>

using namespace std;

int calFactorial(int n) {
    if (n <= 1)
        return 1;
    return n * calFactorial(n - 1);
}

int main() {
    int N, K;
    do {
        cout << "Input K, N (K <= N; K, N >= 0): ";
        cin >> K >> N;
    } while (K < 0 || N < 0 || K > N);

    cout << "Result: " << calFactorial(N) / (calFactorial(K) * calFactorial(N - K));

}