#pragma once

#include <iostream>
#include <fstream>

using namespace  std;

struct Diem2D
{
	float x;
	float y;

	// Bai 6
	bool DocDiem2D(string TenFile);
	// Bai 16
	bool XuatDiem2D(string TenFile);
};

struct DayDiem2D
{
	Diem2D day[100];
	int n;

	// Bai 7
	bool DocDayDiem2D(string TenFile);
	// Bai 117
	bool XuatDayDiem2D(string TenFile);
};

struct MaTranDiem2D
{
	Diem2D maTran[100][100];
	int hang;
	int cot;

	// Bai 11
	bool DocMaTranDiem2D(string TenFile);

	// Bai 18
	bool XuatMaTranDiem2D(string TenFile);
};