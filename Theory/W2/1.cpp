#include <iostream>
#include <cmath>

using namespace std;

void exercise1(double a, double b) {
    if (a == 0) {
        if (b == 0)
            cout << "Infinite solutions.\n";
        else
            cout << "No solution.\n";
    } else
        cout << "1 solution: " << -b / a << endl;
}

void exercise2(double a, double b, double c) {
    cout << a << "x^4 + " << b << "x^2 + " << c << " = 0.\n";

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                cout << "Infinite solutions.\n";
            else
                cout << "No solution.\n";
        } else {
            if (b * c < 0)
                cout << "2 solutions: x1 = " << sqrt(-c / b) << " v x2 = " << -sqrt(-c / b) << endl;
            else
                cout << "No solution.\n"; 
        }
    } else {
        double delta = b * b - 4 * a * c;
        
        if (delta < 0)
            cout << "No solution.\n";
        else if (delta == 0) {
            if (a * b < 0)
                cout << "2 solutions: x1 = " << sqrt(-b / (2 * a)) << " v x2 = " << -sqrt(-b / (2 * a)) << endl;
            else
                cout << "No solution.\n";
        }
        else {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            
            if (x1 > 0 && x2 > 0)
                cout << "4 solutions: x1 = " << -sqrt(x1) << " or x2 = " << sqrt(x1) << " or x3 = " << -sqrt(x2) << " or x4 = " << sqrt(x2) << endl;
            else if (x1 > 0)
                cout << "2 solutions: x1 = " << -sqrt(x1) << " or x2 = " << sqrt(x1) << endl;
            else if (x2 > 0)
                cout << "2 solutions: x1 = " << -sqrt(x2) << " or x2 = " << sqrt(x2) << endl;
            else
                cout << "No solution.\n";
        }
    }
}

void exercise3(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || c + a <= b) {
        cout << "Not a triangle.\n";
        return;
    }

    if (a == b && b == c)
        cout << "Equilateral Triangle.\n";

    else if (a * a + b * b == c * c ||
        b * b + c * c == a * a ||
        c * c + a * a == b * b)
    {
        if (a == b || b == c || c == a)
            cout << "Right Isosceles Triangle.\n";
        else
            cout << "Right-Angled Triangle.\n";
    }

    else if (a == b || b == c || c == a)
        cout << "Isosceles Triangle.\n";

    else if (a * a + b * b < c * c ||
        b * b + c * c < a * a ||
        c * c + a * a < b * b)
        cout << "Obtuse-Angled Triangle.\n";
    
    else 
        cout << "Scalene Triangle\n";
}

void callDigit(int N) {
    switch (N) {
    case 1:
        cout << "mot";
        break;

    case 2:
        cout << "hai";
        break;

    case 3:
        cout << "ba";
        break;

    case 4:
        cout << "bon";
        break;

    case 5:
        cout << "nam";
        break;

    case 6:
        cout << "sau";
        break;

    case 7:
        cout << "bay";
        break;

    case 8:
        cout << "tam";
        break;
    
    case 9:
        cout << "chin";
        break;

    default:
        break;
    }
}

void exercise4(int N) {
    cout << "Number in words: ";
    if (N == 0) {
        cout << "khong\n";
        return;
    }
    if (N >= 100) {
        callDigit(N / 100);
        cout << " tram ";
    }

    N = N - (int (N / 100) * 100);

    if (N > 0) {
        if (N >= 10) {
            if (N >= 20) {
                callDigit(N / 10);
            }
            cout << "muoi";

            N = N - (int(N / 10) * 10);
        } else
            cout << " le";

        if (N > 0) {
            cout << ' ';
            callDigit(N);
        }
    }

    cout << endl;
}

bool has31Day(int m) {
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 1;
    default:
        return 0;;
    }
}

void exercise5(int d, int m) {
    int ans = 0;
    for (int i = 1; i < m; i++) {
        if (i == 2)
            ans += 28;
        else if (has31Day(i))
            ans += 31;
        else
            ans += 30;
    }

    ans = ans + d - 1;

    switch (ans % 7)
    {
    case 0:
        cout << "Thu bay";
        break;
    case 1:
        cout << "Chu nhat";
        break;
    case 2:
        cout << "Thu hai";
        break;
    case 3:
        cout << "Thu ba";
        break;
    case 4:
        cout << "Thu tu";
        break;
    case 5:
        cout << "Thu nam";
        break;
    case 6:
        cout << "Thu sau";
        break;
    default:
        break;
    }
}

int main() {
    double a, b, c;
    short N;

    // cout << "Exercise 1\n";
    // cout << "Input 2 real numbers: ";
    // cin >> a >> b;
    // exercise1(a, b);
    // cout << endl;

    // cout << "Exercise 2\n";
    // cout << "Input 3 real numbers: ";
    // cin >> a >> b >> c;
    // exercise2(a, b, c);
    // cout << endl;

    // cout << "Exercise 3\n";
    // cout << "Input 3 real numbers for 3 sides: ";
    // cin >> a >> b >> c;
    // exercise3(a, b, c);
    // cout << endl;

    // cout << "Exercise 4\n";
    // cout << "Input non-negative integer: ";
    // cin >> N;
    // exercise4(N);
    // cout << endl;

    int d, m;
    cout << "Exercise 5\n";
    cout << "Input day and month: ";
    cin >> d >> m;
    exercise5(d, m);

    return 0;
}