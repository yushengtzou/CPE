//  鄒雨笙 UVa Online Judge 2023/11/27
//
//  Problem 10093 - An Easy Problem!
//  進位制轉換問題


#include <iostream>
using namespace std;


int main() {
    string num;
    int sum, mx, temp;

    while (getline(cin, num)) {
        sum = 0;
        mx = 0;
        for (auto ch : num) {
            int num;
            if (ch >= '0' and ch <= '9') {
                temp = ch - 48;
            }
            else if (ch >= 'A' and ch <= 'Z') {
                temp = ch - 65 + 10;
            }
            else if (ch >= 'a' and ch <= 'z') {
                temp = ch - 97 + 36;
            }
            else
                continue;

            sum += temp;
            if (temp > mx) {
                mx = temp;
            }
        
        }
        for (int i = mx; i < 62; i++) {
            if (sum % i == 0) {
                cout << i+1 << endl;
                break;
            }
        }

    }
}
