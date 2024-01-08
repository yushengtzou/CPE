// 鄒雨笙 20240102
// 11057 - Exact Sum



#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N, M;
    while (cin >> N) {
        vector<int> prices(N);
        for (int& price : prices) {
            cin >> price;
        }
        cin >> M;
        sort(prices.begin(), prices.end());

        int book1 = 0, book2 = 0;
        int min_diff = INT_MAX;

        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (prices[i] + prices[j] == M && prices[j] - prices[i] < min_diff) {
                    book1 = prices[i];
                    book2 = prices[j];
                    min_diff = prices[j] - prices[i];
                }
            }
        }

        cout << "Peter should buy books whose prices are " << book1 << " and " << book2 << "." << endl;
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N, M, price;
//     while (cin >> N) {
//         vector<int> prices;
//         vector<int> record;
//         vector<int> ans;
//         map<int, vector<int>> records;
//         while (N--) {
//             cin >> price;
//             prices.push_back(price);
//         }
//         cin >> M;
//         for (int i = 0; i < prices.size()-1; i++) {
//             for (int j = i+1; j < prices.size(); j++) {
//                 if (prices[i]+prices[j] == M) {
//                     record.push_back(prices[i]);
//                     record.push_back(prices[j]);
//                     sort(record.begin(), record.end());
//                     records[abs(prices[i]-prices[j])] = record; 
//                 }
//             }
//         }    
//         for (auto i = records.begin(); i != records.end(); ++i) {
//             ans = i->second;
//             break;
//         }
//         // cout << ans[0] << endl;
//         cout << "Peter should buy books whose prices are " << ans[0] << " and " << ans[1] << endl;
//     }
//     return 0;
// }
