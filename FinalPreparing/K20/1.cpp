#include <iostream>
using namespace std;

int main() {
    int dung, nam, gia;
    int limDung = 100 / 5;
    int limNam = 100 / 3;

    for (int dung = 0; dung <= limDung; ++dung)
    {
        for (int nam = 0; nam <= limNam; ++nam)
        {
            gia = 100 - dung - nam;
            if (gia % 3 == 0 && (5 * dung + 3 * nam + gia / 3 == 100))
                cout << "Trau dung: " << dung << ", trau nam: " << nam << ", trau gia: " << gia << endl;
        }
    }
}