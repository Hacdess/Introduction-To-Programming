#include "Baitap3.h"

double FindMaxAreaCirclesOfRow(Circle matrix[][MAX], const int& TargetRow, const int& col, Circle MaxCircles[], int& count)
{
    count = 0;
    double max = ComputeCircleArea(matrix[TargetRow][0]);

    for (int i = 0; i < col; ++i)
    {
        double area = ComputeCircleArea(matrix[TargetRow][i]);

        if (area > max)
            max = area;
    }

    for (int i = 0; i < col; ++i)
        if (ComputeCircleArea(matrix[TargetRow][i]) == max)
            MaxCircles[count++] = matrix[TargetRow][i];

    return max;
}

double FindMaxAreaCirclesOfCol(Circle matrix[][MAX], const int& row, const int& TargetCol, Circle MaxCircles[], int& count)
{
    count = 0;
    double max = ComputeCircleArea(matrix[0][TargetCol]);

    for (int i = 0; i < row; ++i)
    {
        double area = ComputeCircleArea(matrix[i][TargetCol]);

        if (area > max)
            max = area;
    }

    for (int i = 0; i < row; ++i)
        if (ComputeCircleArea(matrix[i][TargetCol]) == max)
            MaxCircles[count++] = matrix[i][TargetCol];

    return max;
}

void FindMaxAreaCirclesEachRowAndCol(Circle matrix[][MAX], const int& row, const int& col, 
                                    Circle MaxAreaCirclesRows[][MAX], int cols[], double MaxRows[], 
                                    Circle MaxAreaCirclesCols[][MAX], int rows[], double MaxCols[])
{
    for (int i = 0; i < row; ++i)
        MaxRows[i] = FindMaxAreaCirclesOfRow(matrix, i, col, MaxAreaCirclesRows[i], cols[i]);
    for (int i = 0; i < col; ++i)
        MaxCols[i] = FindMaxAreaCirclesOfCol(matrix, row, i, MaxAreaCirclesCols[i], rows[i]);
}


bool OutputMaxAreaCircleEachRowAndColToFile(const char filename[], Circle matrix[][MAX], const int& row, const int& col,
                                            Circle MaxAreaCirclesRows[][MAX], int cols[], double MaxRows[],
                                            Circle MaxAreaCirclesCols[][MAX], int rows[], double MaxCols[])
{
    ofstream fout(filename, ios::out);
    if (!fout)
    {
        cout << "Can't open file " << filename << endl;
        return false;
    }

    fout << "Circles with max area of:\n";

    for (int i = 0; i < row; ++i)
    {
        fout << "Row " << i << ": ";
        for (int j = 0; j < cols[i]; ++j)
            fout << "Circle ((" << MaxAreaCirclesRows[i][j].center.x << ", " << MaxAreaCirclesRows[i][j].center.y << "), R = " << MaxAreaCirclesRows[i][j].radius << "); ";
        fout << "Max = " << MaxRows[i] << endl;
    }
    
    for (int i = 0; i < col; ++i)
    {
        fout << "Col " << i << ": ";
        for (int j = 0; j < rows[i]; ++j)
            fout << "Circle ((" << MaxAreaCirclesCols[i][j].center.x << ", " << MaxAreaCirclesCols[i][j].center.y << "), R = " << MaxAreaCirclesCols[i][j].radius << "); ";
        fout << "Max = " << MaxRows[i] << endl;
    }

    fout << endl;

    fout.close();
    return true;
}
