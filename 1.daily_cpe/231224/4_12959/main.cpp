// 鄒雨笙 20231224
// 12959 - Strategy Game


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
 

int main() {
    int J, R, num, len;
    vector<int> points;
    while (cin >> J >> R) {
        len = J * R;
        while (len--) {
            cin >> num;
            points.push_back(num);
        }
    }
    return 0;
}


