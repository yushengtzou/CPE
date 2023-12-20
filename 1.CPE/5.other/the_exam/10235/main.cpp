// 鄒雨笙
// 10235 - Simply Emirp


#include <iostream>
#include <cmath>
#define size 1000010
using namespace std;

int arr[size];

int main() {
    int i, j, k, n, rev, range, mod, num;

    range = sqrt(size);

    arr[0] = 1;
    arr[1] = 1;

    for(i = 2; i <= range; i++) {
        if(!arr[i]) {
            for(j = i + i; j < size; j = j + i) {
                arr[j] = 1;
            }
        }
    }

    while(cin >> n) {
        num = n;
        rev = 0;

        if(!arr[n]) {
            // reverse the given number
            while(n) {
                mod = n % 10;
                rev = rev * 10 + mod;
                n /= 10;
            }
        }

        //Checking for Emirp/prime/not prime
        if(!arr[rev] && !arr[num] && rev!=num) {
            cout << num << " is emirp." << endl;
        }
        else if(!arr[num]) {
            cout << num << " is prime." << endl;
        }
        else {
            cout << num << " is not prime." << endl;
        }

    }

    return 0;
}


