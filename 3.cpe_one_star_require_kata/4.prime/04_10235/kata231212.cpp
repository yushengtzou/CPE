// 鄒雨笙 UVa Online Judge 2023/12/12
//
// Problem 10235 - Simply Emirp


#include <iostream>
using namespace std;
int com[1000000]; // A composite number array


int main() {
    int num;

    for (int i = 2; i < 1000; i++) {
        if (com[i])
            continue;
        for (int j = i * 2; j < 1000000; j += i) {
            com[j] = 1;
        }
    }


    while (cin >> num) {
        int originNum = num;
        int reverseNum;
        for (reverseNum = 0; num; num /= 10) {
            reverseNum = reverseNum * 10 + (num % 10);
        }

        if (com[originNum])
            cout << originNum << " is not prime." << endl;
        else if (!com[reverseNum] and reverseNum != originNum)
            cout << originNum << " is emirp." << endl;
        else
            cout << originNum << " is prime." << endl;

    }

}
