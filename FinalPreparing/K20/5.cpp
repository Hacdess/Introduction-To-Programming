#include <iostream>
using namespace std;

#define MAX 10

void input(int A[][MAX], int& N)
{
    cout << "Input size: ";
    cin >> N;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> A[i][j];
}

void output(int A[][MAX], int N)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
            cout << A[i][j] << ' ';
        cout << endl;
    }
}

void rotate90(int A[][MAX], int N)
{
    int temp[MAX][MAX];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            temp[i][j] = A[N - 1 - j][i];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            A[i][j] = temp[i][j];
}

bool checkMagicSquare(int A[][MAX], int N)
{
    int value;
    int temp1 = 0, temp2 = 0;

    for (int i = 0; i < N; ++i)
    {
        temp1 += A[i][i];
        temp2 += A[i][N - 1 - i];
    }

    if (temp1 != temp2)
        return false;
    
    value = temp1;

    for (int i = 0; i < N; ++i)
    {
        temp1 = temp2 = 0;
        for (int j = 0; j < N; ++j)
        {
            temp1 += A[i][j];
            temp2 += A[j][i];
        }

        if (value != temp1 || value != temp2)
            return false;
    }

    return true;
}

int main()
{
    int A[MAX][MAX], N;
    input(A, N);
    cout << checkMagicSquare(A, N) << endl;
    
    rotate90(A, N);
    output(A, N);
}