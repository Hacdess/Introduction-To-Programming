#include "Baitap1.h"

bool KiemTraSoNguyenTo(int n)
{
	if (n < 4)
		return n > 1;
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

bool DocFileBai1(int& M, int& N)
{
	char filename[] = "input.txt";
	ifstream fin(filename);
	if (!fin)
	{
		cout << "Khong mo duoc file input.txt\n";
		return false;
	}

	fin >> M;
	fin >> N;

	fin.close();
	return true;
}

bool GhiSoNguyenTo(int M, int N)
{
	char filename[] = "output.txt";
	ofstream fout(filename, ios::app);
	if (!fout)
	{
		cout << "Khong mo duoc file output.txt\n";
		return false;
	}

	for (int i = M; i <= N; ++i)
		if (KiemTraSoNguyenTo(i))
			fout << i << ' ';
	fout << "\n\n";

	fout.close();
	return true;
}
