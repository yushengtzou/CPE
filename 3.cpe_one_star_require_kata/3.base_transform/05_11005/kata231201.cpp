// 鄒雨笙 UVa Online Judge 2023/12/01
//
// Problem 11005 - Cheapest Base
//
// 進位制轉換


#include<iostream>
using namespace std;
const int MX_BASE = 36;


int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; i++) {
        if (t > 1) 
            cout << endl;

        cout << "Case " << t << ":" << endl;
        
        int coc[MX_BASE]; // Cost of Characters (coc)
        for (int i = 0; i < MX_BASE; i++) 
            cin >> coc[i];

        int n;
        cin >> n;

        while (n--) {
            int number;
            cin >> number;

            // 計算該數字每個進位制的 cost
            int cob[MX_BASE+1]; // Cost of base (cob)
            for (int base = 2; base <= MX_BASE; base++) {
                int num = number;
                cob[base] = 0;
                do {
                    cob[base] += coc[number % base];
                    num /= base;
                } while (num != 0);
            }

            // 找出最小的 cost 的 base
            int min = cob[2];
            for (int base = 3; base <= MX_BASE; base++) {
                if (cob[base] < min) 
                    min = cob[base];
            }

            // 列印出結果 
            cout << "Cheapest base(s) for number " << number << ":";
            for (int base = 2; base <= MX_BASE; k++) {
                if (cob[base] == min) 
                    cout << " " << base;
            }
            cout << endl;
        }
    }
    return 0;
}


