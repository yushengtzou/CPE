//  鄒雨笙 UVa Online Judge 2023/11/3
//
//  Problem 10508 - Word Morphing


#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;


int compareWord(string originWord, string word, int numLetter) {
    int numDiff = 0;
    for (int i = 0; i < numLetter; i++) {
        if (originWord[i] != word[i]) {
            numDiff++;
        }
    }
    return numDiff;
}


void compareWordToCountDiff(vector<string> words, map<int, string> &resultUnsorted, int numLetter) {
    string originWord;
    int numDiff;
    originWord = words[0];
    
    for (int i = 1; i < words.size(); i++) {
        numDiff = compareWord(originWord, words[i], numLetter);
        // cout << numDiff << endl;
        resultUnsorted[numDiff] = words[i];
    }

}


int main() {

    int numWord, numLetter;
    string word;
    vector<string> words;
    map<int, string> resultUnsorted;

    while(cin >> numWord >> numLetter) {
        for (int i = 0; i < numWord; i++) {
            cin >> word;
            words.push_back(word);
        }

        compareWordToCountDiff(words, resultUnsorted, numLetter);

        // cout << endl;
        // for (auto word : words) {
        //     cout << word << endl;
        // }

        cout << words[0] << endl;
        for (auto word : resultUnsorted) {
            cout << word.second << endl;
        }
        words.clear();
        resultUnsorted.clear();

    
    }

    return 0;
}

