//  鄒雨笙 UVa Online Judge 2023/11/18
//
//  Problem 10093 - An Easy Problem!
//  進位制轉換問題


#include <iostream>
#include <string>
using namespace std;


int main() {
    string R;
    int mx, temp, sum;
    int i;

    while (getline(cin, R)) {
        mx = 1;
        sum = 0;
        for (auto ch : R) {
            if (ch >= '0' && ch <= '9') {
                temp = ch - 48;
            }
            else if (ch >= 'A' && ch <= 'Z') {
                temp = ch - 65 + 10;
            }
            else if (ch >= 'a' && ch <= 'z') {
                temp = ch - 97 + 36;
            }
            else
                continue;
            // cout << temp << endl;
            if (temp > mx) {
                mx = temp;
            }
            sum += temp;
        }
        // cout << mx << endl;
        // cout << sum << endl;
        for (i = mx; i < 62; i++) {
            if (sum % i == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
        if (i == 62)
            cout << "such number is impossible!\n";

    }

}


