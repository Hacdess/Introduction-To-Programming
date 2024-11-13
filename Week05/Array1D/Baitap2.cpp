#include "Baitap2.h"
#pragma once

void ChuyenThapPhanSangNhiPhan(bool NhiPhan[], int n)
{
	for (int i = 0; i < 8; ++i)
	{
		NhiPhan[7 - i] = n & 1;
		n >>= 1;
	}
}

void GiaiBai2()
{
	cout << "Bai 2:\n";

	short n;
	cout << "Nhap so nguyen n: ";
	cin >> n;

	bool NhiPhan[8];
	ChuyenThapPhanSangNhiPhan(NhiPhan, n);

	cout << "Dang nhi phan cua " << n << ": ";
	for (int i = 0; i < 8; ++i)
		cout << NhiPhan[i];

	cout << endl;
}
