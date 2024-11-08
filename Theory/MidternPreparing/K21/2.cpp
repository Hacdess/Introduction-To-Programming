#include <iostream>

using namespace std;

int* inputArray(int n) {
    int* a = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    return a;
}

void printArray(int a[], int start, int end) {
    for (int i = start; i <= end; ++i)
        cout << a[i] << ' ';
}

void findT(int a[], int n, int &start, int &end) {
    start = end = 0;
    int maxLen = 1;

    for (int i = 0; i < n - 1; ++i) {
        int j = i;
        while (j < n - 1 && a[j] < a[j + 1])
            ++j;
        
        while (j < n - 1 && a[j] > a[j + 1])
            ++j;

        if (j - i + 1 > maxLen) {
            start = i;
            end = j;
            maxLen = end - start + 1;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int* a = inputArray(n);

    int start, end;

    findT(a, n, start, end);
    printArray(a, start, end);

    delete[] a;

    return 0;
}