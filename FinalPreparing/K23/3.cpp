#include <iostream>
using namespace std;


long long getValue(char arr[], unsigned int n)
{
    long long value = 0;
    for (int i = 0; i < n; ++i)
    {
        int val = arr[i] - 'a';
        if (val >= 10)
            value *= 100;
        else
            value *= 10;
        
        value += val;
    }

    return value;
}

bool checkEqual(char first[], int m, char second[], int n, char target[], int k)
{
    long long value1 = getValue(first, m);
    long long value2 = getValue(second, n);
    long long value3 = getValue(target, k);

    cout << value1 << " " << value2 << " "<< value3 << endl;

    return value3 == value1 + value2;
}

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    cin.ignore();
    char first[9], second[9], target[9];
    cin.getline(first, 9);
    cin.getline(second, 9);
    cin.getline(target, 9);

    cout << checkEqual(first, m, second, n, target, k);
}