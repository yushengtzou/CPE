// 鄒雨笙 20240101
// 1586 - Molar mass


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


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
    }
}


