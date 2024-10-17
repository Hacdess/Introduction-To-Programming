// Baitap2.cpp :
// A rectangle has the property that its length is 1.5 times its width.
// Write a program to input the perimeter of the rectangle, calculate, and print the area of the rectangle.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Ex 2\n";

	double perimeter;
	do {
		cout << "Input the perimeter of the rectangle (positive real number): ";
		cin >> perimeter;
	} while (perimeter <= 0);

	double width = perimeter / 5;
	double length = 1.5 * width;
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Area: " << length * width;

	return 0;
}