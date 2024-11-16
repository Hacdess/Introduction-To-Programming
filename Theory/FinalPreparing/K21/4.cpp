#include <iostream>

using namespace std;

void input(char arr[][10], int m, int n) {
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
}

void output(char arr[][10], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}

void solve4A(char arr[][10], int m, int n) {
    int firstRow, firstCol, secRow, secCol;

    char odd = arr[0][0];
    int countOdd = 0, count = 0;

    for (int i = 1; i < m; ++i) {
        if (arr[i][0] != odd)
            ++count;
        else
            ++odd;
        
        if (odd == 2)
    }

    for (int i = 1; i < n; ++i) {

    }
}

int main() {
    int m, n;
    cin >> m >> n;

    char arr[10][10];

    input(arr, m, n);
    output(arr, m, n);


    return 0;
}