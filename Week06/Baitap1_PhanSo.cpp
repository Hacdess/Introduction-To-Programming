#include "Baitap1_PhanSo.h"

int TimUCLN(const int& a, const int& b)
{
	if (a == 0)
		return b;
	return TimUCLN(b % a, a);
}

void RutGonPhanSo(PhanSo& ps)
{
	try
	{
		// Van check truong hop mau so = 0 du ham NhapMauSo() da co kiem tra vi lo co mo rong code sau nay
		if (ps.MauSo == 0)
			throw exception{ "Mau so khong duoc bang 0" };

		int ucln = TimUCLN(ps.TuSo, ps.MauSo);

		if (ucln != 1)
		{
			ps.TuSo /= ucln;
			ps.MauSo /= ucln;
		}

		if (ps.MauSo < 0)
		{
			ps.TuSo *= -1;
			ps.MauSo *= -1;
		}
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
}

void NhapPhanSo(PhanSo& ps)
{
	cout << "Nhap phan so:\n";
	cout << "Nhap tu so: ";
	cin >> ps.TuSo;

	do
	{
		cout << "Nhap mau so (khac 0): ";
		cin >> ps.MauSo;
	} while (ps.MauSo == 0);
}

void XuatPhanSo(const PhanSo& ps)
{
	// Van check truong hop mau so = 0 du ham NhapMauSo() da co kiem tra vi lo co mo rong code sau nay
	try
	{
		if (ps.MauSo == 0)
			throw exception{ "Mau so khong duoc bang 0" };

		if (ps.TuSo % ps.MauSo == 0)
			cout << ps.TuSo / ps.MauSo;
		else
			cout << ps.TuSo << '/' << ps.MauSo;
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
}

PhanSo TinhTong2PhanSo(const PhanSo& a, const PhanSo& b)
{
	PhanSo tong;
	tong.TuSo = a.TuSo * b.MauSo + a.MauSo * b.TuSo;
	tong.MauSo = a.MauSo * b.MauSo;
	RutGonPhanSo(tong);
	return tong;
}

PhanSo TinhHieu2PhanSo(const PhanSo& a, const PhanSo& b)
{
	PhanSo hieu;
	hieu.TuSo = a.TuSo * b.MauSo - a.MauSo * b.TuSo;
	hieu.MauSo = a.MauSo * b.MauSo;
	RutGonPhanSo(hieu);
	return hieu;
}

PhanSo TinhTich2PhanSo(const PhanSo& a, const PhanSo& b)
{
	PhanSo tich;
	tich.TuSo = a.TuSo * b.TuSo;
	tich.MauSo = a.MauSo * b.MauSo;
	RutGonPhanSo(tich);
	return tich;
}

PhanSo TinhThuong2PhanSo(const PhanSo& a, const PhanSo& b)
{
	if (b.TuSo == 0)
		throw exception{ "Khong the chia cho 0" };

	PhanSo thuong;
	thuong.TuSo = a.TuSo * b.MauSo;
	thuong.MauSo = a.MauSo * b.TuSo;
	RutGonPhanSo(thuong);
	return thuong;
}

short SoSanh2PhanSo(const PhanSo& a, const PhanSo& b)
{
	short SoSanh = a.TuSo * b.MauSo - a.MauSo * b.TuSo;

	if (SoSanh < 0)
		return -1;
	else if (SoSanh == 0)
		return 0;
	else
		return 1;
}

void GiaiBai1()
{
	cout << "========== Bai tap 1 ==========\n";
	cout << "Luu y: Vi phan so chua duoc rut gon sau khi nhap nen mau co the am\n\n";

	PhanSo ps1, ps2, ps3;

	NhapPhanSo(ps1);
	cout << "Phan so 1: ";
	XuatPhanSo(ps1);
	cout << "\n\n";

	NhapPhanSo(ps2);
	cout << "Phan so 2: ";
	XuatPhanSo(ps2);
	cout << "\n\n";

	ps3 = TinhTong2PhanSo(ps1, ps2);
	cout << "Tong 2 phan so: ";
	XuatPhanSo(ps3);
	cout << endl;

	ps3 = TinhHieu2PhanSo(ps1, ps2);
	cout << "Hieu 2 phan so: ";
	XuatPhanSo(ps3);
	cout << endl;

	ps3 = TinhTich2PhanSo(ps1, ps2);
	cout << "Tich 2 phan so: ";
	XuatPhanSo(ps3);
	cout << endl;

	try
	{
		ps3 = TinhThuong2PhanSo(ps1, ps2);
		cout << "Thuong 2 phan so: ";
		XuatPhanSo(ps3);
		cout << endl;
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	cout << endl;

	short SoSanh = SoSanh2PhanSo(ps1, ps2);
	cout << "So sanh: ";
	XuatPhanSo(ps1);
	if (SoSanh < 0)
		cout << " < ";
	else if (SoSanh == 0)
		cout << " = ";
	else
		cout << " > ";
	XuatPhanSo(ps2);
	cout << "\n\n";

	RutGonPhanSo(ps1);
	cout << "Phan so 1 sau khi rut gon: ";
	XuatPhanSo(ps1);
	cout << endl;

	RutGonPhanSo(ps2);
	cout << "Phan so 2 sau khi rut gon: ";
	XuatPhanSo(ps2);

	cout << endl;
}
