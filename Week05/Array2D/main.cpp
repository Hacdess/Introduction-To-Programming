#pragma once

#include "NhapXuat.h"

int main()
{
	int Array2D[100][100], row, col;

	InputArray2D(Array2D, row, col);
	cout << endl;
	OutputArray2D(Array2D, row, col);
	cout << endl;

	cout << "1. Sum of all positive elements in Array2D: " << ComputeSumPositiveArray2D(Array2D, row, col) << endl;
	
	cout << "2. The number of prime elements in Array2D: " << CountPrimesArray2D(Array2D, row, col) << endl;
	
	cout << "3. The maximum element on the edges of Array2D: " << FindMaxOnEdgesArray2D(Array2D, row, col) << endl;
	
	cout << "4. The minimum positive element in Array2D: ";
	int val = FindMinPositiveArray2D(Array2D, row, col);
	if (val > 0)
		cout << val << endl;
	else
		cout << "Ther is no positive element in Array2D\n";

	cout << "5. ";
	ListRowsContainNegatives(Array2D, row, col);
	cout << endl;

	cout << "6. ";
	ListRowWithAllEvens(Array2D, row, col);
	cout << endl;

	cout << "7. The number of saddle values in Array2D: " << CountSaddleValues(Array2D, row, col) << endl;
	cout << "8. The number of queen values in Array2D: " << CountQueenValues(Array2D, row, col) << endl;
	cout << "9. Sum of all extreme elements in Array2D: " << ComputeSumExtremeValues(Array2D, row, col) << endl;
	cout << "10. The most frequent digit in Array2D: " << FindMostFrequentDigit(Array2D, row, col) << endl;

	cout << "11. Sort Array2D's Edges Clockwise:\n";
	SortEdgesClockwise(Array2D, row, col);
	OutputArray2D(Array2D, row, col);
	
	return 0; 
}