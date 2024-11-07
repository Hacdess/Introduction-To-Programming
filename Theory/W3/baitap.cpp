#include <iostream>

using namespace std;

int calFactorial(int n) {
    if (n <= 1)
        return 1;
    return n * calFactorial(n - 1);
}

int calStepFactorial(int n) {
    if (n <= 1)
        return 1;
    return n * calStepFactorial(n - 2);
}

char* toBinary(char n) {
    char* array = new char[8];
    for (char i = 7; i >= 0; --i) {
        array[i] = n && 1;
        n >> 1;
    }
    return array;
}

void printArray(char* array, int size) {
    for (int i = 0; i < size; i++)
        cout << array[i];
}

int main() {
    int N;
    do {
        cout << "Input non-negative integer N: ";
        cin >> N;
    } while (N < 0);

    int intRes = 0;
    double realRes = 0;

    // Len bang
    cout << "\nEx 1: (len bang)\n\n";
    cout << "1.a:\n";
    if (N == 0)
        cout << "N must larger than 0!\n";
    else {
        for (int i = 1; i <= N; ++i)
            realRes += (1 / double(i));
        cout << "Result: " << realRes << endl;
    }

    cout << endl;

    realRes = 0;
    cout << "1.b.1:\n";
    for (int i = 1; i <= N; ++i)
        realRes += (1 / double(calFactorial(i)));
    cout << "Result: " << realRes << "\n\n";

    realRes = 0;
    cout << "1.b.1:\n";
    for (int i = 1; i <= N; ++i) {
        if (i % 2)
            realRes += (1 / double(calFactorial(i)));
        else 
            realRes -= (1 / double(calFactorial(i)));
    }
    cout << "Result: " << realRes << "\n\n";

    cout << "1.c:\n";
    cout << "Result: " << calFactorial(N) << "\n\n";

    cout << "1.d:\n";
    cout << "Result: " << calStepFactorial(N) << "\n\n";

    cout << "Ex02:\n\n";
    char inputEx02;
    cout << "Nhap so nguyen: ";
    cin >> inputEx02;
    char* array = toBinary(inputEx02);
    printArray(array, sizeof(char));

    delete[] array;
}