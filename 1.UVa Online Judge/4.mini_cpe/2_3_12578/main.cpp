//  鄒雨笙 UVa Online Judge 2023/10/31
//
//  Problem 12578 - 10:6:2


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int T;
    double L, W, A;
    double circle, last;
    double pi = acos(-1);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> L;
        circle = pi * pow((L / 5.0), 2);
        // cout << pi << " " << pow((L / 5.0), 2) << endl;
        W = L * 3 / 5;
        A = L * W;
        last = A - circle;
        cout << fixed << setprecision(2) << circle << " " << last << endl;
        // cout << resetiosflags(ios::fixed) << setprecision(7);

    }

    return 0;
}


