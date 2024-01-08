// 鄒雨笙 20240103
// 902 - Password Search


#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;


int main() {
    int size, maxKey;
    string word, ans;
    map<string, int> record;
    while (cin >> size >> word) {
        maxKey = 0;
        for (int i = 0; i < word.length()-size+1; i++) {
            record[word.substr(i,size)] = 0;
        }
        for (int i = 0; i < word.length()-size+1; i++) {
            record[word.substr(i,size)] += 1;
        }
        // for (auto r : record) {
        //     cout << r.first << " " << r.second << endl;
        // }
        for (auto r : record) {
            if (r.second > maxKey) {
                ans = r.first;
                maxKey = r.second;
            }
        }
        cout << ans << endl;
        record.clear();
    }
}


