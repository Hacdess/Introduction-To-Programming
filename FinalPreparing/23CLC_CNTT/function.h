#pragma once

#include <iostream>
#include <cstring>
#include <cmath>
#include <fstream>

using namespace std;

#define MAX 100

int findChar(char sentence[], int n, char c);
bool isVowel(char c);
void makeSpoonerism(char twowords[], char newTwoWords[]);

// int findLongestSingleRhyme(char sentences[][MAX], int n);

// int findLongestDoubleRhyme(string sentences[][MAX], int n);