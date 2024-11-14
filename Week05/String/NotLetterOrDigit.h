#pragma once

#include "CapitalizeFirstLetter.h"
#include <iostream>
using namespace std;

bool IsDigit(char c);
void GetListNotLetterNorDigit(char str[], int indexes[], int& len);
bool IsValidChar(char c);
void RemoveNotLetterNorDigit(char str[]);