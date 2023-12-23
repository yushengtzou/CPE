//  鄒雨笙 UVa Online Judge 2023/11/7
//
//  Problem 11716 - Digital Fortress



#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

bool isPerfectSquare(int num) {
    int root = round(sqrt(num));
    return num == root * root;
}

int main() {
    int T;
    string decryptedText;
    
    cin >> T;
    cin.ignore();
    while (T--) {
        getline(cin, decryptedText);
        if (!isPerfectSquare(decryptedText.size())) {
            cout << "INVALID" << endl;
        } else {
            int length = sqrt(decryptedText.size());
            vector< vector<char> > wordFortress(length, vector<char>(length));
            for (int i = 0; i < decryptedText.size(); i++) {
                int row = i / length;
                int col = i % length;
                wordFortress[row][col] = decryptedText[i];
            }

            for (int col = 0; col < length; col++) {
                for (int row = 0; row < length; row++) {
                    cout << wordFortress[row][col];
                }
            }
            cout << endl;
        }
    }

    return 0;
}

