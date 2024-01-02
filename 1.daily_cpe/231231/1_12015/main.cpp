// 鄒雨笙 20231231
// 12015 - Google is Feeling Lucky


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


bool valueComparator(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second; // Change > to < for ascending order
}


int main() {
    int T, v;
    string url;
    map<string, int> web;
    cin >> T;
    while (T--) {
        for (int i = 0; i < 10; i++) {
            cin >> url >> v;
            web[url] = v;
        }
        vector<pair<string, int>> mapElements(web.begin(), web.end());
        sort(mapElements.begin(), mapElements.end(), valueComparator);
        web.clear();
        for (const auto& pair : mapElements) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }
}


