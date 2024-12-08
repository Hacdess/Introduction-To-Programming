#include "Baitap4.h"

double ComputeSumCircleAreaOfRow(Circle row[], const int& col)
{
    double sum = 0;
    for (int i = 0; i < col; ++i)
        sum += ComputeCircleArea(row[i]);
    return sum;
}

double FindRowHasMaxSumCircleArea(Circle matrix[][MAX], const int& row, const int& col, int MaxSumRows[], int& count)
{
    double max = ComputeSumCircleAreaOfRow(matrix[0], col);

    for (int i = 1; i < row; ++i)
    {
        double sum = ComputeSumCircleAreaOfRow(matrix[i], col);
        if (sum > max)
            max = sum;
    }

    count = 0;
    for (int i = 0; i < row; ++i)
        if (ComputeSumCircleAreaOfRow(matrix[i], col) == max)
            MaxSumRows[count++] = i;

    return max;
}

bool OutputRowHasMaxSumCircleAreaToFile(const char filename[], Circle matrix[][MAX], const int& col, int MaxSumRows[], const int& count, const double &max)
{
    ofstream fout(filename, ios::out);
    if (!fout)
    {
        cout << "Can't open file " << filename << endl;
        return false;
    }

    fout << "Rows that has largest sum circles' area:\n";

    for (int i = 0; i < count; ++i)
    {
        fout << "Row " << MaxSumRows[i] << ": ";

        for (int j = 0; j < col; ++j)
            fout << "Circle ((" << matrix[MaxSumRows[i]][j].center.x << ", " << matrix[MaxSumRows[i]][j].center.y << "), R = " << matrix[MaxSumRows[i]][j].radius << "); ";
    
        fout << "Max = " << max << endl;
    }

    fout << endl;

    fout.close();
    return true;
}

