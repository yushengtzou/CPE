// 鄒雨笙 20240104
// 10696 - f91


#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int f91(int N) {
    if (N <= 100) {
        return f91(f91(N + 11));
    }
    else {
        return N - 10;
    }
}


int main() {
    int N;
    while (cin >> N && N != 0) { 
        cout << "f91(" << N << ") = " << f91(N) << endl;
    }
}


