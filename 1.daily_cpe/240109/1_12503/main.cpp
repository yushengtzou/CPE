// 鄒雨笙 20240109
// 12503 - Robot Instructions


#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main() {
    int T, n, p, numI;
    string instruct, num;

    cin >> T;
    while (T--) { 
        vector<string> instruction;
        p = 0;
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++) {
            // cin >> instruct;
            num = "";
            getline(cin, instruct);
            if (instruct == "RIGHT")
                p++;
            else if (instruct == "LEFT")
                p--;
            // 要思考的是要怎麼處理 SAME AS i 的指令
            // 它不可避免的要做字串分割，問題是要怎麼分割想要的部分
            // 如果 i 超過 9 要怎麼處理
            else {
                for (auto ch : instruct) {
                    if (ch <= '9' and ch >= '0') {
                        num += ch;
                    }
                }
                numI = stoi(num);
                // cout << numI << endl;
                if (instruction[numI-1] == "RIGHT") {
                    instruct = "RIGHT";
                    p++;
                }
                else if (instruction[numI-1] == "LEFT") {
                    instruct = "LEFT";
                    p--;
                }
            }
            instruction.push_back(instruct);
            // cout << p << endl;
        }
        cout << p << endl;
    }
}


// Sample Input
// 2
// 3
// LEFT
// RIGHT
// SAME AS 2
// 5
// LEFT
// SAME AS 1
// SAME AS 2
// SAME AS 1
// SAME AS 4
// Sample Output
// 1
// -5
