#include "Baitap2_DayPhanSo.h"

void NhapDayPhanSo(PhanSo DayPhanSo[], int& N)
{
	do
	{
		cout << "Nhap so luong N phan so co trong day (N > 0): ";
		cin >> N;
	} while (N <= 0);
	cout << endl;


	cout << "Nhap " << N << " phan so:\n\n";
	for (int i = 0; i < N; ++i)
	{
		NhapPhanSo(DayPhanSo[i]);
		cout << endl;
	}
}

void XuatDayPhanSo(PhanSo DayPhanSo[], int N)
{
	cout << "Day Phan So: ";
	for (int i = 0; i < N; ++i)
	{
		XuatPhanSo(DayPhanSo[i]);
		cout << ' ';
	}
}

PhanSo TinhTongDayPhanSo(PhanSo DayPhanSo[], int N)
{
	PhanSo tong = { 0, 1 };

	for (int i = 0; i < N; ++i)
	{
		tong = TinhTong2PhanSo(tong, DayPhanSo[i]);
		RutGonPhanSo(tong);
	}

	return tong;
}

void RutGonPhanSoTrongDayPhanSo(PhanSo DayPhanSo[], int N)
{
	for (int i = 0; i < N; ++i)
		if (TimUCLN(DayPhanSo[i].TuSo, DayPhanSo[i].MauSo) != 1)
			RutGonPhanSo(DayPhanSo[i]);
}

void TraoDoi2PhanSo(PhanSo& a, PhanSo& b)
{
	PhanSo c = a;
	a = b;
	b = c;
}

void SapXepTangDanDayPhanSo(PhanSo DayPhanSo[], int N)
{
	int i, j;
	PhanSo k;

	for (int i = 1; i < N; ++i)
	{
		k = DayPhanSo[i];
		j = i - 1;

		for (j; j >= 0 && SoSanh2PhanSo(k, DayPhanSo[j]) < 0; --j)
			DayPhanSo[j + 1] = DayPhanSo[j];

		DayPhanSo[j + 1] = k;
	}
}

bool TimPhanSo(PhanSo DayPhanSo[], int N, PhanSo K)
{
	for (int i = 0; i < N; ++i)
		if (SoSanh2PhanSo(DayPhanSo[i], K) == 0)
			return true;
	return false;
}

void GiaiBai2()
{
	cout << "========== Bai tap 2 ==========\n\n";

	PhanSo DayPhanSo[100];
	int N;

	NhapDayPhanSo(DayPhanSo, N);
	cout << endl;

	XuatDayPhanSo(DayPhanSo, N);
	cout << "\n\n";

	PhanSo tong = TinhTongDayPhanSo(DayPhanSo, N);
	cout << "Tong day phan so: ";
	XuatPhanSo(tong);
	cout << "\n\n";

	SapXepTangDanDayPhanSo(DayPhanSo, N);
	cout << "Sap xep tang dan:\n";
	XuatDayPhanSo(DayPhanSo, N);
	cout << "\n\n";

	RutGonPhanSoTrongDayPhanSo(DayPhanSo, N);
	cout << "Thay the cac phan so khong toi gian bang chinh phan so toi gian:\n";
	XuatDayPhanSo(DayPhanSo, N);
	cout << "\n\n";

	cout << "Nhap phan so K de tim:\n";
	PhanSo K;
	NhapPhanSo(K);
	cout << endl;
	XuatPhanSo(K);
	cout << (TimPhanSo(DayPhanSo, N, K) ? "" : " khong") << " co trong day\n";
}
