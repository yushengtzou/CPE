//  鄒雨笙 UVa Online Judge 2023/11/13
//
//  Problem 10714 - Ants


#include<iostream>
#include<map>
using namespace std;


int main() {
    int T, M, D;
    int numOfWeekDay;
    int day;

    // non-leap year
    // 1/10, 2/21, 3/7, 4/4, 5/9, 6/6, 
    // 7/11, 8/8, 9/5, 10/10, 11/7, 12/12(一)
    map<int, int> nonLeapDays = {
        {1, 10},
        {2, 21},
        {3, 7},
        {4, 4},
        {5, 9},
        {6, 6},
        {7, 11},
        {8, 8},
        {9, 5},
        {10, 10},
        {11, 7},
        {12, 12}
    };
    map<int, string> weekDay = {
        {0, "Monday"},
        {1, "Tuesday"},
        {2, "Wednesday"},
        {3, "Thursday"},
        {4, "Friday"},
        {5, "Saturday"},
        {6, "Sunday"},
    };

    cin >> T;
    while (T--) {
        cin >> M >> D;

        for (const auto& doomDay : nonLeapDays) {
            if (M == doomDay.first) {
                if (D - doomDay.second >= 0) {
                    numOfWeekDay = (D - doomDay.second) % 7;
                    cout << weekDay[numOfWeekDay] << endl;
                }
                else {
                    if (abs(D - doomDay.second) % 7 != 0) {
                        numOfWeekDay = 7 - (abs(D - doomDay.second) % 7);
                    }
                    else {
                        numOfWeekDay = abs(D - doomDay.second) % 7;
                    }
                    cout << weekDay[numOfWeekDay] << endl;
                }
            }
        }
    }

}

