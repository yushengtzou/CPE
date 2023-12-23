// 鄒雨笙 20231221
// 136 - Ugly Numbers


#include <iostream>
#include <set>
using namespace std;

int main() {
    set<long long> s;
    s.insert(1);
    int count = 0;
    long long uglyNumber = 0;

    while (count < 1500) {
        uglyNumber = *s.begin();
        s.erase(s.begin());
        count++;
        s.insert(uglyNumber * 2);
        s.insert(uglyNumber * 3);
        s.insert(uglyNumber * 5);
    }

    cout << "The 1500'th ugly number is " << uglyNumber << "." << endl;
    return 0;
}


//
//
// #include <iostream>
// #include <vector>
// #define MAX 1000000
// using namespace std;
// int com[1000000]; // A composite number array
//
//
// int main() {
//     int number[MAX] = {0};
//     vector<int> prime;
//     vector<int> result;
//
//     for (int i = 2; i < 1000; i++) {
//         if (com[i])
//             continue;
//         for (int j = i * 2; j < 1000000; j += i) {
//             com[j] = 1;
//         }
//     }
//     for (int i = 1; i < 1000000; i++) {
//         if (com[i] == 0) {
//             prime.push_back(i);
//         }
//     }
//     // for (int num : prime) {
//     //     cout << num << endl;
//     // }
//
//     number[1] = 1;
//     for (int j = 2; j < MAX; j+=2) {
//         number[j] = 1;
//     }
//     for (int j = 3; j < MAX; j+=3) {
//         number[j] = 1;
//     }
//     for (int j = 5; j < MAX; j+=5) {
//         number[j] = 1;
//     }
//     
//     for (int num = 4; num < prime.size(); num++) {
//         for (int j = prime[num]; j < MAX; j += prime[num]) {
//             number[j] = 0;
//         }
//     }
//     // cout << number[1500] << endl;
//     for (int i = 1; i < MAX; i++) {
//         if (number[i] == 1)
//             result.push_back(i);
//     }
//     for (int i = 0; i < 11; i++) {
//         cout << result[i] << endl;
//     }
//     cout << result[1499] << endl;
//     cout << "The 1500'th ugly number is " << result[1499] << "." << endl;
//
//     return 0;
// }
//
//
