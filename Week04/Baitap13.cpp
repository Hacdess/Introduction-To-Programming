#include "Baitap1.h"
#include "Baitap2.h"
#include "Baitap3.h"
#include "Baitap4.h"
#include "Baitap5.h"
#include "Baitap6.h"
#include "Baitap7.h"
#include "Baitap8.h"
#include "Baitap9.h"
#include "Baitap10.h"
#include "Baitap11.h"
#include "Baitap12.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Bai 13: Chuong trinh tong hop cac ham tu bai 1 den bai 12:\n\n";

	int n;
	
	cout << "Nhap so nguyen n: ";
	cin >> n;

	cout << "Bai tap 1:\n";
	cout << n << (IsSquareNumber(n) ? "" : " khong") << " la so chinh phuong.\n\n";

	cout << "Bai tap 2:\n";
	cout << n << (IsPrime(n) ? "" : " khong") << " la so nguyen to.\n\n";

	cout << "Bai tap 3:\n";
	cout << n << (IsPalindrome(n) ? "" : " khong") << " la so doi xung.\n\n";

	do
	{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	} while (n < 1);

	cout << "Bai tap 4:\n";
	cout << n << (IsFullOddDigitsPositive(n) ? "" : " khong") << " la so toan le.\n\n";

	cout << "Bai tap 5:\n";
	cout << n << (IsPerfectNumber(n) ? "" : " khong") << " la so hoan chinh.\n\n";

	cout << "Bai tap 6:\n";
	cout << "Tong cac so nguyen to tu 1 den " << n << ": " << ComputeSumPrimes(n) << ".\n\n";

	cout << "Bai tap 7:\n";
	cout << "Tong cac so la so chinh phuong hoac so hoan chinh tu 1 den " << n << ": " << ComputeSumSquareOrPerfectNumbers(n) << ".\n\n";

	cout << "Bai tap 8:\n";
	cout << "Tich cac so la so chinh phuong hoac so chan tu 1 den " << n << ": " << ComputeProductSquareOrEvenNumbers(n) << ".\n\n";

	cout << "Bai tap 9:\n";
	cout << "Tich cac so la so nguyen to hoac so toan le tu 1 den " << n << ": " << ComputeProductPrimeOrFullOddDigitsNumbers(n) << ".\n\n";

	cout << "Bai tap 10:\n";

	int firstSquare = FindFirstSquareNumber(n);
	if (firstSquare != -1) {
		cout << "So chinh phuong dau tien trong khoang tu 1 den " << n << " la: " << firstSquare << endl;
	}
	else {
		cout << "Khong co so chinh phuong trong khoang tu 1 den " << n << endl;
	}


	int lastPerfect = FindLastPerfectNumber(n);
	if (lastPerfect != -1) {
		cout << "So hoan chinh cuoi cung trong khoang tu 1 den " << n << " la: " << lastPerfect << "\n\n";
	}
	else {
		cout << "Khong co so hoan chinh trong khoang tu 1 den " << n << "\n\n";
	}

	cout << "Bai tap 11:\n";
	cout << "Tong cac so tu so hoan chinh dau tien den so hoan chinh cuoi cung trong khoang tu 1 den " << n << ": " << SolveExercise11(n) << ".\n\n";

	cout << "Bai tap 12:\n";
	cout << "Tich cac so chan tu so hoan chinh dau tien den so chinh phuong cuoi cung trong khoang tu 1 den " << n << ": " << SolveExercise12(n) << ".\n";

	return 0;
}