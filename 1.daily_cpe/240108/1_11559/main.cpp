// 鄒雨笙 20240108
// 11559 - Event Planning


#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main() {
    int N, B, H, W, price, bed;

    while (cin >> N >> B >> H >> W) { 
        map<int, vector<int>> hotels;
        vector<int> prices;
        for (int i = 0; i < H; i++) {
            vector<int> beds;
            cin >> price;
            for (int j = 0; j < W; j++) {
                cin >> bed;
                beds.push_back(bed);
            }
            hotels[price] = beds;
        }

        // 飯店花費在預算內而且要有床位
        for (auto hotel : hotels) {
            bool flag = false;
            if (N * hotel.first > B)
                continue;
            for (auto bed : hotel.second) {
                if (bed >= N) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                prices.push_back(N * hotel.first);
            }
        }

        // cout << prices[0] << endl;
        // cout << prices[6] << endl;
        // cout << prices.size() << endl;
        if (prices.empty())
            cout << "stay home" << endl;
        else {
            sort(prices.begin(), prices.end());
            cout << prices[0] << endl;
        }
    }
}



