// 鄒雨笙 20231229
// 10424 - Love Calculator


#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;


int calculate(int sum) {
    int tmp = sum;
    while (tmp / 10 > 0) {
        int digitSum = 0;
        do {
            digitSum += tmp % 10;
            tmp /= 10;
        }
        while (tmp > 0);
        tmp = digitSum;
    }
    return tmp;
}


int main() {
    string name1, name2;
    int sum1, sum2;
    double love;
    while (getline(cin, name1) && getline(cin, name2)) {
        sum1 = 0, sum2 = 0;

        for (auto ch : name1)
            if (isalpha(ch))
                sum1 += tolower(ch) - 'a' + 1;
        sum1 = calculate(sum1);

        for (auto ch : name2)
            if (isalpha(ch))
                sum2 += tolower(ch) - 'a' + 1;
        sum2 = calculate(sum2);

        love = min(sum1, sum2) * 100.0 / max(sum1, sum2);
        cout.precision(2);
        cout << fixed << love << " %" << endl; 
    }
}


