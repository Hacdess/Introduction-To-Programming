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
bool PhanSo::DocPhanSo(string TenFile)
{
	ifstream fin(TenFile.c_str());
	if (!fin)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
		return false;
	}

	fin >> TuSo;
	fin.ignore();
	fin >> MauSo;
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
bool PhanSo::XuatPhanSo(string TenFile)
{
	ofstream fout(TenFile.c_str(), ios::app);
	if (!fout)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
		return false;
	}

	Xuat(fout);
	fout << "\n";

	fout.close();
	return true;
}

// Bai 5
bool DayPhanSo::DocDayPhanSo(string TenFile)
{
	ifstream fin(TenFile.c_str());
	if (!fin)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
		return false;
	}

	fin >> n;
	for (int i = 0; i < n; ++i)
	{
		fin >> day[i].TuSo;
		fin.ignore();
		fin >> day[i].MauSo;
		fin.ignore();
		day[i].RutGonPhanSo();
	}

	fin.close();
	return true;
}

// Bai 14
bool DayPhanSo::XuatDayPhanSo(string TenFile)
{
	ofstream fout(TenFile.c_str(), ios::app);
	if (!fout)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
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

// Bai 10
bool MaTranPhanSo::DocMaTranPhanSo(string TenFile)
{
	ifstream fin(TenFile.c_str());
	if (!fin)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
		return false;
	}

	fin >> hang >> cot;
	fin.ignore();

	for (int i = 0; i < hang; ++i)
	{
		for (int j = 0; j < cot; ++j)
		{
			fin >> MaTran[i][j].TuSo;
			fin.ignore();
			fin >> MaTran[i][j].MauSo;
			fin.ignore();
			MaTran[i][j].RutGonPhanSo();
		}
	}

	fin.close();
	return true;
}

// Bai 15
bool MaTranPhanSo::XuatMaTranPhanSo(string TenFile)
{
	ofstream fout(TenFile.c_str(), ios::app);
	if (!fout)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
		return false;
	}

	for (int i = 0; i < hang; ++i)
	{
		for (int j = 0; j < cot; ++j)
		{
			MaTran[i][j].Xuat(fout);
			if (j < cot - 1)
				fout << ' ';
		}
		fout << '\n';
	}

	fout << "\n";
	fout.close();
	return true;
}
