// 鄒雨笙 UVa Online Judge 2023/12/9
//
// Problem 10050 - Hartals


#include <iostream>
using namespace std;
int h[100];


int main() {
    int T, N, P;

    cin >> T;

    while(T--) {
        cin >> N;
        cin >> P;
        int day[3651] = {0};

        // 將罷工天的倍數在 day 標示為 1
        for (int i = 0; i < P; i++) {
            cin >> h[i];
            for (int j = h[i]; j <= N; j += h[i]) {
                day[j] = 1;
            }
        }

        // 計算罷工天數
        int count = 0;
        for (int j = 1; j <= N; j++) {
            if (j % 7 == 6 || j % 7 == 0)
                continue;
            if (day[j] == 1)
                count++;
        }
        cout << count << endl;
    }


}
