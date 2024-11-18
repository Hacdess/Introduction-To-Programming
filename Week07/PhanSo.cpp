#include "PhanSo.h"

int TimUCLN(const int& a, const int& b)
{
	if (a == 0)
		return b;
	return TimUCLN(b % a, a);
}


void PhanSo::RutGonPhanSo()
{
	try
	{
		if (MauSo == 0)
			throw exception{ "Mau so khong duoc bang 0" };

		int ucln = TimUCLN(TuSo, MauSo);

		if (ucln != 1)
		{
			TuSo /= ucln;
			MauSo /= ucln;
		}

		if (MauSo < 0)
		{
			TuSo *= -1;
			MauSo *= -1;
		}
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
}

// Bai 4
bool PhanSo::DocPhanSo(string filename)
{
	ifstream fin(filename.c_str());
	if (!fin)
	{
		cout << "Khong mo duoc file " << filename << endl;
		return false;
	}

	fin >> TuSo >> MauSo;
	RutGonPhanSo();

	fin.close();
	return true;
}

void PhanSo::Xuat(ofstream& fout)
{
	if (MauSo == 0)
		cout << "Mau so khong duoc bang 0\n";
	else if (TuSo % MauSo == 0)
		fout << TuSo / MauSo;
	else
		fout << TuSo << '/' << MauSo;
}

// Bai 13
bool PhanSo::XuatPhanSo(string filename)
{
	ofstream fout(filename.c_str());
	if (!fout)
	{
		cout << "Khong mo duoc file " << filename << endl;
		return false;
	}

	Xuat(fout);
	fout << "\n\n";

	fout.close();
	return true;
}

bool DayPhanSo::DocDayPhanSo(string filename)
{
	ifstream fin(filename.c_str());
	if (!fin)
	{
		cout << "Khong mo duoc file " << filename << endl;
		return false;
	}

	fin >> n;
	for (int i = 0; i < n; ++i)
	{
		fin >> day[i].TuSo >> day[i].MauSo;
		day[i].RutGonPhanSo();
	}

	fin.close();
	return true;
}

// Bai 14
bool DayPhanSo::XuatDayPhanSo(string filename)
{
	ofstream fout(filename.c_str());
	if (!fout)
	{
		cout << "Khong mo duoc file " << filename << endl;
		return false;
	}

	for (int i = 0; i < n; ++i)
	{
		day[i].Xuat(fout);
		fout << ' ';
	}
	
	fout << "\n\n";

	fout.close();
	return true;
}

bool MaTranPhanSo::DocMaTranPhanSo(string filename)
{
	ifstream fin(filename.c_str());
	if (!fin)
	{
		cout << "Khong mo duoc file " << filename << endl;
		return false;
	}

	fin >> row >> col;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			fin >> MaTran[i][j].TuSo >> MaTran[i][j].MauSo;
			MaTran[i][j].RutGonPhanSo();
		}
	}

	fin.close();
	return true;
}

bool MaTranPhanSo::XuatMaTranPhanSo(string filename)
{
	ofstream fout(filename.c_str());
	if (!fout)
	{
		cout << "Khong mo duoc file " << filename << endl;
		return false;
	}

	fout << row << ' ' << col << '\n';

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			MaTran[i][j].Xuat(fout);
			if (j < col - 1)
				fout << ' ';
		}
		fout << '\n';
	}

	fout << "\n";
	fout.close();
	return true;
}
