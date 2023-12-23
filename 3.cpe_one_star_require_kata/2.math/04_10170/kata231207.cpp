//  鄒雨笙 UVa Online Judge 2023/12/07
//
//  Problem 10170 - The Hotel with Infinite


#include<iostream>
using namespace std;


int main() {
    long long int S, D;
    
    while (cin >> S >> D) {
        long long int totalGuest = 0;
        while (totalGuest < D) {
            totalGuest += S;
            S++;
        }
        cout << S - 1 << endl;

    }




}
