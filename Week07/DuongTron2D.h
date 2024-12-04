#pragma once

#include "Diem2D.h"

struct DuongTron2D
{
    Diem2D tam;
    float banKinh;

    // Bai 8
    bool DocDuongTron2D(string TenFile);
    // Bai 19
    bool XuatDuongTron2D(string TenFile);
};

struct DayDuongTron2D
{
    DuongTron2D day[100];
    int n;

    // Bai 9
    bool DocDayDuongTron2D(string TenFile);
    // Bai 20
    bool XuatDayDuongTron2D(string TenFile);
};

struct MaTranDuongTron2D
{
    DuongTron2D MaTran[100][100];
    int hang;
    int cot;

    // Bai 12
    bool DocMaTranDuongTron2D(string TenFile);
    // Bai 21
    bool XuatMaTranDuongTron2D(string TenFile);
};
