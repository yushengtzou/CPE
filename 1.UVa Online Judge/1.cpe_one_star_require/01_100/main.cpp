/*  鄒雨笙 UVa Online Judge 2023/8/25

   Problem 100: The 3n + 1 problem 
*/


#include <bits/stdc++.h>
using namespace std;


int len(int i) {
    int leng=1;

    while(i != 1){
        if (i & 1)
            i = i * 3 + 1;
        else
            i /= 2;
        leng++;
    }
    return leng;
}


int main() {
    int a, b;
    while (cin >> a >> b) {
        int ans = 0;
        cout << a << " " << b << " ";
        for (int i = min(a, b); i <= max(a, b); i++) {
            ans = max(len(i), ans);
        }
        cout << ans << endl;
    }
    return 0;
}


