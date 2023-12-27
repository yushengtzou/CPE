// 鄒雨笙 20231226
// 11547 - Automatic Answer

// Input
// The input begins with t (1 ≤ t ≤ 100), the number of test cases. Each test case contains an integer
// n (−1000 ≤ n ≤ 1000) on a line by itself. This n should be substituted into the skill testing question
// below.
// Output
// For each test case, output the answer to the following skill testing question on a line by itself:
// “Multiply n by 567, then divide the result by 9, then add 7492, then multiply by 235, then divide
// by 47, then subtract 498. What is the digit in the tens column?”


#include <iostream>
#include <string>
using namespace std;


int main() {
    int t, n, ans, len;
    cin >> t;
    while (t--) {
        cin >> n;
        ans = abs((n * 567 / 9 + 7492) * 235 / 47 - 498); 
        ans = (ans / 10) % 10;
        cout << ans << endl;
        // answer = to_string(ans);
        // len = answer.length();
        // cout << answer[10 % len] << endl;
    }
}

