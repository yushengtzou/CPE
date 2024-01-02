// 鄒雨笙 20231228
// 12279 - Emoogle Balance


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int N, event;
    int cnt = 1;
    while (cin >> N) {
        vector<int> events;
        int num1 = 0, num2 = 0;
        if (N == 0)
            break;
        while (N--) {
            cin >> event;
            events.push_back(event);
        }
        for (auto event : events) {
            if (event == 0)
                num2++;
            else
                num1++;
        }
        cout << "Case " << cnt << ": " << num1 - num2 << endl;
        cnt++;
    }
}

