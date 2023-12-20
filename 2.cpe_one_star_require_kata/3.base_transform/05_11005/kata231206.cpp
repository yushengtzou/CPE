// 鄒雨笙 UVa Online Judge 2023/12/06
//
// Problem 11005 - Cheapest Base
//
// 進位制轉換


#include<iostream>
using namespace std;
const int MX_BASE = 36;


int main() {
    int T, N, number;
    cin >> T;

    for (int c = 1; c <= T; c++) {
        if (c > 1) 
            cout << endl;

        cout << "Case " << c << ":" << endl;

        int coc[MX_BASE]; // coc: cost of character
        for (int i = 0; i < 36; i++) {
            cin >> coc[i];
        }

        cin >> N;

        while(N--) {
            int cob[MX_BASE+1] = {0};
            cin >> number;

            for (int base = 2; base < 37; base++) {
                int temp = number;
                do {
                    cob[base] += coc[temp % base];
                    temp /= base;
                } 
                while (temp > 0);
            }

            int min = cob[2];

            for (int i = 3; i < 37; i++) {
                if (cob[i] < min)
                    min = cob[i];
            }

            cout << "Cheapest base(s) for number " << number << ":";

            for (int i = 2; i < 37; i++) {
                if (cob[i] == min)
                    cout << " " << i;
            }
            cout << endl;
        }
        
    }
}
