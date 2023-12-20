// 鄒雨笙 UVa Online Judge 2023/12/6
//
// Problem 10226 - Hardwood Species


#include <iostream>
#include <string>
#include <map>
using namespace std;

string name, line;
map<string, int> tree;


int main() {
    int T;
    cin >> T;
    getline(cin, line);
    getline(cin, line);

    for (int c = 0; c < T; c++) {
        if (c != 0)
            cout << endl;

        tree.clear();
        int sum = 0;

        while (getline(cin, name) && !name.empty()) {
            tree[name]++;
            sum++;
        }

        for (auto it = tree.begin(); it != tree.end(); it++) {
            double per = (double)it->second / sum * 100;
            cout.precision(4);
            // it is not a pair itself but an iterator pointing to a pair
            // 所以不能用 it.first
            cout << fixed << it->first << " " << per << endl;
        }
    }
}


