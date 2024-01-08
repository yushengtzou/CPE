// 鄒雨笙 20240107
// 489 - Hangman Judge


#include <iostream>
#include <set>
using namespace std;


int main() {
    int roundNum;
    int correct, wrong;
    string ans, guess;
    while (cin >> roundNum) { 
        set<int> letter;
        set<int> correct;
        wrong = 0;

        if (roundNum == -1)
            break;
        cin >> ans;
        cin >> guess;

        // cout << ans << endl;
        // cout << guess << endl;
        for (auto ch : ans)
            letter.insert(ch);
        for (auto ch : guess) {
            if (correct == letter)
                break;
            if (wrong == 7)
                break;
            if (letter.count(ch)) {
                correct.insert(ch);
            }
            else
                wrong++;
        }
        cout << "Round" << " " << roundNum << endl;
        if (correct == letter && wrong < 7)
            cout << "You win." << endl;
        else if (wrong < 7)
            cout << "You chickened out." << endl;
        else if (wrong >= 7)
            cout << "You lose." << endl;
    }
}


