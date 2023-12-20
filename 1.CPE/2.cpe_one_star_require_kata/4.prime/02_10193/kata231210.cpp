// 鄒雨笙 UVa Online Judge 2023/12/10
//
// Problem 10193 - All You Need Is Love
//
//  解題想法： S1, S2 都要是 L 的公倍數，題目未給定 L ，所以
//  S1, S2 只要有公因數即可


#include <iostream>
#include <bitset>
using namespace std;


unsigned long long binaryToInteger(const string& binaryString) {
    return bitset<64>(binaryString).to_ullong();
}


int gcd(int p, int q) {
    if (p < q)
        return gcd(q, p);
    if (q == 0)
        return p;
    return gcd(q, p % q);
}


int main() {
    int N;
    string S1, S2;
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        cin >> S1 >> S2;
        unsigned long long integer1 = binaryToInteger(S1);
        unsigned long long integer2 = binaryToInteger(S2);
        
        // Check if the GCD of integer1 and integer2 is greater than 1
        if (gcd(integer1, integer2) > 1) {
            cout << "Pair #" << i << ": All you need is love!" << endl;
        } else {
            cout << "Pair #" << i << ": Love is not all you need!" << endl;
        }
    }
    return 0;
}


