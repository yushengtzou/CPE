// 鄒雨笙 UVa Online Judge 2023/11/29
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


bool compare(pair<char, int>& a, pair<char, int>& b) {
    return a.second > b.second; // Comparator for descending order
}

int main() {
    int n;
    int result[26] = {0};
    string text;
    string textForProcess;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, text);
        textForProcess.append(text);
    }
    
    // cout << endl << textForProcess << endl;

    // Convert to uppercase
    for (auto &ch : textForProcess) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
    }

    // cout << endl << textForProcess << endl;

    // Count character occurrences
    for (auto ch : textForProcess) {
        if (isupper(ch)) {
            result[ch - 'A']++;
        }
    }

    // Create a vector of (character, count) pairs
    vector<pair<char, int>> charCounts;
    for (int i = 0; i < 26; i++) {
        if (result[i] > 0) {
            charCounts.push_back(make_pair('A' + i, result[i]));
        }
    }

    // Sort the vector in descending order of count
    sort(charCounts.begin(), charCounts.end(), compare);

    // Print sorted result
    for (auto &p : charCounts) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}





