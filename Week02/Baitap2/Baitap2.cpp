#include <iostream>

using namespace std;

int main() {
    cout << "Bai tap 2:\n";

    int chiSoCu, chiSoMoi, soKwh, tienDien;

    cout << "Nhap chi so dien cu (so duong khong am): ";
    cin >> chiSoCu;
    if (chiSoCu < 0) {
        cout << "Chi so dien cu khong duoc am!\n";
        return -1;
    }

    cout << "Nhap chi so moi (so duong khong am): ";
    cin >> chiSoMoi;
    if (chiSoMoi < 0) {
        cout << "Chi so dien moi khong duoc am!\n";
        return -1;
    }

    if (chiSoMoi < chiSoCu) {
        cout << "Chi so dien moi khong duoc be hon chi so dien cu!\n";
        return -1;
    }

    soKwh = chiSoMoi - chiSoCu;

    if (soKwh < 51)
        tienDien = 1243 * soKwh;

    else if (soKwh < 101)
        tienDien = 1243 * 50 + 1304 * (soKwh - 50);

    else if (soKwh < 151)
        tienDien = (1243 + 1304) * 50 + 1644 * (soKwh - 100);

    else if (soKwh < 201)
        tienDien = (1243 + 1304 + 1644) * 50 + 1806 * (soKwh - 150);

    else if (soKwh < 251)
        tienDien = (1243 + 1304 + 1644 + 1806) * 50 + 1976 * (soKwh - 200);

    else
        tienDien = (1243 + 1304 + 1644 + 1806 + 1976) * 50 + 2297 * (soKwh - 250);

    cout << "Tien dien phai tra trong thang: " << tienDien << " D." << endl;
        

    return 0;
}