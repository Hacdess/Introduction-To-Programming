#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    if (n < 4)
        return true;
    if (n % 2 == 0)
        return false;
    if (n % 3 == 0)
        return false;

    int sqrtN = sqrt(n);
    for (int i = 5; i <= sqrtN; i+= 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    
    return true;
}

#define MAX 100

int reduceArray(int A[], int &N)
{
    int count = 0;
    int i, j, k;

    int temp[MAX];
    int len = 0;
    for (i = 0; i < N; ++i)
    {
        if (isPrime(A[i]))
        {
            int sum = A[i];
            j = i + 1;
            for (j; j < N; ++j)
            {
                if (isPrime(A[j]))
                {
                    sum += A[j];
                }
                else
                {
                    break;
                }
            }
            if (j - i > 1)
            {
                temp[len++] = sum;
                ++count;
            }
            i = j - 1;
        }
        else
            temp[len++] = A[i];
    }

    N = len;
    for (int i = 0; i < len; ++i)
        A[i] = temp[i];

    return count;
}

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

int main()
{
    int A[MAX];
    int n;
    input(A, n);
    cout << reduceArray(A, n) << endl;
    output(A, n);
}