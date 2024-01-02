// 鄒雨笙 20231230
// 1585 - Score


#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


// OOXXOXXOOO

int main() {
    int T, score, sum, ans;
    string test;
    cin >> T;
    while (T--) {
        score = 0;
        sum = 0;
        ans = 0;
        cin >> test;
        for (auto it : test) {
            if (it == 'O') {
                score++;
                ans += score;
            }
            else {
                sum = 0;
                score = 0;
            }
        }
        cout << ans << endl;
    }
}

