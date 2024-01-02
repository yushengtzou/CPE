// 鄒雨笙 20231229
// 11078 - Open Credit System


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int T, n, score;
    cin >> T;
    while (T--) {
        cin >> n;
        int maxScore = INT_MIN; // Initialize maxScore to the smallest possible integer
        int maxDiff = INT_MIN; // Initialize maxDiff similarly
        while (n--) {
            cin >> score;
            if (maxScore != INT_MIN) { // Ensure there was at least one score before
                maxDiff = max(maxDiff, maxScore - score);
            }
            maxScore = max(maxScore, score);
        }
        cout << maxDiff << endl;
    }
    return 0;
}



