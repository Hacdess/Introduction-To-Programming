#include "Diem2D.h"

// Bai 6
bool Diem2D::DocDiem2D(string TenFile)
{
	ifstream fin(TenFile.c_str());
	if (!fin)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
		return false;
	}

	char c;
	fin >> c;

	fin >> x >> y;

	fin.close();
	return true;
}

// Bai 16
bool Diem2D::XuatDiem2D(string TenFile)
{
	ofstream fout(TenFile.c_str(), ios::app);
	if (!fout)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
		return false;
	}

	fout << '(' << x << ", " << y << ")\n";

	fout.close();
	return true;
}

// Bai 7
bool DayDiem2D::DocDayDiem2D(string TenFile)
{
	ifstream fin(TenFile.c_str());
	if (!fin)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
		return false;
	}

	fin >> n;
	fin.ignore();

	char c;
	for (int i = 0; i < n; ++i)
	{
		fin >> c;
		fin >> day[i].x;
		fin >> c;
		fin >> day[i].y;
		fin >> c;
	}

	fin.close();
	return true;
}

// Bai 17
bool DayDiem2D::XuatDayDiem2D(string TenFile)
{
	ofstream fout(TenFile.c_str(), ios::app);
	if (!fout)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
		return false;
	}

	for (int i = 0; i < n; ++i)
		fout << '(' << day[i].x << ", " << day[i].y << ") ";
	fout << endl;

	fout << "\n\n";

	fout.close();
	return true;
}
// Bai 11
bool MaTranDiem2D::DocMaTranDiem2D(string TenFile)
{
	ifstream fin(TenFile.c_str());
	if (!fin)
	{
		cout << "Khong mo duoc file " << TenFile << endl;
		return false;
	}

	fin >> hang >> cot;
	fin.ignore();

	char c;
	for (int i = 0; i < hang; ++i)
	{
		for (int j = 0; j < cot; ++j)
		{
			fin >> c;
			fin >> MaTran[i][j].x;
			fin >> c;
			fin >> MaTran[i][j].y;
			fin >> c;
		}
	}

	fin.close();
	return true;
}

// Bai 18
bool MaTranDiem2D::XuatMaTranDiem2D(string TenFile)
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
			fout << '(' << MaTran[i][j].x << ", " << MaTran[i][j].y << ") ";
		}
		fout << endl;
	}
	fout << endl;

	fout.close();
	return true;
}
