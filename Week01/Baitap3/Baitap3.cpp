// Baitap3.cpp :
// Input an integer amount of money N in dong
// Convert it to see how many banknotes of 10 dong, 5 dong, 2 dong, and 1 dong can be obtained.
// Assume to prioritize larger denominations first.

#include <iostream>

using namespace std;

int main() {
    cout << "Ex3\n";

    int N;
    do {
        cout << "Input the amount of money (non-negative integer): ";
        cin >> N;
    } while (N < 0);

    cout << "10 dong: " << N / 10 << endl;
    N = N - N / 10 * 10;

    cout << "5 dong: " << N / 5 << endl;
    N = N - N / 5 * 5;

    cout << "2 dong: " << N / 2 << endl;
    N = N - N / 2 * 2;

    cout << "1 dong: " << N;

    return 0;
}