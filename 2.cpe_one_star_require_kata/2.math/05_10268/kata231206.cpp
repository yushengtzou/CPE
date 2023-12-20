//  鄒雨笙 UVa Online Judge 2023/12/6
//
//  Problem 10268 - 498-bis
//  數學計算 


#include <iostream>
#include <vector>
using namespace std;


// 計算多項式在給定點 x 的導數的函式
int derivative(int x, const vector<int>& coeffs) {
    long long sum = 0;  // 多項式導數的總和
    long long exp = 1;  // 用來追蹤 x 的遞增次方
    int max = coeffs.size() - 1;

    // 從次高項開始（因為導數會降低一個次數）
    for (int i = max - 1; i >= 0; i--) {
        sum += coeffs[i] * exp * (max - i);
        exp *= x;
    }
    return sum;
}

int main() {
    int x;  // 計算導數的點

    while(cin >> x) {
        vector<int> coeffs;  // 存儲多項式的係數
        int coeff;
        
        // 讀取係數，直到遇到換行字符
        while (cin >> coeff) {
            coeffs.push_back(coeff);
            if(cin.peek() == '\n') 
                break;
        }

        // 計算並輸出在 x 點的多項式導數
        cout << derivative(x, coeffs) << endl;
    }
}



