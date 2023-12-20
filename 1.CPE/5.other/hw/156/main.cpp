// 鄒雨笙 2023.08.30
// 156 - Ananagrams

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

// Function to normalize a word
string normalize(const string &word) {
    string normalized_word = word;
    transform(normalized_word.begin(), normalized_word.end(), normalized_word.begin(), ::tolower);
    sort(normalized_word.begin(), normalized_word.end());
    return normalized_word;
}

int main() {
    unordered_map<string, vector<string>> dict;
    string word;

    // Read input and build dictionary
    while (cin >> word && word != "#") {
        string normalized = normalize(word);
        dict[normalized].push_back(word);
    }

    // Collect relative ananagrams
    vector<string> ananagrams;
    for (auto &pair : dict) {
        if (pair.second.size() == 1) {
            ananagrams.push_back(pair.second[0]);
        }
    }

    // Sort in lexicographic order
    sort(ananagrams.begin(), ananagrams.end());

    // Output the results
    for (const string &w : ananagrams) {
        cout << w << endl;
    }

    return 0;
}

