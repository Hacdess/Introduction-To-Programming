#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define MAX 10

struct Point
{
    double x,y;
};

struct Circle
{
    char name[5];
    Point center;
    double R;
};

bool readFile(char filename[], Circle matrix[][MAX], int& row, int& col)
{
    ifstream fin(filename);
    if (!fin)
    {
        cout << "Can't open file " << filename << endl;
        return false;
    }

    fin >> row >> col;
    fin.ignore();

    char c;

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            fin.getline(matrix[i][j].name, 5, ',');
            fin >> matrix[i][j].center.x;
            fin.ignore();
            fin >> matrix[i][j].center.y;
            fin.ignore();
            fin >> matrix[i][j].R;
            fin >> c;
            fin.ignore();
        }
    }

    fin.close();
    return true;
}

void print(Circle matrix[][MAX], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << matrix[i][j].name << ": ";
            cout << '(' << matrix[i][j].center.x << ", " << matrix[i][j].center.y << "), ";
            cout << matrix[i][j].R << "; ";
        }
        cout << endl;
    }
}

int main()
{
    Circle matrix[MAX][MAX];
    int row, col;

    char filename[] = "input.txt";
    cout << readFile(filename, matrix, row, col) << "\n\n";
    print(matrix, row, col);
}