// 鄒雨笙 20240109
// UVA 11679 - Sub-prime
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
#include <map>
#include <vector>
using namespace std;


int main() {
    int B, N, R, D, C, V;
    vector<int> monetary; // B 個銀行的貨幣儲量 monetary reserves 
    map<int, pair<int, int>> debtors;
    pair<int, int> debtor;

    while (cin >> B >> N) { 
        if (B == 0 and N == 0)
            break;
        for (int i = 0; i < B; i++) {
            cin >> R;
            monetary.push_back(R);
        }
        for (int i = 0; i < B; i++) {
            cin >> D >> C >> V;
            debtor = make_pair(C, V);
            debtors[D] = debtor;
        }
        // cout << "Good" << endl;
    }

}


// Sample Input
// 3 3
// 1 1 1
// 1 2 1
// 2 3 2
// 3 1 3
// 3 3
// 1 1 1
// 1 2 1
// 2 3 2
// 3 1 4
// 3 3
// 1 1 1
// 1 2 2
// 2 3 2
// 3 1 2
// 0 0
// Sample Output
// S
// N

