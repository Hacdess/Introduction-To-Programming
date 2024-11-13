#include "Baitap1.h"
#pragma once

void NhapMangSoThuc(double MangSoThuc[], int N)
{
	if (N == 0)
	{
		cout << "Khong nhap phan tu do N = 0\n";
		return;
	}

	cout << "Nhap " << N << " so thuc (cach nhau boi khoang trang): ";
	for (int i = 0; i < N; ++i)
		cin >> MangSoThuc[i];
}

void InMangSoThuc(double MangSoThuc[], int N)
{
	cout << "Mang so thuc: ";
	
	if (N == 0)
		cout << "Mang khong co phan tu";
	else
		for (int i = 0; i < N; ++i)
			cout << MangSoThuc[i] << ' ';

	cout << endl;
}

int DemSoAm(double MangSoThuc[], int N)
{
	int count = 0;

	for (int i = 0; i < N; ++i)
		if (MangSoThuc[i] < 0)
			++count;

	return count;
}

void GiaiBai1()
{
	cout << "Bai 1:\n";

	int N;
	double MangSoThuc[100];

	do
	{
		cout << "Nhap so nguyen N (0 <= N <= 100): ";
		cin >> N;
	} while (N < 0 || N > 100);

	NhapMangSoThuc(MangSoThuc, N);
	InMangSoThuc(MangSoThuc, N); 
	cout << "So phan tu am: " << DemSoAm(MangSoThuc, N) << endl;
}
