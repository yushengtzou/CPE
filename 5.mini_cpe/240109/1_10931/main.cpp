// 鄒雨笙 20240109
// 10931 - Parity

#include <iostream>
#include <stack>
using namespace std;



int main() {
    int I, cnt;
    string numI;

    while(cin >> I){
        stack<int> num;
        numI = "";
        cnt = 0;
        if (I == 0)
            break;
        while (I != 0) {
            num.push(I % 2);
            // cout << I % 2 << endl;
            I = I / 2;

        }
        while (!num.empty()) {
            // cout << num.top() << endl;
            numI += to_string(num.top());
            num.pop();
        }
        for (auto ch : numI) {
            if (ch-'0' == 1)
                cnt++;
        }
        cout << "The parity of " << numI << " is " << cnt << " (mod 2)." << endl;
        // cout << numI << endl;

    }
    return 0;
}

