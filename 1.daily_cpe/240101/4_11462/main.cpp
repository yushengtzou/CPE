// 鄒雨笙 20240101
// 11462 - Age Sort


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n, num;
    vector<int> nums;
    while (cin >> n) {
        if (n == 0)
            break;
        while (n--) {
            cin >> num;
            nums.push_back(num);
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0)
                cout << " " << nums[i];
            else
                cout << nums[i];
        }
        cout << endl;
        nums.clear();
    }
}


