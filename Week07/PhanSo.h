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
	bool DocPhanSo(string filename);
	void Xuat(ofstream& fout);
	bool XuatPhanSo(string filename);
};

struct DayPhanSo
{
	PhanSo day[100];
	int n;

	bool DocDayPhanSo(string filename);
	bool XuatDayPhanSo(string filename);
};


struct MaTranPhanSo
{
	PhanSo MaTran[10][10];
	int row, col;

	bool DocMaTranPhanSo(string filename);
	bool XuatMaTranPhanSo(string filename);
};