#include "Baitap4.h"
#pragma once

void NhapMangSoNguyen(int MangSoNguyen[], int n)
{
	cout << "Nhap " << n << " phan tu (cach nhau boi khoang trang): ";
	for (int i = 0; i < n; ++i)
		cin >> MangSoNguyen[i];
}

void InMangSoNguyen(int MangSoNguyen[], int n)
{
	cout << "Mang so nguyen: ";
	for (int i = 0; i < n; ++i)
		cout << MangSoNguyen[i] << ' ';
}

void GiaiBai4a(int MangSoNguyen[], int n, int X)
{
	cout << "Cau 4a:\n";
	cout << "Cac phan tu la uoc cua " << X << ":\n";
	for (int i = 0; i < n; ++i)
		if (MangSoNguyen[i] != 0 && X % MangSoNguyen[i] == 0)
			cout << "Gia tri: " << MangSoNguyen[i] << " - vi tri: " << i << endl;
}

void TraoDoiSo(int& so1, int& so2)
{
	int BienTam = so1;
	so1 = so2;
	so2 = BienTam;
}

void GiaiBai4b(int MangSoNguyen[], int n, int X)
{
	cout << "Cau 4b:\n";
	
	int dem = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		if (MangSoNguyen[i] != 0 && X % MangSoNguyen[i] == 0)
		{
			++dem;
			TraoDoiSo(MangSoNguyen[i], MangSoNguyen[n - dem]);
		}
	}

	n -= dem;
	for (int i = 1; i < n; ++i)
	{
		int key = MangSoNguyen[i];
		int j = i - 1;

		for (j; j >= 0 && key < MangSoNguyen[j]; --j)
			MangSoNguyen[j + 1] = MangSoNguyen[j];

		MangSoNguyen[j + 1] = key;
	}
}

void GiaiBai4()
{
	cout << "Bai 4:\n";

	int n, MangSoNguyen[10000], X;

	do
	{
		cout << "Nhap so nguyen n la so phan tu (1 <= n <= 10000): ";
		cin >> n;
	} while (n < 1 || n > 10000);

	NhapMangSoNguyen(MangSoNguyen, n);
	InMangSoNguyen(MangSoNguyen, n);
	cout << endl;

	cout << "Nhap so nguyen X: ";
	cin >> X;
	cout << endl;

	GiaiBai4a(MangSoNguyen, n, X);
	cout << endl;
	GiaiBai4b(MangSoNguyen, n, X);
	cout << "Da sap xep!\n";
	InMangSoNguyen(MangSoNguyen, n);
	cout << endl;
}
