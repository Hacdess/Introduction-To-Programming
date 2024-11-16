#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool readFile(string filename, int arr[], int& n)
{
    ifstream fin(filename.c_str());
    if (!fin)
    {
        cout << "Can't open file!\n";
        return false;
    }

    fin >> n;
    fin.ignore();

    for (int i = 0; i < n; ++i)
    {
        fin >> arr[i];
        fin.ignore();
    }

    fin.close();
    return true;
}

float calAvg(int arr[], int n)
{
    int count = 0;
    float sum = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] > 0)
        {
            sum += arr[i];
            ++count;
        }
    
    return (count > 0 ? sum / count : sum);
}

bool writeFile(string filename, int arr[], int n, float avg)
{
    ofstream fout(filename.c_str(), ios::app);
    if (!fout)
    {
        cout << "Can't open file!\n";
        return false;
    }
    
    fout << "{\n\t\"DanhSach\": [";
    for (int i = 0; i < n; ++i)
    {
        fout << arr[i];
        if (i != n - 1)
            fout << ",";
    }
    fout << "],\n\t\"TrungBinhCong\":" << fixed << setprecision(2) << avg << endl;

    fout << "}";

    fout.close();
    return true;
}

int main()
{
    int arr[100], n;
    cout << readFile("Input.txt", arr, n) << endl;
    float avg = calAvg(arr, n);
    cout << writeFile("Output.json", arr, n, avg);
}