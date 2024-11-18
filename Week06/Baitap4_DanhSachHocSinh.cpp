#include "Baitap4_DanhSachHocSinh.h"

void NhapHocSinh(HocSinh& hs)
{
	cout << "Nhap thong tin hoc sinh:\n";
	
	cout << "Nhap ten: ";
	cin.getline(hs.Ten, 31);

	cout << "Nhap diem toan: ";
	cin >> hs.DiemToan;

	cout << "Nhap diem ly: ";
	cin >> hs.DiemLy;

	cout << "Nhap diem hoa: ";
	cin >> hs.DiemHoa;
}

float DiemTrungBinh(const HocSinh& hs)
{
	return (hs.DiemToan + hs.DiemLy + hs.DiemHoa) / 3;
}

void InHocSinh(const HocSinh& hs)
{
	cout << hs.Ten << " - Diem toan: " << hs.DiemToan << " - Diem ly: " << hs.DiemLy << " - Diem hoa: " << hs.DiemHoa << " - Diem trung binh: " << DiemTrungBinh(hs) << endl;
}

void NhapDanhSachHocSinh(HocSinh DanhSachHocSinh[], int& n)
{
	do
	{
		cout << "Nhap so luong hoc sinh n (n > 0): ";
		cin >> n;
	} while (n <= 0);

	for (int i = 0; i < n; ++i)
	{
		cout << endl;
		cin.ignore();
		NhapHocSinh(DanhSachHocSinh[i]);
	}
}

void InDanhSachHocSinh(HocSinh DanhSachHocSinh[], int n)
{
	cout << "Danh sach hoc sinh:\n";
	if (n == 0)
		cout << "Khong co hoc sinh\n";
	else
		for (int i = 0; i < n; ++i)
			InHocSinh(DanhSachHocSinh[i]);
}

void TraoDoiHocSinh(HocSinh& hs1, HocSinh& hs2)
{
	HocSinh hs = hs1;
	hs1 = hs2;
	hs2 = hs;
}

void SapXepDanhSachTenHocSinhDiemToanTangDan(HocSinh DanhSachHocSinh[], int n)
{ 
	for (int i = 1; i < n; ++i)
	{
		HocSinh k = DanhSachHocSinh[i];
		int j = i - 1;

		for (j; j >= 0 && k.DiemToan < DanhSachHocSinh[j].DiemToan; --j)
			DanhSachHocSinh[j + 1] = DanhSachHocSinh[j];

		DanhSachHocSinh[j + 1] = k;
	}

	for (int i = 0; i < n; ++i)
		cout << i + 1 << ". " << DanhSachHocSinh[i].Ten << " - Diem toan: " << DanhSachHocSinh[i].DiemToan << endl;
}

void Top3DiemTrungBinh(HocSinh DanhSachHocSinh[], int n)
{
	int ViTriTop3[3];
	int dem = 0;

	for (int i = 0; i < n && dem < 3; ++i)
	{
		if (dem == 0)
			ViTriTop3[dem++] = i;
		else
		{
			bool added = false;

			for (int j = 0; j < dem; ++j)
			{
				if (DiemTrungBinh(DanhSachHocSinh[i]) > DiemTrungBinh(DanhSachHocSinh[ViTriTop3[j]]))
				{
					for (int k = dem; k > j; --k)
						ViTriTop3[k] = ViTriTop3[k - 1];
					ViTriTop3[j] = i;
					added = true;
					break;
				}
			}

			if (!added && dem < 3)
				ViTriTop3[dem++] = i;
		}
	}

	cout << "Top 3 hoc sinh co diem trung binh cao nhat:\n";
	for (int i = 0; i < 3; ++i)
		cout << i + 1 << ". " << DanhSachHocSinh[ViTriTop3[i]].Ten << " - Diem TB: " << DiemTrungBinh(DanhSachHocSinh[ViTriTop3[i]]) << endl;
}

void GiaiBai4()
{
	cout << "========== Bai tap 4 ==========\n\n";

	HocSinh DanhSach[200];
	int n;

	NhapDanhSachHocSinh(DanhSach, n);
	cout << endl;

	InDanhSachHocSinh(DanhSach, n);
	cout << endl;

	cout << "Danh sach ten hoc sinh theo thu tu diem toan tang dan:\n";
	SapXepDanhSachTenHocSinhDiemToanTangDan(DanhSach, n);
	cout << endl;

	Top3DiemTrungBinh(DanhSach, n);
}

