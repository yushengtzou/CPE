/*  鄒雨笙 UVa Online Judge 2023/8/28

    Problem 11346 - Probability
*/


#include <iostream>
#include <cmath>
#include <iomanip> // for setprecision

using namespace std;

int main() {
    int testcase;
    double a, b, S;
    cin >> testcase;
    
    while(testcase--) {
        cin >> a >> b >> S;
        
        double ret = 0;
        if(S/a >= b) {
            // Do nothing as ret is already initialized to 0
        } 
        else if(S/b >= a) {
            // Do nothing as ret is already initialized to 0
        } 
        else {
            ret = b*(a-S/b) - S*log(a) + S*log(S/b + 1e-8);
        }
        
        cout << fixed << setprecision(6) << ret*100.0/(a*b) << "%" << endl;
    }
    return 0;
}

