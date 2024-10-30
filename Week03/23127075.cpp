#include <iostream>
#include <cmath>

using namespace std;

// Bai tap 1
bool isSquareNumber(int n);

// Bai tap 2
void swap(int &a, int &b);

// Bai tap 3
int sumEvens(int n);

// Bai tap 4
bool isFullOddPositive(int n);

// Bai tap 5
int lenNum(int n);
int myPow(int base, int exponent);
int findFirstOddDigit(int n);

// Bai tap 6
int countOdds(int n);

// Bai tap 7
double solveEx7_1(int n);
int solveEx7_2(int n);
long long solveEx7_3(int n);

// Bai tap 8
int sumOddsPrimes(int n);

// Bai tap 9
int calTaxiFee(int km);

int main() {

}

bool isSquareNumber(int n) {
    if (n < 0)
        return false;
    int sqrtN = static_cast<int>(sqrt(n));
    return (sqrtN * sqrtN == n);
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int sumEvens(int n) {
    int sum = 0;
    
    for (int i = 1; i <= n; ++i)
        if (i % 2 == 0)
            sum += i;

    return sum;
}

bool isFullOddPositive(int n) {
    if (n <= 0)
        return 0;

    while (n) {
        if ((n % 10) % 2 == 0)
            return false;
        n /= 10;
    }

    return true;
}

int lenNum(int n) {
    if (n < 10)
        return 1;
    
    int count = 1;
    while (n > 9) {
        ++ count;
        n /= 10;
    }

    return count;
}

int myPow(int base, int exponent) {
    int ans = 1;

    for (int i = 0; i < exponent; ++i)
        ans *= base;
    
    return ans;
}

int findFirstOddDigit(int n) {
    int len = lenNum(n);

    for (int i = len - 1; i > -1; --i) {
        int digit = n / myPow(10, i);
        if (digit % 2)
            return digit;
    }

    return -1;
}

int countOdds(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) // 0 is even so start from 1
        if (i % 2)
            ++ count;
    return count;
}
