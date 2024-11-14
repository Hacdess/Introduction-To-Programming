#include "Baitap7.h"
#pragma once

void InThuocAKhongThuocB(int A[], int m, int B[], int n)
{
    for (int i = 0; i < m; ++i)
        if (TimPhanTu(B, n, A[i]) < 0)
            cout << A[i] << ' ';
    cout << endl;
}

void GhepAB(int A[], int m, int B[], int n, int C[], int& p)
{
    p = 0;

    for (int i = 0; i < m; ++i)
        if (TimPhanTu(C, p, A[i]) < 0)
            C[p++] = A[i];
    
    for (int i = 0; i < n; ++i)
        if (TimPhanTu(C, p, B[i]) < 0)
            C[p++] = B[i];
}

void GiaiBai7()
{
    cout << "Bai 7:\n";

    int A[25], B[25], C[50], m, n, p;
    
    do
    {
        cout << "Nhap so luong m phan tu cua A (1 <= m <= 25): ";
        cin >> m;
    } while (m < 1 || m > 25);
    NhapMangSoNguyen(A, m);
    cout << endl;

    do
    {
        cout << "Nhap so luong m phan tu cua B (1 <= n <= 25): ";
        cin >> n;
    } while (n < 1 || n > 25);
    NhapMangSoNguyen(B, n);
    cout << endl;

    cout << "7a. Nhung phan tu co trong A ma khong co trong B: ";
    InThuocAKhongThuocB(A, m, B, n);
    cout << endl;

    cout << "7b. Ghep A va B thanh C:\n";
    GhepAB(A, m, B, n, C, p);
    InMangSoNguyen(C, p);
}
