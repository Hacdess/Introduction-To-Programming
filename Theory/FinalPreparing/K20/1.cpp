#include <iostream>

using namespace std;

// dung + nam + gia = 100
// 5dung + 3nam + gia / 3 = 100

int main()
{
    for (int i = 0; i <= 20; ++i)
        for (int j = 0; j <= 33; ++j)
        {
            int k = 100 - i - j;
            if (k % 3 == 0 &&  (5 * i + 3 * j + k / 3 == 100))
                cout << "So trau dung: " << i << ", So trau nam: " << j << ", So trau gia: " << 100 - i - j << endl;
        }
}