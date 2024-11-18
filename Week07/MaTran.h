#pragma once

#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 10;

// Bai 2
bool DocMaTran(string filename, int matrix[][MAX], int& row, int& col);

// Bai 3
bool XuatMaTran(string filename, int matrix[][MAX], int row, int col);