#pragma once

#include "Circle.h"

double ComputeSumCircleAreaOfRow(Circle row[], const int &col);
double FindRowHasMaxSumCircleArea(Circle matrix[][MAX], const int& row, const int& col, int MaxSumRows[], int& count);
bool OutputRowHasMaxSumCircleAreaToFile(const char filename[], Circle matrix[][MAX], const int& col, int MaxSumRows[], const int& count, const double &max);