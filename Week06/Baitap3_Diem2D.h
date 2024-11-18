#pragma once

#include <iostream>
#include <cmath>
using namespace  std;

const double epsilon = 1e-9;

struct Diem2D
{
	float x;
	float y;
};

// So sanh dua tren sai so epsilon
short SoSanh2SoThuc(const float& a, const float& b);

void NhapDiem2D(Diem2D& diem);
void XuatDiem2D(const Diem2D& diem);
float TinhKhoangCach(const Diem2D& A, const Diem2D& B);
bool LaTamGiac(const Diem2D& A, const Diem2D& B, const Diem2D& C);
float TinhChuViTamGiac(const Diem2D& A, const Diem2D& B, const Diem2D& C);
float TinhDienTichTamGiac(const Diem2D& A, const Diem2D& B, const Diem2D& C);
bool KiemTraDiemTrongTamGiac(const Diem2D& A, const Diem2D& B, const Diem2D& C, const Diem2D& D);

void GiaiBai3();