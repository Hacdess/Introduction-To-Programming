#pragma once

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int TimUCLN(const int& a, const int& b);

struct PhanSo
{
	int TuSo;
	int MauSo;

	void RutGonPhanSo();

	// Bai 4
	bool DocPhanSo(string TenFile);
	void Xuat(ofstream& fout);
	// Bai 13
	bool XuatPhanSo(string TenFile);
};

struct DayPhanSo
{
	PhanSo day[100];
	int n;

	// Bai 5
	bool DocDayPhanSo(string TenFile);
	// Bai 14
	bool XuatDayPhanSo(string TenFile);
};


struct MaTranPhanSo
{
	PhanSo MaTran[10][10];
	int hang, cot;

	// Bai 10
	bool DocMaTranPhanSo(string TenFile);
	// Bai 15
	bool XuatMaTranPhanSo(string TenFile);
};