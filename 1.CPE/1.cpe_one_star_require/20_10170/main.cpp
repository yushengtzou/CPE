//  鄒雨笙 UVa Online Judge 2023/11/5
//
//  Problem 10170 - The Hotel with Infinite Rooms


#include<iostream>
using namespace std;

int main() {
    long long S, D;

    while (cin >> S >> D) {
        long long sum = 0;
        long long current = S;
        
        while (sum < D) {
            sum += current;
            current++;
        }

        cout << current - 1 << endl;
    }

    return 0;
}



