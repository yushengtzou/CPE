// 鄒雨笙 UVa Online Judge 2023/12/08
//
// Problem 10019 - Funny Encryption Method
//
// 進位制轉換


#include<iostream>
using namespace std;


int main() {
    int N, M;

    cin >> N;

    while (N--) {
        cin >> M;
        int decM = M;
        int mod, mod2;
        int b1 = 0, b2 = 0;
        do {
            mod = decM % 2;
            if (mod)
                b1 += 1;
            decM /= 2;
        }
        while (decM > 0);

        decM = M;

        while (decM > 0) {
            mod2 = decM % 10;
            do {
                mod = mod2 % 2;
                if (mod)
                    b2 += 1;
                mod2 /= 2;
            }
            while (mod2 > 0);
            decM /= 10;
        }

        cout << b1 << " " << b2 << endl;

    }



}
