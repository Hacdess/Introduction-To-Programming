#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string reverseLine(string s) {
    int len = s.length();
    string word = "";
    string ans = "";

    for (int i = 0; i < len; ++i) {
        if (s[i] == ' ') {
            ans = word + " " + ans;
            word = "";
        }
        else {
            word += s[i];
        }
    }

    // Thêm từ cuối cùng vào kết quả
    ans = word + (ans.empty() ? "" : " ") + ans;

    return ans;
}

int main() {
    string s;
    getline(cin, s);
    cout << reverseLine(s);
}