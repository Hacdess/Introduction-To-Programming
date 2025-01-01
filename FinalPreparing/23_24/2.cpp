#include <iostream>
#include <cmath>
using namespace std;

#define MAX 100

void input(int arr[], int &n)
{
    cout << "Input n: ";
    cin >> n;
    for (int i = 0; i < n ; ++ i)
        cin >> arr[i];
}

void output(int arr[], int n)
{
    for (int i = 0; i < n ; ++ i)
        cout << arr[i] << ' ';
}

int findMaxCommonDifference(int a[], int n)
{
    int temp[MAX];
    for (int i = 0; i < n-1; ++i)
        temp[i] = a[i+1] - a[i];
    int max = 0;
    for (int i = 0; i + 3 < n; ++i)
    {
        int t = abs(temp[i + 1] - temp[i]);
        if (t == abs(temp[i + 2] - temp[i + 1]) && t > max)
        {
            max = t;
            ++i;
        }
    }
    return max;
}

int main()
{
    int A[MAX], n;
    input (A, n);
    cout << findMaxCommonDifference(A, n);
}