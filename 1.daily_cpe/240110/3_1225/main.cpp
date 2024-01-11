// 鄒雨笙 20240110
// UVA 1225 - Digit Counting


#include <iostream>
#include <vector>
#include <string>
using namespace std;
 

int main() {
    int T, N, cnt;
    string num;
    vector<int> result;

    cin >> T;
    while (T--) {
        cin >> N;
        num = "";
        for (int i = 1; i <= N; i++) {
            num += to_string(i);
        }
        // cout << num << endl;
        for (int i = 0; i <= 9; i++) {
            cnt = 0;
            for (auto ch : num) {
                if (ch - '0' == i)
                    cnt++;
            }
            result.push_back(cnt);
        }
        for (int i = 0; i < result.size(); i++) {
            if (i == 0)
                cout << result[i];
            else
                cout << " " << result[i];
        }
        cout << endl;
        result.clear();
    }
    return 0;
}
