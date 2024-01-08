// 鄒雨笙 20240103
// 458 - The Decoder


#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;


int main() {
    string line;
    string ans;
    while (getline(cin, line)) {
        ans = "";
        for (auto c : line) {
            ans += c-7;
        }
        cout << ans << endl;
    }
}


