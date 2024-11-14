#include "Baitap5.h"

#pragma once

void NhapMangSoNguyenDuong(int MangSoNguyenDuong[], int n)
{
	cout << "Nhap " << n << " so nguyen duong (moi phan tu xuong dong):\n";
	for (int i = 0; i < n; ++i)
		do
		{
			cout << "So nguyen duong thu " << i + 1 << ": ";
			cin >> MangSoNguyenDuong[i];
		} while (MangSoNguyenDuong[i] < 0);
}

void InMangSoNguyenDuong(int MangSoNguyenDuong[], int n)
{
	cout << "Mang so nguyen duong: ";
	for (int i = 0; i < n; ++i)
		cout << MangSoNguyenDuong[i] << ' ';
}

int DemTanCung6VaChiaHetCho6(int MangSoNguyenDuong[], int n)
{
	int count = 0;
	for (int i = 0; i < n; ++i)
		if (MangSoNguyenDuong[i] % 10 == 6 && MangSoNguyenDuong[i] % 6 == 0)
			++count;

	return count;
}

bool KiemTraSoNguyenTo(int n)
{
	if (n < 4)
		return n > 1;
	if (n % 2 == 0 || n %  3 == 0)
		return false;

	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

double TinhTrungBinhCongSoNguyenTo(int MangSoNguyenDuong[], int n)
{
	double tong = 0;
	int dem = 0;

	for (int i = 0; i < n; ++i)
		if (KiemTraSoNguyenTo(MangSoNguyenDuong[i]))
		{
			tong += MangSoNguyenDuong[i];
			++dem;
		}

	return (dem ? tong / dem : tong);
}

int TimPhanTu(int MangSoNguyenDuong[], int n, int PhanTu)
{
	for (int i = 0; i < n; ++i)
		if (MangSoNguyenDuong[i] == PhanTu)
			return i;
	return -1;
}

int DemSoNguyenToPhanBiet(int MangSoNguyenDuong[], int n)
{
	int dem = 0;
	int MangSoNguyenTo[15];

	for (int i = 0; i < n; ++i)
		if (KiemTraSoNguyenTo(MangSoNguyenDuong[i]))
			if (TimPhanTu(MangSoNguyenTo, dem, MangSoNguyenDuong[i]) < 0)
				MangSoNguyenTo[dem++] = MangSoNguyenDuong[i];

	return dem;
}

void GiaiBai5()
{
	cout << "Bai 5:\n";

	int MangSoNguyenDuong[15];
	int n;

	do
	{
		cout << "Nhap so phan tu n cua mang (1 <= n <= 15): ";
		cin >> n;
	} while (n < 1 || n > 15);
	
	NhapMangSoNguyenDuong(MangSoNguyenDuong, n);
	cout << endl;

	cout << "5a. So phan tu tan cung la 6 va chia het cho 6: " << DemTanCung6VaChiaHetCho6(MangSoNguyenDuong, n) << endl;
	cout << "5b. Trung binh cong so nguyen to hien co trong mang: " << TinhTrungBinhCongSoNguyenTo(MangSoNguyenDuong, n) << endl;
	cout << "5c. So nguyen to phan biet: " << DemSoNguyenToPhanBiet(MangSoNguyenDuong, n) << endl;
}
