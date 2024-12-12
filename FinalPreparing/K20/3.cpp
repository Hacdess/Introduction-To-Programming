#include <iostream>
#include <cmath>

using namespace std;

struct Circle
{
    double x, y, r;
};

double distance(Circle c1, Circle c2)
{
    return sqrt((c1.x - c2.x) * (c1.x - c2.x) + (c1.y - c2.y) * (c1.y - c2.y));
}

int checkOverlapped(Circle c1, Circle c2)
{
    double d = distance(c1, c2);

    if (c1.r == c2.r && c1.x == c2.x && c1.y == c2.y)
        return 3;
    if (abs(c1.r - c2.r) < d && d < c1.r + c2.r)
        return 2;
    if (d == c1.r + c2.r || d == abs(c1.r - c2.r))
        return 1;
    return 0;
}

int main()
{

}