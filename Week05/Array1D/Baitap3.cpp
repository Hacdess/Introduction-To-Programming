#include "Baitap3.h"
#pragma once

short ChuyenNhiPhanSangThapPhan(char DayNhiPhan16Bit[])
{
	short n = 0;

	for (int i = 0; i < 16; ++i)
	{
		n <<= 1;

		if (DayNhiPhan16Bit[i] == '1')
			n |= 1;
	}

	return n;
}

void GiaiBai3()
{
	cout << "Bai 3:\n";

	char DayNhiPhan16Bit[17];
	cout << "Nhap day nhi phan 16 bit: ";
	cin.ignore();
	cin.getline(DayNhiPhan16Bit, 17);
	cout << "So nguyen tu day nhi phan la: " << ChuyenNhiPhanSangThapPhan(DayNhiPhan16Bit) << endl;
}
