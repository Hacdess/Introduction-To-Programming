// Baitap6.cpp : Input the area of a circle. Calculate and print the radius of that circle.

#include <iostream>
#include <cmath>

using namespace std;

const double PI = atan(1) * 4;

int main()
{
    cout << "Ex 6\n";
    
    double area;
    cout << "Input circle's area: ";
    cin >> area;
    
    cout << "Circle's radius: " << sqrt(area / PI);
}