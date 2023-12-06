//  鄒雨笙 UVa Online Judge 2023/12/06
//
//  Problem 10170 - The Hotel with Infinite


#include<iostream>
using namespace std;


int main() {
    long long int S, D;
    while (cin >> S >> D) {
        long long int totalGuests = 0;  // 紀錄目前總客人數

        // 從房間S開始，不斷添加客人，直到總客人數達到或超過D
        while (totalGuests < D) {
            totalGuests += S;  // 在當前房間添加客人數
            S++;               // 移至下一個房間
        }

        // 當總客人數達到或超過D時，當前的房間號碼S即為答案
        cout << S - 1 << endl;  
        // 因為在最後一次添加後S多增加了1，所以要減去1
    }
    return 0;
}



// #include<iostream>
// #include<vector>
// using namespace std;
//
//
// int main() {
//     long long int S, D;
//     long long int area;
//     while (cin >> S >> D) {
//         for (int i = 0;; i++) {
//             area = (S + (S + i)) * (i + 1) / 2;
//             if (area >= D) {
//                 cout << S + i << endl;
//                 break;
//             }
//         }
//     }
// }
