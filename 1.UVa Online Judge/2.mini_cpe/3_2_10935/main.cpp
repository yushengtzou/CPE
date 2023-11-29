//  鄒雨笙 UVa Online Judge 2023/11/7
//
//  Problem 10935 - Throwing cards away I



#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n;

    while (true) {
        queue<int> cards;
        vector<int> discards;
        cin >> n;

        if (n == 0) {
            break; 
        }

        for (int i = 1; i <= n; ++i) {
            cards.push(i);
        }

        while (cards.size() > 1) {
            discards.push_back(cards.front());
            cards.pop(); 

            cards.push(cards.front());
            cards.pop();
        }

        cout << "Discarded cards:";
        if (!discards.empty()) {
            cout << " " << discards[0];
        }
        for (int i = 1; i < discards.size(); ++i) {
            cout << ", " << discards[i];
        }
        cout << endl;

        cout << "Remaining card: " << cards.front() << endl;
    }

    return 0;
}


