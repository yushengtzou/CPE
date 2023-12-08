// 鄒雨笙 UVa Online Judge 2023/12/08
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

    while (cin >> I && I) {
        int parity = 0;
        do {
            bin.push(I % 2);
            I /= 2;
        }
        while (I > 0);
        
        cout << "The parity of ";
        while (!bin.empty()) {
            cout << bin.top();
            if (bin.top())
                parity += 1;
            bin.pop();
        }
        cout << " is " << parity << " (mod 2).";
        cout << endl;
    }


}
