#include "Baitap2.h"

bool OutputCircleMatrixToFile(const char filename[], Circle matrix[][MAX], const int& row, const int& col)
{
    ofstream fout(filename, ios::out);
    if (!fout)
    {
        cout << "Can't open file " << filename << endl;
        return false;
    }

    fout << "Row: " << row << ", Column: " << col << endl;
    for (int i = 0; i < row; ++i)
    {

        for (int j = 0; j < col; ++j)
            fout << "Circle ((" << matrix[i][j].center.x << ", " << matrix[i][j].center.y << "), R = " << matrix[i][j].radius << "); ";
        fout << endl;
    }
    fout << endl;

    fout.close();
    return true;
}
