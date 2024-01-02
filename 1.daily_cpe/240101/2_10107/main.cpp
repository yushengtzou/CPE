// 鄒雨笙 20240101
// 10107 - What is the Median?


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int num, med;
    vector<int> nums;
    while (cin >> num) {
        nums.push_back(num);
        sort(nums.begin(), nums.end());
        if (nums.size() % 2 == 0) {
            med = (nums[nums.size()/2 - 1] + nums[nums.size()/2]) / 2;
            cout << med << endl;
        }
        else
            cout << nums[nums.size()/2] << endl;
    }
}


