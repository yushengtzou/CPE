// 鄒雨笙 20240108
// 12503 - Robot Instructions


#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main() {
    int T, n, p, num;
    string instruct;

    cin >> T;
    while (T--) { 
        vector<string> instruction;
        p = 0;
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++) {
            // cin >> instruct;
            getline(cin, instruct);
            instruction.push_back(instruct);
            if (instruct == "RIGHT")
                p++;
            else if (instruct == "LEFT")
                p--;
            else {
                num = instruct[8] - '0';
                if (instruction[num-1] == "RIGHT")
                    p++;
                else if (instruction[num-1] == "LEFT")
                    p--;
            }
            // cout << p << endl;
        }
        cout << p << endl;
    }
}




