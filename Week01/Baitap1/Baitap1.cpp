// Baitap1.cpp :
// Input the radius R of a circle.
// Calculate and display the circumference and area of that circle.

#include <iostream>
#include <cmath>

using namespace std;

const double PI = atan(1) * 4;

int main() {
	cout << "Ex 1\n";
	
	double R;
	do {
		cout << "Input the radius R (positive real number): ";
		cin >> R;
	} while (R <= 0);

	cout << "Circumference: " << 2 * R * PI << endl;
	cout << "Area: " << R * R * PI;

	return 0;
}