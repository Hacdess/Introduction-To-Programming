#include <iostream>

using namespace std;

void inputArray(int a[100], int N) {
    for (int i = 0; i < N; ++i)
        cin >> a[i];
}

void outputArray(int a[100], int N) {
    for (int i = 0; i < N; ++i)
        cout << a[i] << ' ';
    cout << endl;
}

bool isAscending(int a[100], int N) {
    for (int i = 0; i < N - 1; ++i)
        if (a[i] > a[i + 1])
            return false;
    return true;
}

void sortAscending(int a[100], int N) {
    int i, j, key;
    for (i = 1; i < N; ++i) {
        key = a[i];
        j = i;
        for (j; j > 0 && key < a[j - 1]; --j)
            a[j] = a[j - 1];
        a[j] = key;
    }
}

void insertAscending(int a[100], int& N, int X) {
    int i = 0;
    for (i; i <= N; ++i)
        if (a[i] > X)
            break;
    for (int j = N; j > i; --j)
        a[j] = a[j - 1];
    a[i] = X;
    N++;
}

int main() {
    int N;
    int a[100];

    do {
        cout << "Input N (0 < N <= 100): ";
        cin >> N;
    } while (N < 1 || N > 100);
    
    inputArray(a, N);
    outputArray(a, N);

    cout << "Array is " << (isAscending(a, N) ? "" : "not") << " ascenidng.\n";

    cout << "Sorting...\n";
    sortAscending(a, N);
    cout << "Sorted ascending: ";
    outputArray(a, N);
    
    int X;
    cout << "Input X: ";
    cin >> X;
    insertAscending(a, N, X);
    outputArray(a, N);

    return 0;
}