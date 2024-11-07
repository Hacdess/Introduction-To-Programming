#include <iostream>

using namespace std;

bool isPalindrome(int n) {
    int copy = n, oppo = 0;
    for (n; n > 0; n /= 10)
        oppo = oppo * 10 + n % 10;
    return copy == oppo;
}

int main() {
    int N;
    do {
        cout << "Input positive integer N: ";
        cin >> N;
    } while (N <= 0 || N > 2e9);
    
    cout << isPalindrome(N);
}