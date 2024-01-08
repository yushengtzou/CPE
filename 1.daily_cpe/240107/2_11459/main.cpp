// 鄒雨笙 20240107
// 11459 - Snakes and Ladders


#include <iostream>
#include <utility>
#include <map>
#include <vector>
using namespace std;


int main() {
    int T, a, b, c, current;
    int snakeMouth, snakeTail, dice;
    bool flag = false;

    cin >> T;
    while (T--) { 
        vector<int> dices;
        vector<pair<int, int>> snakes;
        pair<int, int> snakePos;
        vector<int> playerPos;

        cin >> a >> b >> c;
        playerPos.resize(a, 1);
        while (b--) {
            cin >> snakeMouth >> snakeTail;
            snakePos = make_pair(snakeMouth, snakeTail);
            snakes.push_back(snakePos);
        }
        for (int i = 0; i < c; i++) {
            cin >> dice;
            dices.push_back(dice);
        }

        // cout << c << endl;
        // 對每一個玩家的位置做更動
        // 要思考的是要怎麼做到玩家輪流丟骰子這件事，
        // 目前沒有做到這件事，所以有 bug
        for (int i = 0; i < dices.size(); i++) {
            current = i % a;
            playerPos[current] += dices[i];
            // cout << dices[current] << endl;
            // cout << i << " " << playerPos[current] << endl;
            for (auto snakePos : snakes) {
                if (playerPos[current] == snakePos.first) {
                    playerPos[current] = snakePos.second;
                    break;
                } 
            }
            if (playerPos[current] >= 100) {
                playerPos[current] = 100;
            }

            if (playerPos[current] == 100) {
                break;
            }
        }

        for (int i = 0; i < a; i++) {
            cout << "Position of player " << (i + 1) << " is " << playerPos[i] << "." << endl;
        }
    }
}



