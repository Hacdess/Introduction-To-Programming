#include <iostream>

using namespace std;

int main() {
	cout << "Bai tap 6:\n";

    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    while (n <= 0) {
        cout << "Nhap lai so nguyen duong n: ";
        cin >> n;
    }

    int count = 0;
    for (int i = 0; i <= n; ++i) {
        if (i % 2)
            ++count;
    }

    cout << "So so le trong khoang tu 0 den " << n << " (xem nhu khoang dong [0, " << n << "]): " << count << endl;

	return 0;
}