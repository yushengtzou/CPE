// 鄒雨笙 20231231
// 11687 - Digits


#include <iostream>
#include <string>
using namespace std;


int recurrence(string word, int& cnt) {
    cnt++;
    string x1 = to_string(word.size());
    if (word != x1)
        return recurrence(x1, cnt);
    else
        return cnt; 
}

int main() {
    string word;
    while (cin >> word) {
        if (word == "END")
            break;

        int cnt = 0;
        cout << recurrence(word, cnt) << endl;
    }
}


