// 鄒雨笙 20231229
// 11727 - Cost Cutting


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int T;
    int s[3];
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> s[0] >> s[1] >> s[2];
        sort(s,s+3);
        cout << "Case " << i << ": "<< s[1] << endl;
    }
    return 0;
}



