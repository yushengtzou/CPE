// 鄒雨笙 20240104
// 12289 - One-Two-Three



#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    string word;
    while (T--) { 
        cin >> word;
        if (word.length() == 5) {
            cout << 3 << endl;
        } else {
            int matchOne = (word[0] == 'o') + (word[1] == 'n') + (word[2] == 'e');
            int matchTwo = (word[0] == 't') + (word[1] == 'w') + (word[2] == 'o');
            if (matchOne >= 2) { 
                cout << 1 << endl;
            } else if (matchTwo >= 2) {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}


