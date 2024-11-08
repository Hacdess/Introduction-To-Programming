// NMLTA_Midtern.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>

using namespace std;

int getLength(int n);
int reverse(int n);
int findGCD(int a, int b);
int findLCM(int a, int b);
double f(int x, int n);


int main()
{
	int id = 23127075;

	int a = (int)id / (int)pow(10, getLength(id) - 2);
	int b = reverse(id) / (int)pow(10, getLength(id) - 3);
	cout << id << " - Le Trung Kien {23CLCA[" << a << "][" << b << "]}" << endl;
	
	int n = findLCM(a, b);
	cout << "n: " << n << endl;

	int deltaID = abs(id - reverse(id));
	int x = deltaID / 611100;
	cout << "x: " << x << endl;

	cout << "f: " << f(x, n);
}

int getLength(int n)
{
	if (n < 0)
		n = -n;

	if (n == 0)
		return 1;

	int len = 0;
	while (n)
	{
		len += 1;
		n /= 10;
	}

	return len;
}

int reverse(int n)
{
	int rev = 0;
	while (n)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}

	return rev;
}

int findGCD(int a, int b)
{
	if (b == 0)
		return a;
	return findGCD(b, a % b);
}

int findLCM(int a, int b)
{
	return a * b / findGCD(a, b);
}

double f(int x, int n)
{
	double ans = 0;

	for (int i = 1; i <= n; ++i)
	{
		int denominator = 0;
		for (int j = 1; j <= i; ++j)
			denominator = denominator + ((pow(-1, j + 1)) * (pow(2, j - 1)));

		ans = ans + (pow(-1, i + 1) * pow(x, i) / (double) denominator);
	}

	return ans;
}
