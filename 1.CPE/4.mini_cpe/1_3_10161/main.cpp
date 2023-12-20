//  2023.10.24 鄒雨笙
//  10161 Ant on a Chessboard



#include<bits/stdc++.h>
using namespace std;


int main() {

    int n;
    while (cin >> n) {
        if (n == 0)
            break;

        long long level, shift, x, y;
        level = (long long) (sqrt(n-1)) + 1;
        shift = n - (level-1)*(level-1);

        if (shift > level) {
            x = level;
            y = level*level-n+1;
        } 
        else {
            x = shift;
            y = level;
        }

        if (level%2 == 1)
            swap(x, y);

        cout << x << " " << y << endl;
    }

    return 0;

}

