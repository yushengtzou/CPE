// 鄒雨笙 20231224
// 11824 - A Minimum Land Price


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define MAX 5000000
using namespace std;
 

bool cmp(int a, int b) {
    return a > b;
}


long long cost(vector<int> lands) {
    long long sum = 0;
    for (int i = 0; i < lands.size(); i++) {
        sum += 2*pow(lands[i], i+1);

    }
    
    return sum;
}

 
int main() {
    int T, L;
    vector<int> lands;
    cin >> T;
    while (T--) {
        while (cin >> L and L != 0) {
            lands.push_back(L);
        }
        sort(lands.begin(), lands.end(), cmp);

        if (cost(lands) < MAX)
            cout << cost(lands) << endl;
        else
            cout << "Too expensive" << endl;
        lands.clear();

        // for (auto land : lands)
        //     cout << land << endl;
    }
    return 0;
}


