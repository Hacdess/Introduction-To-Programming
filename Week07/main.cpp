// Day la Bai 22: Tong hop cac bai tren thanh chuong trinh thong nhat
// Cac ham có chu thich de biet bai do thuoc ham nao

#include "Baitap1.h"
#include "MaTran.h"
#include "PhanSo.h"
#include "Diem2D.h"

int main()
{
    cout << "Bai 22: Tong hop cac bai tren thanh chuong trinh thong nhat\n\n";

    // Bai 1
    int M, N;
    cout << "Bai 1:\n";
    cout << "Doc 2 so nguyen duong M, N tu file input.txt: " << DocFileBai1(M, N) << endl;
    cout << "Ghi cac so nguyen to trong doan [M, N] vao file output.txt: " << GhiSoNguyenTo(M, N) << "\n\n";

    // Bai 2 va 3
    int MaTran[10][10];
    int hang, cot;
    cout << "Bai 2: Doc ma tran tu tap tin: " << DocMaTran("DocMaTran.txt", MaTran, hang, cot) << endl;
    cout << "Bai 3: Xuat ma tran vao tap tin: " << DocMaTran("XuatMaTran.txt", MaTran, hang, cot) << "\n\n";

    // Bai 4
    PhanSo ps;
    cout << "Bai 4: Doc tap tin chua cau truc phan so: " << ps.DocPhanSo("DocPhanSo.txt") << endl;

    // Bai 5
    DayPhanSo dayPS;
    cout << "Bai 5: Doc tap tin chua cau truc day phan so: " << dayPS.DocDayPhanSo("DocDayPhanSo.txt") << endl;
}