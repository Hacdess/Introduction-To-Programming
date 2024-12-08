#pragma once

#include "Circle.h"

double FindMaxAreaCirclesOfRow(Circle matrix[][MAX], const int& TargetRow, const int& col, Circle MaxCircles[], int &count);
double FindMaxAreaCirclesOfCol(Circle matrix[][MAX], const int& row, const int& TargetCol, Circle MaxCircles[], int &count);
void FindMaxAreaCirclesEachRowAndCol(Circle matrix[][MAX], const int& row, const int& col,
									Circle MaxAreaCirclesRows[][MAX], int cols[], double MaxRows[],
									Circle MaxAreaCirclesCols[][MAX], int rows[], double MaxCols[]);
bool OutputMaxAreaCircleEachRowAndColToFile(const char filename[], Circle matrix[][MAX], const int& row, const int& col, 
											Circle MaxAreaCirclesRows[][MAX], int cols[], double MaxRows[], 
											Circle MaxAreaCirclesCols[][MAX], int rows[], double MaxCols[]);