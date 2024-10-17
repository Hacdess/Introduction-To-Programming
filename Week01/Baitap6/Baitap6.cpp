// Baitap6.cpp :
// Input the area of a circle.
// Calculate and print the radius of that circle.

#include <iostream>
#include <cmath>

using namespace std;

const double PI = atan(1) * 4;

int main() {
    cout << "Ex 6\n";
    
    double area;
    do {
        cout << "Input circle's area (positive real number): ";
        cin >> area;
    } while (area <= 0);

    
    cout << "Circle's radius: " << sqrt(area / PI);
    
    return 0;
}