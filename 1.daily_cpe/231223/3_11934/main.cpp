// 鄒雨笙 20231223
// 11934 - Magic Formula


#include <iostream>
using namespace std;
 

int main() {
    int a, b, c, d, L;
    int ans, cnt;
    while (cin >> a >> b >> c >> d >> L) {
        cnt = 0;
        if (a == 0 and b == 0 and c == 0 and d == 0 and L == 0)
            break;
        for (int x = 0; x <= L; x++) {
            if ((a*x*x + b*x + c) % d == 0)
                cnt++;
        }
        cout << cnt << endl;
    } 
}
