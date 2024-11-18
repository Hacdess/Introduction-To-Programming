#pragma once

#include <iostream>
#include <cstring>

using namespace std;

struct HocSinh
{
	char Ten[31];
	float DiemToan;
	float DiemLy;
	float DiemHoa;
};

void NhapHocSinh(HocSinh& hs);
float DiemTrungBinh(const HocSinh& hs);
void InHocSinh(const HocSinh& hs);

void NhapDanhSachHocSinh(HocSinh DanhSachHocSinh[], int& n);
void InDanhSachHocSinh(HocSinh DanhSachHocSinh[], int n);


void TraoDoiHocSinh(HocSinh& hs1, HocSinh& hs2);
void SapXepDanhSachTenHocSinhDiemToanTangDan(HocSinh DanhSachHocSinh[], int n);
void Top3DiemTrungBinh(HocSinh DanhSachHocSinh[], int n);

void GiaiBai4();