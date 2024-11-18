#include "Baitap3_Diem2D.h"

short SoSanh2SoThuc(const float& a, const float& b)
{
	short KetQua = a - b;
	if (KetQua > epsilon)
		return 1;
	if (KetQua < -epsilon)
		return -1;
	return 0;
}

void NhapDiem2D(Diem2D& diem)
{
	cout << "Nhap toa do x, y cua diem (cach nhau bang khoang trang): ";
	cin >> diem.x >> diem.y;
}

void XuatDiem2D(const Diem2D& diem)
{
	cout << '(' << diem.x << ", " << diem.y << ')';
}

float TinhKhoangCach(const Diem2D& A, const Diem2D& B)
{
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

bool LaTamGiac(const Diem2D& A, const Diem2D& B, const Diem2D& C)
{
	float AB = TinhKhoangCach(A, B);
	float BC = TinhKhoangCach(B, C);
	float CA = TinhKhoangCach(C, A);

	return (SoSanh2SoThuc(AB + BC, CA) > epsilon && SoSanh2SoThuc(BC + CA, AB) > epsilon && SoSanh2SoThuc(CA + AB, BC) > 0);
}

float TinhChuViTamGiac(const Diem2D& A, const Diem2D& B, const Diem2D& C)
{
	return 	TinhKhoangCach(A, B) + TinhKhoangCach(B, C) + TinhKhoangCach(C, A);
}

// Cong thuc Shoelace
float TinhDienTichTamGiac(const Diem2D& A, const Diem2D& B, const Diem2D& C)
{
	return 0.5 * fabs(A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y));
}

bool KiemTraDiemTrongTamGiac(const Diem2D& A, const Diem2D& B, const Diem2D& C, const Diem2D& D)
{

	return SoSanh2SoThuc(TinhDienTichTamGiac(D, A, B) + TinhDienTichTamGiac(D, B, C) + TinhDienTichTamGiac(D, C, A), TinhDienTichTamGiac(A, B, C)) == 0;
}

void GiaiBai3()
{
	cout << "========== Bai tap 3 ==========\n\n";

	Diem2D A, B, C;
	
	NhapDiem2D(A);
	cout << "Diem A: ";
	XuatDiem2D(A);
	cout << "\n\n";

	NhapDiem2D(B);
	cout << "Diem B: ";
	XuatDiem2D(B);
	cout << "\n\n";

	NhapDiem2D(C);
	cout << "Diem C: ";
	XuatDiem2D(C);
	cout << "\n\n";

	cout << "AB = " << TinhKhoangCach(A, B) << "\n\n";

	if (LaTamGiac(A, B, C))
	{
		cout << "Chu vi tam giac ABC = " << TinhChuViTamGiac(A, B, C) << endl;
		cout << "Tinh dien tich tam giac ABC = " << TinhDienTichTamGiac(A, B, C) << "\n\n";

		Diem2D D;
		cout << "Nhap diem D:\n";
		NhapDiem2D(D);
		XuatDiem2D(D);
		cout << (KiemTraDiemTrongTamGiac(A, B, C, D) ? "" : " khong") << " nam trong tam giac ABC\n";
	}
	else
		cout << "ABC khong phai la tam giac\n";
}
