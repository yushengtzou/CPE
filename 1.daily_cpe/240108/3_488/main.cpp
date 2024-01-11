// 鄒雨笙 20240108
// 488 - Triangle Wave


#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


string repeat(string s, int n) { 
    string s1 = s; 
  
    for (int i = 1; i < n; i++) 
        s += s1; 
  
    return s; 
} 


int main() {
    int T, A, F;

    cin >> T;
    cout << endl;

    while (T--) {
        cin >> A;
        cin >> F;
        cout << endl;
        for (int j = 0; j < F; j++) {
            for (int k = 1; k <= A; k++) {
                cout << repeat(to_string(k), k) << endl;
            }
            for (int k = A-1; k >= 1; k--) {
                cout << repeat(to_string(k), k) << endl;
            }
            if (j != F-1)
                cout << endl;
        }
    }
}


// 1
// 22
// 333
// 22
// 1
//
// 1
// 22
// 333
// 22
// 1

