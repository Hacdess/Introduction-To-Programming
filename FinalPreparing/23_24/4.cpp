#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

struct NhanVien
{
    char MaSo[6];
    char HoTen[30];
    char GioiTinh[4];
    double Luong;
};

#define MAX 999

bool readFile(char filename[], NhanVien DanhSach[], int &N)
{
    ifstream fin(filename);
    if (!fin)
    {
        cout << "Khong mo duoc file " << filename << endl;
        return false;
    }

    N = 0;
    while (fin.getline(DanhSach[N].MaSo, 6, '-'))
    {
        fin.getline(DanhSach[N].HoTen, 30, '-');
        fin.getline(DanhSach[N].GioiTinh, 4, '-');
        fin >> DanhSach[N++].Luong;
        fin.ignore();
    }

    fin.close();
    return true;
}



bool findLongestNameHighestSalary(char filename[], NhanVien DanhSach[], int N)
{
    double maxSalary = DanhSach[0].Luong;
    int longestNameLen = strlen(DanhSach[0].HoTen);

    for (int i = 1; i < N; ++i)
    {
        if (maxSalary < DanhSach[i].Luong)
            maxSalary = DanhSach[i].Luong;
        if (longestNameLen < strlen(DanhSach[i].HoTen))
            longestNameLen = strlen(DanhSach[i].HoTen);
    }

    ofstream fout(filename, ios::out);
    if (!fout)
    {
        cout << "Khong mo duoc file " << filename << endl;
        return false;
    }

    int count = 0;
    for (int i = 0; i < N; ++i)
        if (maxSalary == DanhSach[i].Luong && longestNameLen == strlen(DanhSach[i].HoTen))
        {
            fout << DanhSach[i].MaSo << '-' << DanhSach[i].HoTen << '-' << DanhSach[i].GioiTinh << '-' << DanhSach[i].Luong << endl;
            ++count;
        }
    
    if (count == 0)
        fout << "Khog ton tai";

    fout.close();
    return true;
}

int main()
{
    NhanVien list[MAX];
    int n;
    char filename[30];
    cin.getline(filename, 30);

    cout << readFile(filename, list, n) << endl;
    cin.getline(filename, 30);
    cout << findLongestNameHighestSalary(filename, list, n);
}