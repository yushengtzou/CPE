// 鄒雨笙 20231225
// 11044 - Searching for Nessy


#include <iostream>
using namespace std;


int main() {
    int T, r, c, r_new, c_new;
    cin >> T;
    while (cin >> r >> c) {
        r_new = r / 3;
        c_new = c / 3;
        cout << r_new * c_new << endl;
    }
}

