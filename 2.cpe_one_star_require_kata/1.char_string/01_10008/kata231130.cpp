// 鄒雨笙 UVa Online Judge 2023/11/30
//
// Problem 10008 - What's Cryptanalysis?
//
// 字元與字串


#include <iostream>
#include <vector>
#include <algorithm> // For sort
#include <string>
#include <cctype>    // For toupper
using namespace std;


bool compare(pair<char, int> &charPair1, pair<char, int> &charPair2) {
    return charPair1.second > charPair2.second;
}


int main() {
    int n;
    int result[26] = {0};
    string word;
    string wordToProcess;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, word);
        wordToProcess.append(word);
    }

    // cout << wordToProcess << endl;

    for (auto &ch : wordToProcess) {
        if (ch >= 'a' and ch <= 'z') {
            ch = toupper(ch);
        }
    }

    // cout << wordToProcess << endl;

    for (auto ch : wordToProcess) {
        if (isupper(ch)) {
            result[ch - 'A']++;
        }
    }

    pair<char, int> charPair;
    vector<pair<char, int>> charPairs;
    for (int i = 0; i < 26; i++) {
        if (result[i] > 0) {
            // cout << char('A' + i) << " " << result[i] << endl;
            charPair = make_pair(char('A' + i), result[i]);
            charPairs.push_back(charPair);
        }
    }

    sort(charPairs.begin(), charPairs.end(), compare);

    // Print sorted result
    for (auto &p : charPairs) {
        cout << p.first << " " << p.second << endl;
    }


}
