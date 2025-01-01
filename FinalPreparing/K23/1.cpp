#include <iostream>
using namespace std;

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

int findIndex(int arr[], int n, int x)
{
    for (int i = 0; i < n; ++i)
        if (arr[i] == x)
            return i;
    return -1;
}

bool recoverScore(int arr[], int n)
{
    if (n < 3)
        return false;
    
    int index = findIndex(arr, n, -1);
    if (index == -1)
        return false;
    
    if (index == 0)
    {
        arr[0] = 2 * arr[1] - arr[2];
    }

    else if (index == n-1)
    {
        arr[index] = 2 * arr[n - 2] - arr[n - 3];
    }

    else 
    arr[index] = (arr[index - 1] + arr[index + 1]) / 2;

    if (arr[index] < 0)
    {
        arr[index] = -1;
        return false;
    }
    return true;
}

int findLongest(int arr[], int n, int& start, int& end)
{
    start = end = 0;

    if (n < 3)
    {
        cout << "Invalid\n";
        return 0;
    }

    int max = 0;

    for (int i = 0; i < n - 2; ++i)
    {
        if (arr[i] > arr[i + 1])
            continue;
        for (int j = i + 1; j < n - 1; ++j)
        {
            if (arr[j] * 2 != arr[j - 1] + arr[j + 1])
            {
                int len = j - i + 1;
                if (len >= max)
                {
                    start = i;
                    end = j;
                    max = len;
                }
                i = j;
            }

        }
    }

    return end - start + 1;
}

int main()
{
    int arr[100];
    int n;
    input(arr, n);
    int start, end;
    cout << findLongest(arr, n, start, end) << endl;
    cout << start << " " << end;
}