//  鄒雨笙 UVa Online Judge 2023/12/02
//
//  Problem 12019 - Doom's Day Algorithm


#include<iostream>
#include<vector>
using namespace std;


int main() {
    int T, M, D;

    vector<string> week = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    vector<int> monthDay = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    cin >> T;
    while (T--) {
        cin >> M >> D;
        
        int w = 5;
        for (int i = 1; i < M; i++) {
            w += monthDay[i - 1];
        }
        w += D;
        cout << week[w % 7] << endl;

    }
    return 0;
}

