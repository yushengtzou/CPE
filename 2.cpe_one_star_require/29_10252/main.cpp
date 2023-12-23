//  鄒雨笙 UVa Online Judge 2023/11/12
//
//  Problem 10252 - Common Permutation


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string common_permutation(const string& a, const string& b) {
    int count_a[26] = {0}, count_b[26] = {0};

    // Count occurrences of each character in both strings
    for (char ch : a) {
        count_a[ch - 'a']++;
    }
    for (char ch : b) {
        count_b[ch - 'a']++;
    }

    // Find the common characters and build the result
    string result;
    for (int i = 0; i < 26; ++i) {
        int common_count = min(count_a[i], count_b[i]);
        result.append(common_count, 'a' + i);
    }

    return result;
}

int main() {
    string line1, line2;

    while (getline(cin, line1) && getline(cin, line2)) {
        cout << common_permutation(line1, line2) << endl;
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



