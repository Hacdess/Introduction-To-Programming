#pragma once

#include "Circle.h"

void InputCirleMatrixFromConsole(Circle matrix[][MAX], int& row, int& col);
bool ReadFile(const char filename[], Circle matrix[][MAX], int& row, int& col);