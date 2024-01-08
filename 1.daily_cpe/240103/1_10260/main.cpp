// 鄒雨笙 20240103
// 10260 - Soundex


#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


// 1 represents B, F, P, or V
// 2 represents C, G, J, K, Q, S, X, or Z
// 3 represents D or T
// 4 represents L
// 5 represents M or N
// 6 represents R

int main() {
    string word;
    map<char, int> digit = {
        {'B', 1},
        {'F', 1},
        {'P', 1},
        {'V', 1},
        {'C', 2},
        {'G', 2},
        {'J', 2},
        {'K', 2},
        {'Q', 2},
        {'S', 2},
        {'X', 2},
        {'Z', 2},
        {'D', 3},
        {'T', 3},
        {'L', 4},
        {'M', 5},
        {'N', 5},
        {'R', 6},
    };
    while (getline(cin, word)) {
        int sum = 0;
        for (auto ch : word) {
            sum += digit[ch];
        }
        cout << sum << endl;
    }
}

// KHAWN

