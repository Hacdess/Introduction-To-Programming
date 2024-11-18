#pragma once

#include <iostream>
using namespace std;

struct PhanSo
{
	int TuSo;
	int MauSo;
};

int TimUCLN(const int& a, const int& b);
void RutGonPhanSo(PhanSo& ps);
void NhapPhanSo(PhanSo& ps);
void XuatPhanSo(const PhanSo& ps);
PhanSo TinhTong2PhanSo(const PhanSo& a, const PhanSo& b);
PhanSo TinhHieu2PhanSo(const PhanSo& a, const PhanSo& b);
PhanSo TinhTich2PhanSo(const PhanSo& a, const PhanSo& b);
PhanSo TinhThuong2PhanSo(const PhanSo& a, const PhanSo& b);
short SoSanh2PhanSo(const PhanSo& a, const PhanSo& b);

void GiaiBai1();