#pragma once

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;

struct Point
{
	int x;
	int y;
};

void InputPoint(Point& point);

const int MAX = 20;
const double PI = 3.14;

struct Circle
{
	Point center;
	double radius;
};

void InputCircle(Circle& circle);
double ComputeCircleArea(const Circle& circle);