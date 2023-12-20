// 鄒雨笙 UVa Online Judge 2023/12/07
//
// Problem 10019 - Funny Encryption Method
//
// 進位制轉換


#include<iostream>
using namespace std;


int main() {
    int N, m;

    cin >> N;

    while(N--) {
        cin >> m;
        int b1 = 0, b2 = 0;
        for (int num = m; num; num /= 2)
            b1 += num % 2;
        for (;m ; m /= 10) {
            for (int num = m % 10; num; num /= 2)
                b2 += num % 2;
        }
        cout << b1 << " " << b2 << endl;
    }


}
