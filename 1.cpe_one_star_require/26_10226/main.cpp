// 鄒雨笙 UVa Online Judge 2023/10/15
//
// Problem 10226 - Hardwood Species


#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int n;
    string s;
    cin >> n;
    cout << "\n";
    cout << "\n";
    getline(cin, s); //clear buffer
    getline(cin, s); //blank line
    while (n--) {
        map<string, int> mp;
        int sum = 0;
        while (getline(cin, s) && s != "") {
            mp[s]++;
            sum++;
        }
        for (auto i: mp) {
            cout << i.first << " " <<
            fixed << setprecision(4) << (double)i.second / sum * 100 << "\n";
        }
        cout << "\n";
    }
    return 0;
}
