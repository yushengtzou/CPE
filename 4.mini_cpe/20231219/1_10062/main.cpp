// 鄒雨笙 20231219
// 10062 - Tell me the frequencies!


#include<iostream>
#include<map>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;


bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second)
        return a.first > b.first;
    return a.second < b.second;
}


int main() {
    string text;
    int character[1000] = {0};
    int cnt = 0;
    while (getline(cin, text)) {
        if (cnt != 0)
            cout << endl;
        cnt++;
        map<int, int> record;
        vector< pair<int, int> > result;
        pair<int, int> ch;

        for (auto ch : text) {
            record[ch] = 0;
        }
        for (auto ch : text) {
            record[ch] += 1;
        }
        // for (auto item : record) {
        //     cout << item.first << " " << item.second << endl;
        // }
        for (auto item : record) {
            ch.first = item.first;
            ch.second = item.second;
            result.push_back(ch);
        }

        sort(result.begin(), result.end(), compare);
        for (auto item : result) {
            cout << item.first << " " << item.second << endl;
        }

    }


}
