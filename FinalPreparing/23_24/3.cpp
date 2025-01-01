#include <iostream>
#include <cmath>

using namespace std;

#define MAX 10

void input(int a[][MAX], int &m, int &n)
{
    cin >> m >> n;
    for (int i  = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
}

void output(int a[][MAX], int &m, int &n)
{
    for (int i  = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

bool isPrime(int n)
{
    if (n < 2)
        return false;
    if (n < 4)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    int sqrtN = sqrt(n);
    for (int i = 5; i <= sqrtN; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int countPrimeFromTwoPoints(int mat[][MAX], int nRow, int nCol, int xA, int yA, int xB, int yB) {
    int count = 0;
    int left = 0, right = nCol - 1, top = 0, bottom = nRow - 1;

    // Tìm đường đi xoắn ốc
    while (left <= right && top <= bottom) {
        // Duyệt từ trái qua phải
        for (int j = left; j <= right; ++j) {
            if ((top == xA && j == yA) || (top == xB && j == yB)) count += isPrime(mat[top][j]);
        }
        ++top;

        // Duyệt từ trên xuống dưới
        for (int i = top; i <= bottom; ++i) {
            if ((i == xA && right == yA) || (i == xB && right == yB)) count += isPrime(mat[i][right]);
        }
        --right;

        // Duyệt từ phải qua trái
        if (top <= bottom) {
            for (int j = right; j >= left; --j) {
                if ((bottom == xA && j == yA) || (bottom == xB && j == yB)) count += isPrime(mat[bottom][j]);
            }
            --bottom;
        }

        // Duyệt từ dưới lên trên
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                if ((i == xA && left == yA) || (i == xB && left == yB)) count += isPrime(mat[i][left]);
            }
        }
    }

    return count;
}

int main()
{
    int a[MAX][MAX];
    int m, n;
    input(a, m, n);
    cout << countPrimeFromTwoPoints(a, m, n, 0, 0, 3, 0);
}