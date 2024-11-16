#include <iostream>

using namespace std;

int* inputArray(int n) {
    int* a = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    return a;
}

bool solve1A(int a[], int n) {
    bool isEven = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (count >= 3)
            return true;
        if (a[i] % 2 == 0) {
            if (!isEven) {
                isEven = 1;
                count = 1;
            }
            else
                ++count;
        }

        else {
            if (isEven) {
                isEven = 0;
                count = 1;
            }
            else
                ++count;
        }
    }

    return count >= 3;
}

int solve1B(int a[], int n) {
    int sum = 0;

    bool stop = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] == 6)
            stop = true;
        else if (a[i] == 7) {
            if (stop)
                stop = false;
            else
                sum += a[i];
        }
        else if (!stop)
            sum += a[i];
    }

    return sum;
}

int sumArr(int a[], int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i)
        sum += a[i];

    return sum;
}

bool solve1C(int a[], int n) {
    int total = sumArr(a, 0, n - 1);

    for (int i = 0; i < n - 1; ++i) {
        int sumFirstHalf = sumArr(a, 0, i);
        if (sumFirstHalf == total - sumFirstHalf)
            return true;
    }        

    return false;
}

int main() {
    int n;
    cin >> n;

    int* a = inputArray(n);

    cout << "1a: " << solve1A(a, n) << endl;
    cout << "1b: " << solve1B(a, n) << endl;
    cout << "1c: " << solve1C(a, n);

    delete[] a;
    
    return 0;
}