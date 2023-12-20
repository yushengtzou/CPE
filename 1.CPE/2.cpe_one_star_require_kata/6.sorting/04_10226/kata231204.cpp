// 鄒雨笙 UVa Online Judge 2023/12/5
//
// Problem 10226 - Hardwood Species


#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> tree;
map<string, int>::iterator it;
string line, name;


int main() {

    int n;
    cin >> n;
    getline(cin, line); //blank line
    getline(cin, line); //blank line
    for (int c = 0; c < n; c++) {
        int sum = 0;
        tree.clear();
        while (!cin.eof()) {
            getline(cin, name);
            if (name[0] == '\0') {
                break;
            }
            sum++;
            it = tree.find(name);
            if (it == tree.end()) {
                tree[name] = 1;
            }
            else {
                tree[name]++;
            }
        }
        if (c > 0)
            cout << endl;

        for (it = tree.begin(); it != tree.end(); it++) {
            float per = 100.0*it->second/sum;
            cout.precision(4);
            cout.setf(cout.fixed);
            cout << it->first << ' ' << per << endl;
        }
    }
    return 0;
}
