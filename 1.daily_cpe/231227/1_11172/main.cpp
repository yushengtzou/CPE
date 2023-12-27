// 鄒雨笙 20231227
// 11172 - Relational Operator


#include <iostream>
#include <string>
using namespace std;


int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a > b)
            cout << ">";
        else if (a < b)
            cout << "<";
        else
            cout << "=";
        cout << endl;
    }
}

