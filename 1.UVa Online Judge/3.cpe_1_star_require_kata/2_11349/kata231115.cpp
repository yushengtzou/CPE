//  鄒雨笙 UVa Online Judge 2023/11/15
//
//  Problem 11349 - Symmetric Matrix
//  數學計算 


#include <iostream>
#include <vector>
using namespace std;


int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int T, n;
    char ch;
    cin >> T;

    for (int t = 1; t <= T; t++){
        cin >> ch >> ch;
        cin >> n;
        vector<vector<long long>> matrix(n, vector<long long>(n));
        bool flag = true;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> matrix[i][j];
                if (matrix[i][j] < 0) {
                    flag = false;
                } 
            }
        }
        cout << "Test #" << t << ": ";
        if (!flag){
            cout << "Non-symmetric.\n";
            continue;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n/2; j++){
                if (matrix[i][j] != matrix[n-1-i][n-1-j]){
                    flag = false;
                    break;
                }
            }
            if (!flag) 
                break;
        }
        if (flag) cout << "Symmetric.\n";
        else cout << "Non-symmetric.\n";
    }
    return 0;
}

