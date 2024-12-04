// Day la Bai 22: Tong hop cac bai tren thanh chuong trinh thong nhat
// Cac ham có chu thich de biet bai do thuoc ham nao

#include "Baitap1.h"
#include "MaTran.h"
#include "PhanSo.h"
#include "DuongTron2D.h"

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
    cout << "Bai 3: Xuat ma tran vao tap tin: " << XuatMaTran("XuatMaTran.txt", MaTran, hang, cot) << "\n\n";

    // Bai 4
    PhanSo ps;
    cout << "Bai 4: Doc tap tin chua cau truc phan so: " << ps.DocPhanSo("DocPhanSo.txt") << endl;

    // Bai 5
    DayPhanSo dayPS;
    cout << "Bai 5: Doc tap tin chua cau truc day phan so: " << dayPS.DocDayPhanSo("DocDayPhanSo.txt") << endl;

    // Bai 6
    Diem2D diem;
    cout << "Bai 6: Doc tap tin chua cau truc diem trong mat phang 2D: " << diem.DocDiem2D("DocDiem2D.txt") << endl;

    // Bai 7
    DayDiem2D DayDiem;
    cout << "Bai 7: Doc tap tin chua cau truc day diem trong mat phang 2D: " << DayDiem.DocDayDiem2D("DocDayDiem2D.txt") << endl;

    // Bai 8
    DuongTron2D DuongTron;
    cout << "Bai 8: Doc tap tin chua cau truc duong tron trong mat phang 2D: " << DuongTron.DocDuongTron2D("DocDuongTron2D.txt") << endl;

    // Bai 9
    DayDuongTron2D DayDuongTron;
    cout << "Bai 9: Doc tap tin chua cau truc day duong tron trong mat phang 2D: " << DayDuongTron.DocDayDuongTron2D("DocDayDuongTron2D.txt") << endl;

    // Bai 10
    MaTranPhanSo MaTranPS;
    cout << "Bai 10: Doc tap tin chua ma tran cac phan so: " << MaTranPS.DocMaTranPhanSo("DocMaTranPhanSo.txt") << endl;

    // Bai 11
    MaTranDiem2D MaTranDiem;
    cout << "Bai 11: Doc tap tin chua ma tran cac diem trong mat phang 2D: " << MaTranDiem.DocMaTranDiem2D("DocMaTranDiem2D.txt") << endl;

    // Bai 12
    MaTranDuongTron2D MaTranDuongTron;
    cout << "Bai 12: Doc tap tin chua ma tran cac duong tron trong mat phang 2D: " << MaTranDuongTron.DocMaTranDuongTron2D("DocMaTranDuongTron2D.txt") << "\n\n";

    // Bai 13
    cout << "Bai 13: Xuat phan so vao tap tin: " << ps.XuatPhanSo("XuatPhanSo.txt") << endl;

    // Bai 14
    cout << "Bai 14: Xuat day phan so vao tap tin: " << dayPS.XuatDayPhanSo("XuatDayPhanSo.txt") << endl;

    // Bai 15
    cout << "Bai 15: Xuat ma tran phan so vao tap tin: " << MaTranPS.XuatMaTranPhanSo("XuatMaTranPhanSo.txt") << endl;

    // Bai 16
    cout << "Bai 16: Xuat diem 2D vao tap tin: " << diem.XuatDiem2D("XuatDiem2D.txt") << endl;

    // Bai 17
    cout << "Bai 17: Xuat day diem trong mat phang 2D vao tap tin: " << DayDiem.XuatDayDiem2D("XuatDayDiem2D.txt") << endl;

    // Bai 18
    cout << "Bai 18: Xuat ma tran diem trong mat phang 2D vao tap tin: " << MaTranDiem.XuatMaTranDiem2D("XuatMaTranDiem2D.txt") << endl;

    // Bai 19
    cout << "Bai 19: Xuat duong tron vao tap tin: " << DuongTron.XuatDuongTron2D("XuatDuongTron2D.txt") << endl;

    // Bai 20
    cout << "Bai 20: Xuat day duong tron vao tap tin: " << DayDuongTron.XuatDayDuongTron2D("XuatDayDuongTron2D.txt") << endl;

    // Bai 21
    cout << "Bai 21: Xuat ma tran duong tron vao tap tin: " << MaTranDuongTron.XuatMaTranDuongTron2D("XuatMaTranDuongTron2D.txt") << "\n\n";

    cout << "Tat ca cac bai da duoc xu ly thanh cong!" << endl;
    return 0;
}