// 鄒雨笙 20231227
// 11764 - Jumping Mario


#include <iostream>
#include <vector>
using namespace std;


int main() {
    int T, N, height;
    int high, low;
    vector<int> walls;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        high = 0, low = 0;
        cin >> N;
        while (N--) {
            cin >> height;
            walls.push_back(height);
        }
        for (int i = 0; i < walls.size()-1; i++) {
            if (walls[i] > walls[i+1])
                low++;
            else if (walls[i] < walls[i+1])
                high++;
        }
        walls.clear();
        cout << "Case " << i << ": "<< high << " " << low << endl;
    }
}

