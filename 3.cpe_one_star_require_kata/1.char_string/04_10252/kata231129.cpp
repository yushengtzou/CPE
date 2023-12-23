// 鄒雨笙 UVa Online Judge 2023/11/29
//
// Problem 10252 - Common Permutation
//
// 字元與字串


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string commonPermutation(string &firstWord, string &secondWord) {
    int firstRecord[26] = {0};
    int secondRecord[26] = {0};
    string result = "";

    for (auto ch : firstWord) {
        firstRecord[ch - 'a']++;
    }
    for (auto ch : secondWord) {
        secondRecord[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        // result.append(min(firstRecord[i], secondRecord[i]), static_cast<char>(i + 'a'));
        result.append(min(firstRecord[i], secondRecord[i]), 'a' + i);

    }

    return result;
}


int main() {
    string firstWord, secondWord;

    while (getline(cin, firstWord) && getline(cin, secondWord)) {
        cout << commonPermutation(firstWord, secondWord) << endl;
    }

}
