// Baitap1.cpp : Input the radius R of a circle. Calculate and display the circumference and area of that circle.

#include <iostream>
#include <cmath>

using namespace std;

const double PI = atan(1) * 4;

int main()
{
	std::cout << "Ex 1\n";
	
	cout << "Input the radius R: ";
	double R;
	cin >> R;

	cout << "Circumference: " << 2 * R * PI << endl;
	cout << "Area: " << R * R * PI;

	return 0;
}