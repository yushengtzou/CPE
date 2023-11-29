//  鄒雨笙 UVa Online Judge 2023/11/13
//
//  Problem 10093 - An Easy Problem!
//  進位制轉換問題


#include <iostream>
using namespace std;


int main() {
    string s;
    int mx, temp, sum;
    int i;
    
    while (getline(cin, s)) {
        mx = 1;
        sum = 0;
        for (i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                temp = s[i] - 48;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                temp = s[i] - 65 + 10;
            }
            else if (s[i] >= 'a' && s[i] <= 'z') {
                temp = s[i] - 97 + 36;
            }
            else
                continue;
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
