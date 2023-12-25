// 鄒雨笙 20231224
// 11614 - Etruscan Warriors Never Play Chess

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.sync_with_stdio(false), cin.tie(nullptr);
    long long amount;
    int times;
    cin >> times;
    while (times--) {
        cin >> amount;
        cout << (int)((sqrt((amount << 3) + 1) - 1) / 2) << '\n';
    }
}
// #include <iostream>
// using namespace std;
//  
//
// long long calculate(long long n) {
//     long long i, sum = 0;
//     for (i = 1; i <= n; i++) {
//         sum += i;
//         if (sum > n) {
//             i -= 1;
//             break;
//         }
//     }
//     return i;
// }
//
//
// int main() {
//     long long T, n;
//     cin >> T;
//     while (T--) {
//         cin >> n;
//         cout << calculate(n) << endl;
//     }
//     return 0;
// }
//
//
