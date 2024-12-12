#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>

using namespace std;

#define MAX 100

bool readFile(char filename[], int A[], int& n)
{
    ifstream fin(filename);
    if (!fin)
    {
        cout << "Can't open file " << filename << endl;
        return false;
    }

    fin >> n;
    fin.ignore();
    for (int i = 0; i < n; ++i)
        fin >> A[i];

    fin.close();
    return true;
}

double computeAveragePositives(int A[], int n)
{
    double ans = 0;
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (A[i] > 0)
        {
            ans += A[i];
            ++ count;
        }

    return ((count > 0) ? ans / count : ans);
}

bool outputJson(char filename[], int A[], int n)
{
    ofstream fout(filename, ios::out);
    if (!fout)
    {
        cout << "Can't open file " << filename << endl;
        return false;
    }

    fout << "{\n\t\"DanhSach:\": [";
    for (int i = 0; i < n - 1; ++i)
        fout << A[i] << ',';
    fout << A[n - 1] << "],\n";
    fout << "\t\"TrungBinhCong:\":" << fixed << setprecision(2) << computeAveragePositives(A, n);
    fout << "\n}";

    fout.close();
    return true;
}

int main()
{
    char filename[20];
    cin.getline(filename, 20);

    int A[MAX];
    int n;

    cout << "Read file " << filename << (readFile(filename, A, n) ? " successfully\n" : " failed\n");
    cout << "Average positives: " << computeAveragePositives(A, n) << endl;

    cin.getline(filename, 20);
    cout << "Output file " << filename << (outputJson(filename, A, n) ? " successfully\n" : " failed\n");
}