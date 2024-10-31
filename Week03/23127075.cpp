#include <iostream>
#include <cmath>

using namespace std;

// Bai tap 1
bool IsSquareNumber(int n);

// Bai tap 2
void Swap(int &a, int &b);

// Bai tap 3
int CalSumEvens(int n);

// Bai tap 4
bool IsFullOddPositive(int n);

// Bai tap 5
int CountLenNum(int n);
long long CalPow(int base, int exponent);
int FindFirstOddDigit(int n);

// Bai tap 6
int CountOdds(int n);

// Bai tap 7
double SolveEx7_1(int n);
long long SolveEx7_2(int n);
long long SolveEx7_3(int n);

// Bai tap 8
long long CalSumOddsSquares(int n);

// Bai tap 9
int CalTaxiFee(int km);

int main() {
    int n;

    // Bai 1
    cout << "Bai 1:\n";
    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << n << (IsSquareNumber(n) ? "" : " khong") << " la so chinh phuong.\n\n";

    // Bai 2
    cout << "Bai 2:\n";
    int a, b;
    cout << "Nhap 2 so nguyen a va b: ";
    cin >> a >> b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    Swap(a, b);
    cout << "Swapped!\n";
    cout << "a: " << a << endl;
    cout << "b: " << b << "\n\n";

    // Bai 3
    cout << "Bai 3:\n";
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n < 1);
    cout << "Tong cac so chan tu 1 den " << n << ": " << CalSumEvens(n) << "\n\n";
    
    // Bai 4
    cout << "Bai 4:\n";
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n < 1);
    cout << n << (IsFullOddPositive(n) ? "" : " khong") << " la so toan le.\n\n";

    // Bai 5
    cout << "Bai 5:\n";
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n < 1);
    cout << "Chu so le dau tien (tu trai qua phai) cua so nguyen duong " << n << ": " << FindFirstOddDigit(n) << "\n\n";

    // Bai 6
    cout << "Bai 6:\n";
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n < 1);
    cout << "So so le trong khoang tu 0 den " << n << ": " << CountOdds(n) << "\n\n";

    // Bai 7
    cout << "Bai 7:\n";
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n < 1);
    cout << "7.1. S = " << SolveEx7_1 (n) << endl;
    cout << "7.2. S = " << SolveEx7_2 (n) << endl;
    cout << "7.3. S = " << SolveEx7_3 (n) << "\n\n";

    // Bai 8
    cout << "Bai 8:\n";
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n < 1);
    cout << "Tong cac so le hoac so chinh phuong tu 1 den " << n << ": " << CalSumOddsSquares(n) << "\n\n";

    // Bai 9
    cout << "Bai 9:\n";
    int km;
    do {
        cout << "Nhap so km da di (so nguyen khong am): ";
        cin >> km;
    } while (km < 0);
    cout << "Tien di taxi: " << CalTaxiFee(km);

    return 0;
}

bool IsSquareNumber(int n) {
    if (n < 0)
        return false;
    int sqrtN = static_cast<int>(sqrt(n));
    return (sqrtN * sqrtN == n);
}

void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int CalSumEvens(int n) {
    int sum = 0;
    
    for (int i = 1; i <= n; ++i)
        if (i % 2 == 0)
            sum += i;

    return sum;
}

bool IsFullOddPositive(int n) {
    if (n <= 0)
        return 0;

    while (n) {
        if ((n % 10) % 2 == 0)
            return false;
        n /= 10;
    }

    return true;
}

int CountLenNum(int n) {
    if (n < 10)
        return 1;
    
    int count = 1;
    while (n > 9) {
        ++ count;
        n /= 10;
    }

    return count;
}

long long CalPow(int base, int exponent) {
    long long ans = 1;

    for (int i = 0; i < exponent; ++i)
        ans *= base;
    
    return ans;
}

int FindFirstOddDigit(int n) {
    int len = CountLenNum(n);

    for (int i = len - 1; i > -1; --i) {
        int digit = n / CalPow(10, i);
        if (digit % 2)
            return digit;
        n %= (CalPow(10,i));
    }

    return -1;
}

int CountOdds(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) // 0 is even so start from 1
        if (i % 2)
            ++ count;
    return count;
}

double SolveEx7_1(int n) {
    double ans = 0;
    for (int i = 1; i < n; ++i)
        ans += (double(i) / (i + 1));
    return ans;
}

long long SolveEx7_2(int n) {
    long long ans = 0;
    for (int i = 1; i <= n; ++i)
        ans += i * (i + 1);
    return ans;
}

long long SolveEx7_3(int n)  {
    long long ans = 0;
    for (int i = 1; i <= n; ++i)
        ans += CalPow(i, i);
    return ans;
}

long long CalSumOddsSquares(int n) {
    long long ans = 0;
    for (int i = 1; i <= n; ++i)
        if (i % 2 || IsSquareNumber(i))
            ans += i;
    return ans;
}

int CalTaxiFee(int km) {
    if (km < 1)
        return 0;

    if (km == 1)
        return 15000;

    if (km <= 5)
        return 15000 + 13500 * (km - 1);
    
    int money = 15000 + 13500 * 4 + 11000 * (km - 5);
    if (km > 120)
        money = money * 90 / 100;
    
    return money;
}
