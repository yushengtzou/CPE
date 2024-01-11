// 鄒雨笙 20240110
// UVA 12247 - Jollo
//
// <目的>
// 解程式題目以訓練邏輯推理能力，debug 以訓練解決問題能力，熟能生巧
//
// <規則>
// - 禁止使用 chatGPT 來幫你寫程式，禁止 Crtl+C, Crtl+V 行為 
// - 禁止使用 chatGPT 來幫你 debug，解題的精華在於 debug 
// - 可以上網搜尋 document，如 cppreference.com 
// - 可以和學長姐同學討論 
//
// <解題三要>
// - 理解題意
// - 將 Input 和 Output 寫下來，推敲它們的對應關係
// - 畫出流程圖 


#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
const int maxn = 3005;
 

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        double a0, am, c[maxn], ans;
        cin >> n;
        cin >> a0 >> am;
        ans = a0*n + am;
        for(int i = 1; i <= n; i++) {
            cin >> c[i];
            ans -= (n+1-i)*c[i]*2;
        }
        cout.precision(2);
        cout << fixed << ans/(n+1) << endl;
        if (T!=0)
            cout << endl;
    }
    return 0;
}
