// 鄒雨笙 UVa Online Judge 2023/11/27
//
// Problem 10252 - Common Permutation
//
// 字元與字串


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string commonPermutation(const string& a, const string& b) {
    int countA[26] = {0}, countB[26] = {0};

    // Count occurrences of each character in both strings
    for (char ch : a) {
        countA[ch - 'a']++;
    }
    for (char ch : b) {
        countB[ch - 'a']++;
    }

    // Find the common characters and build the result
    string result;
    for (int i = 0; i < 26; ++i) {
        int commonCount = min(countA[i], countB[i]);
        result.append(commonCount, 'a' + i);
    }

    return result;
}

int main() {
    string line1, line2;

    while (getline(cin, line1) && getline(cin, line2)) {
        cout << commonPermutation(line1, line2) << endl;
    }

    return 0;
}



// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// #include<set>
// using namespace std;
//
//
// string compare(string firstWord, string secondWord) {
//     set<char> charsInSecond(secondWord.begin(), secondWord.end());
//     string result = "";
//     for (auto letterFirst : firstWord) {
//         if (charsInSecond.find(letterFirst) != charsInSecond.end()) {
//             result.append(1, letterFirst);
//         }
//     }
//     sort(result.begin(), result.end());
//     return result;
// }
//
//
// int main() {
//     string line1, line2;
//     vector<string> results;
//
//     while (getline(cin, line1) && getline(cin, line2)) {
//         cout << compare(line1, line2) << endl;
//     }
//
//     return 0;
// }



