//  鄒雨笙 UVa Online Judge 2023/11/14
//
//  Problem 10879 - Code Refactoring



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K, caseNum = 1;
    int A, B, C, D;
    vector<int> coeff;
    
    cin >> N;
    cin.ignore();
    while (N--) {
        cin >> K;
        for (int i = 2; i < 10000000; i++) {
            if (K % i == 0) {
                coeff.push_back(i);
                if (coeff.size() == 2) {
                    break;
                }
            }
        }
        // for (auto num : coeff) {
        //     cout << num << endl;
        // }
        A = coeff[0];
        C = coeff[1];
        B = K / A;
        D = K / C;
        cout << "Case #" << caseNum << ": " << K << " = " << A << " * " << B << " = " << C << " * " << D << endl;
        caseNum++;
        coeff.clear();

    }

    return 0;
}

