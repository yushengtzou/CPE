// 鄒雨笙 UVa Online Judge 2023/12/01
//
// Problem 10008 - What's Cryptanalysis?
//
// 字元與字串


#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;


bool compare(pair<char, int> &a, pair<char, int> &b) {
    return a.second > b.second;
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
        if (isupper(ch))
            result[ch - 65]++;
    }

    // for (int i = 0; i < 26; i++) {
    //     if (result[i] > 0)
    //         cout << char('A' + i) << " " << result[i] << endl;
    // }

    pair<char, int> charPair;
    vector<pair<char, int>> charPairs;

    for (int i = 0; i < 26; i++) {
        if (result[i] > 0) {
            charPair = make_pair(char('A' + i), result[i]);
            charPairs.push_back(charPair);
        }
    }

    sort(charPairs.begin(), charPairs.end(), compare);

    for (auto charPair : charPairs) {
        cout << charPair.first << " " << charPair.second << endl;
    }

}
