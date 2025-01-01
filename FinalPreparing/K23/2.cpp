#include <iostream>

using namespace std;

#define MAX 10

void input(int matrix[MAX][MAX], int &nRow, int &nCol)
{
    cin >> nRow >> nCol;
    for (int i = 0; i < nRow; ++i)
        for (int j = 0; j < nCol; ++j)
            cin >> matrix[i][j];
}

void output(int matrix[MAX][MAX], int nRow, int nCol)
{
    for (int i = 0; i < nRow; ++i)
    {
        for (int j = 0; j < nCol; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

bool findArr(int org[], int n, int arr[], int m, int &start, int &end)
{
    start = end = 0;

    for (int i = 0; i <= n - m; ++i)
    {
        int j = 0;
        for (j; j < m; ++j)
            if (org[i + j] != arr[j])
            {
                break;
            }
        
        if (j == m)
        {
            start = i;
            end = i + j - 1;
            return true;
        }

        i = i + j;
    }

    return false;
}

int findPass(int matrix[][MAX], int nRow, int nCol, int A[], int k)
{
    int pass = 0;
    int start, end, row;
    for (int i = 0; i < nRow; ++i)
    {
        if (findArr(matrix[i], nCol, A, k, start, end))
        {   
            cout << "Found at " << i <<endl;
            row = i;
            break;
        }
    }

    for (int i = 0; i < start; ++i)
        pass += matrix[row][i];
    for (int i = end + 1; i < nCol; ++i)
        pass += matrix[row][i];

    return pass;
}

int main()
{
    int matrixB[10][10];
    int nRow, nCol;
    input(matrixB, nRow, nCol);
    cout << endl;
    output(matrixB, nRow, nCol);
    cout << endl;
    int arrA[] = {5, 6, 7};
    cout << findPass(matrixB, nRow, nCol, arrA, 3) << endl;
}