// 鄒雨笙 20231224
// 1260 - Sales


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
 

long long calculate(vector<int> sales) {
    long long cnt = 0;
    for (int i = 0; i < sales.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (sales[j] <= sales[i]) 
                cnt++;
        }
    }
    return cnt;

}


int main() {
    int T, n;
    cin >> T;
    while (T--) {
        vector<int> sales;
        int sale;
        cin >> n;
        while(n--){
            cin >> sale; 
            sales.push_back(sale);
        }
        cout << calculate(sales) << endl;
        // for (auto sale : sales)
        //     cout << sale << endl;

    }
    return 0;
}


