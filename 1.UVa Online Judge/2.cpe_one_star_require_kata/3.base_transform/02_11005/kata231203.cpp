// 鄒雨笙 UVa Online Judge 2023/12/03
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

    for (int t = 1; t <= T; t++) {
        if (t > 1) 
            cout << endl;

        cout << "Case " << t << ":" << endl;
        
        int coc[MX_BASE];
        for (int i = 0; i < MX_BASE; i++) {
            cin >> coc[i];
        }

        int n;
        cin >> n;

        int num;
        while (n--) {
            int cob[MX_BASE+1] = {0};
            cin >> num;

            for (int base = 2; base < 37; base++) {
                int tempNum = num; 
                do {
                    cob[base] += coc[tempNum % base];
                    tempNum /= base;
                } 
                while (tempNum > 0);
            }

            int minCost = cob[2];
            for (int base = 3; base < 37; base++) {
                if (cob[base] < minCost)
                    minCost = cob[base];
            }

            cout << "Cheapest base(s) for number " << num << ":";
            // Now print all bases with this minimum cost
            for (int base = 2; base < 37; base++) {
                if (cob[base] == minCost)
                    cout << " " << base;
            }
            cout << endl;
        }
    }

}

