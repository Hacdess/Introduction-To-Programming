#include "MaTran.h"

bool DocMaTran(string filename, int matrix[][MAX], int& row, int& col)
{
    ifstream fin(filename.c_str());
    if (!fin)
    {
        cout << "Khong mo duoc file " << filename << endl;
        return false;
    }

    fin >> row >> col;

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            fin >> matrix[i][j];

    fin.close();
    return true;
}

bool XuatMaTran(string filename, int matrix[][MAX], int row, int col)
{
    ofstream fout(filename.c_str(), ios::app);
    if (!fout)
    {
        cout << "Khong mo duoc file " << filename << endl;
        return false;
    }

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            fout << matrix[i][j] << ' ';
        fout << endl;
    }
    fout << endl;

    fout.close();
    return true;
}
