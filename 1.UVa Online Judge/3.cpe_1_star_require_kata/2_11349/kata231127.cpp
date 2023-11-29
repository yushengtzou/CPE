//  鄒雨笙 UVa Online Judge 2023/11/27
//
//  Problem 11349 - Symmetric Matrix
//  數學計算 


#include <iostream>
#include <vector>
using namespace std;


int main() {
    int T, n;
    char ch1, ch2;

    cin >> T;
    cin.ignore();

    for (int t = 1; t <= T; t++) {
        cin >> ch1 >> ch2 >> n;
        vector<vector<long long>> matrix(n, vector<long long> (n));

        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
                if (matrix[i][j] < 0) {
                    flag = false;
                } 
            }
        }

        if (flag == false)
            cout << "Test #" << t << ": Non-symmetric." << endl; 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n/2; j++) {
                if (matrix[i][j] != matrix[n-1-i][n-1-j]) {
                    flag = false;
                } 
            }
        }
        if (flag == false)
            cout << "Test #" << t << ": Non-symmetric." << endl; 
        else
            cout << "Test #" << t << ": Symmetric." << endl; 


    }




} 
