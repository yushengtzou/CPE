// 鄒雨笙 UVa Online Judge 2023/11/25
//
// Problem 11332 - Summing Digits


#include <iostream>
#include <string>
using namespace std;


int main() {
    string n;
    while (cin >> n) {
        int sum;
        if (n == "0") 
            break;

        while (true) {
            sum = 0;
            for (auto num : n) {
                sum += (num - 48);
            }
            if (sum < 10)
                break;

            n = to_string(sum);
        }

        cout << sum << endl;
        

    }


}
