//  鄒雨笙 UVa Online Judge 2023/11/8
//
//  Problem 11332 - Summing Digits


#include<iostream>
#include<string>
using namespace std;


int main() {
    bool flag = true;
    string n;

    while (flag) {
        cin >> n;
        if (n == "0") {
            break;
        }
        while (n.size() > 1) {
            int sum = 0;
            for (auto letter : n) {
                sum += letter - '0';
            }
            n = to_string(sum);
        }

        cout << n << endl;


    }

}

