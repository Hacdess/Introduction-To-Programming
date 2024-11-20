#include "MaTran.h"

// Bai 2
bool DocMaTran(string TenFile, int MaTran[][MAX], int& hang, int& cot)
{
    ifstream fin(TenFile.c_str());
    if (!fin)
    {
        cout << "Khong mo duoc file " << TenFile << endl;
        return false;
    }

    fin >> hang >> cot;

    for (int i = 0; i < hang; ++i)
        for (int j = 0; j < cot; ++j)
            fin >> MaTran[i][j];

    fin.close();
    return true;
}
// Bai 3
bool XuatMaTran(string TenFile, int MaTran[][MAX], int hang, int cot)
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
            fout << MaTran[i][j] << ' ';
        fout << endl;
    }
    fout << endl;

    fout.close();
    return true;
}
