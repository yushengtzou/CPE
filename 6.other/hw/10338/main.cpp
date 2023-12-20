/*  鄒雨笙 UVa Online Judge 2023/8/28

    Problem 10338 - Mischievous Children
*/



#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long distinctPermutations(const string& s) {
    // If string length is 0 or 1, return 1
    if (s.size() <= 1) {
        return 1;
    }

    // Create a frequency map for the characters
    unordered_map<char, int> freq;
    for (char ch : s) {
        freq[ch]++;
    }

    // Calculate the denominator for the permutations formula
    long long denom = 1;
    for (auto &[key, value] : freq) {
        if (value > 1) {
            denom *= factorial(value);
        }
    }

    // Calculate the result
    return factorial(s.size()) / denom;
}

int main() {
    int testcases;
    cin >> testcases;

    vector<long long> results; // Store the results in a long long vector

    for (int i = 0; i < testcases; ++i) {
        string word;
        cin >> word;

        long long thePermutation = distinctPermutations(word);
        results.push_back(thePermutation);
    }

    for (int j = 0; j < testcases; ++j) {
        cout << "Data set " << (j + 1) << ": " << results[j] << endl;
    }

    return 0;
}


