/*  鄒雨笙 UVa Online Judge 2023/8/27

    Problem 10783 - Odd Sum
*/

#include <iostream>
#include <vector>
using namespace std;


void sumOddNum(vector<int> &numbers, vector<int> &result){

    int startNum = numbers[0];
    int endNum = numbers[1];
    int sum = 0;

    if (startNum % 2 == 0) {
        startNum += 1;
    }
    if (endNum % 2 == 0) {
        endNum -= 1; 
    }

    while (startNum <= endNum) {
        sum += startNum;
        startNum += 2;
    }
    result.push_back(sum);

}



int main() {
    int testcases, carriageNum;
    vector<int> numbers;
    vector<int> result;

    int i = 0;
    int num;

    cin >> testcases;
    while (i < testcases) {
        int j = 0;
        while(j < 2) {
            cin >> num;
            numbers.push_back(num);
            j++;
        }
        sumOddNum(numbers, result);
        numbers.clear();
        i++;
    }

    int j = 1;
    for (auto i : result) {
        cout << "Case " << j << ": " << i << endl;
        j++;
    }

    return 0;
}

