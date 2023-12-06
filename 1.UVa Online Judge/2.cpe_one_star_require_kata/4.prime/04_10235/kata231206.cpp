// 鄒雨笙 UVa Online Judge 2023/12/6
//
// Problem 10235 - Simply Emirp


#include <iostream>
using namespace std;
int com[1000000]; // A composite number array


int main() {
    // 建立質數表
    for (int i = 2; i < 1000; i++) {
        if (com[i])
            continue;
        for (int j = i * 2; j < 1000000; j += i) {
            com[j] = 1;
        }
    }

    int num;

    while (cin >> num) {
        int originalNum = num;
        int reverseNum;

        // 反轉數字 
        for (reverseNum = 0; num; num /= 10) {
            reverseNum = reverseNum * 10 + (num % 10);
        }

        if (com[originalNum]) {
            cout << originalNum << " is not prime." << endl;
        }
        else if (!com[reverseNum] && reverseNum != originalNum) {
            cout << originalNum << " is emirp." << endl;
        }
        else {
            cout << originalNum << " is prime." << endl;
        }
    }
}


