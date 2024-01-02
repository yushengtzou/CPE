// 鄒雨笙 20231228
// 11799 - Horror Dash


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int T, N, c;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        vector<int> speed;
        cin >> N;
        while (N--) {
            cin >> c;
            speed.push_back(c);
        }
        sort(speed.begin(), speed.end());
        cout << "Case " << i << ": "<< speed[speed.size()-1] << endl;
    }
}


