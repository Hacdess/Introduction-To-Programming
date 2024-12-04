#include "DuongTron2D.h"

// Bai 8
bool DuongTron2D::DocDuongTron2D(string TenFile)
{
    ifstream fin(TenFile.c_str());
    if (!fin)
    {
        cout << "Khong mo duoc file " << TenFile << endl;
        return false;
    }

    char c;
    fin >> c >> c;
    fin >> tam.x;
    fin >> c;
    fin >> tam.y;
    fin >> c >> c;
    fin >> banKinh;
    fin >> c;

    fin.close();
    return true;
}

// Bai 19
bool DuongTron2D::XuatDuongTron2D(string TenFile)
{
    ofstream fout(TenFile.c_str(), ios::app);
    if (!fout)
    {
        cout << "Khong mo duoc file " << TenFile << endl;
        return false;
    }

    fout << "((" << tam.x << ", " << tam.y << "), " << banKinh << ")\n";

    fout.close();
    return true;
}

// Bai 9
bool DayDuongTron2D::DocDayDuongTron2D(string TenFile)
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
        fin >> c >> c;
        fin >> day[i].tam.x;
        fin >> c;
        fin >> day[i].tam.y;
        fin >> c >> c;
        fin >> day[i].banKinh;
        fin >> c >> c;
    }

    fin.close();
    return true;
}

// Bai 20
bool DayDuongTron2D::XuatDayDuongTron2D(string TenFile)
{
    ofstream fout(TenFile.c_str(), ios::app);
    if (!fout)
    {
        cout << "Khong mo duoc file " << TenFile << endl;
        return false;
    }

    for (int i = 0; i < n; ++i)
    {
        fout << "((" << day[i].tam.x << ", " << day[i].tam.y << "), " << day[i].banKinh << ')';
        if (i != n - 1)
            fout << "; ";
    }
    fout << endl;

    fout.close();
    return true;
}

// Bai 12
bool MaTranDuongTron2D::DocMaTranDuongTron2D(string TenFile)
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
            fin >> c >> c;
            fin >> MaTran[i][j].tam.x;
            fin >> c;
            fin >> MaTran[i][j].tam.y;
            fin >> c >> c;
            fin >> MaTran[i][j].banKinh;
            fin >> c >> c;
        }
    }

    fin.close();
    return true;
}

// Bai 21
bool MaTranDuongTron2D::XuatMaTranDuongTron2D(string TenFile)
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
            fout << "((" << MaTran[i][j].tam.x << ", " << MaTran[i][j].tam.y << "), " << MaTran[i][j].banKinh << ')';

            if (j == cot - 1)
                fout << endl;
            else
                fout << "; ";
        }
    }
    fout << endl;

    fout.close();
    return true;
}
