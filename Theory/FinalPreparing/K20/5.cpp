#include <iostream>
using namespace std;

void input(int arr[][10], int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
}

void output(int arr[][10], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}

void rotateClockwise(int arr[][10], int N)
{
    int temp[10][10];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            temp[i][j] = arr[N - 1 - j][i];
    
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            arr[i][j] = temp[i][j];
}

bool isMagicSquare(int arr[][10], int N)
{
    int val = 0;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            val += arr[i][j];
    for (int i = 0; i < N; ++i)
    {
        val += arr[i][i];
        val += arr[i][N - 1 -i];
    }

    return val % (2 * (N + 1)) == 0;
}

int main()
{
    int arr[10][10];
    int N;
    cout << "Nhap cot: ";
    cin >> N;

    input(arr, N);
    cout << endl;
    rotateClockwise(arr, N);
    output(arr, N);
    cout <<endl;
    cout << isMagicSquare(arr,N);
}