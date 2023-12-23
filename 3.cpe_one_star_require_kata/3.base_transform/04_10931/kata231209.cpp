// 鄒雨笙 UVa Online Judge 2023/12/09
//
// Problem 10931 - Parity
//
// 進位制轉換


#include<iostream>
#include<stack>
using namespace std;


int main() {
    int I;
    stack<int> bin;

    while (cin >> I and I) {
        int parity = 0;
        do {
            bin.push(I % 2);
            if (I % 2)
                parity++;
            I = I / 2;
        }
        while (I > 0);
        cout << "The parity of "; 
        while (!bin.empty()) {
            cout << bin.top();
            bin.pop();
        }
        cout << " is ";
        cout << parity;
        cout << " (mod 2)." << endl;

    }

}
