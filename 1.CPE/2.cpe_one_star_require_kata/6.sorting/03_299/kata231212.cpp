// 鄒雨笙 UVa Online Judge 2023/12/12
//
// Problem 299 - Train Swapping


#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    while(n--) {
        int tr[100] = {};
        int cnt = 0, L;
        cin >> L;

        for (int i = 0; i < L; i++)
            cin >> tr[i];
        for (int i = 0; i < L - 1; i++) {
            for (int j = 0; j < L - 1 - i; j++) {
                if (tr[j] > tr[j + 1]) {
                    swap(tr[j], tr[j + 1]);
                    cnt++;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps." << endl;
    } 

} 
