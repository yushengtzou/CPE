// 鄒雨笙 UVa Online Judge 2023/12/12
//
// Problem 10050 - Hartals


#include <iostream>
using namespace std;
int h[100];


int main() {
    int T, N, P;
    cin >> T;

    while(T--) {
        int day[3651] = {0};

        cin >> N;
        cin >> P;
        for (int i = 0; i < P; i++) {
            cin >> h[i];
            for (int j = h[i]; j < N; j += h[i]) {
                day[j] = 1;
            }
        }

        int count = 0;
        for (int j = 1; j < N; j++) {
            if (j % 7 == 6 or j % 7 == 0)
                continue;
            if (day[j])
                count++;
        }
        cout << count << endl;
    }

}
