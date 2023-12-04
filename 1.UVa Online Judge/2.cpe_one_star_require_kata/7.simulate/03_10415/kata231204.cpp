//  鄒雨笙 UVa Online Judge 2023/12/04
//
//  Problem 10415 - Eb Alto Saxophone Player


#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;


// 宣告用以計數手指按幾次琴鍵的函式
void countFingerPressTime(vector<int> &fingerPressTime, vector<int> fingerWithNoteFirst, vector<int> fingerWithNoteSecond) {

    for (int i = 0; i < 10; i++) {
        if (fingerWithNoteSecond[i] == 1 and fingerWithNoteFirst[i] == 0) {
            fingerPressTime[i] += 1;
        }
    }

}

// 主程式
int main() {

    // ---------------- 宣告變數 ----------------
    
    int t;
    string notes;
    vector<int> fingerPressTime(10, 0);
    vector<int> fingerWithNote;
    vector<int> fingerWithNoteFirst;
    vector<int> fingerWithNoteSecond;
    char note, noteFirst, noteSecond;

    map<char, vector<int>> fingerWithNotes = {
        {'c', {0, 1, 1, 1, 0, 0, 1, 1, 1, 1}},
        {'d', {0, 1, 1, 1, 0, 0, 1, 1, 1, 0}},
        {'e', {0, 1, 1, 1, 0, 0, 1, 1, 0, 0}},
        {'f', {0, 1, 1, 1, 0, 0, 1, 0, 0, 0}},
        {'g', {0, 1, 1, 1, 0, 0, 0, 0, 0, 0}},
        {'a', {0, 1, 1, 0, 0, 0, 0, 0, 0, 0}},
        {'b', {0, 1, 0, 0, 0, 0, 0, 0, 0, 0}},
        {'C', {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}},
        {'D', {1, 1, 1, 1, 0, 0, 1, 1, 1, 0}},
        {'E', {1, 1, 1, 1, 0, 0, 1, 1, 0, 0}},
        {'F', {1, 1, 1, 1, 0, 0, 1, 0, 0, 0}},
        {'G', {1, 1, 1, 1, 0, 0, 0, 0, 0, 0}},
        {'A', {1, 1, 1, 0, 0, 0, 0, 0, 0, 0}},
        {'B', {1, 1, 0, 0, 0, 0, 0, 0, 0, 0}},
    };

    // for (const auto& finger : fingerPressTime) {
    //     cout << finger << " ";
    // }
    // cout << endl;

    // for (const auto& fingerNotes : fingerWithNotes) {
    //     cout << fingerNotes.first << ": ";  // Print the key
    //     for (int val : fingerNotes.second) {
    //         cout << val << " ";
    //     }
    //     cout << endl;
    // }

    // ---------------- 輸入資料 ----------------
    
    cin >> t;
    cin.ignore(); // 忽略多餘的換行符
    while (t--) {
        getline(cin, notes);
        if (notes.empty()) {
            for (int i = 0; i < fingerPressTime.size(); i++) {
                if (i != 0) {
                    cout << " ";
                }
                cout << fingerPressTime[i];
            }
            cout << endl;

            continue;
        } 
        // cout << notes << endl;
        for (int i = 0; i < notes.length(); i++) {
            if (i == 0) {
                fingerPressTime = fingerWithNotes[notes[i]];
            }
            if (i == notes.length() - 1) {
                break;
            }
            noteFirst = notes[i];
            noteSecond = notes[i + 1];
            // cout << noteFirst << " " << noteSecond << endl;
            fingerWithNoteFirst = fingerWithNotes[noteFirst];
            fingerWithNoteSecond = fingerWithNotes[noteSecond];
            countFingerPressTime(fingerPressTime, fingerWithNoteFirst, fingerWithNoteSecond);
        }
        for (int i = 0; i < fingerPressTime.size(); i++) {
            if (i != 0) {
                cout << " ";
            }
            cout << fingerPressTime[i];
        }
        cout << endl;
        fingerPressTime.assign(10, 0);

    }

}
