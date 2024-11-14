#include "Baitap6.h"
#pragma once

void LayMangSoKhongNguyenTo(int MangSoNguyen[], int MangKhongNguyenTo[], int n, int& dem)
{
	dem = 0;
	for (int i = 0; i < n; ++i)
		if (!KiemTraSoNguyenTo(MangSoNguyen[i]) && TimPhanTu(MangKhongNguyenTo, dem, MangSoNguyen[i] < 0))
			MangKhongNguyenTo[dem++] = MangSoNguyen[i];
}

void SapGiam(int MangSoNguyen[], int n)
{
	int i, j, k;

	for (int i = 1; i < n; ++i)
	{
		j = i - 1;
		k = MangSoNguyen[i];
		for (j; j >= 0 && k > MangSoNguyen[j]; --j)
			MangSoNguyen[j + 1] = MangSoNguyen[j];

		MangSoNguyen[j + 1] = k;
	}
}

void XoaSoNguyenTo(int MangSoNguyen[], int& n)
{
	for (int i = 0; i < n; ++i)
		if (KiemTraSoNguyenTo(MangSoNguyen[i]))
		{
			for (int j = i; j < n - 1; ++j)
				MangSoNguyen[j] = MangSoNguyen[j + 1];
			--i;
			--n;
		}
}

void GiaiBai6()
{
	cout << "Bai 6:\n";

	int A[999], B[999], n, nB;

	do
	{
		cout << "Nhap n la so luong phan tu cua A (0 < n < 1000): ";
		cin >> n;
	} while (n < 1 || n > 999);

	cout << "Nhap " << n << " phan tu nguyen co gia tri |A[i]| <= 10000 cua A (cach nhau boi khoang trang):\n";
	for (int i = 0; i < n; ++i)
		cin >> A[i];
	cout << endl;

	cout << "6a. Mang B chua nhung phan khong phai la so nguyen to trong A:\n";
	LayMangSoKhongNguyenTo(A, B, n, nB);
	InMangSoNguyen(B, nB);
	cout << "\n\n";

	cout << "6b. Sap xep giam mang B:\n";
	SapGiam(B, nB);
	InMangSoNguyen(B, nB);
	cout << "\n\n";

	cout << "6c. Xoa so nguyen to trong mang A:\n";
	XoaSoNguyenTo(A, n);
	InMangSoNguyen(A, n);
	cout << endl;
}
