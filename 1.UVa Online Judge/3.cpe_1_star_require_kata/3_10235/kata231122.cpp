// 鄒雨笙 UVa Online Judge 2023/11/22
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
        for (int j = i + i; j < 1000000; j+=i) {
            com[j] = 1;
        }
    }
    
    int num, reverseNum;
    while (cin >> num) {
        int startNum = num;
        // 數字反轉
        for (reverseNum = 0; num; num /= 10) {
            reverseNum = reverseNum * 10 + (num % 10);
        }

        if (com[startNum]) {
            cout << startNum << " is not prime." << endl;
        }
        else if (com[reverseNum]) {
            cout << startNum << " is prime." << endl;
        }
        else if (startNum == reverseNum) {
            cout << startNum << " is prime." << endl;
        }
        else {
            cout << startNum << " is emirp." << endl;
        }


    }


}
