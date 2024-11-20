#pragma once

#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 10;

// Bai 2
bool DocMaTran(string TenFile, int MaTran[][MAX], int& hang, int& cot);

// Bai 3
bool XuatMaTran(string TenFile, int MaTran[][MAX], int hang, int cot);