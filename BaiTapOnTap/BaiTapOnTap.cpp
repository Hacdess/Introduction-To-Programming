#include "Baitap1.h"
#include "Baitap2.h"
#include "Baitap3.h"
#include "Baitap4.h"
#include "Baitap5.h"

using namespace std;

int main()
{
	cout << "Bai tap 1: Nhap ma tran cac duong tron tu man hinh console\n";
	Circle matrix[MAX][MAX];

	int row, col;

	InputCirleMatrixFromConsole(matrix, row, col);
	char filename[25] = "Input_Output/input.txt";
	//ReadFile(filename, matrix, row, col);

	cout << "Bai tap 2: Xuat ma tran cac duong tron\n";
	strcpy_s(filename, "Input_Output/bt2.txt");
	cout << "Xuat file " << filename << (OutputCircleMatrixToFile(filename, matrix, row, col) ? " thanh cong" : " that bai") << "\n\n";

	cout << "Bai tap 3: Tim cac duong tron co dien tich lon nhat tren dong hoac cot\n";
	strcpy_s(filename, "Input_Output/bt3.txt");
	Circle MaxAreaCirclesRows[MAX][MAX];
	Circle MaxAreaCirclesCols[MAX][MAX];
	int cols[MAX], rows[MAX];
	double MaxRows[MAX], MaxCols[MAX];
	FindMaxAreaCirclesEachRowAndCol(matrix, row, col, MaxAreaCirclesRows, cols, MaxRows, MaxAreaCirclesCols, rows, MaxCols);
	cout << "Xuat file " << filename << (OutputMaxAreaCircleEachRowAndColToFile(filename, matrix, row, col, MaxAreaCirclesRows, cols, MaxRows, MaxAreaCirclesCols, rows, MaxCols) ? " thanh cong" : " that bai") << "\n\n";

	cout << "Bai tap 4: Tim cac dong co tong dien tich lon nhat torng ma tran\n";
	strcpy_s(filename, "Input_Output/bt4.txt");
	int MaxSumRows[MAX], count;
	double max = FindRowHasMaxSumCircleArea(matrix, row, col, MaxSumRows, count);
	cout << "Xuat file " << filename << (OutputRowHasMaxSumCircleAreaToFile(filename, matrix, col, MaxSumRows, count, max) ? " thanh cong" : " that bai") << "\n\n";

	cout << "Bai tap 5: Sap xep ma tran duong tron co dong tang dan theo y va dien tich. Ghi ket qua ra tap tin bt5.txt\n";
	SortMatrxAscendingByYAndArea(matrix, row, col);
	strcpy_s(filename, "Input_Output/bt5.txt");
	cout << "Xuat file " << filename << (OutputCircleMatrixToFile(filename, matrix, row, col) ? " thanh cong" : " that bai") << "\n\n";
}