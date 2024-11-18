#pragma once

#include "Baitap1_PhanSo.h"

void NhapDayPhanSo(PhanSo DayPhanSo[], int& N);
void XuatDayPhanSo(PhanSo DayPhanSo[], int N);
PhanSo TinhTongDayPhanSo(PhanSo DayPhanSo[], int N);
void RutGonPhanSoTrongDayPhanSo(PhanSo DayPhanSo[], int N);
void TraoDoi2PhanSo(PhanSo& a, PhanSo& b);
void SapXepTangDanDayPhanSo(PhanSo DayPhanSo[], int N);
bool TimPhanSo(PhanSo DayPhanSo[], int N, PhanSo K);

void GiaiBai2();