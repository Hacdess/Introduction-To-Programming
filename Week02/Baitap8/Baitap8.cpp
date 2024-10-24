#include <iostream>

using namespace std;

int main() {
    cout << "Bai tap 8:\n";

    int n;
    cout << "Nhap n: ";
    cin >> n;
    
    int sum = 0;

    if (n == 0)
        cout << "Khong tinh duoc vi n bang 0.\n";
    else if (n < 0)
        for (int i = n; i <= 1; ++i)
            sum += i;
    else
        for (int i = 1; i <= n; ++i)
            sum += i;

    cout << "Gia tri trung binh: " << double(sum) / n << endl;

    return 0;
}