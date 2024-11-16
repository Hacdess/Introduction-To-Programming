#include <iostream>
#include <cmath>
using namespace std;

const float epsilon = 1e-9;

struct Point
{
    float x, y;
};

struct Circle
{
    Point center;
    float r;
    void input();
};

float distance(Point p1, Point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int checkOverlapped(Circle c1, Circle c2)
{
    float d = distance(c1.center, c2.center);

    if (abs(c1.r - c2.r) < epsilon && abs(c1.center.x - c2.center.x) < epsilon && abs(c1.center.y - c2.center.y) < epsilon)
        return 3;

    else if (d - (c1.r + c2.r) > epsilon)
        return 0;
    
    else if (abs(d - (c1.r + c2.r)) <= epsilon)
        return 1;
    
    else
    {
        if (abs(c1.r - c2.r) - d > epsilon)
            return 0;
        else if (abs(abs(c1.r - c2.r) - d) <= epsilon)
            return 1;
        else
            return 2;
    }
}

int main()
{
    Circle c1, c2;
    c1.input();
    cout << endl;
    c2.input();
    cout << endl;
    cout << checkOverlapped(c1, c2);
}

void Circle::input()
{
    cout << "Input Circle:\n";
    cout << "Input center: ";
    cin >> center.x >> center.y;
    cout << "Input R: ";
    cin >> r;
}
