// 鄒雨笙 20240111
// UVA 10346 - Peter's Smokes


#include <iostream>
using namespace std;
 

int main() {
    int n, k, total;

    while (cin >> n >> k) {
        total = n;
        while (n > 0 and n >= k) {
            n -= k;
            total++;
            n++;
        }
        cout << total << endl;
    }
    return 0;
}
