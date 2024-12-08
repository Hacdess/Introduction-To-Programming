#include "Circle.h"

void InputPoint(Point& point)
{
	cout << "Input x, y (integer) separated by space: ";
	cin >> point.x >> point.y;
}

void InputCircle(Circle& circle)
{
	cout << "Input circle's center point:\n";
	InputPoint(circle.center);
	
	do
	{
		cout << "Input circle's radius (positive real number): ";
		cin >> circle.radius;
	} while (circle.radius <= 0);
}

double ComputeCircleArea(const Circle& circle)
{
	return circle.radius * circle.radius * PI;
}
