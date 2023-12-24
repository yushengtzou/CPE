// 鄒雨笙 20231224
// 10789 - Prime Frequency


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
 

void primeFreq(string line) {
    map<char, int> record;
    for (auto ch : line) {
        if (ch >= '0' and ch <= '9')
            record[ch - '0'] = 0;
        else
            record[ch] = 0;
    }
    for (auto ch : line) {
        if (ch >= '0' and ch <= '9')
            record[ch - '0'] += 1;
        else
            record[ch] += 1;
    }
    for (auto ch : record) {
        cout << ch.first << " " << ch.second << endl; 
    }

}


int main() {
    int T;
    string line;
    cin >> T;
    for (int c = 1; c <= T; c++) {
        cin >> line;
        // cout << "Case " << c << ": " << primeFreq(line) << endl;
        primeFreq(line);
    }
    return 0;
}


